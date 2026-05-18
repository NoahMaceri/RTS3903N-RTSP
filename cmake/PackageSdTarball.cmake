# =============================================================================
# Packaging — produce ${PROJECT_NAME}-${VERSION}.tar containing:
#
#   /<binary>          imagerd, isp_ctrl, snapshot, lighttpd, etc.
#   /lib/*.so*         all required shared libs
#   /dev-tools/        only when BUILD_DEV_TOOLS=ON
#   /<payload/*>       settings.json, http/, wifi/, Yi/, zlog.conf, ...
# =============================================================================

set(PKG_OUT       ${CMAKE_BINARY_DIR}/out)
set(PKG_LIB       ${PKG_OUT}/lib)
set(PKG_TAR       ${CMAKE_BINARY_DIR}/${PROJECT_NAME}-${PROJECT_VERSION}.tar)
set(LIVE555_GLOB  ${CMAKE_BINARY_DIR}/external/live555/*.so)

# Binaries that land at the top level of the tarball.
set(PKG_BINARIES
    ${CMAKE_BINARY_DIR}/src/imagerd/imagerd
    ${CMAKE_BINARY_DIR}/src/isp_ctrl/isp_ctrl
    ${CMAKE_BINARY_DIR}/src/snapshot/snapshot
    ${CMAKE_BINARY_DIR}/src/sntp/sntp
    ${CMAKE_BINARY_DIR}/src/ptz_tool/ptz_tool      # used by config.sh `probe` gate
    ${CMAKE_BINARY_DIR}/src/cpld_info/cpld_info    # diagnostic: decode modprobe wiring
    ${CMAKE_BINARY_DIR}/external/onvif_simple_server/onvif_simple_server
    ${CMAKE_BINARY_DIR}/external/onvif_simple_server/wsd_simple_server
    ${CMAKE_BINARY_DIR}/src/onvif_conf_gen/onvif_conf_gen
    ${CMAKE_BINARY_DIR}/external/lighttpd1.4/build/lighttpd
)

# Shared libs that land in /lib/ alongside the rtscore set.
set(PKG_EXTRA_LIBS
    ${TOOLCHAIN_FOLDER}/lib/libstdc++.so.6
    ${TOOLCHAIN_FOLDER}/lib/libatomic.so.1
    ${CMAKE_BINARY_DIR}/external/pcre2/libpcre2-8.so.0
    ${CMAKE_BINARY_DIR}/external/lighttpd1.4/build/mod_cgi.so
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

    # SD-card payload: shared bits (settings.json, zlog.conf, http/cgi-bin
    # wrappers, http/www/) + SD-specific overlay (network.ini, wifi/, Yi/,
    # http/lighttpd.conf).
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/payload/common/ ${PKG_OUT}
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/payload/sd/     ${PKG_OUT}

    # WS-Discovery template XMLs — wsd_simple_server's -t flag points here
    # at runtime to find Hello.xml, Bye.xml, ProbeMatches.xml.
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/wsd_files
        ${PKG_OUT}/wsd_files

    # ONVIF SOAP response templates — onvif_simple_server reads these via
    # relative paths (e.g. "device_service_files/GetCapabilities.xml"), so
    # they must sit alongside the binary at /var/tmp/sd/. The dispatcher
    # scripts in /tmp/onvif/ cd into /var/tmp/sd/ before exec'ing the
    # binary so these resolve correctly.
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/device_service_files
        ${PKG_OUT}/device_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/media_service_files
        ${PKG_OUT}/media_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/media2_service_files
        ${PKG_OUT}/media2_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/ptz_service_files
        ${PKG_OUT}/ptz_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/events_service_files
        ${PKG_OUT}/events_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/deviceio_service_files
        ${PKG_OUT}/deviceio_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/generic_files
        ${PKG_OUT}/generic_files

    # Optional dev tools
    ${PKG_DEV_TOOLS_CMD}
        
    COMMAND tar cf ${PKG_TAR} -C ${PKG_OUT} .
    COMMAND ${CMAKE_COMMAND} -E echo "Package created at ${PKG_TAR}"

    DEPENDS ${PROJECT_NAME}_tools
)
