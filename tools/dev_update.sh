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
#      tarball into /var/tmp/sd/, deletes stale files left over from
#      previous builds (e.g. the v0.6.2 http/www/index.html that was
#      removed when the custom web UI was sunset), and triggers a
#      reboot 2 s later.
#
# Stale-file cleanup is scoped to the top-level directories that exist
# in the new tarball. Each on-camera file inside one of those dirs that
# isn't in the new manifest gets removed. Two dirs are partial-preserve:
#   - dev-tools/etc/dropbear/  (SSH host keys generated on first boot)
#   - onvif/ptz_presets.txt    (user-set PTZ presets via ONVIF)
# Stock OEM dirs (Yi/, backup/, _imagerd, etc.) are never in the manifest
# so they're never touched. Top-level config/state files (settings.json,
# network.ini, boot.log, daynight_polarity.state, ir_cut_override.state,
# log.txt) are excluded from the tarball and therefore never deleted.
#
# Camera prerequisites:
#   - Built with -DBUILD_DEV_TOOLS=ON so uftpd + dropbear are present.
#   - Either passwordless root SSH (recommended; drop your pubkey into
#     /root/.ssh/authorized_keys) or empty-password root + an SSH client
#     willing to send blank passwords.
#
# Usage:
#   ./tools/dev_update.sh [user@]CAMERA_IP

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

# All remote commands as POSIX-sh (busybox-compatible: no head/tail/comm,
# no find -empty/-delete; awk + sed + sort are present). Reboot is
# backgrounded with a small delay so the active SSH/telnet session
# has time to disconnect first.
REMOTE_CMDS='set -e
killall imagerd 2>/dev/null || true
killall wsd_simple_server 2>/dev/null || true
killall lighttpd 2>/dev/null || true
killall sntp 2>/dev/null || true
sleep 1
killall -9 imagerd 2>/dev/null || true
killall -9 wsd_simple_server 2>/dev/null || true
killall -9 lighttpd 2>/dev/null || true

cd /var/tmp/sd

# Manifest of regular files in the new tarball, paths relative to CWD.
# Strip the leading "./" tar prefix, drop directory entries (trailing /).
tar tf _dev_update.tar | sed -e "s|^\./||" -e "/\/$/d" | sort > /tmp/manifest.new

# Extract first. If tar fails partway, the old binaries are still in
# place and we havent deleted anything yet.
tar xf _dev_update.tar
rm -f _dev_update.tar

# Top-level entries the build owns.
TOPS=$(awk -F/ "{print \$1}" /tmp/manifest.new | sort -u)

# Helper: list files (one per line, sorted) under a dir on disk.
#   $1 = dir to walk
#   $2 = optional awk filter applied to each path; survivors are kept
list_disk_files() {
    find "$1" -type f 2>/dev/null | { [ -n "${2:-}" ] && awk "$2" || cat; } | sort
}

# Helper: delete files listed on stdin that are NOT in /tmp/manifest.new.
delete_stale() {
    awk "NR==FNR{a[\$0];next} !(\$0 in a)" /tmp/manifest.new - \
        | while IFS= read -r stale; do
            [ -n "$stale" ] && rm -f "$stale"
          done
}

for top in $TOPS; do
    [ -d "$top" ] || continue
    case "$top" in
        # Partial-preserve dirs handled separately below.
        dev-tools|onvif) continue ;;
    esac
    list_disk_files "$top" | delete_stale
done

# dev-tools/: clean everything except SSH host keys under etc/dropbear/.
if [ -d dev-tools ]; then
    list_disk_files dev-tools "\$0 !~ /^dev-tools\/etc\/dropbear\//" | delete_stale
fi

# onvif/: clean everything except ptz_presets.txt (user-saved PTZ presets).
if [ -d onvif ]; then
    list_disk_files onvif "\$0 != \"onvif/ptz_presets.txt\"" | delete_stale
fi

rm -f /tmp/manifest.new

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
