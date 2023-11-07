//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once


#include "formats.h"

namespace kr::gl {

class  Image2D {
 public:
  Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType, const uint8_t *data, size_t size);

  Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType, std::vector <uint8_t> data);

  Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType);

  [[nodiscard]] auto GetWidth() const { return width_; }

  [[nodiscard]] auto GetHeight() const { return height_; }

  [[nodiscard]] auto GetPixelType() const { return pixelType_; }

  [[nodiscard]] auto GetPixelFormat() const { return pixelFormat_; }

  [[nodiscard]] auto GetData() -> auto & { return data_; }

  [[nodiscard]] auto GetSize() const { return data_.size(); }

  void Update(const Image2D &image);

 private:
  size_t width_ = 0;
  size_t height_ = 0;
  PixelFormat pixelFormat_ = PixelFormat::Count;
  PixelType pixelType_ = PixelType::Count;
  std::vector <uint8_t> data_;

  std::mutex dataAccessMutex_;
};

} // gl
