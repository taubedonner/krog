//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include "avcapture.h"

#include <filesystem>

#include "krog/common.h"
#include "krog/util/framesynchronizer.h"

namespace kr {

AVCapture::AVCapture(std::string filename, bool repeat) : m_Filename(std::move(filename)), m_Repeat(repeat), m_PollingThread(std::make_unique<ThreadWrapper>()) {
  m_Id = std::format("V{:0>16X}", reinterpret_cast<ptrdiff_t>(this));
  m_Name = std::filesystem::path(m_Filename).filename().string();
}

AVCapture::~AVCapture() {
  RemoveAllListeners();
  AVCapture::StopGrabbing();
}

bool AVCapture::IsAccessible() { return true; }

bool AVCapture::IsOpened() { return m_IsOpened; }

bool AVCapture::IsGrabbing() { return m_IsGrabbing; }

bool AVCapture::Open() {
  KR_TRACE("Opening video from URL: \"{}\"", m_Filename);

  AVFormatContext* formatContext = nullptr;

  if (auto status = avformat_open_input(&formatContext, m_Filename.c_str(), nullptr, nullptr); status < 0) {
    KR_ERROR("Could not open video from file ({:#x})", status);
    return false;
  }

  m_FormatContext.reset(formatContext);

  if (auto status = avformat_find_stream_info(formatContext, nullptr); status < 0) {
    KR_ERROR("Could not find stream info from opened file ({:#x})", status);
    return false;
  }

  const AVCodec* codec = nullptr;
  auto streamId = av_find_best_stream(formatContext, AVMEDIA_TYPE_VIDEO, -1, -1, &codec, 0);

  m_StreamId = streamId;

  if (streamId < 0) {
    KR_ERROR("Failed to retrieve video stream ({:#x})", streamId);
    return false;
  } else if (codec == nullptr) {
    KR_ERROR("Failed to find suitable codec on running system");
    return false;
  }

#ifndef NDEBUG
  // Print detailed stream format information
  av_dump_format(formatContext, streamId, m_Filename.c_str(), 0);
#endif

  auto stream = formatContext->streams[streamId]->codecpar;
  auto codecContext = avcodec_alloc_context3(codec);
  m_CodecContext.reset(codecContext);

  if (auto status = avcodec_parameters_to_context(codecContext, stream); status < 0) {
    KR_ERROR("Failed to initialize codec parameters ({:#x})", status);
    return false;
  }

  std::vector<std::pair<std::string, AVHWDeviceType>> hwCodecs;

  for (int i = 0; i < 256; i++) {
    if (auto config = avcodec_get_hw_config(codec, i); config) {
      if (config->methods & AV_CODEC_HW_CONFIG_METHOD_HW_DEVICE_CTX) {
        auto devType = config->device_type;
        hwCodecs.emplace_back(av_hwdevice_get_type_name(devType), config->device_type);
      }
    } else {
      break;
    }
  }

  if (hwCodecs.empty()) {
    KR_ERROR("This system does not have hardware-accelerated codecs for current video format");
    return false;
  }

  KR_TRACE("Available hardware-accelerated codecs (is default):");
  for (size_t idx = 0; auto& [hwname, hwid] : hwCodecs) {
    KR_TRACE("{:>2}: [{:#04x}] {:>16} ({})", idx, static_cast<int>(hwid), hwname, idx == 0);
    idx++;
  }

  AVBufferRef* deviceContext = nullptr;

  if (auto status = av_hwdevice_ctx_create(&deviceContext, hwCodecs[0].second, nullptr, nullptr, 0); status < 0) {
    KR_ERROR("Failed to initialize hardware codec ({:#x})");
    return false;
  }

  codecContext->hw_device_ctx = av_buffer_ref(deviceContext);
  m_DeviceContext.reset(deviceContext);

  if (auto status = avcodec_open2(codecContext, codec, nullptr); status < 0) {
    KR_ERROR("Failed to open decoder ({:#x})", status);
    return false;
  }

  m_IsOpened = true;

  return true;
}

bool AVCapture::Close() {
  if (!m_IsOpened) {
    return true;
  }

  if (IsGrabbing()) {
    StopGrabbing();
  }

  m_DeviceContext.reset();
  m_CodecContext.reset();
  m_FormatContext.reset();

  m_IsOpened = false;

  return true;
}

bool AVCapture::StartGrabbing() {
  if (!IsOpened()) {
    if (!Open()) {
      return false;
    }
  }

  m_IsGrabbing = true;
  m_PollingThread->Attach(std::thread{&AVCapture::CaptureWorker, this});
  return true;
}

bool AVCapture::StopGrabbing() {
  if (!IsOpened()) {
    return true;
  }

  m_IsGrabbing = false;
  m_PollingThread->Detach();
  return false;
}

void AVCapture::SetRepeat(bool repeat) { m_Repeat = repeat; }

bool AVCapture::IsRepeat() const { return m_Repeat; }

void AVCapture::RewindStream() {
  auto stream = m_FormatContext->streams[m_StreamId];
  avio_seek(m_FormatContext->pb, 0, SEEK_SET);
  avformat_seek_file(m_FormatContext.get(), m_StreamId, 0, 0, stream->duration, 0);
}

void AVCapture::CaptureWorker() {
  AVFrameDeleter frameDeleter;
  std::unique_ptr<AVPacket, AVPacketDeleter> packet(av_packet_alloc(), AVPacketDeleter{});
  auto swsContext = std::unique_ptr<SwsContext, SwsContextDeleter>(nullptr, SwsContextDeleter{});

  auto swFrame = std::unique_ptr<AVFrame, AVFrameDeleter>(av_frame_alloc(), frameDeleter);
  if (!swFrame) {
    KR_ERROR("Failed to allocate sw frame");
    return;
  }

  auto hwFrame = std::unique_ptr<AVFrame, AVFrameDeleter>(av_frame_alloc(), frameDeleter);
  if (!hwFrame) {
    KR_ERROR("Failed to allocate hw frame");
    return;
  }

  auto tmpFrame = std::unique_ptr<AVFrame, AVFrameDeleter>(av_frame_alloc(), frameDeleter);
  if (!tmpFrame) {
    KR_ERROR("Failed to allocate tmp frame");
    return;
  }

  const double fps = (double)m_CodecContext->framerate.num / (double)m_CodecContext->framerate.den;
  FrameSynchronizer fs(fps);

  while (m_IsGrabbing) {
    fs.BeginFrame();

    if (auto status = av_read_frame(m_FormatContext.get(), packet.get()); status < 0) {
      if (status == AVERROR_EOF) {
        if (m_Repeat) {
          RewindStream();
          continue;
        } else {
          break;
        }
      }
      KR_ERROR("Error while reading new packet ({:#x})", status);
      break;
    } else if (packet->stream_index != m_StreamId) {
      continue;
    }

    if (auto status = avcodec_send_packet(m_CodecContext.get(), packet.get()); status < 0) {
      if (status == AVERROR_EOF && m_Repeat) {
        continue;
      }

      KR_TRACE("Packet receiving interrupted");
      break;
    }

    while (true) {
      if (auto status = avcodec_receive_frame(m_CodecContext.get(), hwFrame.get()); (status == AVERROR(EAGAIN)) || (status == AVERROR_EOF)) {
        break;
      } else if (status < 0) {
        KR_ERROR("Error while receiving new frame ({:#x})", status);
        break;
      }

      if (auto status = av_hwframe_transfer_data(swFrame.get(), hwFrame.get(), 0); status < 0) {
        KR_WARN("Failed to transfer hw frame to sw frame ({:#x})", status);
        continue;
      }

      m_Width = m_CodecContext->width;
      m_Height = m_CodecContext->height;
      auto frameFormat = AV_PIX_FMT_GRAY8;

      auto size = av_image_get_buffer_size(frameFormat, m_CodecContext->width, m_CodecContext->height, 1);

      auto swpt = static_cast<AVPixelFormat>(swFrame->format);
      // auto hwpt = static_cast<AVPixelFormat>(hwFrame->format);

      m_PixelFormat = gl::PixelFormat::Red;
      m_PixelType = gl::PixelType::UnsignedChar;
      auto image = std::make_shared<gl::Image2D>(m_Width, m_Height, m_PixelFormat, m_PixelType, std::vector<uint8_t>(size));

      if (!swsContext) {
        swsContext.reset(sws_getCachedContext(swsContext.get(), m_Width, m_Height, swpt, m_Width, m_Height, frameFormat, SWS_FAST_BILINEAR, nullptr, nullptr, nullptr));
      }

      if (auto status = sws_scale_frame(swsContext.get(), tmpFrame.get(), swFrame.get()); status < 0) {
        KR_WARN("Failed to convert frame format ({:#x})", status);
        continue;
      }

      if (auto status = av_image_copy_to_buffer(image->GetData().data(), size, tmpFrame->data, tmpFrame->linesize, static_cast<AVPixelFormat>(tmpFrame->format), tmpFrame->width,
                                                tmpFrame->height, 1);
          status < 0) {
        KR_WARN("Failed to copy resulting frame ({:#x})", status);
        continue;
      }

      m_StreamListeners(m_Filename, image);
    }

    av_packet_unref(packet.get());

    fs.EndFrameAndSleep();
  }

  m_IsGrabbing = false;
}

}  // namespace kr
