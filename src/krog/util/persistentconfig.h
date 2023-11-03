//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once

#include "krog/export.h"

#include <yaml-cpp/yaml.h>

namespace kr {

    class KROG_API PersistentConfig {
    public:
        static bool Init(const std::string& path);

        static bool Save();

        static YAML::Node& GetRoot();

    private:
        static YAML::Node s_Root;
        static std::string s_Path;
    };

} // kr
