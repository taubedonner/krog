#
# Created by Nikita Zarudniy on 29/06/2023.
#

cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD 20)

project(krog C CXX)

option(KR_BUILD_TESTS "" ON)
option(KR_USE_FFMPEG "Try to load FFMpeg to use it in kr::AVCapture" OFF)

set(OUT_DIR_ ${CMAKE_BINARY_DIR}/out)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUT_DIR_}/bin CACHE PATH "" FORCE)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUT_DIR_}/lib CACHE PATH "" FORCE)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${OUT_DIR_}/lib CACHE PATH "" FORCE)
set(CMAKE_COMPILE_PDB_OUTPUT_DIRECTORY ${OUT_DIR_}/pdb CACHE PATH "" FORCE)
set(CMAKE_PDB_OUTPUT_DIRECTORY ${OUT_DIR_}/pdb CACHE PATH "" FORCE)

if (MSVC)
    string(REPLACE "/W3" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
endif ()

if (WIN32)
    add_definitions("-DUNICODE" "-D_UNICODE")
endif ()

include(cmake/dependencies.cmake)

add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)
