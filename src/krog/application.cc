//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include "application.h"

#include <glad/glad.h>

#include "kr_assets.h"
#include "krog/events/eventbus.h"
#include "krog/ui/imguilayer.h"
#include "krog/util/filesystem.h"
#include "krog/util/persistentconfig.h"
#include "krog/util/physstream.h"

namespace kr {
Application::Application(const AppProps& props) {
  WindowConfig windowConfig{};

  if (props.Title.empty()) windowConfig.Title = props.Name;
  else windowConfig.Title = props.Title;

  m_Name = props.Name;

  // TODO: Create wrappers for PhysFS
  if (!PHYSFS_init(nullptr)) {
    std::cerr << "Failed to init PhysicsFS" << std::endl;
    exit(-1);
  }

  if (!PHYSFS_mount(KR_ARCHIVE_FILE, "/", 1)) {
    PHYSFS_deinit();
    std::cerr << "Failed to mount assets archive" << std::endl;
    exit(-1);
  }

  SetLogFilePath(GetAppDataPath());
  PersistentConfig::Init(GetAppDataPath().append("config.yml").string());

  auto& conf = PersistentConfig::GetRoot();
  auto appNode = conf["application"];
  windowConfig.FpsLimit = appNode["fps_limit"].as<double>(300);
  windowConfig.SwapInterval = appNode["swap_interval"].as<int>(0);
  windowConfig.IsFullscreen = appNode["fullscreen"].as<bool>(false);
  int theme = static_cast<int>(ImGuiLayer::Theme::System);
  m_ImGuiLayer.SetTheme(static_cast<ImGuiLayer::Theme>(appNode["theme"].as<int>(theme)));

  if (!windowConfig.IsFullscreen) {
    windowConfig.Size.x = appNode["width"].as<int>(1600);
    windowConfig.Size.y = appNode["height"].as<int>(900);
  }

  m_Window = std::make_unique<Window>(windowConfig);

  EventBus::AppendListener<WindowCloseEvent>(KR_BIND_FN(OnWindowCloseEvent));
  m_ImGuiLayer.OnAttachApp(this);
  m_Window->AppendListener(&m_ImGuiLayer);
}

void Application::Run() {
  while (m_IsRunning) {
    m_Window->BeginUpdate();
    m_ImGuiLayer.BeginUiUpdate();

    for (auto& layer : m_Layers) {
      layer->OnUiUpdate();
    }

    m_ImGuiLayer.EndUiUpdate();

    glViewport(0, 0, m_Window->GetWidth(), m_Window->GetHeight());
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    for (auto& layer : m_Layers) {
      layer->OnUpdate();
    }

    m_ImGuiLayer.OnUpdate();

    m_Window->EndUpdate();
  }

  DetachAllLayers();

  m_ImGuiLayer.OnDetach();
}

void Application::OnWindowCloseEvent(const WindowCloseEvent::Ptr&) { m_IsRunning = false; }

void Application::AttachLayer(const std::shared_ptr<Layer>& layer) {
  KR_TRACE("Attaching layer \"{0}\" ({1})", layer->GetName(), fmt::ptr(layer.get()));
  m_Layers.push_back(layer);
  layer->OnAttachApp(this);
}

void Application::DetachLayer(const std::shared_ptr<Layer>& layer) {
  auto it = std::find(m_Layers.begin(), m_Layers.end(), layer);
  if (it != m_Layers.end()) {
    KR_TRACE("Detaching layer \"{0}\" ({1})", layer->GetName(), fmt::ptr(layer.get()));
    layer->OnDetach();
    m_Layers.erase(it);
  }
}

void Application::DetachAllLayers() {
  for (const auto& layer : m_Layers) {
    KR_TRACE("Detaching layer \"{0}\" ({1})", layer->GetName(), fmt::ptr(layer.get()));
    layer->OnDetach();
  }
}

Application::~Application() {
  auto& conf = PersistentConfig::GetRoot();
  auto appNode = conf["application"];
  appNode["fps_limit"] = m_Window->GetFpsLimit();
  appNode["fullscreen"] = m_Window->IsFullscreen();
  appNode["width"] = m_Window->GetWidth();
  appNode["height"] = m_Window->GetHeight();

  int theme = static_cast<int>(m_ImGuiLayer.GetTheme());
  appNode["theme"] = theme;

  PersistentConfig::Save();

  PHYSFS_deinit();
}

std::filesystem::path Application::GetAppDataPath() {
  std::filesystem::path appDataPath = kr::fs::GetUserConfigDir();
  appDataPath /= m_Name;

  if (!std::filesystem::exists(appDataPath)) {
    std::filesystem::create_directories(appDataPath);
  }

  return appDataPath;
}

}  // namespace kr
