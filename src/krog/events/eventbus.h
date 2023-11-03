//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once

#include "krog/export.h"

#include "event.h"
#include "krog/util/threadwrapper.h"

#include <eventpp/eventqueue.h>
#include <eventpp/utilities/orderedqueuelist.h>

namespace kr {

class KROG_API EventBus {
 public:
  using Ptr = std::shared_ptr<EventBus>;

  struct KROG_API PriorityCompare {
	template<typename T>
	auto operator()(const T &a, const T &b) const -> bool {
	  return std::get<0>(a.arguments)->GetPriority() > std::get<0>(b.arguments)->GetPriority();
	}
  };

  struct KROG_API EventPolicy {
	template<typename Item>
	using QueueList = eventpp::OrderedQueueList<Item, PriorityCompare>;

	static auto getEvent(const Event::Ptr &e) -> Event::Hash {
	  return e->GetHash();
	}
  };

 public:
  using CallbackFn = void(const Event::Ptr &);

  template<class E>
  using CallbackTFn = void(const std::shared_ptr <E> &);

  using BusImpl = eventpp::EventQueue<Event::Hash, CallbackFn, EventPolicy>;

  EventBus();

  ~EventBus();

  static EventBus &GetInstance();

  static void PushEvent(const Event::Ptr &event) {
	EventBus::GetInstance().Enqueue(event);
  }

  template<class E>
  static void PushEvent(auto &&... args) {
	EventBus::GetInstance().Enqueue(std::make_shared<E>(std::forward<decltype(args)>(args)...));
  }

  auto AppendListener(const Event::Hash hash, const std::function <CallbackFn> &cb) -> void {
	implementation_->appendListener(hash, cb);
  }

  template<class E>
  static auto AppendListener(const std::function <CallbackTFn<E>> &cb) -> void {
	EventBus::GetInstance().AppendListener(Event::GetHash<E>(), [cb](const Event::Ptr &e) {
	  cb(std::dynamic_pointer_cast<E>(e));
	});
  }

 private:
  void EventLoop();

  void Enqueue(const Event::Ptr &event);

  void Enqueue(Event::Hash hash, const Event::Ptr &event);

 private:
  std::unique_ptr <BusImpl> implementation_;
  ThreadWrapper eventLoopRoutine_;
  std::mutex loopMutex_;
  std::condition_variable loopCondition_;
  volatile bool isRunning_;

  static std::mutex initMutex_;
  static EventBus *instance_;
};

} // roi
