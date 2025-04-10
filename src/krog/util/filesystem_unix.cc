#include "filesystem.h"

namespace kr::fs {

std::filesystem::path GetUserConfigDir() {
#if defined(__APPLE__) && defined(__MACH__)  // Mac OS
  return {std::filesystem::path(std::getenv("HOME")) / "Library/Preferences"};
#else  // Unix like OS
  return {std::filesystem::path(std::getenv("HOME")) / ".local/share"};
#endif
}

}  // namespace kr::fs
