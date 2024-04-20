//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include <span>
#include <mutex>
#include <array>
#include <vector>
#include <atomic>
#include <string>
#include <memory>
#include <fstream>
#include <utility>
#include <optional>
#include <algorithm>
#include <functional>
#include <unordered_map>
#include <thread>
#include <chrono>
#include <limits>

#ifdef WIN32
#include <windows.h>
#include <winioctl.h>
#include <shellapi.h>
#endif // WIN32

