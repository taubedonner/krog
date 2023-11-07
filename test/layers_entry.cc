//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include <krog/entry.h>
#include <krog/ui/layer.h>
#include <krog/common.h>

#include <imgui.h>

class TestLayer : public kr::Layer {
 public:
  TestLayer() : kr::Layer("Test Layer") {}

 private:
  void OnUiUpdate() override {
	ImGui::ShowDemoWindow();
  }
};

kr::Application *kr::CreateApp() {
  KR_INFO("*** Layers Test ***");
  auto app = new kr::Application("Layers Test");
  app->AttachLayer(std::move(std::make_shared<TestLayer>()));
  return app;
}
