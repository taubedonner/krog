#pragma once

#include <physfs.h>

#include <filesystem>

namespace kr::fs {

std::filesystem::path GetUserConfigDir();

bool PhysFSInit();

bool PhysFSDeInit();

bool PhysFSMount(std::string_view source, std::string_view mountPoint = "/", bool append = true);

}  // namespace kr::fs
