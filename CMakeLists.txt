cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
# PreLoad.cmake should have ran before this file, load the cross-compiler toolchain
include(third-party/rsdk/enable_mips_uclibc.cmake)

project(RTS3903N_RTSP VERSION 0.4.1)

# handle ver.h.in
configure_file(
    ${CMAKE_SOURCE_DIR}/ver.h.in
    ${CMAKE_BINARY_DIR}/ver.h
)
include_directories(
        ${CMAKE_BINARY_DIR}
        include
)

# -- THIRD PARTY LIBRARIES --
# Live555
add_subdirectory(third-party/live555)
# zlog
add_subdirectory(third-party/zlog)
include_directories(${CMAKE_SOURCE_DIR}/third-party/zlog/src)
# extern_libs
add_subdirectory(third-party/rtscore)

# -- EXECUTABLES --
add_subdirectory(src/imager_streamer)
add_subdirectory(src/isp_ctrl)
add_subdirectory(src/isp_tool)
add_subdirectory(src/rtsp_server)
add_subdirectory(src/ptz_tool)
add_subdirectory(src/snapshot_server)

# pcre2 for lighttpd
set(BUILD_SHARED_LIBS ON CACHE BOOL "Build PCRE2 as shared libraries")
set(BUILD_STATIC_LIBS OFF CACHE BOOL "Do not build PCRE2 static libraries")
add_subdirectory(third-party/pcre2)
include_directories(${CMAKE_BINARY_DIR}/third-party/pcre2/interface)
link_directories(${CMAKE_BINARY_DIR}/third-party/pcre2)

# lighttpd
set(HAVE_PCRE2_H 1 CACHE INTERNAL "Have PCRE2 library")
set(HAVE_PCRE 1 CACHE INTERNAL "Have PCRE2 library")
add_subdirectory(third-party/lighttpd1.4)

add_dependencies(lighttpd pcre2-8-shared mod_cgi)
add_custom_target(${PROJECT_NAME}_tools COMMAND
        DEPENDS rtsp_server imager_streamer isp_tool ptz_tool snapshot isp_ctrl lighttpd
)


# -- PACKAGING --
add_custom_target(package_${PROJECT_NAME} COMMAND
        # if out folder exists, remove it
        COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}/out
        # create out folder
        COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/out
        COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/out/lib
        # -- libraries --
        COMMAND ${CMAKE_COMMAND} -E copy
        ${rtscore_ALL}
        ${CMAKE_BINARY_DIR}/out/lib
        COMMAND ${CMAKE_COMMAND} -E copy
        ${TOOLCHAIN_FOLDER}/lib/libstdc++.so.6
        ${CMAKE_BINARY_DIR}/out/lib
        COMMAND ${CMAKE_COMMAND} -E copy
        ${TOOLCHAIN_FOLDER}/lib/libatomic.so.1
        ${CMAKE_BINARY_DIR}/out/lib
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_BINARY_DIR}/third-party/live555/*.so
        ${CMAKE_BINARY_DIR}/out/lib
        # We have to rename some libraries to match the expected names
        COMMAND ${CMAKE_COMMAND} -E rename
        ${CMAKE_BINARY_DIR}/out/lib/librtsosd.so
        ${CMAKE_BINARY_DIR}/out/lib/librtsosd.so.1
        COMMAND ${CMAKE_COMMAND} -E rename
        ${CMAKE_BINARY_DIR}/out/lib/librtsio.so
        ${CMAKE_BINARY_DIR}/out/lib/librtsio.so.0
        COMMAND ${CMAKE_COMMAND} -E rename
        ${CMAKE_BINARY_DIR}/out/lib/libopus.so
        ${CMAKE_BINARY_DIR}/out/lib/libopus.so.0
        COMMAND ${CMAKE_COMMAND} -E rename
        ${CMAKE_BINARY_DIR}/out/lib/libsbc.so
        ${CMAKE_BINARY_DIR}/out/lib/libsbc.so.1
        COMMAND ${CMAKE_COMMAND} -E rename
        ${CMAKE_BINARY_DIR}/out/lib/librtsisp.so
        ${CMAKE_BINARY_DIR}/out/lib/librtsisp.so.1
        COMMAND ${CMAKE_COMMAND} -E rename
        ${CMAKE_BINARY_DIR}/out/lib/librtscrypt.so
        ${CMAKE_BINARY_DIR}/out/lib/librtscrypt.so.1
        COMMAND ${CMAKE_COMMAND} -E rename
        ${CMAKE_BINARY_DIR}/out/lib/libopencore-amrnb.so
        ${CMAKE_BINARY_DIR}/out/lib/libopencore-amrnb.so.0
        # -- rtsp_server --
        COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_BINARY_DIR}/src/rtsp_server/rtsp_server
            ${CMAKE_BINARY_DIR}/out
        # -- image_streamer --
        COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_BINARY_DIR}/src/imager_streamer/imager_streamer
            ${CMAKE_BINARY_DIR}/out
        # -- isp_ctrl (for CGI) --
        COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_BINARY_DIR}/src/isp_ctrl/isp_ctrl
            ${CMAKE_BINARY_DIR}/out
        # -- snapshot (for CGI) --
        COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_BINARY_DIR}/src/snapshot_server/snapshot
            ${CMAKE_BINARY_DIR}/out
        # -- pcre2-8-shared --
        COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_BINARY_DIR}/third-party/pcre2/libpcre2-8.so.0
            ${CMAKE_BINARY_DIR}/out/lib
        # -- lighttpd (HTTP server) --
        COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_BINARY_DIR}/third-party/lighttpd1.4/build/lighttpd
            ${CMAKE_BINARY_DIR}/out
        # -- mod_cgi --
        COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_BINARY_DIR}/third-party/lighttpd1.4/build/mod_cgi.so
            ${CMAKE_BINARY_DIR}/out/lib
        # -- sd_payload --
        COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${CMAKE_SOURCE_DIR}/sd_payload/
            ${CMAKE_BINARY_DIR}/out

        # Create a tar
        COMMAND ${CMAKE_COMMAND} -E tar cf ${CMAKE_BINARY_DIR}/${PROJECT_NAME}-${PROJECT_VERSION}.tar -- ${CMAKE_BINARY_DIR}/out
        # Clean up
        # COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}/out

        # Print a message indicating the package is ready
        COMMAND ${CMAKE_COMMAND} -E echo "Package created at ${CMAKE_BINARY_DIR}/out/${PROJECT_NAME}-${PROJECT_VERSION}.tar"
        DEPENDS ${PROJECT_NAME}_tools
)


