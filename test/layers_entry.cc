//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include <krog/application.h>
#include <krog/common.h>

int main([[maybe_unused]] int argc, [[maybe_unused]] char** argv) {
  auto app = kr::Application();
  app.Run();
  KR_INFO("d");

  return 0;
}