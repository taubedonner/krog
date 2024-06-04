#
# Created by Nikita Zarudniy on 6/29/2023.
#

if (KR_USE_FFMPEG)
    set(FFMPEG_DIR $ENV{FFMPEG_DIR})

    IF (NOT FFMPEG_DIR)
        message(FATAL_ERROR "FFmpeg install directory is not set. Add FFMPEG_DIR variable to your system environment")
    else ()
        file(TO_NATIVE_PATH "${FFMPEG_DIR}/bin" _FFMPEG_BIN_DIR)
        message(STATUS "You should add '${_FFMPEG_BIN_DIR}' to your system Path variable to access FFmpeg shared libraries")
    endif ()

    file(TO_NATIVE_PATH "${FFMPEG_DIR}/include" FFMPEG_INCLUDE_DIR)
    file(TO_NATIVE_PATH "${FFMPEG_DIR}/lib" FFMPEG_LIB_DIR)

    add_library(libav INTERFACE)
    target_include_directories(libav INTERFACE ${FFMPEG_INCLUDE_DIR})

    if (WIN32)
        message(STATUS "Linking FFmpeg lib files from '${FFMPEG_LIB_DIR}'")
        target_link_libraries(libav INTERFACE
                ${FFMPEG_LIB_DIR}\\avcodec.lib
                ${FFMPEG_LIB_DIR}\\avdevice.lib
                ${FFMPEG_LIB_DIR}\\avfilter.lib
                ${FFMPEG_LIB_DIR}\\avformat.lib
                ${FFMPEG_LIB_DIR}\\avutil.lib
                ${FFMPEG_LIB_DIR}\\postproc.lib
                ${FFMPEG_LIB_DIR}\\swresample.lib
                ${FFMPEG_LIB_DIR}\\swscale.lib)
    else ()
        message(FATAL_ERROR "FFmpeg CMake wrapper for this system is not yet implemented")
    endif ()

    add_library(FFmpeg::libav ALIAS libav)
else()
    message(STATUS "Krog will not use FFmpeg-dependent sources")
endif ()
