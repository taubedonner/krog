//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once



#include <glad/glad.h>

namespace kr::gl {

    class  Texture2D {
    public:

        Texture2D() : Texture2D(nullptr, 1, 1, GL_RGBA32F, GL_RGBA, GL_UNSIGNED_BYTE) {};

        Texture2D(const GLubyte* data, GLsizei width, GLsizei height, GLint internalFormat, GLenum pixelFormat, GLenum pixelType);

        ~Texture2D();

        void Bind() const;

        void Unbind() const;

        [[nodiscard]] auto GetID() const -> GLuint { return textureId_; }

        [[nodiscard]] auto GetWidth() const -> GLsizei { return width_; }

        [[nodiscard]] auto GetHeight() const -> GLsizei { return height_; }

        void UpdateData(const GLubyte* data, int bind = 0) const;

    private:
        GLsizei width_ = 0;
        GLsizei height_ = 0;
        GLint internalFormat_;
        GLenum pixelFormat_;
        GLenum pixelType_;
        GLuint textureId_ = 0;
    };

} // gl
