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

log() { printf '==> %s\n' "$*"; }

log "Packing payload..."
tar -C "$OUT" "${EXCLUDE_ARGS[@]}" -cf "$TARBALL" .
TARBALL_SIZE=$(stat -c %s "$TARBALL" 2>/dev/null || stat -f %z "$TARBALL")
log "  $(printf '%d' "$TARBALL_SIZE") bytes"

log "Uploading to ${HOST}..."
curl -sS -T "$TARBALL" "ftp://anonymous:@${HOST}/_dev_update.tar"

log "Updating camera..."

# All remote commands as POSIX-sh (busybox-compatible: no head/tail/sort/comm,
# no find -empty/-delete; awk + sed are present). The cleanup logic uses
# awk's hash-table diff, so unsorted input is fine.
#
# Critical: NO `set -e` in here. If any single cleanup step fails (an
# unexpected busybox quirk, an awk regex hiccup, …) we still need the
# reboot to fire — leaving the camera in "killed everything, didnt
# reboot" makes it look hung until a power cycle. Same reason the
# reboot is backgrounded EARLY, before the cleanup work that might
# break: even if the script aborts thereafter, the camera comes back
# up in ~3s. With this layout the worst case of any cleanup bug is
# "stale files survive one more deploy", not "camera locked".
#
# Output is prefixed with "    " to visually nest under the host-side
# `==> Updating camera...` line.
REMOTE_CMDS='log() { printf "    %s\n" "$*"; }

log "stopping daemons"
killall imagerd wsd_simple_server lighttpd sntp 2>/dev/null
sleep 1
killall -9 imagerd wsd_simple_server lighttpd 2>/dev/null

cd /var/tmp/sd || exit 1

# Build the manifest BEFORE extracting, while the tarball is still on
# disk. Used by the cleanup step below.
MANIFEST=/tmp/_dev_update.manifest
tar tf _dev_update.tar 2>/dev/null | sed -e "s|^\./||" -e "/\/$/d" > "$MANIFEST"

log "extracting payload"
EXTRACT_OK=0
if tar xf _dev_update.tar 2>/dev/null; then
    EXTRACT_OK=1
else
    log "extract FAILED — rebooting with old binaries"
fi
rm -f _dev_update.tar

# Reboot is scheduled here, before any further error-prone work, so a
# cleanup bug cant prevent the camera from coming back up.
log "reboot scheduled in 3s"
( sleep 3 && reboot ) >/dev/null 2>&1 &

# Stale-file cleanup (best effort; reboot is already scheduled).
if [ "$EXTRACT_OK" = 1 ] && [ -s "$MANIFEST" ]; then
    list_disk_files() {
        find "$1" -type f 2>/dev/null | { [ -n "${2:-}" ] && awk "$2" || cat; }
    }
    deleted=0
    delete_stale() {
        awk "NR==FNR{a[\$0];next} !(\$0 in a)" "$MANIFEST" - 2>/dev/null \
            | while IFS= read -r stale; do
                if [ -n "$stale" ]; then
                    rm -f "$stale"
                    echo "stale"
                fi
              done | wc -l
    }

    n=0
    TOPS=$(awk -F/ "{print \$1}" "$MANIFEST" 2>/dev/null | awk "!seen[\$0]++")
    for top in $TOPS; do
        [ -d "$top" ] || continue
        case "$top" in
            dev-tools|onvif) continue ;;
        esac
        n=$((n + $(list_disk_files "$top" | delete_stale)))
    done

    [ -d dev-tools ] && n=$((n + $(list_disk_files dev-tools "\$0 !~ /^dev-tools\/etc\/dropbear\//" | delete_stale)))
    [ -d onvif ] && n=$((n + $(list_disk_files onvif "\$0 != \"onvif/ptz_presets.txt\"" | delete_stale)))

    log "cleanup: removed $n stale file(s)"
fi
rm -f "$MANIFEST"

exit 0'

# Try SSH first (BatchMode + ConnectTimeout so it fails fast instead
# of hanging on a password prompt), fall back to telnet if it can't
# connect or auth is rejected. Telnet is the dev-image's fallback
# console: no auth on busybox, just sends the commands as stdin.
#
# We do NOT redirect ssh's stderr — if dropbear rejects auth, or the
# remote script aborts, the message has to surface so the user can
# debug. The "    …" remote-side echo lines from REMOTE_CMDS come
# through too, nesting visually under the "==> Updating camera..." line.
SSH_RC=0
ssh -o BatchMode=yes \
    -o ConnectTimeout=5 \
    -o StrictHostKeyChecking=accept-new \
    "${USER_PART}@${HOST}" "$REMOTE_CMDS" || SSH_RC=$?

if [ "$SSH_RC" != 0 ]; then
    if command -v telnet >/dev/null 2>&1; then
        log "SSH returned rc=$SSH_RC; falling back to telnet root@${HOST}..."
        # Pipe a login + command sequence through telnet. The sleeps
        # give busybox's telnetd time to print each prompt before we
        # answer. Root usually has an empty password on a dev image;
        # if yours doesn't, set TELNET_PASSWORD in the env.
        {
            sleep 1; echo root
            sleep 1; echo "${TELNET_PASSWORD:-}"
            sleep 1; echo "$REMOTE_CMDS"
            sleep 5; echo exit
            sleep 1
        } | telnet "$HOST" 23
    else
        log "SSH failed (rc=$SSH_RC) and no telnet client on this host."
        log "Install one (apt install telnet, brew install telnet, …)"
        log "or fix dropbear on the camera."
        exit 1
    fi
fi

log "Camera rebooting; wait ~30s before reconnecting."
