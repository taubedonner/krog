//
// Created by Nikita Zarudniy on 11/3/2023.
//

#pragma once

#include "krog/application.h"

#ifdef _WIN32
#pragma warning(push)
#pragma warning(disable : 4996)
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow) {
  // If application is started from console, stdout will be redirected to it.
  // It's a test feature... Maybe useless, maybe should be taken down.
  // FIXME: stdout to parent console messing its buffer
  if (AttachConsole(ATTACH_PARENT_PROCESS)) {
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);
    freopen("CON", "r", stdin);
  }

  auto app = kr::CreateApp();
  app->Run();
  delete app;

  return 0;
}
#pragma warning(pop)
#endif

int main([[maybe_unused]] int argc, [[maybe_unused]] char **argv) {
  auto app = kr::CreateApp();
  app->Run();
  delete app;

  return 0;
}
