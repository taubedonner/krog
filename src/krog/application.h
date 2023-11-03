//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once

#include "krog/export.h"

#include "krog/renderer/window.h"
#include "krog/events/windowevents.h"
#include "krog/ui/layer.h"
#include "krog/ui/imguilayer.h"

namespace kr {

    class KROG_API Application {
    public:
        explicit Application();

        ~Application();

        void Run();

        void AttachLayer(const std::shared_ptr<Layer>& layer);

        void DetachLayer(const std::shared_ptr<Layer>& layer);

        void DetachAllLayers();

        [[nodiscard]] auto GetWindow() const -> auto& { return m_Window; }

    private:
        void OnWindowCloseEvent(const WindowCloseEvent::Ptr&);

        std::unique_ptr<Window> m_Window;
        volatile bool m_IsRunning{true};
        std::vector<std::shared_ptr<Layer>> m_Layers;
        ImGuiLayer m_ImGuiLayer;
    };

	Application* CreateApp();

} // kr
