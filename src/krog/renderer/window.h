//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include <SDL3/SDL.h>
#include <eventpp/hetercallbacklist.h>
#include <eventpp/utilities/scopedremover.h>
#include <glad/glad.h>

#include <glm/vec2.hpp>

#include "krog/common.h"
#include "krog/util/framesynchronizer.h"

namespace kr {

class WindowEventListener;

struct WindowConfig {
  std::string Title = "Application";
  glm::ivec2 Size = {1600, 900};
  int SwapInterval = 0;
  bool IsFullscreen{false};
  double FpsLimit{300.0};
};

class Window {
 public:
  using WindowEventListenerCallback = void(const SDL_Event *event);

  using EventCallbackList = eventpp::CallbackList<WindowEventListenerCallback>;

  explicit Window(const WindowConfig &config);

  Window(const Window &other) = delete;

  Window(Window &&other) = delete;

  ~Window();

  Window &operator=(const Window &other) = delete;

  Window &operator=(Window &&other) = delete;

  void SetFullScreen(bool set);

  void SetSize(int width, int height);

  void SetFpsLimit(double fps, int swapInterval = 0);

  void SetTitle(const std::string &title);

  bool IsFullscreen() const { return m_WindowConfig.IsFullscreen; }

  double GetFpsLimit() const { return m_WindowConfig.FpsLimit; }

  void BeginUpdate();

  void EndUpdate();

  [[nodiscard]] int GetWidth() const;

  [[nodiscard]] int GetHeight() const;

  SDL_Window *GetNativeWindow();

  void AppendListener(WindowEventListener *listener);

 protected:
  WindowConfig m_WindowConfig{};
  FrameSynchronizer m_FrameSynchronizer{};
  SDL_Window *m_NativeWindow{nullptr};
  EventCallbackList m_EventCallbackList;
};

class WindowEventListener {
 public:
  virtual ~WindowEventListener() = 0;

  virtual void OnWindowEvent(const SDL_Event *event){};

 private:
  eventpp::ScopedRemover<Window::EventCallbackList> m_Remover;
  friend class Window;
};

}  // namespace kr
