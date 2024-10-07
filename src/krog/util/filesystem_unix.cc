#include "filesystem.h"

namespace kr::fs {

std::filesystem::path GetUserConfigDir() {
#if defined(__APPLE__) && defined(__MACH__)  // Mac OS
  return {"~/Library/Preferences"};
#else  // Unix like OS
  return {"~/.local/share"};
#endif
}

}  // namespace kr::fs
