//
// Created by Nikita Zarudniy on 6/4/2024.
//

#include "loggable.h"

#include "kr_appname.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"

#ifdef _WIN32
#include "Windows.h"
#endif

namespace kr {

static std::mutex s_InitMutex;
static std::shared_ptr<spdlog::logger> s_Logger{nullptr};
static std::shared_ptr<spdlog::logger> s_CoreLogger{nullptr};
static std::vector<spdlog::sink_ptr> s_Sinks{};

static void SetupSinks() {
  if (s_Sinks.empty()) {
    s_Sinks.emplace_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
    s_Sinks.emplace_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>("application.log", true));
    s_Sinks[0]->set_pattern("%^[%n] [%L %T PID:%P THR:%t] %v%$");  // stdout
    s_Sinks[1]->set_pattern("[%n] [%L %T PID:%P THR:%t] %v");      // file
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

Loggable::Loggable(std::string name) : logger(std::make_shared<spdlog::logger>(std::move(name))) {
  logger->set_level(spdlog::level::trace);
  logger->flush_on(spdlog::level::trace);
  RegisterLogger(logger);

  if (!logger) {
    GetCoreLogger()->critical("Failed to register logger \"{}\". Exiting.", name);
    std::terminate();
  }
}

}  // namespace kr