//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once

#include "capture.h"



extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavdevice/avdevice.h>
#include <libavutil/avutil.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}

namespace kr {

    class  AVCapture : public Capture {
    public:
        explicit AVCapture(std::string filename, bool repeat = true);

        ~AVCapture() override;

        bool IsAccessible() override;

        bool IsOpened() override;

        bool IsGrabbing() override;

        bool Open() override;

        bool Close() override;

        bool StartGrabbing() override;

        bool StopGrabbing() override;

        void SetRepeat(bool repeat);

        bool IsRepeat() const;

    protected:
        void RewindStream();

        void CaptureWorker();

    private:
        struct  AVFormatContextDeleter {
            void operator()(AVFormatContext* context) {
                avformat_close_input(&context);
            }
        };

        struct  AVCodecContextDeleter {
            void operator()(AVCodecContext* context) {
                avcodec_free_context(&context);
            }
        };

        struct  AVBufferRefDeleter {
            void operator()(AVBufferRef* ref) {
                av_buffer_unref(&ref);
            }
        };

        struct  AVFrameDeleter {
            void operator()(AVFrame* frame) {
                av_frame_free(&frame);
            }
        };

        struct  AVPacketDeleter {
            void operator()(AVPacket* packet) {
                av_packet_unref(packet);
            }
        };

        struct  SwsContextDeleter {
            void operator()(SwsContext* context) {
                sws_freeContext(context);
            }
        };

        std::string m_Filename;
        volatile bool m_IsOpened = false;
        volatile bool m_Repeat = false;
        volatile bool m_IsGrabbing = false;

        int m_StreamId = -1;

        std::unique_ptr<AVFormatContext, AVFormatContextDeleter> m_FormatContext{ nullptr, AVFormatContextDeleter() };
        std::unique_ptr<AVCodecContext, AVCodecContextDeleter> m_CodecContext{ nullptr, AVCodecContextDeleter() };
        std::unique_ptr<AVBufferRef, AVBufferRefDeleter> m_DeviceContext{ nullptr, AVBufferRefDeleter() };

        std::unique_ptr<ThreadWrapper> m_PollingThread;
    };

} // kr
