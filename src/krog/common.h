//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include "util/loggable.h"

namespace kr {

#pragma pack(push, 1)

template <typename T>
struct Vec2 {
  T x;
  T y;

  Vec2<T> operator+=(const Vec2<T> &b) { return {x += b.x, y += b.y}; }
};

typedef Vec2<float> Vec2f;

template <typename T>
T &SetBit(T &num, size_t bitPos, bool bitValue) {
  T mask = ~(1 << bitPos);
  return num = (T)((num & mask) | (bitValue << bitPos));
}

#pragma pack(pop)

}  // namespace kr

#ifdef KROG_EXPORT
#define KR_TRACE(...) SPDLOG_LOGGER_TRACE(kr::GetCoreLogger(), __VA_ARGS__)
#define KR_DEBUG(...) SPDLOG_LOGGER_DEBUG(kr::GetCoreLogger(), __VA_ARGS__)
#define KR_INFO(...) SPDLOG_LOGGER_INFO(kr::GetCoreLogger(), __VA_ARGS__)
#define KR_WARN(...) SPDLOG_LOGGER_WARN(kr::GetCoreLogger(), __VA_ARGS__)
#define KR_ERROR(...) SPDLOG_LOGGER_ERROR(kr::GetCoreLogger(), __VA_ARGS__)
#else
#define KR_TRACE(...)  // Deprecated
#define KR_DEBUG(...)  // Deprecated
#define KR_INFO(...)   // Deprecated
#define KR_WARN(...)   // Deprecated
#define KR_ERROR(...)  // Deprecated
#endif

#define KR_BIND_FN(fn) [this](auto &&...args) -> decltype(auto) { return this->fn(std::forward<decltype(args)>(args)...); }
#define KR_BIND_EXT_FN(objectPtr, fn) [objectPtr](auto &&...args) -> decltype(auto) { return objectPtr->fn(std::forward<decltype(args)>(args)...); }
