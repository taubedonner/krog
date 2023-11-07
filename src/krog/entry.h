//
// Created by Nikita Zarudniy on 11/3/2023.
//

#pragma once

#include "krog/application.h"

extern kr::Application* kr::CreateApp();

int main([[maybe_unused]] int argc, [[maybe_unused]] char **argv) {
  auto app = kr::CreateApp();
  app->Run();
  delete app;

  return 0;
}
