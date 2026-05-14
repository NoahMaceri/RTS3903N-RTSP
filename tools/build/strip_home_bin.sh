#!/bin/sh
# Strip ELF binaries and shared objects in the home.bin staging tree.
# Called by the package_home_bin CMake target before mksquashfs runs.
#
# Args: $1 = staging dir, $2 = strip binary path
#
# The link step doesn't strip debug_info; on a non-stripped imagerd that
# accounts for ~80% of the binary size. Stripping is the difference between
# fitting in mtdblock4 (3 MiB) and not.
#
# CRITICAL: skip ELFs that are already "sstripped" (no section header).
# Running --strip-unneeded on those re-adds section headers in a layout
# the uClibc dynamic loader can't mmap (manifests as
# `can't map '/home/rt/lib/librtstream.so.2'`) and corrupts small ELF
# binaries badly enough that busybox sh tries to interpret them as shell
# scripts (manifests as `syntax error: EOF in backquote substitution`).
# Stock-vendored libs and binaries from the firmware dump are already
# minimized — leave them alone.
set -eu

stage="$1"
strip="$2"

should_strip() {
    info=$(file -b "$1" 2>/dev/null)
    case "$info" in
        *"no section header"*) return 1 ;;  # already sstripped, would corrupt
        ELF*)                  return 0 ;;  # normal ELF — safe to strip
        *)                     return 1 ;;  # not ELF (script, image, ...)
    esac
}

# Two passes: catch *.so* by name, then catch executables that don't end in
# .so. .ko's are skipped — kernel modules need their section headers; .sh
# / .script obviously aren't ELFs anyway but cheap belt-and-braces.
find -L "$stage" -type f \( -name '*.so' -o -name '*.so.*' \) \
    | while read -r f; do
    should_strip "$f" && "$strip" --strip-unneeded "$f" 2>/dev/null || true
done

find -L "$stage" -type f -perm -u+x ! -name '*.so' ! -name '*.so.*' \
    ! -name '*.ko' ! -name '*.sh' ! -name '*.script' | while read -r f; do
    should_strip "$f" && "$strip" --strip-unneeded "$f" 2>/dev/null || true
done
