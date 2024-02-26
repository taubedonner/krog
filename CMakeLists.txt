#
# Created by Nikita Zarudniy on 29/06/2023.
#

cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD 20)

project(krog C CXX)

option(KR_BUILD_TESTS "" ON)
option(KR_USE_FFMPEG "Try to load FFMpeg to use it in kr::AVCapture" OFF)
set(KR_APP_NAME "App" CACHE STRING "App name displayed in log")

if (MSVC)
    string(REPLACE "/W3" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
endif ()

if (WIN32)
    add_definitions("-DUNICODE" "-D_UNICODE")
endif ()

include(cmake/dependencies.cmake)

add_subdirectory(lib)
add_subdirectory(src)

if (KR_BUILD_TESTS)
    add_subdirectory(test)
endif ()
