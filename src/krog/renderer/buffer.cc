//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include "buffer.h"

namespace kr::gl {

PixelBufferObject::PixelBufferObject(GLsizeiptr size) : m_Size(size) {
  glGenBuffers(1, &m_BufferId);
  glBindBuffer(GL_PIXEL_UNPACK_BUFFER, m_BufferId);
  glBufferData(GL_PIXEL_UNPACK_BUFFER, m_Size, nullptr, GL_STREAM_DRAW);
}

PixelBufferObject::~PixelBufferObject() { glDeleteBuffers(1, &m_BufferId); }

void PixelBufferObject::Bind() const { glBindBuffer(GL_PIXEL_UNPACK_BUFFER, m_BufferId); }

void PixelBufferObject::Unbind() { glBindBuffer(GL_PIXEL_UNPACK_BUFFER, 0); }

bool PixelBufferObject::UpdateData(const GLubyte *data, int bind) {
  if (bind > 0) Bind();

  glBufferData(GL_PIXEL_UNPACK_BUFFER, m_Size, nullptr, GL_STREAM_DRAW);

  auto *ptr = (GLubyte *)glMapBuffer(GL_PIXEL_UNPACK_BUFFER, GL_WRITE_ONLY);
  if (!ptr) return false;
  memcpy(ptr, data, m_Size);
  glUnmapBuffer(GL_PIXEL_UNPACK_BUFFER);

  if (bind > 1) Unbind();

  return true;
}

}  // namespace kr::gl
