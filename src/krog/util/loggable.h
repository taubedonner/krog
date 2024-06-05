//
// Created by Nikita Zarudniy on 6/4/2024.
//

#pragma once

#include <spdlog/spdlog.h>

namespace kr {

void RegisterLogger(std::shared_ptr<spdlog::logger> &logger);

const std::shared_ptr<spdlog::logger> &GetLogger();

const std::shared_ptr<spdlog::logger> &GetCoreLogger();

class Loggable {
 public:
  explicit Loggable(std::string name);  // Create new logger with unique name

  explicit Loggable(const Loggable *loggable);  // Inherit existing logger for other class (abstract)

  virtual ~Loggable() = default;

 protected:
  std::shared_ptr<spdlog::logger> logger{};
};

};  // namespace kr
