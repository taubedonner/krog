//
// Created by Nikita Zarudniy on 6/4/2024.
//

#include "framesynchronizer.h"

namespace kr {

FrameSynchronizer::FrameSynchronizer(double fps) {
  m_NextTimePoint = std::chrono::steady_clock::now();
  SetFps(fps);
}

void FrameSynchronizer::EndFrameAndSleep() {
  if (m_IsUnlimited) return;
  m_NextTimePoint += m_FrameTime;
  std::this_thread::sleep_until(m_NextTimePoint);
}

void FrameSynchronizer::SetFps(double fps) {
  if (fps <= 0 || fps == std::numeric_limits<double>::max()) {
    m_IsUnlimited = true;
  } else {
    m_FrameTime = std::chrono::duration<double>(1.0 / fps);
  }
}

}  // namespace kr