#include "filesystem.h"

namespace kr::fs {

bool PhysFSInit() { return PHYSFS_init(nullptr); }

bool PhysFSDeInit() { return PHYSFS_deinit(); }

bool PhysFSMount(std::string_view source, std::string_view mountPoint, bool append) { return PHYSFS_mount(source.data(), mountPoint.data(), append); }

}  // namespace kr::fs
