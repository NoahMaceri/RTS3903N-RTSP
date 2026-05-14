#!/bin/bash
sudo dpkg --add-architecture i386
sudo apt update
sudo apt-get install gcc-multilib
sudo apt install zlib1g-dev:i386 libc6-dev:i386
# Autotools toolchain — required for dev-tools (uftpd, libuev, libite) when
# configured with -DBUILD_DEV_TOOLS=ON. Harmless to install otherwise.
sudo apt install autoconf automake libtool pkg-config
# squashfs-tools — required for the package_home_bin target which builds the
# flashable home.bin image. Not needed for the SD-card tarball.
sudo apt install squashfs-tools