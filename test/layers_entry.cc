//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include <implot.h>
#include <krog/common.h>
#include <krog/entry.h>
#include <krog/ui/layer.h>

class TestLayer : public kr::Layer, public kr::Loggable {
 public:
  TestLayer() : kr::Layer("Test Layer"), kr::Loggable("Test") { logger->info("Logger test! {}", 123); }

 private:
  void OnUiUpdate() override { ImPlot::ShowDemoWindow(); }
};

class TestLoggable : public kr::Loggable {
 public:
  TestLoggable(const kr::Loggable *loggable) : kr::Loggable(loggable) { logger->info("Logger test! {}", 321); }
};

kr::Application *kr::CreateApp() {
  KR_TRACE("*** Trace Log Test ***");  // Deprecated
  KR_INFO("*** Layers Test ***");      // Deprecated

  auto layer = std::make_shared<TestLayer>();
  auto app = new kr::Application("Layers Test");
  app->AttachLayer(layer);

  auto loggable = TestLoggable(layer.get());  // Child loggable with the same logger

  return app;
}
