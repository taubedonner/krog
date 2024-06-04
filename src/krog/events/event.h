//
// Created by Nikita Zarudniy on 6/29/2023.
//

#pragma once

#include <cstddef>
#include <memory>

namespace kr {

class Event {
 public:
  using Hash = std::size_t;
  using Ptr = std::shared_ptr<Event>;

  explicit Event(int priority = 0) : m_Priority(priority){};

  virtual ~Event() = 0;

  [[nodiscard]] auto GetHash() const -> Hash { return typeid(*this).hash_code(); }

  [[nodiscard]] auto GetPriority() const -> int { return m_Priority; };

  template <class T>
  [[nodiscard]] static constexpr auto GetHash() -> Hash {
    return typeid(T).hash_code();
  }

 private:
  int m_Priority;
};

}  // namespace kr
