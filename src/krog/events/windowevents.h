//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include <SDL3/SDL.h>

#include <cstddef>
#include <glm/vec2.hpp>
#include <memory>

#include "event.h"

namespace kr {

class WindowCloseEvent : public Event {
 public:
  using Ptr = std::shared_ptr<WindowCloseEvent>;

  explicit WindowCloseEvent() : Event() {}
};

class WindowResizeEvent : public Event {
 public:
  using Ptr = std::shared_ptr<WindowResizeEvent>;

  explicit WindowResizeEvent(int width, int height) : Event(), m_Width(width), m_Height(height) {}

  [[nodiscard]] auto GetWidth() const -> int { return m_Width; }

  [[nodiscard]] auto GetHeight() const -> int { return m_Height; }

 private:
  int m_Width, m_Height;
};

class KeyPressEvent : public Event {
 public:
  using Ptr = std::shared_ptr<KeyPressEvent>;

  explicit KeyPressEvent(const SDL_Event &e) : Event() {
    m_Keycode = e.key.key;
    m_Scancode = e.key.scancode;
    m_Keymod = e.key.mod;
  }

  [[nodiscard]] auto GetKeycode() const -> SDL_Keycode { return m_Keycode; }

  [[nodiscard]] auto GetScancode() const -> SDL_Scancode { return m_Scancode; }

  [[nodiscard]] auto GetMod() const -> SDL_Keymod { return m_Keymod; }

 private:
  SDL_Keycode  m_Keycode;
  SDL_Scancode m_Scancode;
  SDL_Keymod m_Keymod;
};

class KeyReleaseEvent : public KeyPressEvent {
 public:
  using Ptr = std::shared_ptr<KeyReleaseEvent>;

  explicit KeyReleaseEvent(const SDL_Event &e) : KeyPressEvent(e) {}
};

}  // namespace kr
