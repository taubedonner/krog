#pragma once

#include <glad/glad.h>
#include <stb_image.h>

#include "krog/renderer/image.h"
#include <memory>

namespace kr {

    class ImageLoader {
    public:
        static std::shared_ptr<gl::Image2D> LoadTextureFromMemory(const unsigned char *buf, unsigned long size) {
            int image_width = 0;
            int image_height = 0;
            unsigned char *image_data = stbi_load_from_memory(buf, size, &image_width, &image_height, nullptr, 4);
            if (image_data == nullptr) return nullptr;

            auto image = std::make_shared<gl::Image2D>(image_width, image_height, gl::PixelFormat::RGBA,
                                                       gl::PixelType::UnsignedChar, image_data);

            stbi_image_free(image_data);

            return image;
        }
    };

}
