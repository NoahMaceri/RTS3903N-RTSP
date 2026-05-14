#!/usr/bin/env bash
#
# flash_home_bin.sh — push a freshly built home.bin to a camera and reflash
# mtdblock4 in place. Replaces the manual sequence:
#
#   curl -T home.bin ftp://root@<ip>/tmp/home.bin
#   <ssh in>
#   killall imagerd ...
#   umount -l /home
#   /backup/mtd_img 4 /tmp/home.bin
#   sync; reboot
#
# Prerequisites on the camera:
#   - Booted into either the on-flash image (with -DBUILD_DEV_TOOLS=ON, so
#     uftpd + dropbear are running) or the SD-card hijack with dev-tools.
#   - /backup/mtd_img exists (stock recovery binary in mtd5 jffs2, which
#     we never touch).
#
# Usage:
#   ./tools/flash_home_bin.sh [user@]CAMERA_IP [path/to/home.bin]
#
# Defaults:
#   user                = root
#   home.bin location   = $REPO_ROOT/build_homebin/home.bin (else
#                         cmake-build-release/home.bin, then build/)
#
# Environment:
#   TELNET_PASSWORD     blank by default (stock root has no password)

set -euo pipefail

CAMERA="${1:-}"
if [ -z "$CAMERA" ]; then
    echo "usage: $0 [user@]CAMERA_IP [path/to/home.bin]" >&2
    exit 1
fi
HOST="${CAMERA##*@}"
USER_PART="${CAMERA%@*}"
[ "$USER_PART" = "$HOST" ] && USER_PART="root"

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
HOME_BIN="${2:-}"
if [ -z "$HOME_BIN" ]; then
    for candidate in \
        "$ROOT/cmake-build-release/home.bin" \
        "$ROOT/build/home.bin"; do
        if [ -f "$candidate" ]; then
            HOME_BIN="$candidate"
            break
        fi
    done
fi
if [ -z "$HOME_BIN" ] || [ ! -f "$HOME_BIN" ]; then
    echo "home.bin not found. Pass it as argv[2] or build it first:" >&2
    echo "    ninja -C build_homebin package_home_bin" >&2
    exit 1
fi

# mtd4 is 3 MiB. mksquashfs's check is at build time, but a stale home.bin
# from a too-big build could still be on disk — re-check before pushing.
SIZE=$(stat -c %s "$HOME_BIN" 2>/dev/null || stat -f %z "$HOME_BIN")
MAX=$((3 * 1024 * 1024))
if [ "$SIZE" -gt "$MAX" ]; then
    echo "home.bin is $SIZE bytes; mtd4 is $MAX. Refusing to flash." >&2
    exit 1
fi
echo ">>> home.bin: $HOME_BIN ($SIZE bytes, $((SIZE * 100 / MAX))% of mtd4)"

echo ">>> Uploading to ftp://${HOST}/tmp/home.bin..."
curl -sS -T "$HOME_BIN" "ftp://anonymous:@${HOST}/tmp/home.bin"

echo ">>> Flashing mtdblock4 + rebooting..."

# All remote commands as POSIX-sh (busybox-compatible).
#
# Order matters:
#   1. Kill the daemons that hold open files in /home (imagerd, wsd,
#      lighttpd). Leave dev-tools (dropbear/uftpd/telnetd) — they keep
#      our session alive long enough to flash + reboot.
#   2. `umount -l /home` is *lazy* — already-open files (live555, our
#      ssh shell) keep their fds; the mountpoint detaches from the
#      namespace so mtd_img can rewrite the underlying device.
#   3. mtd_img writes the squashfs to /dev/mtd4. Stock OTA's update.sh
#      uses the same call.
#   4. Backgrounded reboot with 2 s delay lets the session disconnect
#      cleanly first.
REMOTE_CMDS='set -e
echo "Stopping streaming daemons..."
killall imagerd 2>/dev/null || true
killall watchdog 2>/dev/null || true
killall wsd_simple_server 2>/dev/null || true
killall lighttpd 2>/dev/null || true
killall sntp 2>/dev/null || true
sleep 1
killall -9 imagerd 2>/dev/null || true
killall -9 wsd_simple_server 2>/dev/null || true
killall -9 lighttpd 2>/dev/null || true

echo "Detaching /home (lazy)..."
umount -l /home 2>/dev/null || true

echo "Writing mtd4..."
if ! /backup/mtd_img 4 /tmp/home.bin; then
    echo "FLASH FAILED -- DO NOT REBOOT until you reupload home.bin and retry"
    exit 1
fi
rm -f /tmp/home.bin
sync

echo "Rebooting in 2s..."
( sleep 2 && reboot ) >/dev/null 2>&1 &
exit 0'

if ssh -o BatchMode=yes \
       -o ConnectTimeout=5 \
       -o StrictHostKeyChecking=accept-new \
       "${USER_PART}@${HOST}" "$REMOTE_CMDS"; then
    echo "  reached camera via SSH"
elif command -v telnet >/dev/null 2>&1; then
    echo "  SSH unavailable; falling back to telnet root@${HOST}..."
    # Critical: REMOTE_CMDS ends with `exit 0`, so the remote shell
    # closes the session itself once mtd_img completes. The local pipe
    # MUST stay open until then — closing it sends EOF → telnet exits →
    # telnetd HUPs the shell → mtd_img dies mid-flash. The trailing
    # `sleep 180` is a generous buffer for mtd_img on a 3 MiB partition
    # over a slow SPI NOR (~30–60 s typical, plus some margin). The
    # remote's `exit 0` will close the connection well before this
    # timeout, ending telnet naturally — the sleep is just insurance.
    {
        sleep 1; echo root
        sleep 1; echo "${TELNET_PASSWORD:-}"
        sleep 1; echo "$REMOTE_CMDS"
        sleep 180
    } | telnet "$HOST" 23
else
    echo "  ERROR: SSH failed and no telnet client installed locally." >&2
    echo "         Install one (apt install telnet, brew install telnet, ...)" >&2
    echo "         or fix dropbear on the camera." >&2
    exit 1
fi

echo ">>> Reflash issued. Camera will reboot in ~2s."
echo ">>> Wait ~30s, then ping ${HOST} or check the UART console."
