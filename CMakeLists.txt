#
# Created by Nikita Zarudniy on 6/29/2023.
#

cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD 20)

project(krog C CXX)

option(KR_BUILD_TESTS "" ON)
option(KR_USE_AV "Use FFmpeg-based tools (src/video)" OFF)
set(KR_APP_NAME "App" CACHE STRING "App name displayed in log")

if(CMAKE_RUNTIME_OUTPUT_DIRECTORY)
    set(KR_RUNTIME_OUTPUT_DIR "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
else()
    set(KR_RUNTIME_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}")
endif()

if (MSVC)
    string(REPLACE "/W3" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
endif ()

if (WIN32)
    add_definitions("-DUNICODE" "-D_UNICODE")
endif ()

include(cmake/Dependencies.cmake)

add_subdirectory(lib)
add_subdirectory(src)

if (KR_BUILD_TESTS)
    add_subdirectory(test)
endif ()
