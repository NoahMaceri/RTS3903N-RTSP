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
OUT="${ROOT}/cmake-build-release/out"
if [ ! -d "$OUT" ]; then
    echo "cmake-build-release/out not found at $OUT" >&2
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

# All remote commands as POSIX-sh (busybox-compatible). Reboot is
# backgrounded with a small delay so the active SSH/telnet session
# has time to disconnect first.
REMOTE_CMDS='killall imagerd 2>/dev/null
killall wsd_simple_server 2>/dev/null
killall lighttpd 2>/dev/null
killall sntp 2>/dev/null
sleep 1
killall -9 imagerd 2>/dev/null
killall -9 wsd_simple_server 2>/dev/null
killall -9 lighttpd 2>/dev/null
cd /var/tmp/sd
tar xf _dev_update.tar
rm -f _dev_update.tar
( sleep 2 && reboot ) >/dev/null 2>&1 &
exit 0'

# Try SSH first (BatchMode + ConnectTimeout so it fails fast instead
# of hanging on a password prompt), fall back to telnet if it can't
# connect or auth is rejected. Telnet is the dev-image's fallback
# console: no auth on busybox, just sends the commands as stdin.
if ssh -o BatchMode=yes \
       -o ConnectTimeout=5 \
       -o StrictHostKeyChecking=accept-new \
       "${USER_PART}@${HOST}" "$REMOTE_CMDS" 2>/dev/null; then
    echo "  reached camera via SSH"
elif command -v telnet >/dev/null 2>&1; then
    echo "  SSH unavailable; falling back to telnet root@${HOST}..."
    # Pipe a login + command sequence through telnet. The sleeps give
    # busybox's telnetd time to print each prompt before we answer.
    # Root usually has an empty password on a dev image; if yours
    # doesn't, set TELNET_PASSWORD in the env before invoking.
    {
        sleep 1; echo root
        sleep 1; echo "${TELNET_PASSWORD:-}"
        sleep 1; echo "$REMOTE_CMDS"
        sleep 2; echo exit
        sleep 1
    } | telnet "$HOST" 23 > /dev/null 2>&1
else
    echo "  ERROR: SSH failed and no telnet client installed on this host." >&2
    echo "         Install one (apt install telnet, brew install telnet, …)" >&2
    echo "         or fix dropbear on the camera." >&2
    exit 1
fi

echo ">>> Camera is rebooting. Wait ~30 s, then reconnect."
