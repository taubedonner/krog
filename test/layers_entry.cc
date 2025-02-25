//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include <implot.h>
#include <krog/common.h>
#include <krog/entry.h>
#include <krog/ui/layer.h>
#include <krog/util/filesystem.h>
#include <krog/ui/misc/carbon_icons.h>

class TestLayer : public kr::Layer, public kr::Loggable {
 public:
  TestLayer() : kr::Layer("Test Layer"), kr::Loggable("Test") {
    logger->info("Logger test! {}", 123);
  }

  void OnAttach() override {
    logger->info("Application Data: {}", this->GetApplication()->GetAppDataPath().string());
  }

 private:
  void OnUiUpdate() override {
    ImPlot::ShowDemoWindow();

    static int th = 0;
    if (ImGui::Button("Switch Theme")) {
      th = (th + 1) % 3;
      if (th == 0) m_Application->SetTheme(kr::ImGuiLayer::Theme::System);
      if (th == 1) m_Application->SetTheme(kr::ImGuiLayer::Theme::Dark);
      if (th == 2) m_Application->SetTheme(kr::ImGuiLayer::Theme::Light);
    }

    ImGui::SameLine();
    if (th == 0) ImGui::TextUnformatted("System");
    if (th == 1) ImGui::TextUnformatted("Dark");
    if (th == 2) ImGui::TextUnformatted("Light");

    ImGui::Text("%s Carbon Icons %s %s %s", CarbonIcons::ContainerImage::PushPull, CarbonIcons::ContainerImage::Push, CarbonIcons::ContainerImage::Pull, CarbonIcons::Function::Unnamed);
  }
};

class TestLoggable : public kr::Loggable {
 public:
  explicit TestLoggable(const kr::Loggable *loggable) : kr::Loggable(loggable) { logger->info("Logger test! {}", 321); }
};

kr::Application *kr::CreateApp() {
  KR_TRACE("*** Trace Log Test ***");  // Deprecated
  KR_INFO("*** Layers Test ***");      // Deprecated

  auto app = new kr::Application({"Krog Layers Test"});
  auto layer = std::make_shared<TestLayer>();
  app->AttachLayer(layer);

  auto loggable = TestLoggable(layer.get());  // Child loggable with the same logger

  return app;
}
