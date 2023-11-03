#
# Created by Nikita Zarudniy on 29/06/2023.
#

add_library(glad_object OBJECT)

target_include_directories(glad_object PUBLIC include)
target_sources(glad_object PRIVATE src/glad.c)

if (WIN32)
    target_compile_definitions(glad_object PRIVATE _GLAD_WIN32)
elseif (LINUX)
    target_compile_definitions(glad_object PRIVATE _GLAD_X11)
endif()

add_library(Glad::Glad ALIAS glad_object)
