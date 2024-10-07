//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include "imguilayer.h"

#include <SDL3/SDL.h>
#include <backends/imgui_impl_opengl3.h>
#include <backends/imgui_impl_sdl3.h>
#include <imgui.h>
#include <implot.h>

#include "krog/application.h"
#include "misc/imgui_spectrum.h"

namespace kr {

void ImGuiLayer::OnAttach() {
  m_IniFilename = GetApplication()->GetAppDataPath().append("imgui.ini").string();

  IMGUI_CHECKVERSION();
  ImGui::CreateContext();
  ImPlot::CreateContext();
  ImGuiIO& io = ImGui::GetIO();
  io.IniFilename = nullptr;
  io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
  io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
  io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;      // Enable Docking
  io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;    // Enable Multi-Viewport / Platform Windows
  // io.ConfigViewportsNoAutoMerge = true;
  // io.ConfigViewportsNoTaskBarIcon = true;

  LoadIniSettingsFromDisk();

  ImGui::Spectrum::Init();

  UpdateTheme();

  const char* glsl_version = "#version 330 core";
  ImGui_ImplSDL3_InitForOpenGL(SDL_GL_GetCurrentWindow(), SDL_GL_GetCurrentContext());
  ImGui_ImplOpenGL3_Init(glsl_version);
}

void ImGuiLayer::OnDetach() {
  SaveIniSettingsToDisk();
  ImPlot::DestroyContext();
  ImGui_ImplOpenGL3_Shutdown();
  ImGui_ImplSDL3_Shutdown();
  ImGui::DestroyContext();
}

void ImGuiLayer::BeginUiUpdate() {
  ImGui_ImplOpenGL3_NewFrame();
  ImGui_ImplSDL3_NewFrame();
  ImGui::NewFrame();

  // ImGui::Spectrum::ShowStyleEditor(nullptr);
}

void ImGuiLayer::EndUiUpdate() {
  ImGui::Render();

  if (auto& io = ImGui::GetIO(); io.WantSaveIniSettings) {
    SaveIniSettingsToDisk();
    io.WantSaveIniSettings = false;
  }
}

void ImGuiLayer::OnWindowEvent(const SDL_Event* event) {
  ImGui_ImplSDL3_ProcessEvent(event);

  if (m_SelectedTheme == Theme::System && event->type == SDL_EVENT_SYSTEM_THEME_CHANGED) {
    if (SDL_GetSystemTheme() == SDL_SystemTheme::SDL_SYSTEM_THEME_LIGHT) {
      ImGui::Spectrum::StyleColorsLight();
    } else {
      ImGui::Spectrum::StyleColorsDark();
    }
  }
}

void ImGuiLayer::OnUpdate() {
  ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

  if (ImGui::GetIO().ConfigFlags & ImGuiConfigFlags_ViewportsEnable) {
    SDL_Window* backup_current_window = SDL_GL_GetCurrentWindow();
    SDL_GLContext backup_current_context = SDL_GL_GetCurrentContext();
    ImGui::UpdatePlatformWindows();
    ImGui::RenderPlatformWindowsDefault();
    SDL_GL_MakeCurrent(backup_current_window, backup_current_context);
  }
}

void ImGuiLayer::SetTheme(ImGuiLayer::Theme theme) {
  m_SelectedTheme = theme;
  UpdateTheme();
}

ImGuiLayer::Theme ImGuiLayer::GetTheme() { return m_SelectedTheme; }

void ImGuiLayer::UpdateTheme() {
  if (!ImGui::GetCurrentContext()) return;

  if (m_SelectedTheme == Theme::Dark) ImGui::Spectrum::StyleColorsDark();
  if (m_SelectedTheme == Theme::Light) ImGui::Spectrum::StyleColorsLight();
  if (m_SelectedTheme == Theme::System) {
    if (SDL_GetSystemTheme() == SDL_SystemTheme::SDL_SYSTEM_THEME_LIGHT) {
      ImGui::Spectrum::StyleColorsLight();
    } else {
      ImGui::Spectrum::StyleColorsDark();
    }
  }
}

bool ImGuiLayer::LoadIniSettingsFromDisk() {
  std::stringstream ss;
  std::ifstream settings(m_IniFilename);
  if (!settings.is_open()) return false;
  ss << settings.rdbuf();
  ImGui::LoadIniSettingsFromMemory(ss.str().c_str(), ss.str().size());
  return true;
}

bool ImGuiLayer::SaveIniSettingsToDisk() {
  size_t size;
  auto data = ImGui::SaveIniSettingsToMemory(&size);
  std::ofstream settings(m_IniFilename);
  if (!settings.is_open()) return false;
  settings.write(data, (std::streamsize)size);
  return true;
}

}  // namespace kr
