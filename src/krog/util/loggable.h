//
// Created by Nikita Zarudniy on 6/4/2024.
//

#pragma once

#include <spdlog/spdlog.h>

#include <filesystem>

namespace kr {

void RegisterLogger(std::shared_ptr<spdlog::logger> &logger); // TODO: Move to Application context

void SetLogFilePath(const std::filesystem::path &path); // TODO: Move to Application context

const std::shared_ptr<spdlog::logger> &GetCoreLogger(); // TODO: Move to Application context

class Loggable {
 public:
  explicit Loggable(std::string name);  // Create new logger with unique name

  explicit Loggable(const Loggable *loggable);  // Inherit existing logger for other class (abstract)

  virtual ~Loggable() = default;

  std::shared_ptr<spdlog::logger> GetLogger();

 protected:
  std::shared_ptr<spdlog::logger> logger{};
};

};  // namespace kr
