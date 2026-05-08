#!/usr/bin/env bash
#
# dev_update.sh — push freshly-built binaries / libs / scripts onto a
# development camera without re-flashing the SD card. Intended for the
# tight edit-build-test loop; not for production deploys.
#
# What it does:
#   1. Tars up the contents of `build/out/` (the would-be SD payload)
#      with user-config files excluded — see EXCLUDES below.
#   2. Uploads the tarball to the camera over uftpd (FTP, anonymous).
#   3. SSHes in, kills the running daemons (everything except uftpd and
#      telnet — those have to stay alive for this update mechanism to
#      work and for the user to keep a fallback console), extracts the
#      tarball into /var/tmp/sd/, and triggers a reboot 2 s later.
#
# Camera prerequisites:
#   - Built with -DBUILD_DEV_TOOLS=ON so uftpd + dropbear are present.
#   - Either passwordless root SSH (recommended; drop your pubkey into
#     /root/.ssh/authorized_keys) or empty-password root + an SSH client
#     willing to send blank passwords.
#
# Usage:
#   ./scripts/dev_update.sh [user@]CAMERA_IP

set -euo pipefail

CAMERA="${1:-}"
if [ -z "$CAMERA" ]; then
    echo "usage: $0 [user@]CAMERA_IP" >&2
    exit 1
fi
HOST="${CAMERA##*@}"
USER_PART="${CAMERA%@*}"
[ "$USER_PART" = "$HOST" ] && USER_PART="root"

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
OUT="${ROOT}/build/out"
if [ ! -d "$OUT" ]; then
    echo "build/out/ not found at $OUT" >&2
    echo "Run 'ninja package_RTS3903N_RTSP' from your build dir first." >&2
    exit 1
fi

# Files we never push — anything the user might have customized on the
# camera. Paths are relative to build/out/.
EXCLUDES=(
    './settings.json'
    './network.ini'
    './boot.log'
)
EXCLUDE_ARGS=()
for e in "${EXCLUDES[@]}"; do
    EXCLUDE_ARGS+=("--exclude=$e")
done

TARBALL="$(mktemp -t dev_update.XXXXXX.tar)"
trap 'rm -f "$TARBALL"' EXIT

echo ">>> Packing non-config files..."
tar -C "$OUT" "${EXCLUDE_ARGS[@]}" -cf "$TARBALL" .
TARBALL_SIZE=$(stat -c %s "$TARBALL" 2>/dev/null || stat -f %z "$TARBALL")
echo "    $(printf '%d' "$TARBALL_SIZE") bytes"

echo ">>> Uploading to ftp://${HOST}/_dev_update.tar..."
curl -sS -T "$TARBALL" "ftp://anonymous:@${HOST}/_dev_update.tar"

echo ">>> Killing daemons + extracting on camera..."
# We send all remote commands as a single heredoc. The remote shell is
# busybox sh, so stick to POSIX. The dropbear kill is backgrounded with a
# small delay so this SSH session has time to disconnect cleanly first;
# otherwise killing dropbear severs us mid-command.
ssh -o StrictHostKeyChecking=accept-new \
    -o BatchMode=no \
    "${USER_PART}@${HOST}" 'sh -s' <<'REMOTE'
set -u

echo "  killing daemons (uftpd + telnet survive)..."
killall imager_streamer  2>/dev/null || true
killall wsd_simple_server 2>/dev/null || true
killall lighttpd          2>/dev/null || true
killall sntp              2>/dev/null || true
sleep 1
killall -9 imager_streamer  2>/dev/null || true
killall -9 wsd_simple_server 2>/dev/null || true
killall -9 lighttpd          2>/dev/null || true

echo "  extracting tarball into /var/tmp/sd/..."
cd /var/tmp/sd
tar xf _dev_update.tar
rm -f _dev_update.tar

echo "  rebooting in 2s (gives the SSH session time to detach)..."
( sleep 2 && reboot ) >/dev/null 2>&1 &
exit 0
REMOTE

echo ">>> Camera is rebooting. Wait ~30 s, then reconnect."
