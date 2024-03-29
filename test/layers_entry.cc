//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include <krog/entry.h>
#include <krog/ui/layer.h>
#include <krog/common.h>

#include <implot.h>

class TestLayer : public kr::Layer, public kr::Loggable {
 public:
  TestLayer() : kr::Layer("Test Layer"), kr::Loggable("Test") {
      logger->info("Logger test! {}", 123);
  }

 private:
  void OnUiUpdate() override {
    ImPlot::ShowDemoWindow();
  }
};

kr::Application *kr::CreateApp() {
  KR_TRACE("*** Trace Log Test ***");
  KR_INFO("*** Layers Test ***");
  auto app = new kr::Application("Layers Test");
  app->AttachLayer(std::move(std::make_shared<TestLayer>()));
  return app;
}
