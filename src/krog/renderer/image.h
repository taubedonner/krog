//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include <cstddef>
#include <mutex>
#include <vector>

#include "formats.h"

namespace kr::gl {

class Image2D {
 public:
  Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType, const uint8_t *data, size_t size);

  Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType, const uint8_t *data);

  Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType, std::vector<uint8_t> data);

  Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType);

  [[nodiscard]] auto GetWidth() const { return m_Width; }

  [[nodiscard]] auto GetHeight() const { return m_Height; }

  [[nodiscard]] auto GetPixelType() const { return m_PixelType; }

  [[nodiscard]] auto GetPixelFormat() const { return m_PixelFormat; }

  [[nodiscard]] auto GetData() -> auto & { return m_Data; }

  [[nodiscard]] auto GetSize() const { return m_Data.size(); }

  void Update(const Image2D &image);

 private:
  size_t m_Width = 0;
  size_t m_Height = 0;
  PixelFormat m_PixelFormat = PixelFormat::Count;
  PixelType m_PixelType = PixelType::Count;
  std::vector<uint8_t> m_Data;

  std::mutex m_DataAccessMutex;
};

}  // namespace kr::gl
