//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "imgui_spectrum.h"

#include "ttf_sfprotext.h"
#include "ttf_codicon.h"

#include "krog/common.h"

#include <fmt/format.h>
#include <imgui_internal.h>

namespace ImGui {

    namespace Spectrum {

        static Props props;
        static ImFont* fonts[2];

		 bool operator==(ImVec4& a, ImVec4& b) {
            return (ColorConvertFloat4ToU32(a) & ~IM_COL32_A_MASK) == (ColorConvertFloat4ToU32(b) & ~IM_COL32_A_MASK);
        }

        // This came from imgui_demo.cpp and adapted for Adobe Spectrum color palette (currently dark-only)
		 void ShowStyleEditor(bool* p_open) {
            if (ImGui::Begin("Spectrum Color Editor", p_open)) {
                ImGuiStyle& style = ImGui::GetStyle();
                static ImGuiStyle ref_saved_style = style;
                auto ref = &ref_saved_style;
                static int selectedPalette = 0;
                static const char* paletteNames[2] = {"Darkest", "Light"};
                static auto colorPalette = &Colors::Darkest.Values;

                static int output_dest = 0;
                static bool output_only_modified = true;
                if (ImGui::Button("Export")) {
                    if (output_dest == 0)
                        ImGui::LogToClipboard();
                    else
                        ImGui::LogToTTY();
                    ImGui::LogText("ImVec4* colors = ImGui::GetStyle().Colors;\n");
                    for (int i = 0; i < ImGuiCol_COUNT; i++) {
                        const ImVec4& col = style.Colors[i];
                        const char* name = ImGui::GetStyleColorName(i);
                        auto foundPreview = std::find_if(Colors::Darkest.Values.begin(), Colors::Darkest.Values.end(),
                                                         [&](auto pl) { return pl.second == style.Colors[i]; });
                        if (!output_only_modified || memcmp(&col, &ref->Colors[i], sizeof(ImVec4)) != 0) {
                            std::string preview = (foundPreview == Colors::Darkest.Values.end())
                                                  ? fmt::format("colors[ImGuiCol_{}]{:>{}} ImVec4({:.2f}f, {:.2f}f, {:.2f}f, {:.2f}f);\n", name, "=",
                                                                23 - (int) strlen(name), col.x, col.y, col.z, col.w)
                                                  : fmt::format("colors[ImGuiCol_{}]{:>{}} Darkest(DARKEST_{});\n", name, "=", 23 - (int) strlen(name),
                                                                foundPreview->first);
                            ImGui::LogText("%s", preview.c_str());
                            KR_DEBUG(preview);
                        }
                    }
                    ImGui::LogFinish();
                }
                ImGui::SameLine();
                ImGui::SetNextItemWidth(120);
                ImGui::Combo("##output_type", &output_dest, "To Clipboard\0To TTY\0");
                ImGui::SameLine();
                ImGui::Checkbox("Only Modified Colors", &output_only_modified);

                ImGui::SetNextItemWidth(120);
                if (ImGui::BeginCombo("Palette", paletteNames[selectedPalette])) {
                    if (ImGui::Selectable(paletteNames[0])) {
                        selectedPalette = 0;
                        colorPalette = &Colors::Darkest.Values;
                    }

                    if (ImGui::Selectable(paletteNames[1])) {
                        selectedPalette = 1;
                        colorPalette = &Colors::Light.Values;
                    }

                    ImGui::EndCombo();
                }

                static ImGuiTextFilter filter;
                filter.Draw("Filter colors", ImGui::GetFontSize() * 16);

                ImGui::BeginChild("##colors", ImVec2(0, 0), true, ImGuiWindowFlags_NavFlattened);
                ImGui::PushItemWidth(-160);
                for (int i = 0; i < ImGuiCol_COUNT; i++) {
                    const char* name = ImGui::GetStyleColorName(i);
                    if (!filter.PassFilter(name))
                        continue;
                    ImGui::PushID(i);
                    auto cid = fmt::format("##colorb_{}", i);


                    auto foundPreview = std::find_if(colorPalette->begin(), colorPalette->end(), [&](auto pl) { return pl.second == style.Colors[i]; });
                    auto preview = foundPreview == colorPalette->end() ? "" : foundPreview->first;

                    ImGui::SetNextItemWidth(180);
                    if (ImGui::BeginCombo("##paletteSelector", preview)) {
                        size_t cplid = 0;
                        for (auto& pl: *colorPalette) {
                            auto pcid = fmt::format("{}_cpl_{}", cid, cplid);
                            ImGui::ColorButton(pcid.c_str(), pl.second);
                            ImGui::SameLine();
                            if (ImGui::Selectable(pl.first)) {
                                style.Colors[i] = pl.second;
                            }
                            cplid++;
                        }
                        ImGui::EndCombo();
                    }
                    ImGui::SameLine();
                    ImGui::ColorButton(cid.c_str(), style.Colors[i]);
                    if (memcmp(&style.Colors[i], &ref->Colors[i], sizeof(ImVec4)) != 0) {
                        ImGui::SameLine(0.0f, style.ItemInnerSpacing.x);
                        if (ImGui::Button("Save")) { ref->Colors[i] = style.Colors[i]; }
                        ImGui::SameLine(0.0f, style.ItemInnerSpacing.x);
                        if (ImGui::Button("Revert")) { style.Colors[i] = ref->Colors[i]; }
                    }
                    ImGui::SameLine(0.0f, style.ItemInnerSpacing.x);
                    ImGui::TextUnformatted(name);
                    ImGui::PopID();
                }
                ImGui::PopItemWidth();
                ImGui::EndChild();

                ImGui::End();
            }
        }

		 void Init(float fontSize) {
            auto& io = ImGui::GetIO();
            auto& style = ImGui::GetStyle();

            style.FramePadding = {8.0f, 3.0f};

            style.GrabMinSize = 16;
            style.WindowBorderSize = 1;
            style.ChildBorderSize = 1;
            style.PopupBorderSize = 1;
            style.FrameBorderSize = 1;
            style.TabBorderSize = 1;

            style.WindowRounding = 6.0f;
            style.ChildRounding = 6.0f;
            style.FrameRounding = 6.0f;
            style.PopupRounding = 6.0f;
            style.ScrollbarRounding = 9.0f;
            style.GrabRounding = 6.0f;
            style.TabRounding = 6.0f;

            style.WindowTitleAlign = {0.5f, 0.5f};

            props.FontSize = fontSize;
            props.Padding = style.FramePadding;
            props.WindowPadding = style.WindowPadding;
            props.IconSize = { 20.0f, props.FontSize };
            props.ButtonMinSize = { ((props.Padding.x) + props.IconSize.x), ((props.Padding.y * 2.0f) + props.IconSize.y) };

            // Default font

            ImFontConfig config;
            io.Fonts->AddFontFromMemoryCompressedTTF(
                    TTF_SFPROTEXT_compressed_data,
                    TTF_SFPROTEXT_compressed_size,
                    props.FontSize, &config,
                    io.Fonts->GetGlyphRangesCyrillic());

            ImFontConfig config2;
            config2.MergeMode = true;
            config2.GlyphOffset = {-4.0f, 3.25f};
            config2.GlyphMinAdvanceX = props.IconSize.x;
            config2.GlyphMaxAdvanceX = props.IconSize.x;
            static const ImWchar iconRanges[] = { ICON_MIN_CI, ICON_MAX_CI, 0 };
            fonts[(int)Font::Default] = io.Fonts->AddFontFromMemoryCompressedTTF(
                    TTF_CODICON_compressed_data,
                    TTF_CODICON_compressed_size,
                    props.FontSize, &config2,
                    iconRanges);

            // Large font
            ImFontConfig config3;
            config3.GlyphOffset = {-1.0f, -2.0f};
            fonts[(int)Font::Large] = io.Fonts->AddFontFromMemoryCompressedTTF(
                    TTF_CODICON_compressed_data,
                    TTF_CODICON_compressed_size,
                    props.FontSize * 2.0f, &config3,
                    iconRanges);
        }

		 void StyleColorsDark() {
            using namespace Colors;

            auto colors = ImGui::GetStyle().Colors;

            colors[ImGuiCol_Text] = Darkest(GRAY900);
            colors[ImGuiCol_TextDisabled] = Darkest(GRAY500);
            colors[ImGuiCol_WindowBg] = Darkest(GRAY75);
            colors[ImGuiCol_ChildBg] = Darkest(GRAY75);
            colors[ImGuiCol_PopupBg] = Darkest(GRAY75);
            colors[ImGuiCol_Border] = Darkest(GRAY200);
            //colors[ImGuiCol_BorderShadow]          = Darkest(GRAY50);
            colors[ImGuiCol_FrameBg] = Darkest(GRAY100);
            colors[ImGuiCol_FrameBgHovered] = Darkest(GRAY200);
            colors[ImGuiCol_FrameBgActive] = Darkest(GRAY200);
            colors[ImGuiCol_TitleBg] = Darkest(GRAY100);
            colors[ImGuiCol_TitleBgActive] = Darkest(SEAFOAM200);
            auto titleBgCollapsed = Darkest(GRAY100);
            titleBgCollapsed.w = 0.75;
            colors[ImGuiCol_TitleBgCollapsed] = titleBgCollapsed;
            colors[ImGuiCol_MenuBarBg] = Darkest(GRAY100);
            colors[ImGuiCol_ScrollbarBg] = Darkest(GRAY75);
            colors[ImGuiCol_ScrollbarGrab] = Darkest(GRAY300);
            colors[ImGuiCol_ScrollbarGrabHovered] = Darkest(GRAY400);
            colors[ImGuiCol_ScrollbarGrabActive] = Darkest(GRAY400);
            colors[ImGuiCol_CheckMark] = Darkest(SEAFOAM600);
            colors[ImGuiCol_SliderGrab] = Darkest(SEAFOAM400);
            colors[ImGuiCol_SliderGrabActive] = Darkest(SEAFOAM500);
            colors[ImGuiCol_Button] = Darkest(GRAY200);
            colors[ImGuiCol_ButtonHovered] = Darkest(GRAY300);
            colors[ImGuiCol_ButtonActive] = Darkest(GRAY200);
            colors[ImGuiCol_Header] = Darkest(GRAY200);
            colors[ImGuiCol_HeaderHovered] = Darkest(SEAFOAM400);
            colors[ImGuiCol_HeaderActive] = Darkest(SEAFOAM500);
            colors[ImGuiCol_Separator] = Darkest(GRAY200);
            colors[ImGuiCol_SeparatorHovered] = Darkest(GRAY300);
            colors[ImGuiCol_SeparatorActive] = Darkest(GRAY300);
            colors[ImGuiCol_ResizeGrip] = Darkest(GRAY100);
            colors[ImGuiCol_ResizeGripHovered] = Darkest(GRAY300);
            colors[ImGuiCol_ResizeGripActive] = Darkest(GRAY300);
            colors[ImGuiCol_Tab] = Darkest(SEAFOAM100);
            colors[ImGuiCol_TabHovered] = Darkest(SEAFOAM300);
            colors[ImGuiCol_TabActive] = Darkest(SEAFOAM400);
            colors[ImGuiCol_TabUnfocused] = Darkest(GRAY100);
            colors[ImGuiCol_TabUnfocusedActive] = Darkest(SEAFOAM300);
            colors[ImGuiCol_DockingPreview] = Darkest(SEAFOAM200);
            colors[ImGuiCol_DockingEmptyBg] = Darkest(GRAY50);
            colors[ImGuiCol_PlotLines] = Darkest(GRAY500);
            colors[ImGuiCol_PlotLinesHovered] = Darkest(RED700);
            colors[ImGuiCol_PlotHistogram] = Darkest(CELERY500);
            colors[ImGuiCol_PlotHistogramHovered] = Darkest(CELERY700);
            colors[ImGuiCol_TableHeaderBg] = Darkest(GRAY100);
            colors[ImGuiCol_TableBorderStrong] = Darkest(GRAY300);
            colors[ImGuiCol_TableBorderLight] = Darkest(GRAY300);
            colors[ImGuiCol_TableRowBg] = Darkest(GRAY75);
            colors[ImGuiCol_TableRowBgAlt] = Darkest(GRAY100);
            colors[ImGuiCol_TextSelectedBg] = Darkest(SEAFOAM200);
            colors[ImGuiCol_DragDropTarget] = Darkest(SEAFOAM500);
            colors[ImGuiCol_NavHighlight] = Darkest(SEAFOAM500);
            //colors[ImGuiCol_NavWindowingHighlight] = Darkest(GRAY800);
            //colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
            colors[ImGuiCol_ModalWindowDimBg] = Darkest(GRAY400);

            props.IsDark = true;
        }

		 void StyleColorsLight() {
            using namespace Colors;

            auto colors = ImGui::GetStyle().Colors;

            colors[ImGuiCol_Text] = Light(GRAY900);
            colors[ImGuiCol_TextDisabled] = Light(GRAY500);
            colors[ImGuiCol_WindowBg] = Light(GRAY75);
            colors[ImGuiCol_ChildBg] = Light(GRAY75);
            colors[ImGuiCol_PopupBg] = Light(GRAY75);
            colors[ImGuiCol_Border] = Light(GRAY200);
            //colors[ImGuiCol_BorderShadow] = Light(GRAY50);
            colors[ImGuiCol_FrameBg] = Light(GRAY100);
            colors[ImGuiCol_FrameBgHovered] = Light(GRAY200);
            colors[ImGuiCol_FrameBgActive] = Light(GRAY200);
            colors[ImGuiCol_TitleBg] = Light(GRAY200);
            colors[ImGuiCol_TitleBgActive] = Light(GRAY300);
            auto titleBgCollapsed = Light(GRAY100);
            titleBgCollapsed.w = 0.75;
            colors[ImGuiCol_TitleBgCollapsed] = titleBgCollapsed;
            colors[ImGuiCol_MenuBarBg] = Light(GRAY100);
            colors[ImGuiCol_ScrollbarBg] = Light(GRAY75);
            colors[ImGuiCol_ScrollbarGrab] = Light(GRAY300);
            colors[ImGuiCol_ScrollbarGrabHovered] = Light(GRAY400);
            colors[ImGuiCol_ScrollbarGrabActive] = Light(GRAY400);
            colors[ImGuiCol_CheckMark] = Light(BLUE600);
            colors[ImGuiCol_SliderGrab] = Light(BLUE400);
            colors[ImGuiCol_SliderGrabActive] = Light(BLUE500);
            colors[ImGuiCol_Button] = Light(GRAY200);
            colors[ImGuiCol_ButtonHovered] = Light(GRAY300);
            colors[ImGuiCol_ButtonActive] = Light(GRAY200);
            colors[ImGuiCol_Header] = Light(GRAY200);
            colors[ImGuiCol_HeaderHovered] = Light(BLUE300);
            colors[ImGuiCol_HeaderActive] = Light(BLUE400);
            colors[ImGuiCol_Separator] = Light(GRAY200);
            colors[ImGuiCol_SeparatorHovered] = Light(GRAY300);
            colors[ImGuiCol_SeparatorActive] = Light(GRAY300);
            colors[ImGuiCol_ResizeGrip] = Light(GRAY100);
            colors[ImGuiCol_ResizeGripHovered] = Light(GRAY300);
            colors[ImGuiCol_ResizeGripActive] = Light(GRAY300);
            colors[ImGuiCol_Tab] = Light(BLUE100);
            colors[ImGuiCol_TabHovered] = Light(BLUE300);
            colors[ImGuiCol_TabActive] = Light(BLUE400);
            colors[ImGuiCol_TabUnfocused] = Light(GRAY100);
            colors[ImGuiCol_TabUnfocusedActive] = Light(BLUE300);
            colors[ImGuiCol_DockingPreview] = Light(BLUE200);
            colors[ImGuiCol_DockingEmptyBg] = Light(GRAY50);
            colors[ImGuiCol_PlotLines] = Light(GRAY500);
            colors[ImGuiCol_PlotLinesHovered] = Light(RED700);
            colors[ImGuiCol_PlotHistogram] = Light(CELERY500);
            colors[ImGuiCol_PlotHistogramHovered] = Light(CELERY700);
            colors[ImGuiCol_TableHeaderBg] = Light(GRAY100);
            colors[ImGuiCol_TableBorderStrong] = Light(GRAY300);
            colors[ImGuiCol_TableBorderLight] = Light(GRAY300);
            colors[ImGuiCol_TableRowBg] = Light(GRAY75);
            colors[ImGuiCol_TableRowBgAlt] = Light(GRAY100);
            colors[ImGuiCol_TextSelectedBg] = Light(BLUE200);
            colors[ImGuiCol_DragDropTarget] = Light(BLUE500);
            colors[ImGuiCol_NavHighlight] = Light(BLUE500);
            //colors[ImGuiCol_NavWindowingHighlight] = Light(GRAY800);
            //colors[ImGuiCol_NavWindowingDimBg]     = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
            colors[ImGuiCol_ModalWindowDimBg] = Light(GRAY400);

            props.IsDark = false;
        }

		 const Props& GetProps() {
            return props;
        }

		 ImFont* GetFont(Font font) {
            auto idx = static_cast<int>(font);
            return fonts[idx];
        }

    } // ImGui::Spectrum

	 bool ColoredButton(const char* label, const ImVec4& bgColor, const ImVec4& fgColor, const ImVec2& size) {
        //ImGuiStyle& style = GetStyle();
        auto bgHoveredColor = ImVec4{ bgColor.x - 0.1f, bgColor.y - 0.1f, bgColor.z - 0.1f, bgColor.w };
        auto bgActiveColor = ImVec4{ bgColor.x - 0.2f, bgColor.y - 0.2f, bgColor.z - 0.2f, bgColor.w };

        PushStyleColor(ImGuiCol_Button, bgColor);
        PushStyleColor(ImGuiCol_ButtonHovered, bgHoveredColor);
        PushStyleColor(ImGuiCol_ButtonActive, bgActiveColor);
        PushStyleColor(ImGuiCol_Text, fgColor);
        bool pressed = Button(label, size);
        PopStyleColor(4);

        return pressed;
    }

	 bool DisablingButton(const char* label, bool disabled, const ImVec2& size) {
        ImGuiStyle& style = GetStyle();

        if (disabled) {
            auto btnColor = style.Colors[ImGuiCol_TextDisabled];
            btnColor.w = 0.1f;
            PushStyleColor(ImGuiCol_Text, style.Colors[ImGuiCol_TextDisabled]);
            PushStyleColor(ImGuiCol_Button, btnColor);
        }

        PushItemFlag(ImGuiItemFlags_Disabled, disabled);
        bool pressed = Button(label, size);
        PopItemFlag();

        if (disabled) {
            PopStyleColor(2);
        }

        return pressed;
    }

	 bool DisablingColoredButton(const char* label, const ImVec4& bgColor, const ImVec4& fgColor, bool disabled, const ImVec2& size) {
        ImGuiStyle& style = GetStyle();
        auto bgHoveredColor = ImVec4{ bgColor.x - 0.1f, bgColor.y - 0.1f, bgColor.z - 0.1f, bgColor.w };
        auto bgActiveColor = ImVec4{ bgColor.x - 0.2f, bgColor.y - 0.2f, bgColor.z - 0.2f, bgColor.w };
        auto bc = disabled ? style.Colors[ImGuiCol_ScrollbarGrab] : bgColor;
        auto fc = disabled ? style.Colors[ImGuiCol_TextDisabled] : fgColor;

        PushStyleColor(ImGuiCol_Button, bc);
        PushStyleColor(ImGuiCol_ButtonHovered, bgHoveredColor);
        PushStyleColor(ImGuiCol_ButtonActive, bgActiveColor);
        PushStyleColor(ImGuiCol_Text, fgColor);

        PushItemFlag(ImGuiItemFlags_Disabled, disabled);
        bool pressed = Button(label, size);
        PopItemFlag();

        PopStyleColor(4);

        return pressed;
    }

  	 void SeparatorV() {
        ImGuiContext& g = *GImGui;
        ImGuiWindow* window = g.CurrentWindow;
        if (window->SkipItems) return;
        ImGuiSeparatorFlags flags = ImGuiSeparatorFlags_Vertical;
        SeparatorEx(flags, 1.0f);
    }

} // ImGui

namespace ImPlot {

	 void PlotTextColored(const ImVec4& color, const char* text, double x, double y, const ImVec2& pixel_offset, ImPlotTextFlags flags) {
        ImPlot::PushStyleColor(ImPlotCol_InlayText, color);
        PlotText(text, x, y, pixel_offset, flags);
        ImPlot:PopStyleColor();
    }

} // ImPlot
