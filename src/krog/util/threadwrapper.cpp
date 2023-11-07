//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "threadwrapper.h"

namespace kr {
     ThreadWrapper::~ThreadWrapper() {
        Detach();
    }

     void ThreadWrapper::Attach(std::thread&& thread) {
        Detach();
        m_Thread = std::forward<std::thread&&>(thread);
    }

     void ThreadWrapper::Detach() {
        if (m_Thread.joinable()) {
            m_Thread.join();
        }
    }

} // kr
