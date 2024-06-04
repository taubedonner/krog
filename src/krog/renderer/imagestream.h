//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include <glad/glad.h>

#include <cstddef>
#include <memory>

#include "formats.h"
#include "image.h"

namespace kr::gl {

class ImageStream2D {
 public:
  explicit ImageStream2D();

  ~ImageStream2D();

  [[nodiscard]] auto GetTextureId() const { return m_TextureId; }

  [[nodiscard]] auto GetTextureIdAgnostic() const { return (void *)(uintptr_t)(m_TextureId); }

  [[nodiscard]] auto GetPboId() const { return m_PboId; }

  void UpdateTexture(const std::shared_ptr<Image2D> &image);

  auto SetShouldReallocate(bool reallocate = true) { m_ShouldReallocate = reallocate; }

  [[nodiscard]] auto ShouldReallocate() const { return m_ShouldReallocate; }

 private:
  void Init(const std::shared_ptr<Image2D> &image);

  void Free();

  GLuint m_TextureId = 0;
  GLuint m_PboId = 0;
  GLsizei m_Width = 0;
  GLsizei m_Height = 0;
  GLenum m_PixelType = GL_ZERO;
  GLenum m_PixelFormat = GL_ZERO;
  GLint m_InternalFormat = GL_ZERO;

  volatile bool m_ShouldReallocate = true;
};

}  // namespace kr::gl
