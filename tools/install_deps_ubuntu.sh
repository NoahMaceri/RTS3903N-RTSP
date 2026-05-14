#!/bin/bash
# One-shot host setup for building this repo on Ubuntu 20.04+.
#
# What this installs and why:
#   gcc-multilib + libc6-dev:i386 + zlib1g-dev:i386
#       The rsdk MIPS toolchain ships 32-bit i386 ELFs for cc1 / cc1plus /
#       as / ld. Without i386 libc the inner compiler stages silently fail
#       (CMake's try_compile produces empty output and CheckTypeSize errors
#       out with "Cannot copy output executable ''").
#   autoconf, automake, libtool, pkg-config
#       Needed when -DBUILD_DEV_TOOLS=ON pulls in uftpd / libite / libuev /
#       dropbear sub-builds (autotools projects). Harmless otherwise.
#   squashfs-tools
#       Provides mksquashfs, required by the package_home_bin target that
#       builds the flashable home.bin image. Not needed for the SD-card
#       tarball.
set -euo pipefail
sudo dpkg --add-architecture i386
sudo apt update
sudo apt install -y \
    gcc-multilib \
    zlib1g-dev:i386 \
    libc6-dev:i386 \
    autoconf \
    automake \
    libtool \
    pkg-config \
    squashfs-tools
