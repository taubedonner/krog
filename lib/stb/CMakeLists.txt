#
# Created by Nikita Zarudniy on 29/06/2023.
#

add_library(stb_image_object OBJECT)
target_include_directories(stb_image_object PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_sources(stb_image_object PRIVATE stb_image.c)

add_library(STB::Image ALIAS stb_image_object)
