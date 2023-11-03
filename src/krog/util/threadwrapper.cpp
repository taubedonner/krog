//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "threadwrapper.h"

namespace kr {
    KROG_API ThreadWrapper::~ThreadWrapper() {
        Detach();
    }

    KROG_API void ThreadWrapper::Attach(std::thread&& thread) {
        Detach();
        m_Thread = std::forward<std::thread&&>(thread);
    }

    KROG_API void ThreadWrapper::Detach() {
        if (m_Thread.joinable()) {
            m_Thread.join();
        }
    }

} // kr
