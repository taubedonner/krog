//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "image.h"

#include "krog/common.h"

namespace kr::gl {

KROG_API Image2D::Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType)
	: width_(width), height_(height), pixelFormat_(pixelFormat), pixelType_(pixelType) {}

KROG_API Image2D::Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType,
				 std::vector <uint8_t> data) : Image2D(width, height, pixelFormat, pixelType) {
  data_ = std::move(data);
}

KROG_API Image2D::Image2D(size_t width, size_t height, PixelFormat pixelFormat, PixelType pixelType, const uint8_t *data, size_t size)
	: width_(width), height_(height), pixelFormat_(pixelFormat), pixelType_(pixelType) {
  data_.assign(data, data + size);
}

KROG_API void Image2D::Update(const Image2D &image) {
  std::lock_guard <std::mutex> lock(dataAccessMutex_);

  width_ = image.width_;
  height_ = image.height_;
  pixelType_ = image.pixelType_;
  pixelFormat_ = image.pixelFormat_;
  data_.assign(image.data_.begin(), image.data_.end());
}

} // gl
