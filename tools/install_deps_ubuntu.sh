#!/bin/bash
sudo dpkg --add-architecture i386
sudo apt update
sudo apt install -y gcc-multilib zlib1g-dev:i386 libc6-dev:i386 autoconf automake libtool pkg-config squashfs-tools