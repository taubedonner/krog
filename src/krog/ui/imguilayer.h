//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once

#include "krog/export.h"

#include "layer.h"

#include "krog/renderer/window.h"

namespace kr {

    class KROG_API ImGuiLayer : public Layer, public WindowEventListener {
    public:
        ImGuiLayer() : Layer("ImGui Layer") {}

        void OnAttach() override;

        void OnDetach() override;

        void OnUpdate() override;

        void BeginUiUpdate();

        void EndUiUpdate();

        void OnWindowEvent(const SDL_Event* event) override;
    };

} // kr
