cmake_minimum_required(VERSION 3.10)

# =============================================================================
# Vendored onvif_simple_server (https://github.com/roleoroleo/onvif_simple_server,
# GPLv3) — see PATCHES.md for the local diffs.
#
# Builds two binaries:
#   - onvif_simple_server : SOAP daemon (Device, Media, PTZ, etc. services)
#   - wsd_simple_server   : WS-Discovery responder (UDP multicast, port 3702)
#
# We deliberately skip onvif_notify_server (events / motion alerts) for v1 —
# we don't currently have a motion-detection source on the camera.
# =============================================================================

# -----------------------------------------------------------------------------
# Tiny mbedtls build (only SHA-1 + base64 for WS-Security digest auth).
# The minimal config header `extras/mbedtls_config.h` enables exactly five
# defines, so the resulting libmbedcrypto.a is on the order of tens of KB.
# We turn off mbedtls's programs/tests so the build is fast and doesn't try
# to build sample binaries that fail to cross-link.
# -----------------------------------------------------------------------------
set(ENABLE_PROGRAMS            OFF CACHE BOOL "" FORCE)
set(ENABLE_TESTING             OFF CACHE BOOL "" FORCE)
set(USE_STATIC_MBEDTLS_LIBRARY ON  CACHE BOOL "" FORCE)
set(USE_SHARED_MBEDTLS_LIBRARY OFF CACHE BOOL "" FORCE)
set(MBEDTLS_FATAL_WARNINGS     OFF CACHE BOOL "" FORCE)
set(GEN_FILES                  OFF CACHE BOOL "" FORCE) # skip Python script regen

# pcre2 (built earlier in the root CMakeLists) flipped BUILD_SHARED_LIBS=ON
# in the cache. Without a local override, mbedtls's 3rdparty libs (everest,
# p256m) inherit it and end up as .so deps in our binary. We don't even use
# the ECDH curves they provide — force-static for everything in this scope.
set(BUILD_SHARED_LIBS OFF)
add_subdirectory(${CMAKE_SOURCE_DIR}/third-party/mbedtls
                 ${CMAKE_BINARY_DIR}/third-party/mbedtls
                 EXCLUDE_FROM_ALL)

# Tell mbedcrypto where our minimal config lives. Has to be set on the target
# itself (not via add_compile_definitions) so it doesn't leak into other libs.
target_compile_definitions(mbedcrypto PRIVATE
    MBEDTLS_CONFIG_FILE="${CMAKE_CURRENT_SOURCE_DIR}/extras/mbedtls_config.h"
)

# -----------------------------------------------------------------------------
# Source lists shared between the two binaries
# -----------------------------------------------------------------------------
set(_ezxml_SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/ezxml/ezxml.c
    ${CMAKE_CURRENT_SOURCE_DIR}/ezxml_wrapper.c
)

# -----------------------------------------------------------------------------
# onvif_simple_server — the SOAP daemon
# -----------------------------------------------------------------------------
add_executable(onvif_simple_server
    ${CMAKE_CURRENT_SOURCE_DIR}/onvif_simple_server.c
    ${CMAKE_CURRENT_SOURCE_DIR}/device_service.c
    ${CMAKE_CURRENT_SOURCE_DIR}/media_service.c
    ${CMAKE_CURRENT_SOURCE_DIR}/media2_service.c
    ${CMAKE_CURRENT_SOURCE_DIR}/ptz_service.c
    ${CMAKE_CURRENT_SOURCE_DIR}/events_service.c
    ${CMAKE_CURRENT_SOURCE_DIR}/deviceio_service.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fault.c
    ${CMAKE_CURRENT_SOURCE_DIR}/conf.c
    ${CMAKE_CURRENT_SOURCE_DIR}/utils.c
    ${CMAKE_CURRENT_SOURCE_DIR}/log.c
    ${_ezxml_SRC}
)
target_compile_definitions(onvif_simple_server PRIVATE
    HAVE_MBEDTLS=1
    MBEDTLS_CONFIG_FILE="${CMAKE_CURRENT_SOURCE_DIR}/extras/mbedtls_config.h"
    # HAVE_JSON_CONFIG intentionally NOT defined — see PATCHES.md
    # USE_ZLIB intentionally NOT defined — saves linking libz; clients that
    # gzip their HTTP requests will get a 4xx, which is fine for our use.
)
target_compile_options(onvif_simple_server PRIVATE
    -Os -ffunction-sections -fdata-sections
)
target_link_libraries(onvif_simple_server PRIVATE
    mbedcrypto
    zlog_s
    pthread
    rt
)
target_link_options(onvif_simple_server PRIVATE "-Wl,--gc-sections")

# -----------------------------------------------------------------------------
# onvif_conf_gen — boot-time INI generator. Reads our settings.json and
# writes /var/tmp/sd/onvif/onvif.conf so the user keeps editing settings.json
# (single source of truth) instead of duplicating values across two files.
# -----------------------------------------------------------------------------
add_executable(onvif_conf_gen ${CMAKE_CURRENT_SOURCE_DIR}/onvif_conf_gen.cpp)
target_compile_options(onvif_conf_gen PRIVATE -Os)

# -----------------------------------------------------------------------------
# wsd_simple_server — WS-Discovery responder. Doesn't use crypto for its
# own operation, but pulls in utils.c which #include's the configured
# crypto header at the top regardless of which symbols are referenced —
# so we still tell it HAVE_MBEDTLS and link mbedcrypto. Linker
# --gc-sections strips the unused code paths.
# -----------------------------------------------------------------------------
add_executable(wsd_simple_server
    ${CMAKE_CURRENT_SOURCE_DIR}/wsd_simple_server.c
    ${CMAKE_CURRENT_SOURCE_DIR}/utils.c
    ${CMAKE_CURRENT_SOURCE_DIR}/log.c
    ${_ezxml_SRC}
)
target_compile_definitions(wsd_simple_server PRIVATE
    HAVE_MBEDTLS=1
    MBEDTLS_CONFIG_FILE="${CMAKE_CURRENT_SOURCE_DIR}/extras/mbedtls_config.h"
)
target_compile_options(wsd_simple_server PRIVATE
    -Os -ffunction-sections -fdata-sections
)
target_link_libraries(wsd_simple_server PRIVATE
    mbedcrypto
    zlog_s
    pthread
    rt
)
target_link_options(wsd_simple_server PRIVATE "-Wl,--gc-sections")
