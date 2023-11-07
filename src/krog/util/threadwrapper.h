//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once



namespace kr {

    class  ThreadWrapper {
    public:
        ThreadWrapper() = default;
        ~ThreadWrapper();

        void Attach(std::thread&& thread);
        void Detach();

    private:
        std::thread m_Thread{};
    };

} // kr
