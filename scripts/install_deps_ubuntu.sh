#!/bin/bash
sudo dpkg --add-architecture i386
sudo apt update
sudo apt-get install gcc-multilib
sudo apt install zlib1g-dev:i386 libc6-dev:i386
# Autotools toolchain — required for dev-tools (uftpd, libuev, libite) when
# configured with -DBUILD_DEV_TOOLS=ON. Harmless to install otherwise.
sudo apt install autoconf automake libtool pkg-config