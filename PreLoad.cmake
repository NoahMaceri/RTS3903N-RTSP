cmake_minimum_required(VERSION 3.10)

# Extract the RSDK toolchain if not already done
set(TOOLCHAIN_VER "rsdk-4.8.5-5281-EL-3.10-u0.9.33-m32fut-161202" CACHE STRING "RSDK toolchain version")

# Extract the source code
set(TOOLCHAIN_FOLDER "${CMAKE_SOURCE_DIR}/external/rsdk/${TOOLCHAIN_VER}" CACHE PATH "RSDK toolchain folder")
if(NOT EXISTS "${TOOLCHAIN_FOLDER}")
    message(STATUS "Extracting rsdk toolchain version ${TOOLCHAIN_VER}")
    file(ARCHIVE_EXTRACT
            INPUT "${TOOLCHAIN_FOLDER}.tar.gz"
            DESTINATION "${CMAKE_SOURCE_DIR}/external/rsdk/"
    )
    message(STATUS "rsdk toolchain extraction complete")
endif()
message(STATUS "RSDK toolchain version ${TOOLCHAIN_VER}")

# The rsdk toolchain's inner-stage binaries (cc1, cc1plus, as, ld) are
# 32-bit i386 ELFs dynamically linked against /lib/ld-linux.so.2. On hosts
# without i386 libc the GCC *driver* still runs (it's statically linked)
# but every inner exec silently fails — CMake's try_compile produces no
# output and CheckTypeSize errors out with the confusing
# "Cannot copy output executable ''" message.
#
# Catch this here with a clear pointer at the fix, before the user spends
# 20 minutes decoding try_compile failures.
set(_RSDK_CC1 "${TOOLCHAIN_FOLDER}/libexec/gcc/mips-linux-uclibc/4.8.5/cc1")
if(EXISTS "${_RSDK_CC1}")
    execute_process(
        COMMAND "${_RSDK_CC1}" --version
        RESULT_VARIABLE _RSDK_CC1_RC
        OUTPUT_QUIET
        ERROR_QUIET
    )
    if(NOT _RSDK_CC1_RC EQUAL 0)
        message(FATAL_ERROR
            "\nThe rsdk MIPS toolchain's inner cc1 binary failed to run on this host."
            "\nThis almost always means 32-bit (i386) library support is missing."
            "\n"
            "\nOn Ubuntu/Debian, fix it with:"
            "\n    sudo bash ${CMAKE_SOURCE_DIR}/tools/install_deps_ubuntu.sh"
            "\n"
            "\nThen wipe and reconfigure the build directory — CMake caches"
            "\nthe failed compiler probes:"
            "\n    rm -rf ${CMAKE_BINARY_DIR}"
            "\n"
            "\n(Detected by invoking ${_RSDK_CC1} --version, exit code ${_RSDK_CC1_RC}.)"
        )
    endif()
endif()
