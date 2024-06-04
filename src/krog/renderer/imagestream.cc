//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include "imagestream.h"

#include "krog/common.h"

namespace kr::gl {

ImageStream2D::ImageStream2D() = default;

void ImageStream2D::Init(const std::shared_ptr<Image2D> &image) {
  if (!image) {
    return;
  }

  auto _size = (GLsizei)image->GetSize();
  auto _data = image->GetData().data();

  if (!_size) {
    KR_DEBUG("Could not init \"ImageStream2D\" with zero data size");
    return;
  }

  m_PixelFormat = ConvertPixelFormat(image->GetPixelFormat());
  m_PixelType = ConvertPixelType(image->GetPixelType());
  m_InternalFormat = ConvertInternalFormat(image->GetPixelType(), image->GetPixelFormat());
  m_Width = (GLsizei)image->GetWidth();
  m_Height = (GLsizei)image->GetHeight();

  // Create Texture
  glGenTextures(1, &m_TextureId);
  glBindTexture(GL_TEXTURE_2D, m_TextureId);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

  if (image->GetPixelFormat() == PixelFormat::Red) {
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_SWIZZLE_G, GL_RED);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_SWIZZLE_B, GL_RED);
    // glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_SWIZZLE_A, GL_RED);
  }

  glTexImage2D(GL_TEXTURE_2D, 0, m_InternalFormat, m_Width, m_Height, 0, m_PixelFormat, m_PixelType, _data);
  glBindTexture(GL_TEXTURE_2D, 0);

  glGenBuffers(1, &m_PboId);
  glBindBuffer(GL_PIXEL_UNPACK_BUFFER, m_PboId);
  glBufferData(GL_PIXEL_UNPACK_BUFFER, _size, nullptr, GL_STREAM_DRAW);
  glBindBuffer(GL_PIXEL_UNPACK_BUFFER, 0);
}

ImageStream2D::~ImageStream2D() { Free(); }

void ImageStream2D::UpdateTexture(const std::shared_ptr<Image2D> &image) {
  if (!image) {
    return;
  }

  if (m_ShouldReallocate || (m_TextureId == GL_ZERO || m_PboId == GL_ZERO)) {
    Free();
    Init(image);
    m_ShouldReallocate = false;
    return;
  }

  auto _size = (GLsizei)image->GetSize();
  auto _data = image->GetData().data();

  glBindTexture(GL_TEXTURE_2D, m_TextureId);
  glBindBuffer(GL_PIXEL_UNPACK_BUFFER, m_PboId);

  if (auto *_ptr = (GLubyte *)glMapBufferRange(GL_PIXEL_UNPACK_BUFFER, 0, _size, GL_MAP_WRITE_BIT | GL_MAP_UNSYNCHRONIZED_BIT); _ptr) {
    std::copy(_data, _data + _size, _ptr);
    glUnmapBuffer(GL_PIXEL_UNPACK_BUFFER);
  }

  glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, m_Width, m_Height, m_PixelFormat, m_PixelType, nullptr);

  glBindBuffer(GL_PIXEL_UNPACK_BUFFER, 0);
  glBindTexture(GL_TEXTURE_2D, 0);
}

void ImageStream2D::Free() {
  glDeleteTextures(1, &m_TextureId);
  glDeleteBuffers(1, &m_PboId);
}

}  // namespace kr::gl
