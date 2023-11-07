//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "imguilayer.h"

#include "misc/imgui_spectrum.h"

#include <imgui.h>
#include <implot.h>
#include <backends/imgui_impl_sdl3.h>
#include <backends/imgui_impl_opengl3.h>

#include <SDL3/SDL.h>

namespace kr {

	 void ImGuiLayer::OnAttach() {
        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImPlot::CreateContext();
        ImGuiIO& io = ImGui::GetIO();
        (void) io;
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
        io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;         // Enable Docking
        io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;       // Enable Multi-Viewport / Platform Windows
        //io.ConfigViewportsNoAutoMerge = true;
        //io.ConfigViewportsNoTaskBarIcon = true;

        ImGui::Spectrum::Init();

        auto theme = SDL_GetSystemTheme();

        if (theme == SDL_SYSTEM_THEME_LIGHT) {
            ImGui::Spectrum::StyleColorsLight();
        } else {
            ImGui::Spectrum::StyleColorsDark();
        }

        const char* glsl_version = "#version 130";
        ImGui_ImplSDL3_InitForOpenGL(SDL_GL_GetCurrentWindow(), SDL_GL_GetCurrentContext());
        ImGui_ImplOpenGL3_Init(glsl_version);
    }

     void ImGuiLayer::OnDetach() {
        ImPlot::DestroyContext();
        ImGui_ImplOpenGL3_Shutdown();
        ImGui_ImplSDL3_Shutdown();
        ImGui::DestroyContext();
    }

     void ImGuiLayer::BeginUiUpdate() {
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplSDL3_NewFrame();
        ImGui::NewFrame();

        //ImGui::Spectrum::ShowStyleEditor(nullptr);
    }

     void ImGuiLayer::EndUiUpdate() {
        ImGui::Render();
    }

     void ImGuiLayer::OnWindowEvent(const SDL_Event* event) {
        ImGui_ImplSDL3_ProcessEvent(event);

        if (event->type == SDL_EVENT_SYSTEM_THEME_CHANGED) {
            if (SDL_GetSystemTheme() == SDL_SystemTheme::SDL_SYSTEM_THEME_LIGHT) {
                //ImGui::StyleColorsLight();
                ImGui::Spectrum::StyleColorsLight();
            } else {
                //ImGui::StyleColorsDark();
                ImGui::Spectrum::StyleColorsDark();
            }
        }
    }

     void ImGuiLayer::OnUpdate() {
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        if (ImGui::GetIO().ConfigFlags & ImGuiConfigFlags_ViewportsEnable) {
            SDL_Window* backup_current_window = SDL_GL_GetCurrentWindow();
            SDL_GLContext backup_current_context = SDL_GL_GetCurrentContext();
            ImGui::UpdatePlatformWindows();
            ImGui::RenderPlatformWindowsDefault();
            SDL_GL_MakeCurrent(backup_current_window, backup_current_context);
        }
    }

} // kr
