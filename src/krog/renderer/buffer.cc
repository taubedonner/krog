//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "buffer.h"

namespace kr::gl {

KROG_API PixelBufferObject::PixelBufferObject(GLsizeiptr size) : size_(size) {
  glGenBuffers(1, &bufferId_);
  glBindBuffer(GL_PIXEL_UNPACK_BUFFER, bufferId_);
  glBufferData(GL_PIXEL_UNPACK_BUFFER, size_, nullptr, GL_STREAM_DRAW);
}

KROG_API PixelBufferObject::~PixelBufferObject() { glDeleteBuffers(1, &bufferId_); }

KROG_API void PixelBufferObject::Bind() const {
  glBindBuffer(GL_PIXEL_UNPACK_BUFFER, bufferId_);
}

KROG_API void PixelBufferObject::Unbind() { glBindBuffer(GL_PIXEL_UNPACK_BUFFER, 0); }

KROG_API bool PixelBufferObject::UpdateData(const GLubyte *data, int bind) {
  if (bind > 0)
	Bind();

  glBufferData(GL_PIXEL_UNPACK_BUFFER, size_, nullptr, GL_STREAM_DRAW);

  auto *ptr = (GLubyte *)glMapBuffer(GL_PIXEL_UNPACK_BUFFER, GL_WRITE_ONLY);
  if (!ptr)
	return false;
  memcpy(ptr, data, size_);
  glUnmapBuffer(GL_PIXEL_UNPACK_BUFFER);

  if (bind > 1)
	Unbind();

  return true;
}

} // namespace kr::gl
