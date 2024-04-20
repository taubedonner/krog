//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "common.h"

#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/basic_file_sink.h"

#include "kr_appname.h"

#define INADDRSZ 4

namespace kr {

    int inet_pton4(const char *src, unsigned char *dst) {
        static const char digits[] = "0123456789";
        int saw_digit, octets, ch;
        unsigned char tmp[INADDRSZ], *tp;

        saw_digit = 0;
        octets = 0;
        tp = tmp;
        *tp = 0;
        while ((ch = *(src++)) != '\0') {
            const char *pch;

            pch = strchr(digits, ch);
            if (pch) {
                unsigned int val = *tp * 10 + (unsigned int) (pch - digits);

                if (saw_digit && *tp == 0)
                    return (0);
                if (val > 255)
                    return (0);
                *tp = (unsigned char) val;
                if (!saw_digit) {
                    if (++octets > 4)
                        return (0);
                    saw_digit = 1;
                }
            } else if (ch == '.' && saw_digit) {
                if (octets == 4)
                    return (0);
                *++tp = 0;
                saw_digit = 0;
            } else
                return (0);
        }
        if (octets < 4)
            return (0);
        if (dst)
            memcpy(dst, tmp, INADDRSZ);
        return (1);
    }

    static std::mutex s_InitMutex;
    static std::shared_ptr<spdlog::logger> s_Logger{nullptr};
    static std::shared_ptr<spdlog::logger> s_CoreLogger{nullptr};
    static std::vector<spdlog::sink_ptr> s_Sinks{};

    static void SetupSinks() {
        if (s_Sinks.empty()) {
            s_Sinks.emplace_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
            s_Sinks.emplace_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>("application.log", true));
            s_Sinks[0]->set_pattern("%^[%n] [%L %T PID:%P THR:%t] %v%$"); // stdout
            s_Sinks[1]->set_pattern("[%n] [%L %T PID:%P THR:%t] %v"); // file
        }
    }

    void RegisterLogger(std::shared_ptr<spdlog::logger> &logger) {
        SetupSinks();
        logger->sinks() = std::vector<spdlog::sink_ptr>(std::begin(s_Sinks), std::end(s_Sinks));

        if (auto found = spdlog::get(logger->name()); found) {
            logger = found;
            return;
        }
        spdlog::register_logger(logger);
    }


    const std::shared_ptr<spdlog::logger> &GetLogger() {
        if (!s_Logger) {
            std::lock_guard<std::mutex> lock(s_InitMutex);
            if (!s_Logger) {
#ifdef _WIN32
                SetConsoleOutputCP(CP_UTF8);
#endif

                SetupSinks();

                s_Logger = std::make_shared<spdlog::logger>(KR_APP_NAME, std::begin(s_Sinks), std::end(s_Sinks));
                s_Logger->set_level(spdlog::level::trace);
                s_Logger->flush_on(spdlog::level::trace);
                spdlog::register_logger(s_Logger);
            }
        }

        return s_Logger;
    }

    const std::shared_ptr<spdlog::logger> &GetCoreLogger() {
        if (!s_CoreLogger) {
            std::lock_guard<std::mutex> lock(s_InitMutex);
            if (!s_CoreLogger) {
#ifdef _WIN32
                SetConsoleOutputCP(CP_UTF8);
#endif

                SetupSinks();

                s_CoreLogger = std::make_shared<spdlog::logger>("Krog", std::begin(s_Sinks), std::end(s_Sinks));
                s_CoreLogger->set_level(spdlog::level::trace);
                s_CoreLogger->flush_on(spdlog::level::trace);
                spdlog::register_logger(s_CoreLogger);
            }
        }

        return s_CoreLogger;
    }

}
