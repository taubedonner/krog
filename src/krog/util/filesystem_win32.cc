#include <Windows.h>
#include <shlobj_core.h>

#include "filesystem.h"

namespace kr::fs {

std::filesystem::path GetUserConfigDir() {
  PWSTR path = nullptr;
  HRESULT h_res = SHGetKnownFolderPath(FOLDERID_RoamingAppData, 0, nullptr, &path);
  if (SUCCEEDED(h_res)) {
    std::wstring tmp(path);
    return std::filesystem::path{tmp.begin(), tmp.end()};
  }
  return {"."};  // Fallback to current path
}

}  // namespace kr::fs