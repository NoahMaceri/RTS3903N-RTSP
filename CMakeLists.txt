cmake_minimum_required(VERSION 3.10)

# PreLoad.cmake has already extracted the rsdk MIPS toolchain by the time we
# get here; this file pulls in the cross-compiler settings.
include(external/rsdk/enable_mips_uclibc.cmake)

project(RTS3903N_RTSP VERSION 0.6.0 LANGUAGES C CXX)

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
    ${CMAKE_SOURCE_DIR}/src/common/ver.h.in
    ${CMAKE_BINARY_DIR}/ver.h
)
# ${CMAKE_BINARY_DIR}: the generated ver.h
# external/nlohmann_json: the vendored single-header JSON lib
include_directories(${CMAKE_BINARY_DIR} ${CMAKE_SOURCE_DIR}/external/nlohmann_json)

# -----------------------------------------------------------------------------
# Third-party libraries
# -----------------------------------------------------------------------------
add_subdirectory(external/live555)

add_subdirectory(external/zlog)
include_directories(${CMAKE_SOURCE_DIR}/external/zlog/src)

# Realtek SDK (vendored — pre-built .so's + headers)
add_subdirectory(external/rtscore)

# pcre2 — built shared because lighttpd's mod_cgi dlopens it at runtime.
set(BUILD_SHARED_LIBS ON  CACHE BOOL "Build PCRE2 as shared libraries")
set(BUILD_STATIC_LIBS OFF CACHE BOOL "Do not build PCRE2 static libraries")
add_subdirectory(external/pcre2)
include_directories(${CMAKE_BINARY_DIR}/external/pcre2/interface)
link_directories(${CMAKE_BINARY_DIR}/external/pcre2)

# lighttpd (web UI + CGI for snapshots and ISP control)
set(HAVE_PCRE2_H 1 CACHE INTERNAL "Have PCRE2 library")
set(HAVE_PCRE   1 CACHE INTERNAL "Have PCRE2 library")
if(CMAKE_CROSSCOMPILING)
    # Prevent lighttpd's pkg_check_modules(PCRE2 libpcre2-8) from finding the
    # host x86_64 libpcre2 and injecting -I/usr/include into the MIPS
    # cross-compile flags (Ubuntu 24.04 glibc headers are incompatible with
    # GCC 4.8.5 — __float128 / __TC__ mode errors). The global
    # include_directories() above already covers the in-tree pcre2 interface.
    set(PKG_CONFIG_EXECUTABLE "" CACHE FILEPATH "Disabled for cross-compile" FORCE)
endif()
add_subdirectory(external/lighttpd1.4)
add_dependencies(lighttpd pcre2-8-shared mod_cgi)

# -----------------------------------------------------------------------------
# Project executables
# -----------------------------------------------------------------------------
add_subdirectory(src/imagerd)
add_subdirectory(src/isp_ctrl)
add_subdirectory(src/isp_tool)
add_subdirectory(src/snapshot)
add_subdirectory(src/ptz_tool)
add_subdirectory(src/cpld_info)
add_subdirectory(src/sntp)
add_subdirectory(src/onvif_conf_gen)
# onvif_simple_server + wsd_simple_server are vendored upstream (GPLv3) plus
# our additions — see external/onvif_simple_server/PATCHES.md.
add_subdirectory(external/onvif_simple_server)

# -----------------------------------------------------------------------------
# Optional dev tools
# -----------------------------------------------------------------------------
if(BUILD_DEV_TOOLS)
    add_subdirectory(external/dev-tools)
endif()

# -----------------------------------------------------------------------------
# Roll-up: every target that contributes to the SD tarball
# -----------------------------------------------------------------------------
set(SD_TARGETS
    imagerd
    isp_ctrl
    isp_tool
    snapshot
    ptz_tool
    cpld_info
    sntp
    onvif_simple_server
    wsd_simple_server
    onvif_conf_gen
    lighttpd
)
if(BUILD_DEV_TOOLS)
    list(APPEND SD_TARGETS dev_tools)
endif()
add_custom_target(${PROJECT_NAME}_tools DEPENDS ${SD_TARGETS})

# -----------------------------------------------------------------------------
# Packaging — see cmake/Package*.cmake for the actual targets.
#   ninja package_RTS3903N_RTSP    → ${PROJECT_NAME}-${PROJECT_VERSION}.tar
#                                    (SD-card payload)
#   ninja package_home_bin         → home.bin, an xz-compressed squashfs
#                                    sized for the 3 MiB mtdblock4 partition
# -----------------------------------------------------------------------------
include(${CMAKE_SOURCE_DIR}/cmake/PackageSdTarball.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/PackageHomeBin.cmake)
