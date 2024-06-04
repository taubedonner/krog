//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include <eventpp/eventqueue.h>
#include <eventpp/utilities/orderedqueuelist.h>

#include "event.h"
#include "krog/util/threadwrapper.h"

namespace kr {

class EventBus {
 public:
  using Ptr = std::shared_ptr<EventBus>;

  struct PriorityCompare {
    template <typename T>
    auto operator()(const T &a, const T &b) const -> bool {
      return std::get<0>(a.arguments)->GetPriority() > std::get<0>(b.arguments)->GetPriority();
    }
  };

  struct EventPolicy {
    template <typename Item>
    using QueueList = eventpp::OrderedQueueList<Item, PriorityCompare>;

    static auto getEvent(const Event::Ptr &e) -> Event::Hash { return e->GetHash(); }
  };

 public:
  using CallbackFn = void(const Event::Ptr &);

  template <class E>
  using CallbackTFn = void(const std::shared_ptr<E> &);

  using BusImpl = eventpp::EventQueue<Event::Hash, CallbackFn, EventPolicy>;

  EventBus();

  ~EventBus();

  static EventBus &GetInstance();

  static void PushEvent(const Event::Ptr &event) { EventBus::GetInstance().Enqueue(event); }

  template <class E>
  static void PushEvent(auto &&...args) {
    EventBus::GetInstance().Enqueue(std::make_shared<E>(std::forward<decltype(args)>(args)...));
  }

  auto AppendListener(const Event::Hash hash, const std::function<CallbackFn> &cb) -> void { m_Implementation->appendListener(hash, cb); }

  template <class E>
  static auto AppendListener(const std::function<CallbackTFn<E>> &cb) -> void {
    EventBus::GetInstance().AppendListener(Event::GetHash<E>(), [cb](const Event::Ptr &e) { cb(std::dynamic_pointer_cast<E>(e)); });
  }

 private:
  void EventLoop();

  void Enqueue(const Event::Ptr &event);

  void Enqueue(Event::Hash hash, const Event::Ptr &event);

 private:
  std::unique_ptr<BusImpl> m_Implementation;
  ThreadWrapper m_EventLoopRoutine;
  std::mutex m_LoopMutex;
  std::condition_variable m_LoopCondition;
  volatile bool m_IsRunning;

  static std::mutex m_InitMutex;
  static EventBus *m_Instance;
};

}  // namespace kr
