//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include "krog/renderer/window.h"
#include "krog/ui/misc/imgui_spectrum.h"
#include "layer.h"

namespace kr {

class ImGuiLayer : public Layer, public WindowEventListener {
 public:
  enum class Theme {
    System,
    Light,
    Dark
  };

  ImGuiLayer() : Layer("ImGui Layer") {}

  void OnAttach() override;

  void OnDetach() override;

  void OnUpdate() override;

  void BeginUiUpdate();

  void EndUiUpdate();

  void OnWindowEvent(const SDL_Event* event) override;

  void SetTheme(Theme theme);

  Theme GetTheme();

 private:
  void UpdateTheme();

  Theme m_SelectedTheme{Theme::System};
};

}  // namespace kr
