# =============================================================================
# Packaging — produce home.bin, an xz-compressed squashfs sized for the 3 MiB
# mtdblock4 ("userdata") partition. Stock /etc/init.d/rcS mounts mtd4 at /home,
# then runs /home/app/init.sh, which is what we replace.
#
# Layout:
#   /home/homever                        version string
#   /home/app/                           our binaries, configs, ONVIF templates
#   /home/app/locallib/                  live555, pcre2, mod_cgi, libstdc++,
#                                        libatomic (the libs the stock firmware
#                                        does NOT ship)
#   /home/rt/ko/                         stock kernel modules + Yi extras
#   /home/rt/lib/                        stock Realtek runtime libs (verbatim)
#   /home/lib/{load,sc1245,sc2230,...}/  ISP firmware per sensor
#
# Flash recipe (from a telnet shell on the camera, after copying home.bin to
# the SD card or /tmp via uftpd):
#   killall watch_process watchdog cloud p2p_tnp mp4record oss rmm dispatch
#   umount -l /home
#   /backup/mtd_img 4 /tmp/home.bin
#   sync; reboot
# =============================================================================

# Output filename uses the v#_#_# scheme so multiple builds can sit
# alongside each other and the version is visible at-a-glance. The camera
# side is unaffected — flash_home_bin.sh always uploads to /tmp/home.bin.
string(REPLACE "." "_" _HOME_BIN_VER "${PROJECT_VERSION}")
set(HOME_BIN           ${CMAKE_BINARY_DIR}/${PROJECT_NAME}-v${_HOME_BIN_VER}.bin)
set(HOME_OUT           ${CMAKE_BINARY_DIR}/home_staging)
set(STOCK_BLOBS_DIR    ${CMAKE_SOURCE_DIR}/external/stock_blobs)
set(PAYLOAD_COMMON_DIR ${CMAKE_SOURCE_DIR}/payload/common)
set(PAYLOAD_HOME_DIR   ${CMAKE_SOURCE_DIR}/payload/home)
set(PAYLOAD_SD_DIR     ${CMAKE_SOURCE_DIR}/payload/sd)
set(HOME_LOCALLIB      ${HOME_OUT}/app/locallib)

# Libs that go into /home/app/locallib because the stock /home/rt/lib doesn't
# ship them. Toolchain libs + lighttpd's mod_cgi + the rtscore libs that are
# referenced by imagerd's DT_NEEDED but absent from /home/rt/lib (verified
# by readelf -d). Stock provides librtstream/camkit/isp/jpeg/osd2/v4l2/utils/
# geom/asound/h1encoder/aacenc/aec/bmp; we still need the rest.
set(HOME_LOCAL_LIBS
    ${TOOLCHAIN_FOLDER}/lib/libstdc++.so.6
    ${TOOLCHAIN_FOLDER}/lib/libatomic.so.1
    ${CMAKE_BINARY_DIR}/external/pcre2/libpcre2-8.so.0
    ${CMAKE_BINARY_DIR}/external/lighttpd1.4/build/mod_cgi.so
    ${CMAKE_SOURCE_DIR}/external/rtscore/rtsio/lib/librtsio.so
    ${CMAKE_SOURCE_DIR}/external/rtscore/rtscamkit/lib/librtsosd.so
    ${CMAKE_SOURCE_DIR}/external/rtscore/rtscrypt/lib/librtscrypt.so
    ${CMAKE_SOURCE_DIR}/external/rtscore/rtsmp3/lib/librtsmp3.so
    ${CMAKE_SOURCE_DIR}/external/rtscore/opus/lib/libopus.so
    ${CMAKE_SOURCE_DIR}/external/rtscore/sbc/lib/libsbc.so
    ${CMAKE_SOURCE_DIR}/external/rtscore/opencore-amrnb/lib/libopencore-amrnb.so
)

# Same SONAME-fixup that PKG_LIB_RENAMES does for the SD-card tarball — the
# rtscore .so files are vendored unversioned, but their DT_SONAME is a
# versioned name (e.g. librtsio.so contains SONAME=librtsio.so.0).
set(HOME_LIB_RENAMES
    COMMAND ${CMAKE_COMMAND} -E rename ${HOME_LOCALLIB}/librtsio.so          ${HOME_LOCALLIB}/librtsio.so.0
    COMMAND ${CMAKE_COMMAND} -E rename ${HOME_LOCALLIB}/librtsosd.so         ${HOME_LOCALLIB}/librtsosd.so.1
    COMMAND ${CMAKE_COMMAND} -E rename ${HOME_LOCALLIB}/librtscrypt.so       ${HOME_LOCALLIB}/librtscrypt.so.1
    COMMAND ${CMAKE_COMMAND} -E rename ${HOME_LOCALLIB}/libopus.so           ${HOME_LOCALLIB}/libopus.so.0
    COMMAND ${CMAKE_COMMAND} -E rename ${HOME_LOCALLIB}/libsbc.so            ${HOME_LOCALLIB}/libsbc.so.1
    COMMAND ${CMAKE_COMMAND} -E rename ${HOME_LOCALLIB}/libopencore-amrnb.so ${HOME_LOCALLIB}/libopencore-amrnb.so.0
)

# Optional dev-tools (dropbear SSH, uftpd, dropbearkey). Layout under
# /home/app/dev-tools/{sbin,bin,lib} mirrors the SD-card payload so the
# rpath baked into dropbear (/var/tmp/sd/dev-tools/lib/) keeps resolving —
# init.sh symlinks /var/tmp/sd → /home/app at boot. Skip dbclient (SSH
# client only, ~370K) and dropbearconvert (key format converter, niche).
set(HOME_DEV_TOOLS_CMD "")
if(BUILD_DEV_TOOLS)
    set(HOME_DEV_TOOLS_CMD
        COMMAND ${CMAKE_COMMAND} -E make_directory ${HOME_OUT}/app/dev-tools/sbin
        COMMAND ${CMAKE_COMMAND} -E make_directory ${HOME_OUT}/app/dev-tools/bin
        COMMAND ${CMAKE_COMMAND} -E make_directory ${HOME_OUT}/app/dev-tools/lib
        COMMAND ${CMAKE_COMMAND} -E copy ${DEV_TOOLS_OUT_DIR}/sbin/dropbear   ${HOME_OUT}/app/dev-tools/sbin/
        COMMAND ${CMAKE_COMMAND} -E copy ${DEV_TOOLS_OUT_DIR}/sbin/uftpd      ${HOME_OUT}/app/dev-tools/sbin/
        COMMAND ${CMAKE_COMMAND} -E copy ${DEV_TOOLS_OUT_DIR}/bin/dropbearkey ${HOME_OUT}/app/dev-tools/bin/
        COMMAND ${CMAKE_COMMAND} -E copy ${DEV_TOOLS_OUT_DIR}/lib/libcrypt.so.0 ${HOME_OUT}/app/dev-tools/lib/
    )
endif()

# Generate the /homever file at configure time (CMake's add_custom_target
# COMMAND syntax mangles inline `sh -c "echo ... > file"` constructs).
file(WRITE ${CMAKE_BINARY_DIR}/homever "RTS3903N_RTSP-${PROJECT_VERSION}\n")

add_custom_target(package_home_bin
    # Clean & make staging tree
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${HOME_OUT}
    COMMAND ${CMAKE_COMMAND} -E make_directory   ${HOME_OUT}/app
    COMMAND ${CMAKE_COMMAND} -E make_directory   ${HOME_LOCALLIB}
    COMMAND ${CMAKE_COMMAND} -E make_directory   ${HOME_OUT}/rt/ko
    COMMAND ${CMAKE_COMMAND} -E make_directory   ${HOME_OUT}/rt/lib
    COMMAND ${CMAKE_COMMAND} -E make_directory   ${HOME_OUT}/lib

    # Version string read by stock /backup/script/update.sh's version check.
    # Anything ≠ stock's "7.1.00.25A_..." passes the != test, so we just use
    # the project version. Generated by file(WRITE) at configure time.
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/homever ${HOME_OUT}/homever

    # Stock kernel modules + Yi-specific .ko's (copied alongside).
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${STOCK_BLOBS_DIR}/ko ${HOME_OUT}/rt/ko
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${PAYLOAD_SD_DIR}/Yi/ko ${HOME_OUT}/rt/ko

    # Stock Realtek runtime libs verbatim (preserves SONAME symlink chains).
    # cmake -E copy_directory follows symlinks in older versions; use cp -P.
    COMMAND cp -aP ${STOCK_BLOBS_DIR}/lib_realtek/. ${HOME_OUT}/rt/lib/

    # Trim libs we don't need at runtime. libfdk-aac (~600K) is the
    # alternative AAC encoder and nothing in our dependency chain links it
    # — librtstream pulls libaacenc (Realtek's ulaw-friendly one) instead.
    # Dropping it saves ~600K, which is the difference between fitting in
    # mtdblock4 and not.
    COMMAND ${CMAKE_COMMAND} -E rm -f
        ${HOME_OUT}/rt/lib/libfdk-aac.so
        ${HOME_OUT}/rt/lib/libfdk-aac.so.1
        ${HOME_OUT}/rt/lib/libfdk-aac.so.1.0.0

    # ISP firmwares per sensor — kernel/SDK auto-picks the right one. All five
    # cost ~1.2 MiB total which fits comfortably in the 3 MiB partition.
    COMMAND cp -aP ${STOCK_BLOBS_DIR}/lib_isp/. ${HOME_OUT}/lib/

    # App payload: shared bits (settings.json, zlog.conf, http/cgi-bin
    # wrappers, http/www/) staged under /home/app/, then home-specific
    # overlay (init.sh, default.script, network.ini, http/lighttpd.conf)
    # written on top.
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${PAYLOAD_COMMON_DIR}    ${HOME_OUT}/app
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${PAYLOAD_HOME_DIR}/app  ${HOME_OUT}/app

    # Compiled binaries.
    COMMAND ${CMAKE_COMMAND} -E copy ${PKG_BINARIES} ${HOME_OUT}/app

    # Yi board-config helper. Stock binary that insmods cpld_periph +
    # ssp_ms41909* with hw= and gpio= parameters parsed from /dev/mtdblock6
    # (vd1 factory data). Init.sh runs it before any other Yi-specific
    # insmod path. Pre-built and shipped with the repo.
    COMMAND ${CMAKE_COMMAND} -E copy
        ${PAYLOAD_SD_DIR}/Yi/load_cpld_ssp ${HOME_OUT}/app/

    # load_cpld_ssp has a hardcoded `popen("insmod /home/app/localko/...")`
    # path baked into the binary — it expects cpld_periph.ko / ssp_ms41909*.ko
    # under /home/app/localko/, NOT /home/rt/ko/ where we put the rest.
    # Symlink /home/app/localko → ../rt/ko (one .. to escape /app, then
    # rt/ko to land at /home/rt/ko).
    COMMAND ${CMAKE_COMMAND} -E create_symlink
        ../rt/ko ${HOME_OUT}/app/localko

    # Local libs (live555, pcre2, mod_cgi, libstdc++, libatomic, plus the
    # rtscore libs that aren't in stock /home/rt/lib). live555's output
    # isn't known at configure time so we pass the *.so glob — cmake -E
    # copy expands it at run time (same trick the SD-card target uses).
    COMMAND ${CMAKE_COMMAND} -E copy ${HOME_LOCAL_LIBS} ${HOME_LOCALLIB}
    COMMAND ${CMAKE_COMMAND} -E copy ${LIVE555_GLOB}    ${HOME_LOCALLIB}
    ${HOME_LIB_RENAMES}

    # Dev-tools, gated on BUILD_DEV_TOOLS (no-op when off).
    ${HOME_DEV_TOOLS_CMD}

    # ONVIF SOAP response templates + WS-Discovery templates.
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/wsd_files
        ${HOME_OUT}/app/wsd_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/device_service_files
        ${HOME_OUT}/app/device_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/media_service_files
        ${HOME_OUT}/app/media_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/media2_service_files
        ${HOME_OUT}/app/media2_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/ptz_service_files
        ${HOME_OUT}/app/ptz_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/imaging_service_files
        ${HOME_OUT}/app/imaging_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/events_service_files
        ${HOME_OUT}/app/events_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/deviceio_service_files
        ${HOME_OUT}/app/deviceio_service_files
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/external/onvif_simple_server/generic_files
        ${HOME_OUT}/app/generic_files

    # Strip every ELF in the staging tree. The link step doesn't strip
    # debug_info, which on a non-stripped imagerd is ~80% of the binary.
    # mtd4 is tight enough that this is the difference between fitting and
    # not.
    COMMAND ${CMAKE_SOURCE_DIR}/tools/build/strip_home_bin.sh
        ${HOME_OUT} ${TOOLCHAIN_FOLDER}/bin/rsdk-linux-strip

    # Squash. -all-root so file ownership doesn't leak the build user.
    # -comp xz matches mtdblock4's stock format. -b 131072 (128 KiB) also
    # matches; smaller blocks would compress slightly worse.
    COMMAND rm -f ${HOME_BIN}
    COMMAND mksquashfs ${HOME_OUT} ${HOME_BIN}
        -comp xz -b 131072
        -all-root -no-progress -no-recovery -noappend

    # Size check — mtd4 is 3 MiB. Anything bigger refuses to fit and would
    # corrupt the partition past its end. mksquashfs returns 0 even if the
    # output is too big for the target, so we have to gate on it ourselves.
    COMMAND ${CMAKE_SOURCE_DIR}/tools/build/check_home_bin_size.sh ${HOME_BIN}

    DEPENDS ${PROJECT_NAME}_tools
)
