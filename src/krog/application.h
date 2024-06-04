//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include "krog/events/windowevents.h"
#include "krog/renderer/window.h"
#include "krog/ui/imguilayer.h"
#include "krog/ui/layer.h"

int main(int argc, char **argv);

namespace kr {

class Application {
 public:
  explicit Application(std::string appName);

  ~Application();

  void Run();

  void AttachLayer(const std::shared_ptr<Layer> &layer);

  void DetachLayer(const std::shared_ptr<Layer> &layer);

  void DetachAllLayers();

  [[nodiscard]] auto GetWindow() const -> auto & { return m_Window; }

 private:
  void OnWindowCloseEvent(const WindowCloseEvent::Ptr &);

  std::unique_ptr<Window> m_Window;
  volatile bool m_IsRunning{true};
  std::vector<std::shared_ptr<Layer>> m_Layers;
  ImGuiLayer m_ImGuiLayer;

  friend int ::main(int argc, char **argv);
};

Application *CreateApp();

}  // namespace kr
