//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include <yaml-cpp/yaml.h>

namespace kr {

class PersistentConfig {
 public:
  static bool Init(const std::string& path);

  static bool Save();

  static YAML::Node& GetRoot();

 private:
  static YAML::Node s_Root;
  static std::string s_Path;
};

}  // namespace kr
