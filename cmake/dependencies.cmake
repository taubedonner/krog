#
# Created by Nikita Zarudniy on 06/29/2023.
#

include_guard(GLOBAL)

include(${CMAKE_CURRENT_LIST_DIR}/CPM.cmake)

#### yaml-cpp ####
CPMAddPackage("gh:jbeder/yaml-cpp#0.8.0")

#### Fmt ####
CPMAddPackage("gh:fmtlib/fmt#10.1.0")


#### Spdlog ####
CPMAddPackage(
        NAME spdlog
        VERSION 1.12.0
        GITHUB_REPOSITORY "gabime/spdlog"
        OPTIONS "SPDLOG_FMT_EXTERNAL On"
)


#### GLM ####
CPMAddPackage("gh:g-truc/glm#0.9.9.8")


#### SDL3 ####
CPMAddPackage("gh:libsdl-org/SDL#33c9eeec7cda9da3a97543ae70289ac365acf297")


#### Eventpp ####
CPMAddPackage("gh:wqking/eventpp@0.1.2")


#### ImGui ####
CPMAddPackage(
        GITHUB_REPOSITORY ocornut/imgui
        VERSION 1.89.9-docking
        DOWNLOAD_ONLY True
)

add_library(imgui_object OBJECT)
target_include_directories(imgui_object
        PUBLIC
        ${imgui_SOURCE_DIR}
        ${imgui_SOURCE_DIR}/backends
        PUBLIC
        ${imgui_SOURCE_DIR}/misc/cpp)
target_sources(imgui_object
        PRIVATE
        ${imgui_SOURCE_DIR}/imgui.cpp
        ${imgui_SOURCE_DIR}/imgui_demo.cpp
        ${imgui_SOURCE_DIR}/imgui_draw.cpp
        ${imgui_SOURCE_DIR}/imgui_tables.cpp
        ${imgui_SOURCE_DIR}/imgui_widgets.cpp
        PRIVATE
        ${imgui_SOURCE_DIR}/backends/imgui_impl_opengl3.cpp
        ${imgui_SOURCE_DIR}/backends/imgui_impl_sdl3.cpp
        PRIVATE
        ${imgui_SOURCE_DIR}/misc/cpp/imgui_stdlib.cpp)

target_link_libraries(imgui_object PRIVATE SDL3::SDL3)

target_compile_definitions(imgui_object PUBLIC IMGUI_DEFINE_MATH_OPERATORS)

add_library(ImGui::ImGui ALIAS imgui_object)

add_executable(binary_to_compressed ${imgui_SOURCE_DIR}/misc/fonts/binary_to_compressed_c.cpp)


#### ImPlot ####
CPMAddPackage(
        NAME implot
        GITHUB_REPOSITORY epezent/implot
        VERSION 0.16
        DOWNLOAD_ONLY True
)

add_library(implot_static STATIC)
target_include_directories(implot_static
        PUBLIC
        ${implot_SOURCE_DIR})
target_sources(implot_static
        PRIVATE
        ${implot_SOURCE_DIR}/implot.cpp
        ${implot_SOURCE_DIR}/implot_items.cpp
        ${implot_SOURCE_DIR}/implot_demo.cpp)

target_link_libraries(implot_static PUBLIC ImGui::ImGui)

add_library(ImPlot::ImPlot ALIAS implot_static)
