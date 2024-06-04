//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include <glad/glad.h>

namespace kr::gl {

class PixelBufferObject {
 public:
  explicit PixelBufferObject(GLsizeiptr size);

  ~PixelBufferObject();

  void Bind() const;

  void Unbind();

  bool UpdateData(const GLubyte *data, int bind = 0);

  [[nodiscard]] auto GetID(GLuint id) const -> GLuint { return m_BufferId; }

  [[nodiscard]] auto GetSize() const -> GLsizeiptr { return m_Size; }

 private:
  GLsizeiptr m_Size;
  GLuint m_BufferId = 0;
  bool m_UseDoubleBuffering = false;
};

}  // namespace kr::gl
