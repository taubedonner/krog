#pragma once

#include <glad/glad.h>
#include <stb_image.h>

#include <memory>

#include "krog/renderer/texture.h"

namespace kr {

class ImageLoader {
 public:
  static std::shared_ptr<gl::Texture2D> LoadTextureFromMemory(const unsigned char *buf, unsigned long size) {
    int image_width = 0;
    int image_height = 0;
    unsigned char *image_data = stbi_load_from_memory(buf, (int)size, &image_width, &image_height, nullptr, 4);
    if (image_data == nullptr) return nullptr;

    auto image = std::make_shared<gl::Texture2D>(image_data, image_width, image_height, GL_RGBA32F, GL_RGBA, GL_UNSIGNED_BYTE);

    stbi_image_free(image_data);

    return image;
  }
};

}  // namespace kr
