//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include <glad/glad.h>

namespace kr::gl {

class Texture2D {
 public:
  Texture2D() : Texture2D(nullptr, 1, 1, GL_RGBA32F, GL_RGBA, GL_UNSIGNED_BYTE) {};

  Texture2D(const GLubyte* data, GLsizei width, GLsizei height, GLint internalFormat, GLenum pixelFormat, GLenum pixelType);

  ~Texture2D();

  void Bind() const;

  void Unbind() const;

  [[nodiscard]] auto GetID() const -> GLuint { return m_TextureId; }

  [[nodiscard]] auto GetWidth() const -> GLsizei { return m_Width; }

  [[nodiscard]] auto GetHeight() const -> GLsizei { return m_Height; }

  void UpdateData(const GLubyte* data, int bind = 0) const;

 private:
  GLsizei m_Width = 0;
  GLsizei m_Height = 0;
  GLint m_InternalFormat;
  GLenum m_PixelFormat;
  GLenum m_PixelType;
  GLuint m_TextureId = 0;
};

}  // namespace kr::gl
