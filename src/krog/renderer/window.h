//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once


#include "krog/common.h"

#include <eventpp/utilities/scopedremover.h>
#include <eventpp/hetercallbacklist.h>

#include <glad/glad.h>
#include <SDL3/SDL.h>
#include <glm/vec2.hpp>

namespace kr {

class  WindowEventListener;

struct  WindowConfig {
  std::string Title = "Application";
  glm::ivec2 Size = {1600, 900};
  int SwapInterval = 0;
  bool IsFullscreen{false};
  double FpsLimit{300.0};
};

class  Window {
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

  bool IsFullscreen() const { return windowConfig_.IsFullscreen; }

  double GetFpsLimit() const { return windowConfig_.FpsLimit; }

  void BeginUpdate();

  void EndUpdate();

  [[nodiscard]] int GetWidth() const;

  [[nodiscard]] int GetHeight() const;

  SDL_Window *GetNativeWindow();

  void AppendListener(WindowEventListener *listener);

 protected:
  WindowConfig windowConfig_{};
  FrameSynchronizer frameSynchronizer_{};
  SDL_Window *nativeWindow_{nullptr};
  EventCallbackList eventCallbackList_;

};

class  WindowEventListener {
 public:
  virtual ~WindowEventListener() = 0;

  virtual void OnWindowEvent(const SDL_Event *event) {};

 private:
  eventpp::ScopedRemover <Window::EventCallbackList> remover_;
  friend class Window;
};

} // kr
