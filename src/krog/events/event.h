//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once

#include "krog/export.h"

namespace kr {

class KROG_API Event {
 public:
  using Hash = std::size_t;
  using Ptr = std::shared_ptr<Event>;

  explicit Event(int priority = 0) : priority_(priority) {};

  virtual ~Event() = 0;

  [[nodiscard]] auto GetHash() const -> Hash { return typeid(*this).hash_code(); }

  [[nodiscard]] auto GetPriority() const -> int { return priority_; };

  template<class T>
  [[nodiscard]] static constexpr auto GetHash()
  -> Hash { return typeid(T).hash_code(); }

 private:
  int priority_;
};

} // kr
