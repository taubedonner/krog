//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once


#include <glad/glad.h>

namespace kr::gl {

class  PixelBufferObject {
 public:
  explicit PixelBufferObject(GLsizeiptr size);

  ~PixelBufferObject();

  void Bind() const;

  void Unbind();

  bool UpdateData(const GLubyte *data, int bind = 0);

  [[nodiscard]] auto GetID(GLuint id) const -> GLuint { return bufferId_; }

  [[nodiscard]] auto GetSize() const -> GLsizeiptr { return size_; }

 private:
  GLsizeiptr size_;
  GLuint bufferId_ = 0;
  bool useDoubleBuffering_ = false;
};

} // gl
