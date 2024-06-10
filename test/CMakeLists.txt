#
# Created by Nikita Zarudniy on 6/29/2023.
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

# Copy shared libraries to the test folder
set(DEP_TARGETS SDL3::SDL3 Krog::Krog fmt::fmt spdlog::spdlog yaml-cpp)

foreach (dep ${DEP_TARGETS})
    list(APPEND DEP_TARGET_DLLS $<TARGET_FILE:${dep}>)
endforeach ()

add_custom_command(
    TARGET krog_test_layers_exec POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy ${DEP_TARGET_DLLS} ${CMAKE_CURRENT_BINARY_DIR}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
