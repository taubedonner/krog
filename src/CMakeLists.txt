#
# Created by Nikita Zarudniy on 6/29/2023.
#

find_package(OpenGL REQUIRED)

add_compile_definitions(SPDLOG_ACTIVE_LEVEL=SPDLOG_LEVEL_TRACE)

#TODO: Replace this with KROG_API exports
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

# Krog Shared Library Target

add_library(krog_shared SHARED)

target_precompile_headers(krog_shared PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/pch.h>")

target_compile_definitions(krog_shared PRIVATE KROG_EXPORT NOMINMAX)
target_include_directories(krog_shared PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(krog_shared PROPERTIES OUTPUT_NAME "libkrog")

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/includes/kr_appname.h.in ${CMAKE_CURRENT_BINARY_DIR}/generated/kr_appname.h)
target_include_directories(krog_shared PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/generated)

set(HEADERS
        krog/common.h
        krog/application.h
        krog/util/loggable.h
        krog/util/framesynchronizer.h
        krog/util/persistentconfig.h
        krog/util/threadwrapper.h
        krog/util/imageloader.h

        krog/renderer/formats.h
        krog/renderer/window.h
        krog/renderer/image.h
        krog/renderer/imagestream.h
        krog/renderer/texture.h
        krog/events/event.h
        krog/events/eventbus.h
        krog/events/windowevents.h

        krog/ui/layer.h
        krog/ui/imguilayer.h

        krog/video/capture.h
        $<$<BOOL:${KR_USE_FFMPEG}>:krog/video/avcapture.h>

        krog/ui/misc/imgui_spectrum.h)

set(SOURCES
        krog/application.cc
        krog/util/loggable.cc
        krog/util/framesynchronizer.cc
        krog/util/persistentconfig.cc
        krog/util/threadwrapper.cc

        krog/renderer/formats.cc
        krog/renderer/window.cc
        krog/renderer/image.cc
        krog/renderer/imagestream.cc
        krog/renderer/texture.cc
        krog/events/eventbus.cc

        krog/ui/layer.cc
        krog/ui/imguilayer.cc

        krog/video/capture.cc
        $<$<BOOL:${KR_USE_FFMPEG}>:krog/video/avcapture.cc>

        krog/ui/misc/imgui_spectrum.cc)

target_sources(krog_shared PRIVATE ${HEADERS} ${SOURCES})

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

add_library(Krog::Krog ALIAS krog_shared)

GroupSourcesByFolder(krog_shared)
