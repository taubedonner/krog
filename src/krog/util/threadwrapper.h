//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include <thread>

namespace kr {

class ThreadWrapper {
 public:
  ThreadWrapper() = default;
  ~ThreadWrapper();

  void Attach(std::thread&& thread);

  void Detach();

  std::thread::id GetId();

 private:
  std::thread m_Thread{};
};

}  // namespace kr
