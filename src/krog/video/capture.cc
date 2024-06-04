//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include "capture.h"

#include "krog/common.h"

namespace kr {

Capture::~Capture() = default;

CaptureListener::~CaptureListener() = default;

void Capture::AppendListener(CaptureListener* listener) {
  if (!listener) {
    return;
  }

  listener->m_Remover.setCallbackList(m_StreamListeners);
  m_StreamListeners.append(KR_BIND_EXT_FN(listener, OnNewFrame));
}

void Capture::RemoveAllListeners() {
  m_StreamListeners.forEach([&](const CallbackList::Handle& handle, const CallbackList::Callback&) { m_StreamListeners.remove(handle); });
}
}  // namespace kr
