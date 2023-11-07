//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "eventbus.h"
#include "krog/common.h"

namespace kr {

std::mutex EventBus::initMutex_;
EventBus *EventBus::instance_ = nullptr;

 EventBus::EventBus() {
  isRunning_ = true;
  implementation_ = std::make_unique<BusImpl>();
  eventLoopRoutine_.Attach(std::thread{&EventBus::EventLoop, this});
}

 EventBus::~EventBus() {
  isRunning_ = false;
  loopCondition_.notify_one();
  implementation_->process();
  eventLoopRoutine_.Detach();
}

 void EventBus::Enqueue(const Event::Ptr &event) {
  if (isRunning_) {
	implementation_->enqueue(event);
  }
  loopCondition_.notify_one();
}

 void EventBus::Enqueue(Event::Hash hash, const Event::Ptr &event) {
  if (isRunning_) {
	implementation_->enqueue(hash, event);
  }
  loopCondition_.notify_one();
}

 void EventBus::EventLoop() {
  while (isRunning_) {
	std::unique_lock <std::mutex> lock(loopMutex_);
	loopCondition_.wait(lock, [this] {
	  return ((!implementation_->emptyQueue() && isRunning_)
		  || (implementation_->emptyQueue() && !isRunning_));
	});
	implementation_->process();
  }
}

 EventBus &EventBus::GetInstance() {
  if (!instance_) {
	std::lock_guard <std::mutex> lock(initMutex_);
	if (!instance_) {
	  instance_ = new EventBus();
	}
  };

  return *instance_;
}

} // kr
