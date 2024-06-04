//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include "window.h"

#include "krog/events/eventbus.h"
#include "krog/events/windowevents.h"

#if defined(_WIN32)
extern "C" {
[[maybe_unused]] __declspec(dllexport) uint32_t NvOptimusEnablement = 0x00000001;
[[maybe_unused]] __declspec(dllexport) uint32_t AmdPowerXpressRequestHighPerformance = 0x00000001;
}
#endif

namespace kr {

void GLAPIENTRY MessageCallback([[maybe_unused]] GLenum source, GLenum type, GLuint id, [[maybe_unused]] GLenum severity,
                                [[maybe_unused]] GLsizei length, const GLchar *message, [[maybe_unused]] const void *userParam) {
  if (type == GL_DEBUG_TYPE_ERROR) {
    KR_DEBUG("[GL Debug] {:x}: {}", id, message);
  }
}

Window::Window(const WindowConfig &config) : m_WindowConfig(config), m_FrameSynchronizer(config.FpsLimit) {
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMEPAD) != 0) {
    KR_ERROR("SDL_Init(): {}", SDL_GetError());
    std::exit(1);
  }

  SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);

  SDL_SetHint(SDL_HINT_IME_SHOW_UI, "1");

  SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
  SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
  SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
  auto windowFlags = (SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_HIDDEN);
  if (m_WindowConfig.IsFullscreen) windowFlags |= SDL_WINDOW_FULLSCREEN;

  SDL_Window *window = SDL_CreateWindow(config.Title.c_str(), config.Size.x, config.Size.y, windowFlags);
  if (window == nullptr) {
    KR_ERROR("SDL_CreateWindow(): {}", SDL_GetError());
    std::exit(1);
  }
  m_NativeWindow = window;

  SDL_SetWindowPosition(window, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
  auto glContext = SDL_GL_CreateContext(window);
  SDL_GL_MakeCurrent(window, glContext);

  if (!gladLoadGLLoader((GLADloadproc)SDL_GL_GetProcAddress)) {
    KR_ERROR("gladLoadGLLoader(): Failed to initialize Glad");
    std::exit(1);
  }

  glEnable(GL_DEBUG_OUTPUT);
#ifndef __APPLE__
  glDebugMessageCallback(MessageCallback, nullptr);
#endif

  KR_INFO("{:<16} {}.{}", "OpenGL Version:", GLVersion.major, GLVersion.minor);
  KR_INFO("{:<16} {}", "GLSL Version:", (char *)glGetString(GL_SHADING_LANGUAGE_VERSION));
  KR_INFO("{:<16} {}", "OpenGL Vendor:", (char *)glGetString(GL_VENDOR));
  KR_INFO("{:<16} {}", "OpenGL Renderer:", (char *)glGetString(GL_RENDERER));

  SetFpsLimit(config.FpsLimit, config.SwapInterval);

  SDL_ShowWindow(window);
}

Window::~Window() {
  SDL_DestroyWindow(m_NativeWindow);
  SDL_Quit();
}

void Window::BeginUpdate() {
  m_FrameSynchronizer.BeginFrame();

  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    if (event.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED) {
      EventBus::PushEvent<WindowCloseEvent>();
    }

    if (event.type == SDL_EVENT_KEY_DOWN) {
      auto &keysym = event.key.keysym;
      if ((keysym.sym == SDLK_RETURN) && (keysym.mod & SDL_KMOD_ALT)) {
        auto flag = SDL_GetWindowFlags(m_NativeWindow);
        bool isFullscreen = (flag & SDL_WINDOW_FULLSCREEN);
        SetFullScreen(!isFullscreen);
      }

      EventBus::PushEvent<KeyPressEvent>(event);
    }

    if (event.type == SDL_EVENT_WINDOW_RESIZED) {
      auto &resizeEvent = event.window;
      m_WindowConfig.Size.x = resizeEvent.data1;
      m_WindowConfig.Size.y = resizeEvent.data2;
    }

    m_EventCallbackList(&event);
  }
}

void Window::EndUpdate() {
  SDL_GL_SwapWindow(m_NativeWindow);
  m_FrameSynchronizer.EndFrameAndSleep();
}

SDL_Window *Window::GetNativeWindow() { return m_NativeWindow; }

void Window::AppendListener(WindowEventListener *listener) {
  if (!listener) {
    return;
  }

  listener->m_Remover.setCallbackList(m_EventCallbackList);
  m_EventCallbackList.append(KR_BIND_EXT_FN(listener, OnWindowEvent));
}

int Window::GetWidth() const { return m_WindowConfig.Size.x; }

int Window::GetHeight() const { return m_WindowConfig.Size.y; }

void Window::SetFullScreen(bool set) {
  if (!m_NativeWindow) return;
  if (SDL_SetWindowFullscreen(m_NativeWindow, (SDL_bool)set) == 0) {
    m_WindowConfig.IsFullscreen = set;
  }
}

void Window::SetSize(int width, int height) {
  if (!m_NativeWindow) return;
  m_WindowConfig.Size = {width, height};
  SDL_SetWindowSize(m_NativeWindow, width, height);
}

void Window::SetTitle(const std::string &title) {
  if (!m_NativeWindow) return;
  m_WindowConfig.Title = title;
  SDL_SetWindowTitle(m_NativeWindow, title.c_str());
}

void Window::SetFpsLimit(double fps, int swapInterval) {
  if (!m_NativeWindow) return;
  swapInterval = std::clamp(swapInterval, -1, 1);
  m_WindowConfig.SwapInterval = swapInterval;
  m_WindowConfig.FpsLimit = fps;
  SDL_GL_SetSwapInterval(swapInterval);
  m_FrameSynchronizer.SetFps(fps);
}

WindowEventListener::~WindowEventListener() = default;

}  // namespace kr
