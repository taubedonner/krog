//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once


#include <spdlog/spdlog.h>

#include <utility>

namespace kr {

#pragma pack(push, 1)

    template<typename T>
    struct Vec2 {
        T x;
        T y;

        Vec2<T> operator+=(const Vec2<T> &b) {
            return {x += b.x, y += b.y};
        }
    };

    typedef Vec2<float> Vec2f;

    template<typename T>
    T &SetBit(T &num, size_t bitPos, bool bitValue) {
        T mask = ~(1 << bitPos);
        return num = (T) ((num & mask) | (bitValue << bitPos));
    }

#pragma pack(pop)


    int inet_pton4(const char *src, unsigned char *dst);

    void RegisterLogger(const std::shared_ptr<spdlog::logger>& logger);

    const std::shared_ptr<spdlog::logger> &GetLogger();

    const std::shared_ptr<spdlog::logger> &GetCoreLogger();

    class Loggable {
    public:
        explicit Loggable(std::string name) : logger(std::make_shared<spdlog::logger>(std::move(name))) {
            logger->set_level(spdlog::level::trace);
            logger->flush_on(spdlog::level::trace);
            RegisterLogger(logger);

            if (!logger) {
                GetCoreLogger()->critical("Failed to register logger \"{}\". Exiting.", name);
                std::terminate();
            }
        }

        virtual ~Loggable() = default;

    protected:
        std::shared_ptr<spdlog::logger> logger{};
    };

    class FrameSynchronizer {
    public:
        explicit FrameSynchronizer(double fps = 300.0) {
            m_NextTimePoint = std::chrono::steady_clock::now();
            SetFps(fps);
        }

        void BeginFrame() {}

        void EndFrameAndSleep() {
            if (m_IsUnlimited) return;
            m_NextTimePoint += m_FrameTime;
            std::this_thread::sleep_until(m_NextTimePoint);
        }

        void SetFps(double fps) {
            if (fps <= 0 || fps == std::numeric_limits<double>::max()) {
               m_IsUnlimited = true;
            } else {
                m_FrameTime = std::chrono::duration<double>(1.0 / fps);
            }
        }

    private:
        bool m_IsUnlimited{false};
        std::chrono::duration<double> m_FrameTime{1.0};
        std::chrono::time_point<std::chrono::steady_clock, decltype(m_FrameTime)> m_NextTimePoint{};
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
