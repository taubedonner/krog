#
# Created by Nikita Zarudniy on 06/29/2023.
#

if (NOT ${CMAKE_BUILD_TYPE} STREQUAL "Debug")
    if (MSVC)
        set(SUBSYSTEM_LINKER_OPTIONS /SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup)
    else ()
        set(SUBSYSTEM_LINKER_OPTIONS -mwindows)
    endif ()
endif ()

# Krog Layers Test Executable

add_executable(krog_test_layers_exec)
target_sources(krog_test_layers_exec PRIVATE layers_entry.cc)
target_link_libraries(krog_test_layers_exec PRIVATE Krog::Krog)
