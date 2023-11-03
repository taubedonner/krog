//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "capture.h"
#include "krog/common.h"

namespace kr {

    KROG_API Capture::~Capture() = default;

    KROG_API CaptureListener::~CaptureListener() = default;

    KROG_API void Capture::AppendListener(CaptureListener* listener) {
        if (!listener) {
            return;
        }

        listener->m_Remover.setCallbackList(m_StreamListeners);
        m_StreamListeners.append(KR_BIND_EXT_FN(listener, OnNewFrame));
    }

    KROG_API void Capture::RemoveAllListeners() {
        m_StreamListeners.forEach([&](const CallbackList::Handle& handle, const CallbackList::Callback&) {
            m_StreamListeners.remove(handle);
        });
    }
} // kr
