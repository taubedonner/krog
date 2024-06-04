//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include "texture.h"

namespace kr::gl {

Texture2D::Texture2D(const GLubyte *data, GLsizei width, GLsizei height, GLint internalFormat, GLenum pixelFormat, GLenum pixelType)
    : m_Width(width), m_Height(height), m_InternalFormat(internalFormat), m_PixelFormat(pixelFormat), m_PixelType(pixelType) {
  glGenTextures(1, &m_TextureId);
  glBindTexture(GL_TEXTURE_2D, m_TextureId);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
  glTexImage2D(GL_TEXTURE_2D, 0, m_InternalFormat, m_Width, m_Height, 0, pixelFormat, pixelType, data);
  glBindTexture(GL_TEXTURE_2D, 0);
}

Texture2D::~Texture2D() { glDeleteTextures(1, &m_TextureId); }

void Texture2D::Bind() const { glBindTexture(GL_TEXTURE_2D, m_TextureId); }

void Texture2D::Unbind() const { glBindTexture(GL_TEXTURE_2D, 0); }

void Texture2D::UpdateData(const GLubyte *data, int bind) const {
  if (bind > 0) Bind();
  glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, m_Width, m_Height, m_PixelFormat, m_PixelType, data);
  if (bind > 1) Unbind();
}

}  // namespace kr::gl
