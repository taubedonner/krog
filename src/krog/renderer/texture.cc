//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "texture.h"

namespace kr::gl {

KROG_API Texture2D::Texture2D(const GLubyte *data, GLsizei width, GLsizei height, GLint internalFormat, GLenum pixelFormat, GLenum pixelType)
	: width_(width), height_(height), internalFormat_(internalFormat), pixelFormat_(pixelFormat), pixelType_(pixelType) {
  glGenTextures(1, &textureId_);
  glBindTexture(GL_TEXTURE_2D, textureId_);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
  glTexImage2D(GL_TEXTURE_2D, 0, internalFormat_, width_, height_, 0, pixelFormat, pixelType, nullptr);
  glBindTexture(GL_TEXTURE_2D, 0);
}

KROG_API Texture2D::~Texture2D() {
  glDeleteTextures(1, &textureId_);
}

KROG_API void Texture2D::Bind() const {
  glBindTexture(GL_TEXTURE_2D, textureId_);
}

KROG_API void Texture2D::Unbind() const {
  glBindTexture(GL_TEXTURE_2D, 0);
}

KROG_API void Texture2D::UpdateData(const GLubyte *data, int bind) const {
  if (bind > 0) Bind();
  glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, width_, height_, pixelFormat_, pixelType_, data);
  if (bind > 1) Unbind();
}

} // gl
