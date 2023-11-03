//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "formats.h"

#include "krog/common.h"

namespace kr::gl {

KROG_API GLenum ConvertPixelType(PixelType type) {
  switch (type) {
	case PixelType::UnsignedChar: return GL_UNSIGNED_BYTE;
	default: KR_WARN("Unknown pixel type \"{}\"", (int32_t)type);
	  return GL_NONE;
  }
}

KROG_API GLenum ConvertPixelFormat(PixelFormat format) {
  switch (format) {
	case PixelFormat::Red: return GL_RED;
	case PixelFormat::RGB: return GL_RGB;
	case PixelFormat::BGR: return GL_BGR;
	default: KR_WARN("Unknown pixel format \"{}\"", (int32_t)format);
	  return GL_NONE;
  }
}

KROG_API GLint ConvertInternalFormat(PixelType type, PixelFormat format) {
  if (type==PixelType::UnsignedChar && format==PixelFormat::Red) return GL_R8;
  if (type==PixelType::UnsignedChar && format==PixelFormat::RGB) return GL_RGB8;
  if (type==PixelType::UnsignedChar && format==PixelFormat::BGR) return GL_RGB;

  KR_WARN("Could not resolve internal pixel format \"{}\" + \"{}\"", (int32_t)type, (int32_t)format);
  return GL_NONE;
}

} // kr::gl
