//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once



#include "event.h"

#include <SDL3/SDL.h>
#include <glm/vec2.hpp>

namespace kr {

class  WindowCloseEvent : public Event {
 public:
  using Ptr = std::shared_ptr<WindowCloseEvent>;

  explicit WindowCloseEvent() : Event() {}
};

class  WindowResizeEvent : public Event {
 public:
  using Ptr = std::shared_ptr<WindowResizeEvent>;

  explicit WindowResizeEvent(int width, int height) : Event(), width_(width), height_(height) {}

  [[nodiscard]] auto GetWidth() const -> int { return width_; }

  [[nodiscard]] auto GetHeight() const -> int { return height_; }

 private:
  int width_, height_;
};

class  KeyPressEvent : public Event {
 public:
  using Ptr = std::shared_ptr<WindowCloseEvent>;

  explicit KeyPressEvent(const SDL_Event &e) : Event() {
	key_ = e.key.keysym;
  }

  [[nodiscard]] auto GetKey() const -> SDL_Keysym { return key_; }

 private:
  SDL_Keysym key_;
};

} // kr
