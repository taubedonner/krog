//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include "image.h"

#include "krog/common.h"

namespace kr::gl {

Image2D::Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType)
    : m_Width(width), m_Height(height), m_PixelFormat(pixelFormat), m_PixelType(pixelType) {}

Image2D::Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType, std::vector<uint8_t> data) : Image2D(width, height, pixelFormat, pixelType) {
  m_Data = std::move(data);
}

Image2D::Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType, const uint8_t *data, size_t size)
    : m_Width(width), m_Height(height), m_PixelFormat(pixelFormat), m_PixelType(pixelType) {
  m_Data.assign(data, data + size);
}

Image2D::Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType, const uint8_t *data)
    : m_Width(width), m_Height(height), m_PixelFormat(pixelFormat), m_PixelType(pixelType) {
  int pixelSize = 1;

  switch (pixelFormat) {
    case PixelFormat::RGB:
      [[fallthrough]];
    case PixelFormat::BGR:
      pixelSize *= 3;
      break;
    case PixelFormat::RGBA:
      pixelSize *= 4;
      break;
    default:
      pixelSize *= 1;
  }

  m_Data.assign(data, data + (pixelSize * width * height));
}

void Image2D::Update(const Image2D &image) {
  std::lock_guard<std::mutex> lock(m_DataAccessMutex);

  m_Width = image.m_Width;
  m_Height = image.m_Height;
  m_PixelType = image.m_PixelType;
  m_PixelFormat = image.m_PixelFormat;
  m_Data.assign(image.m_Data.begin(), image.m_Data.end());
}

}  // namespace kr::gl
