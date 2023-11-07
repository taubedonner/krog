//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once


#include <glad/glad.h>

namespace kr::gl {

enum class PixelType {
  UnsignedChar,

  Count
};

enum class PixelFormat {
  Red,
  RGB,
  BGR,
  RGBA,

  Count
};

 GLenum ConvertPixelType(PixelType type);

 GLenum ConvertPixelFormat(PixelFormat format);

 GLint ConvertInternalFormat(PixelType type, PixelFormat format);

} // gl
