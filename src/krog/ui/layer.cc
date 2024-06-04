//
// Created by Nikita Zarudniy on 6/29/2023.
//

#include "layer.h"

#include <utility>

namespace kr {

Layer::Layer(std::string name) : m_LayerName(std::move(name)) {}

Layer::~Layer() = default;

std::string Layer::GetName() { return m_LayerName; }

}  // namespace kr
