#
# Created by Nikita Zarudniy on 06/29/023.
#

find_package(OpenGL REQUIRED)

add_compile_definitions(SPDLOG_ACTIVE_LEVEL=SPDLOG_LEVEL_TRACE)


# Krog Static Library Target

add_library(krog_static STATIC)
target_precompile_headers(krog_static PRIVATE pch.h)
target_compile_definitions(krog_static PRIVATE KROG_EXPORT)
target_include_directories(krog_static PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(krog_static PROPERTIES OUTPUT_NAME "libkrog")

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/includes/kr_appname.h.in ${CMAKE_CURRENT_BINARY_DIR}/generated/kr_appname.h)
target_include_directories(krog_static PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/generated)

target_sources(krog_static PRIVATE
        krog/common.cpp
        krog/application.cpp
        krog/util/persistentconfig.cpp
        krog/util/threadwrapper.cpp

        krog/renderer/formats.cc
        krog/renderer/window.cc
        krog/renderer/image.cc
        krog/renderer/imagestream.cc
        krog/events/event.cc
        krog/events/eventbus.cc
        krog/events/windowevents.cc

        krog/ui/layer.cpp
        krog/ui/imguilayer.cpp

        krog/video/capture.cpp
        $<$<BOOL:${KR_USE_FFMPEG}>:krog/video/avcapture.cpp>

        krog/ui/misc/imgui_spectrum.cpp)

target_link_libraries(krog_static PUBLIC
        fmt::fmt
        yaml-cpp
        spdlog::spdlog
        eventpp::eventpp
        glm::glm
        Glad::Glad
        OpenGL::GL
        SDL3::SDL3
        #ImGui::ImGui
        ImPlot::ImPlot
        STB::Image
        $<$<BOOL:${KR_USE_FFMPEG}>:FFmpeg::libav>)

add_library(Krog::Krog ALIAS krog_static)
