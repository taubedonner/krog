//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once

#include "krog/export.h"
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

KROG_API GLenum ConvertPixelType(PixelType type);

KROG_API GLenum ConvertPixelFormat(PixelFormat format);

KROG_API GLint ConvertInternalFormat(PixelType type, PixelFormat format);

} // gl
