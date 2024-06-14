#
# Created by Nikita Zarudniy on 6/29/2023.
#

include_guard(GLOBAL)

include(${CMAKE_CURRENT_LIST_DIR}/CPM.cmake)

set(BUILD_SHARED_LIBS ON)

#### clang-format & cmake-format ####
CPMAddPackage(
  NAME ClangFormat.cmake
  GIT_TAG origin/master
  GITHUB_REPOSITORY taubedonner/Format.cmake
  OPTIONS 
      "FORMAT_SKIP_CMAKE YES"
      "FORMAT_SKIP_CLANG NO"
      #"CMAKE_FORMAT_EXCLUDE cmake/CPM.cmake"
)

#### GroupSourcesByFolder.cmake ####
CPMAddPackage("gh:taubedonner/GroupSourcesByFolder.cmake#origin/master")

#### FFmpeg ####
if (KR_USE_AV)
    # Check for portable (or Windows) FFmpeg instillation paths
    if ($ENV{FFMPEG_DIR})
        set(FFMPEG_ROOT $ENV{FFMPEG_DIR})
    elseif ($ENV{FFMPEG_ROOT})
        set(FFMPEG_ROOT $ENV{FFMPEG_ROOT})
    endif ()
    # Add FindFFMPEG.cmake location to run find_package
    list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR})
    set(ffmpeg_required_components avcodec avdevice avfilter avformat avutil swresample swscale)
    find_package(FFMPEG REQUIRED COMPONENTS ${ffmpeg_required_components})
    set(FFMPEG_TARGETS)
    foreach (component ${ffmpeg_required_components})
        string(PREPEND component "FFMPEG::")
        list(APPEND FFMPEG_TARGETS ${component})
    endforeach ()
endif ()

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
CPMAddPackage("gh:libsdl-org/SDL#8fe257b541777f554470c427bf6c297484d6cee9")


#### Eventpp ####
CPMAddPackage("gh:wqking/eventpp@0.1.2")


#### ImGui ####
CPMAddPackage(
        GITHUB_REPOSITORY ocornut/imgui
        VERSION 1.90.1-docking
        DOWNLOAD_ONLY True
)

#### ImPlot ####
CPMAddPackage(
        NAME implot
        GITHUB_REPOSITORY epezent/implot
        VERSION 0.16
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

target_include_directories(imgui_object
        PUBLIC
        ${implot_SOURCE_DIR})
target_sources(imgui_object
        PRIVATE
        ${implot_SOURCE_DIR}/implot.cpp
        ${implot_SOURCE_DIR}/implot_items.cpp
        ${implot_SOURCE_DIR}/implot_demo.cpp)

target_link_libraries(imgui_object PRIVATE SDL3::SDL3)
target_compile_definitions(imgui_object PUBLIC IMGUI_DEFINE_MATH_OPERATORS)
set_property(TARGET imgui_object PROPERTY POSITION_INDEPENDENT_CODE ON)

if (MSVC)
    target_compile_options(imgui_object PRIVATE /wd4005)
else ()
    target_compile_options(imgui_object PRIVATE -Wno-macro-redefined)
endif ()

add_library(ImGui::ImGui ALIAS imgui_object)

add_executable(binary_to_compressed ${imgui_SOURCE_DIR}/misc/fonts/binary_to_compressed_c.cpp)


#### IconFontCppHeaders ####
CPMAddPackage(
        NAME ifch
        GITHUB_REPOSITORY juliettef/IconFontCppHeaders
        GIT_TAG origin/main
        DOWNLOAD_ONLY True
)

add_library(ifch_interface INTERFACE)
target_include_directories(ifch_interface INTERFACE ${ifch_SOURCE_DIR})

add_library(IconFontCppHeaders ALIAS ifch_interface)
