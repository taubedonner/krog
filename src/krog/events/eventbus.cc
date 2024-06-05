//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include "eventbus.h"

#include "krog/common.h"

namespace kr {

std::mutex EventBus::m_InitMutex;
EventBus *EventBus::m_Instance = nullptr;

EventBus::EventBus() {
  m_IsRunning = true;
  m_Implementation = std::make_unique<BusImpl>();
  m_EventLoopRoutine.Attach(std::thread{&EventBus::EventLoop, this});
}

EventBus::~EventBus() {
  m_IsRunning = false;
  m_LoopCondition.notify_one();
  m_Implementation->process();
  m_EventLoopRoutine.Detach();
}

void EventBus::Enqueue(const Event::Ptr &event) {
  if (m_IsRunning) {
    m_Implementation->enqueue(event);
  }
  m_LoopCondition.notify_one();
}

void EventBus::Enqueue(Event::Hash hash, const Event::Ptr &event) {
  if (m_IsRunning) {
    m_Implementation->enqueue(hash, event);
  }
  m_LoopCondition.notify_one();
}

void EventBus::EventLoop() {
  while (m_IsRunning) {
    std::unique_lock<std::mutex> lock(m_LoopMutex);
    m_LoopCondition.wait(lock, [this] { return ((!m_Implementation->emptyQueue() && m_IsRunning) || (m_Implementation->emptyQueue() && !m_IsRunning)); });
    m_Implementation->process();
  }
}

EventBus &EventBus::GetInstance() {
  if (!m_Instance) {
    std::lock_guard<std::mutex> lock(m_InitMutex);
    if (!m_Instance) {
      m_Instance = new EventBus();
    }
  };

  return *m_Instance;
}

}  // namespace kr
