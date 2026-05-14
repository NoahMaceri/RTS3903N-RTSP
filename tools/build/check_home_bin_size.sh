#!/bin/sh
# Verifies a freshly built home.bin will fit in mtdblock4 (3 MiB on this
# board). mksquashfs returns 0 even when the output exceeds the target
# partition, so we have to gate explicitly. Called by the package_home_bin
# CMake target; takes the home.bin path as argv[1].
set -eu

bin="$1"
max=$((3 * 1024 * 1024))
sz=$(stat -c%s "$bin")
pct=$(( sz * 100 / max ))

if [ "$sz" -gt "$max" ]; then
    echo "ERROR: home.bin is $sz bytes; mtdblock4 is only $max bytes." >&2
    echo "       Trim libs/firmwares or move pieces to /backup." >&2
    exit 1
fi

echo "home.bin: $sz / $max bytes (${pct}% of mtdblock4)"
