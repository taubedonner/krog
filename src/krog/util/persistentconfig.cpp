//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "persistentconfig.h"

#include "krog/common.h"

namespace kr {

    YAML::Node PersistentConfig::s_Root;

    std::string PersistentConfig::s_Path;


     bool PersistentConfig::Init(const std::string& path) {
        s_Path = path;

        try {
            s_Root = YAML::LoadFile(path);
        } catch(YAML::ParserException& e) {
            KR_ERROR("[PersistentConfig] Failed to parse configuration file (\"{}\"): {}", path, e.msg);
            return false;
        } catch (YAML::BadFile& e) {
            KR_INFO("[PersistentConfig] Configuration file was not loaded. File not found (\"{}\")", path);
        }

        return true;
    }

     bool PersistentConfig::Save() {
        if (s_Path.empty()) {
            KR_ERROR("[PersistentConfig] Could not save configuration. Path is not set");
            return false;
        }

        std::ofstream fout(s_Path);
        fout << s_Root;

        return true;
    }

     YAML::Node& PersistentConfig::GetRoot() {
        return s_Root;
    }

} // kr
