//
// Created by Nikita Zarudniy on 06/29/2023.
//


#include "formats.h"
#include "image.h"

#include <glad/glad.h>

namespace kr::gl {

class  ImageStream2D {
 public:
  explicit ImageStream2D();

  ~ImageStream2D();

  [[nodiscard]] auto GetTextureId() const { return textureId_; }

  [[nodiscard]] auto GetTextureIdAgnostic() const { return (void *)(uintptr_t)(textureId_); }

  [[nodiscard]] auto GetPboId() const { return pboId_; }

  void UpdateTexture(const std::shared_ptr <Image2D> &image);

  auto SetShouldReallocate(bool reallocate = true) { shouldReallocate_ = reallocate; }

  [[nodiscard]] auto ShouldReallocate() const { return shouldReallocate_; }

 private:
  void Init(const std::shared_ptr <Image2D> &image);

  void Free();

  GLuint textureId_ = 0;
  GLuint pboId_ = 0;
  GLsizei width_ = 0;
  GLsizei height_ = 0;
  GLenum pixelType_ = GL_ZERO;
  GLenum pixelFormat_ = GL_ZERO;
  GLint internalFormat_ = GL_ZERO;

  volatile bool shouldReallocate_ = true;
};

} // kr
