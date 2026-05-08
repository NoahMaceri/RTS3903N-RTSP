cmake_minimum_required(VERSION 3.10)

# PreLoad.cmake has already extracted the rsdk MIPS toolchain by the time we
# get here; this file pulls in the cross-compiler settings.
include(third-party/rsdk/enable_mips_uclibc.cmake)

project(RTS3903N_RTSP VERSION 0.4.1 LANGUAGES C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# When ON, the dev-tools/ subtree (uftpd + helpers) is built and bundled into
# the SD tarball under a "dev-tools/" subdir. Off by default — production
# images stay slim.
option(BUILD_DEV_TOOLS "Build optional development tools (uftpd, ...)" OFF)

# -----------------------------------------------------------------------------
# Generated headers
# -----------------------------------------------------------------------------
configure_file(
    ${CMAKE_SOURCE_DIR}/include/ver.h.in
    ${CMAKE_BINARY_DIR}/ver.h
)
include_directories(${CMAKE_BINARY_DIR} include)

# -----------------------------------------------------------------------------
# Third-party libraries
# -----------------------------------------------------------------------------
add_subdirectory(third-party/live555)

add_subdirectory(third-party/zlog)
include_directories(${CMAKE_SOURCE_DIR}/third-party/zlog/src)

# Realtek SDK (vendored — pre-built .so's + headers)
add_subdirectory(third-party/rtscore)

# pcre2 — built shared because lighttpd's mod_cgi dlopens it at runtime.
set(BUILD_SHARED_LIBS ON  CACHE BOOL "Build PCRE2 as shared libraries")
set(BUILD_STATIC_LIBS OFF CACHE BOOL "Do not build PCRE2 static libraries")
add_subdirectory(third-party/pcre2)
include_directories(${CMAKE_BINARY_DIR}/third-party/pcre2/interface)
link_directories(${CMAKE_BINARY_DIR}/third-party/pcre2)

# lighttpd (web UI + CGI for snapshots and ISP control)
set(HAVE_PCRE2_H 1 CACHE INTERNAL "Have PCRE2 library")
set(HAVE_PCRE   1 CACHE INTERNAL "Have PCRE2 library")
add_subdirectory(third-party/lighttpd1.4)
add_dependencies(lighttpd pcre2-8-shared mod_cgi)

# -----------------------------------------------------------------------------
# Project executables
# -----------------------------------------------------------------------------
add_subdirectory(src/imager_streamer)
add_subdirectory(src/rtsp_server)
add_subdirectory(src/isp_ctrl)
add_subdirectory(src/isp_tool)
add_subdirectory(src/snapshot_server)
add_subdirectory(src/ptz_tool)

# -----------------------------------------------------------------------------
# Optional dev tools
# -----------------------------------------------------------------------------
if(BUILD_DEV_TOOLS)
    add_subdirectory(dev-tools)
endif()

# -----------------------------------------------------------------------------
# Roll-up: every target that contributes to the SD tarball
# -----------------------------------------------------------------------------
set(SD_TARGETS
    rtsp_server
    imager_streamer
    isp_ctrl
    isp_tool
    snapshot
    ptz_tool
    lighttpd
)
if(BUILD_DEV_TOOLS)
    list(APPEND SD_TARGETS dev_tools)
endif()
add_custom_target(${PROJECT_NAME}_tools DEPENDS ${SD_TARGETS})

# =============================================================================
# Packaging — produce ${PROJECT_NAME}-${VERSION}.tar containing:
#
#   /<binary>          rtsp_server, imager_streamer, lighttpd, etc.
#   /lib/*.so*         all required shared libs
#   /dev-tools/        only when BUILD_DEV_TOOLS=ON
#   /<sd_payload/*>    settings.json, http/, wifi/, Yi/, zlog.conf, ...
# =============================================================================

set(PKG_OUT       ${CMAKE_BINARY_DIR}/out)
set(PKG_LIB       ${PKG_OUT}/lib)
set(PKG_TAR       ${CMAKE_BINARY_DIR}/${PROJECT_NAME}-${PROJECT_VERSION}.tar)
set(LIVE555_GLOB  ${CMAKE_BINARY_DIR}/third-party/live555/*.so)

# Binaries that land at the top level of the tarball.
set(PKG_BINARIES
    ${CMAKE_BINARY_DIR}/src/rtsp_server/rtsp_server
    ${CMAKE_BINARY_DIR}/src/imager_streamer/imager_streamer
    ${CMAKE_BINARY_DIR}/src/isp_ctrl/isp_ctrl
    ${CMAKE_BINARY_DIR}/src/snapshot_server/snapshot
    ${CMAKE_BINARY_DIR}/third-party/lighttpd1.4/build/lighttpd
)

# Shared libs that land in /lib/ alongside the rtscore set.
set(PKG_EXTRA_LIBS
    ${TOOLCHAIN_FOLDER}/lib/libstdc++.so.6
    ${TOOLCHAIN_FOLDER}/lib/libatomic.so.1
    ${CMAKE_BINARY_DIR}/third-party/pcre2/libpcre2-8.so.0
    ${CMAKE_BINARY_DIR}/third-party/lighttpd1.4/build/mod_cgi.so
)

# Realtek libs are vendored unversioned, but the camera's loader expects
# versioned names. Each line is one rename inside PKG_LIB.
set(PKG_LIB_RENAMES
    COMMAND ${CMAKE_COMMAND} -E rename ${PKG_LIB}/librtsosd.so         ${PKG_LIB}/librtsosd.so.1
    COMMAND ${CMAKE_COMMAND} -E rename ${PKG_LIB}/librtsio.so          ${PKG_LIB}/librtsio.so.0
    COMMAND ${CMAKE_COMMAND} -E rename ${PKG_LIB}/libopus.so           ${PKG_LIB}/libopus.so.0
    COMMAND ${CMAKE_COMMAND} -E rename ${PKG_LIB}/libsbc.so            ${PKG_LIB}/libsbc.so.1
    COMMAND ${CMAKE_COMMAND} -E rename ${PKG_LIB}/librtsisp.so         ${PKG_LIB}/librtsisp.so.1
    COMMAND ${CMAKE_COMMAND} -E rename ${PKG_LIB}/librtscrypt.so       ${PKG_LIB}/librtscrypt.so.1
    COMMAND ${CMAKE_COMMAND} -E rename ${PKG_LIB}/libopencore-amrnb.so ${PKG_LIB}/libopencore-amrnb.so.0
)

# Optional dev-tools copy. When BUILD_DEV_TOOLS=OFF this expands to nothing
# and the package layout is identical to before.
set(PKG_DEV_TOOLS_CMD "")
if(BUILD_DEV_TOOLS)
    set(PKG_DEV_TOOLS_CMD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${DEV_TOOLS_OUT_DIR} ${PKG_OUT}/dev-tools
    )
endif()

add_custom_target(package_${PROJECT_NAME}
    # Clean staging dir
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${PKG_OUT}
    COMMAND ${CMAKE_COMMAND} -E make_directory   ${PKG_LIB}

    # Shared libs into out/lib/
    COMMAND ${CMAKE_COMMAND} -E copy ${rtscore_ALL}    ${PKG_LIB}
    COMMAND ${CMAKE_COMMAND} -E copy ${PKG_EXTRA_LIBS} ${PKG_LIB}
    COMMAND ${CMAKE_COMMAND} -E copy ${LIVE555_GLOB}   ${PKG_LIB}
    ${PKG_LIB_RENAMES}

    # Binaries into out/
    COMMAND ${CMAKE_COMMAND} -E copy ${PKG_BINARIES} ${PKG_OUT}

    # SD card payload (settings.json, http/, wifi/, etc.)
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/sd_payload/ ${PKG_OUT}

    # Optional dev tools
    ${PKG_DEV_TOOLS_CMD}

    # Tar it up
    COMMAND ${CMAKE_COMMAND} -E tar cf ${PKG_TAR} -- ${PKG_OUT}
    COMMAND ${CMAKE_COMMAND} -E echo "Package created at ${PKG_TAR}"

    DEPENDS ${PROJECT_NAME}_tools
)
