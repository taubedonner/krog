//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "imagestream.h"

#include "krog/common.h"

namespace kr::gl {

 ImageStream2D::ImageStream2D() = default;

 void ImageStream2D::Init(const std::shared_ptr <Image2D> &image) {
  if (!image) {
	return;
  }

  auto _size = (GLsizei)image->GetSize();
  auto _data = image->GetData().data();

  if (!_size) {
	KR_DEBUG("Could not init \"ImageStream2D\" with zero data size");
	return;
  }

  pixelFormat_ = ConvertPixelFormat(image->GetPixelFormat());
  pixelType_ = ConvertPixelType(image->GetPixelType());
  internalFormat_ = ConvertInternalFormat(image->GetPixelType(), image->GetPixelFormat());
  width_ = (GLsizei)image->GetWidth();
  height_ = (GLsizei)image->GetHeight();

  // Create Texture
  glGenTextures(1, &textureId_);
  glBindTexture(GL_TEXTURE_2D, textureId_);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

  if (image->GetPixelFormat()==PixelFormat::Red) {
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_SWIZZLE_G, GL_RED);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_SWIZZLE_B, GL_RED);
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_SWIZZLE_A, GL_RED);
  }

  glTexImage2D(GL_TEXTURE_2D, 0, internalFormat_, width_, height_, 0, pixelFormat_, pixelType_, _data);
  glBindTexture(GL_TEXTURE_2D, 0);

  glGenBuffers(1, &pboId_);
  glBindBuffer(GL_PIXEL_UNPACK_BUFFER, pboId_);
  glBufferData(GL_PIXEL_UNPACK_BUFFER, _size, nullptr, GL_STREAM_DRAW);
  glBindBuffer(GL_PIXEL_UNPACK_BUFFER, 0);
}

 ImageStream2D::~ImageStream2D() {
  Free();
}

 void ImageStream2D::UpdateTexture(const std::shared_ptr <Image2D> &image) {
  if (!image) {
	return;
  }

  if (shouldReallocate_ || (textureId_==GL_ZERO || pboId_==GL_ZERO)) {
	Free();
	Init(image);
	shouldReallocate_ = false;
	return;
  }

  auto _size = (GLsizei)image->GetSize();
  auto _data = image->GetData().data();

  glBindTexture(GL_TEXTURE_2D, textureId_);
  glBindBuffer(GL_PIXEL_UNPACK_BUFFER, pboId_);

  if (auto *_ptr = (GLubyte *)glMapBufferRange(GL_PIXEL_UNPACK_BUFFER, 0, _size, GL_MAP_WRITE_BIT | GL_MAP_UNSYNCHRONIZED_BIT); _ptr) {
	std::copy(_data, _data + _size, _ptr);
	glUnmapBuffer(GL_PIXEL_UNPACK_BUFFER);
  }

  {
	glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, width_, height_, pixelFormat_, pixelType_, nullptr);
  }

  glBindBuffer(GL_PIXEL_UNPACK_BUFFER, 0);
  glBindTexture(GL_TEXTURE_2D, 0);
}

 void ImageStream2D::Free() {
  glDeleteTextures(1, &textureId_);
  glDeleteBuffers(1, &pboId_);
}

} // kr
