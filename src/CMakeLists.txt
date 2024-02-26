#
# Created by Nikita Zarudniy on 06/29/023.
#

find_package(OpenGL REQUIRED)

add_compile_definitions(SPDLOG_ACTIVE_LEVEL=SPDLOG_LEVEL_TRACE)

#TODO: Replace this with KROG_API exports
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

# Krog Shared Library Target

add_library(krog_shared SHARED)

target_precompile_headers(krog_shared PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/pch.h>")

target_compile_definitions(krog_shared PRIVATE KROG_EXPORT)
target_include_directories(krog_shared PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(krog_shared PROPERTIES OUTPUT_NAME "libkrog")

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/includes/kr_appname.h.in ${CMAKE_CURRENT_BINARY_DIR}/generated/kr_appname.h)
target_include_directories(krog_shared PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/generated)

target_sources(krog_shared PRIVATE
        krog/common.cpp
        krog/application.cpp
        krog/util/persistentconfig.cpp
        krog/util/threadwrapper.cpp
        krog/util/imageloader.cpp

        krog/renderer/formats.cc
        krog/renderer/window.cc
        krog/renderer/image.cc
        krog/renderer/imagestream.cc
        krog/renderer/texture.cc
        krog/events/event.cc
        krog/events/eventbus.cc
        krog/events/windowevents.cc

        krog/ui/layer.cpp
        krog/ui/imguilayer.cpp

        krog/video/capture.cpp
        $<$<BOOL:${KR_USE_FFMPEG}>:krog/video/avcapture.cpp>

        krog/ui/misc/imgui_spectrum.cpp)

target_link_libraries(krog_shared PUBLIC
        fmt::fmt
        yaml-cpp
        spdlog::spdlog
        eventpp::eventpp
        glm::glm
        Glad::Glad
        OpenGL::GL
        SDL3::SDL3
        ImGui::ImGui
        STB::Image
        IconFontCppHeaders
        $<$<BOOL:${KR_USE_FFMPEG}>:FFmpeg::libav>)

set_target_properties(krog_shared PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

set_target_properties(SDL3-shared PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

add_library(Krog::Krog ALIAS krog_shared)
