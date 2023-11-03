//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "application.h"

#include "krog/util/persistentconfig.h"
#include "krog/ui/imguilayer.h"
#include "krog/events/eventbus.h"

#include <glad/glad.h>

namespace kr {
    KROG_API Application::Application() {
        WindowConfig windowConfig = {"KROG App"};

        PersistentConfig::Init("./config.yml");

        auto& conf = PersistentConfig::GetRoot();
        auto appNode = conf["application"];
        windowConfig.FpsLimit = appNode["fps_limit"].as<double>(300);
        windowConfig.IsFullscreen = appNode["fullscreen"].as<bool>(false);

        if (!windowConfig.IsFullscreen) {
            windowConfig.Size.x = appNode["width"].as<int>(1600);
            windowConfig.Size.y = appNode["height"].as<int>(900);
        }

        if (windowConfig.FpsLimit == 0) {
            windowConfig.SwapInterval = 1;
        } else if (windowConfig.FpsLimit < 0) {
            windowConfig.SwapInterval = -1;
        }

        m_Window = std::make_unique<Window>(windowConfig);

        EventBus::AppendListener<WindowCloseEvent>(KR_BIND_FN(OnWindowCloseEvent));
        m_ImGuiLayer.OnAttachApp(this);
        m_Window->AppendListener(&m_ImGuiLayer);
    }

    KROG_API void Application::Run() {
        while (m_IsRunning) {
            m_Window->BeginUpdate();
            m_ImGuiLayer.BeginUiUpdate();

            for (auto& layer : m_Layers) {
                layer->OnUiUpdate();
            }

            m_ImGuiLayer.EndUiUpdate();

            glViewport(0, 0, m_Window->GetWidth(), m_Window->GetHeight());
            glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            for (auto& layer : m_Layers) {
                layer->OnUpdate();
            }

            m_ImGuiLayer.OnUpdate();

            m_Window->EndUpdate();
        }

        DetachAllLayers();

        m_ImGuiLayer.OnDetach();
    }

    KROG_API void Application::OnWindowCloseEvent(const WindowCloseEvent::Ptr&) {
        m_IsRunning = false;
    }

    KROG_API void Application::AttachLayer(const std::shared_ptr<Layer>& layer) {
        KR_TRACE("Attaching layer \"{0}\" ({1})", layer->GetName(), fmt::ptr(layer.get()));
        m_Layers.push_back(layer);
        layer->OnAttachApp(this);
    }

    KROG_API void Application::DetachLayer(const std::shared_ptr<Layer>& layer) {
        auto it = std::find(m_Layers.begin(), m_Layers.end(), layer);
        if (it != m_Layers.end()) {
            KR_TRACE("Detaching layer \"{0}\" ({1})", layer->GetName(), fmt::ptr(layer.get()));
            layer->OnDetach();
            m_Layers.erase(it);
        }
    }

    KROG_API void Application::DetachAllLayers() {
        for (const auto& layer : m_Layers) {
            KR_TRACE("Detaching layer \"{0}\" ({1})", layer->GetName(), fmt::ptr(layer.get()));
            layer->OnDetach();
        }
    }

    KROG_API Application::~Application() {
        auto& conf = PersistentConfig::GetRoot();
        auto appNode = conf["application"];
        appNode["fps_limit"] = m_Window->GetFpsLimit();
        appNode["fullscreen"] = m_Window->IsFullscreen();
        appNode["width"] = m_Window->GetWidth();
        appNode["height"] = m_Window->GetHeight();

        PersistentConfig::Save();
    }

} // kr
