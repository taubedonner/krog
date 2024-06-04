//
// Created by Nikita Zarudniy on 6/4/2024.
//

#pragma once

namespace kr {

class FrameSynchronizer {
 public:
  explicit FrameSynchronizer(double fps = 300.0);

  void BeginFrame() {}

  void EndFrameAndSleep();

  void SetFps(double fps);

 private:
  bool m_IsUnlimited{false};
  std::chrono::duration<double> m_FrameTime{1.0};
  std::chrono::time_point<std::chrono::steady_clock, decltype(m_FrameTime)> m_NextTimePoint{};
};

}  // namespace kr
