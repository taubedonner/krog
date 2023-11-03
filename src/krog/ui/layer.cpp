//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "layer.h"

#include <utility>

namespace kr {

    KROG_API Layer::Layer(std::string name) : m_LayerName(std::move(name)) {}

    KROG_API Layer::~Layer() = default;

    KROG_API std::string Layer::GetName() {
        return m_LayerName;
    }

} // kr
