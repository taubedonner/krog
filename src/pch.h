//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <fstream>
#include <functional>
#include <limits>
#include <memory>
#include <mutex>
#include <optional>
#include <span>
#include <string>
#include <thread>
#include <unordered_map>
#include <utility>
#include <vector>

#ifdef WIN32
#include <shellapi.h>
#include <windows.h>
#include <winioctl.h>
#endif  // WIN32
