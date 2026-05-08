cmake_minimum_required(VERSION 3.10)
include(ExternalProject)

# =============================================================================
# Optional development utilities, cross-compiled for the camera with the rsdk
# MIPS toolchain.
#
# Layout under ${CMAKE_CURRENT_BINARY_DIR}:
#   stage/  intermediate static libs + headers (libite, libuev) used by
#           downstream binaries during configure/link
#   out/    final installed binaries — picked up by the parent package target
#           and copied into the SD tarball under /dev-tools/
# =============================================================================

set(DEV_TOOLS_STAGE ${CMAKE_CURRENT_BINARY_DIR}/stage)
set(DEV_TOOLS_OUT   ${CMAKE_CURRENT_BINARY_DIR}/out)

# -----------------------------------------------------------------------------
# Cross-compile environment, shared by every autotools sub-project below
# -----------------------------------------------------------------------------
set(XC_HOST   mips-linux-uclibc)
set(XC_CFLAGS "-march=5281 -Os")
set(XC_ENV
    CC=${CMAKE_C_COMPILER}
    AR=${CMAKE_AR}
    RANLIB=${TOOLCHAIN_FOLDER}/bin/mips-linux-uclibc-ranlib
    STRIP=${CMAKE_STRIP}
)

# -----------------------------------------------------------------------------
# Helper: declare an autotools cross-compile sub-project.
#
# Runs autogen.sh in source if present (one-time pollution of generated files),
# then configures + builds out-of-tree under ${name}-build/ so make artefacts
# don't leak into the submodule. Projects that ship a pre-generated configure
# script (e.g. dropbear) skip the autogen.sh step automatically.
#
#   PREFIX <path>                    --prefix passed to configure / make install
#   STATIC_LIB                       shortcut for --enable-static --disable-shared
#   DEPENDS <targets>                ExternalProject targets to build first
#   EXTRA_CFLAGS <flags>             appended to the base CFLAGS
#   EXTRA_LDFLAGS <flags>            set as the LDFLAGS env var
#   EXTRA_ENV <k=v...>               extra environment vars (e.g. PKG_CONFIG_*)
#   EXTRA_CONFIGURE_FLAGS <flag...>  arbitrary additional ./configure args
#   BYPRODUCT <path>                 file produced by `make install`
# -----------------------------------------------------------------------------
function(dev_tools_autotools_project name)
    cmake_parse_arguments(P
        "STATIC_LIB"                                          # options
        "PREFIX;EXTRA_CFLAGS;EXTRA_LDFLAGS;BYPRODUCT"         # one-value
        "DEPENDS;EXTRA_ENV;EXTRA_CONFIGURE_FLAGS"             # multi-value
        ${ARGN}
    )

    set(_src ${CMAKE_CURRENT_SOURCE_DIR}/${name})

    # CFLAGS = base + caller addition (kept as one CMake token; CMake auto-
    # quotes when emitting the command, so embedded spaces are fine).
    set(_cflags "${XC_CFLAGS}")
    if(P_EXTRA_CFLAGS)
        string(APPEND _cflags " ${P_EXTRA_CFLAGS}")
    endif()

    # Translate optional args into the right CMake keyword fragments. Each
    # variable expands to nothing when the option is absent.
    set(_static_args   "")
    set(_ldflags_env   "")
    set(_depends_kw    "")
    set(_byproducts_kw "")
    set(_autogen_step  "")
    if(P_STATIC_LIB)
        set(_static_args --enable-static --disable-shared)
    endif()
    if(P_EXTRA_LDFLAGS)
        set(_ldflags_env LDFLAGS=${P_EXTRA_LDFLAGS})
    endif()
    if(P_DEPENDS)
        set(_depends_kw DEPENDS ${P_DEPENDS})
    endif()
    if(P_BYPRODUCT)
        set(_byproducts_kw BUILD_BYPRODUCTS ${P_BYPRODUCT})
    endif()
    if(EXISTS ${_src}/autogen.sh)
        # Trailing COMMAND keyword chains this onto the configure step below.
        set(_autogen_step
            ${CMAKE_COMMAND} -E chdir ${_src} ./autogen.sh
            COMMAND
        )
    endif()

    ExternalProject_Add(${name}
        SOURCE_DIR ${_src}
        BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/${name}-build
        ${_depends_kw}
        CONFIGURE_COMMAND
            ${_autogen_step}
            ${CMAKE_COMMAND} -E env
                ${XC_ENV}
                CFLAGS=${_cflags}
                ${_ldflags_env}
                ${P_EXTRA_ENV}
                ${_src}/configure
                    --host=${XC_HOST}
                    --prefix=${P_PREFIX}
                    ${_static_args}
                    ${P_EXTRA_CONFIGURE_FLAGS}
        BUILD_COMMAND   make
        INSTALL_COMMAND make install
        ${_byproducts_kw}
    )
endfunction()

# -----------------------------------------------------------------------------
# Static helper libraries (consumed by uftpd at link time)
# -----------------------------------------------------------------------------
dev_tools_autotools_project(libite
    PREFIX ${DEV_TOOLS_STAGE}
    STATIC_LIB
    BYPRODUCT ${DEV_TOOLS_STAGE}/lib/libite.a
)

dev_tools_autotools_project(libuev
    PREFIX ${DEV_TOOLS_STAGE}
    STATIC_LIB
    BYPRODUCT ${DEV_TOOLS_STAGE}/lib/libuev.a
)

# -----------------------------------------------------------------------------
# uftpd — TFTP/FTP server. Statically linked against libite/libuev so the
# resulting binary depends only on the camera's uClibc.
# -----------------------------------------------------------------------------
dev_tools_autotools_project(uftpd
    PREFIX ${DEV_TOOLS_OUT}
    DEPENDS libite libuev
    EXTRA_CFLAGS  "-I${DEV_TOOLS_STAGE}/include"
    EXTRA_LDFLAGS "-L${DEV_TOOLS_STAGE}/lib"
    EXTRA_ENV
        PKG_CONFIG_LIBDIR=${DEV_TOOLS_STAGE}/lib/pkgconfig
        PKG_CONFIG_PATH=${DEV_TOOLS_STAGE}/lib/pkgconfig
    BYPRODUCT ${DEV_TOOLS_OUT}/sbin/uftpd
)

# -----------------------------------------------------------------------------
# dropbear — small SSH server. Bundles its own crypto (libtomcrypt/libtommath
# inside the source tree), so no OpenSSL dependency. zlib + utmp/wtmp + syslog
# are disabled because the rsdk toolchain / camera don't ship them. Ships a
# pre-generated configure script — autogen.sh isn't invoked.
#
# The only remaining dynamic dep besides uClibc itself is libcrypt.so.0, which
# we bundle below into ${DEV_TOOLS_OUT}/lib/ and find via rpath at runtime.
# -----------------------------------------------------------------------------
set(DROPBEAR_RPATH "/var/tmp/sd/dev-tools/lib")
dev_tools_autotools_project(dropbear
    PREFIX ${DEV_TOOLS_OUT}
    # USE_DEV_PTMX: dropbear's configure test for /dev/ptmx is hardcoded to
    # *not* run when cross-compiling (configure line ~8714), so it falls back
    # to legacy BSD-style PTY probing of /dev/pty[a-z][0-9a-f] which doesn't
    # exist on this kernel. Force the preprocessor symbol on.
    EXTRA_CFLAGS  "-DUSE_DEV_PTMX=1"
    EXTRA_LDFLAGS "-Wl,-rpath=${DROPBEAR_RPATH}"
    EXTRA_CONFIGURE_FLAGS
        --disable-zlib
        --disable-syslog
        --disable-lastlog
        --disable-utmp
        --disable-utmpx
        --disable-wtmp
        --disable-wtmpx
        --disable-pututline
        --disable-pututxline
    BYPRODUCT ${DEV_TOOLS_OUT}/sbin/dropbear
)

# Copy libcrypt out of the toolchain sysroot into the dev-tools tarball so
# dropbear has a guaranteed-compatible libcrypt regardless of what's on the
# camera. Resolves the symlink at copy time and renames to the SONAME the
# linker recorded in the binary.
add_custom_command(
    OUTPUT ${DEV_TOOLS_OUT}/lib/libcrypt.so.0
    COMMAND ${CMAKE_COMMAND} -E make_directory ${DEV_TOOLS_OUT}/lib
    COMMAND ${CMAKE_COMMAND} -E copy
        ${TOOLCHAIN_FOLDER}/mips-linux-uclibc/lib/libcrypt-0.9.33.so
        ${DEV_TOOLS_OUT}/lib/libcrypt.so.0
    DEPENDS dropbear
    COMMENT "Bundling libcrypt.so.0 next to dropbear"
)
add_custom_target(dropbear_runtime_libs
    DEPENDS ${DEV_TOOLS_OUT}/lib/libcrypt.so.0
)

# -----------------------------------------------------------------------------
# Aggregate target the parent CMakeLists depends on. Also exports the output
# directory so the parent package step knows where to find binaries.
# -----------------------------------------------------------------------------
add_custom_target(dev_tools ALL
    DEPENDS uftpd dropbear dropbear_runtime_libs
)
set(DEV_TOOLS_OUT_DIR ${DEV_TOOLS_OUT} PARENT_SCOPE)
