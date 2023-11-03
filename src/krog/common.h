//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once

#include "krog/export.h"
#include <spdlog/spdlog.h>

namespace kr {

#pragma pack(push, 1)

    template<typename T>
    struct KROG_API Vec2 {
        T x;
        T y;

        Vec2<T> operator+=(const Vec2<T>& b) {
            return { x += b.x, y += b.y };
        }
    };

    typedef Vec2<float> Vec2f;

    template<typename T>
    T& SetBit(T& num, size_t bitPos, bool bitValue) {
        T mask = ~(1 << bitPos);
        return num = (T)((num & mask) | (bitValue << bitPos));
    }

#pragma pack(pop)


	KROG_API int inet_pton4(const char *src, unsigned char *dst);


	KROG_API const std::shared_ptr<spdlog::logger>& GetLogger();

    const std::shared_ptr<spdlog::logger>& GetCoreLogger();

    class KROG_API FrameSynchronizer {
    public:
        explicit FrameSynchronizer(double fps = 300.0) {
            SetFps(fps);
        }

        void BeginFrame() {
            m_StartPoint = std::chrono::high_resolution_clock::now();
        }

        void SetFps(double fps);

        void EndFrameAndSleep();

    private:
        bool m_Disabled{false};
        std::chrono::duration<double, std::nano> m_DesiredDelay{};
        std::chrono::time_point<std::chrono::high_resolution_clock> m_StartPoint;
    };

}

#ifdef KROG_EXPORT
#define KR_TRACE(...) SPDLOG_LOGGER_TRACE(::kr::GetCoreLogger(), __VA_ARGS__)
#define KR_DEBUG(...) SPDLOG_LOGGER_DEBUG(::kr::GetCoreLogger(), __VA_ARGS__)
#define KR_INFO(...) SPDLOG_LOGGER_INFO(::kr::GetCoreLogger(), __VA_ARGS__)
#define KR_WARN(...) SPDLOG_LOGGER_WARN(::kr::GetCoreLogger(), __VA_ARGS__)
#define KR_ERROR(...) SPDLOG_LOGGER_ERROR(::kr::GetCoreLogger(), __VA_ARGS__)
#else
#define KR_TRACE(...) SPDLOG_LOGGER_TRACE(::kr::GetLogger(), __VA_ARGS__)
#define KR_DEBUG(...) SPDLOG_LOGGER_DEBUG(::kr::GetLogger(), __VA_ARGS__)
#define KR_INFO(...) SPDLOG_LOGGER_INFO(::kr::GetLogger(), __VA_ARGS__)
#define KR_WARN(...) SPDLOG_LOGGER_WARN(::kr::GetLogger(), __VA_ARGS__)
#define KR_ERROR(...) SPDLOG_LOGGER_ERROR(::kr::GetLogger(), __VA_ARGS__)
#endif

#define KR_BIND_FN(fn) [this](auto&&... args) -> decltype(auto) { return this->fn(std::forward<decltype(args)>(args)...); }
#define KR_BIND_EXT_FN(objectPtr, fn) [objectPtr](auto&&... args) -> decltype(auto) { return objectPtr->fn(std::forward<decltype(args)>(args)...); }
