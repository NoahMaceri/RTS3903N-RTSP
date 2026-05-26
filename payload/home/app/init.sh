#!/bin/sh
# /home/app/init.sh — on-flash boot entry for RTS3903N_RTSP.
#
# Invoked by the stock /etc/init.d/rcS after it mounts mtd4 (this squashfs)
# at /home. This is the on-flash equivalent of sd_payload/wifi/config.sh:
# the SD-card hijack starts after stock init.sh has loaded the kernel
# modules; on-flash, *we* are init.sh, so we have to do that ourselves.

LOGFILE=/var/log/boot.log
mkdir -p /var/log

# Rotate boot.log if it's grown over 256 KB. See config.sh for rationale.
if [ -f "$LOGFILE" ]; then
    LOG_SIZE=$(ls -la "$LOGFILE" 2>/dev/null | awk '{print $5+0}')
    if [ "${LOG_SIZE:-0}" -gt 262144 ]; then
        mv -f "$LOGFILE" "${LOGFILE}.1" 2>/dev/null
    fi
fi

log() {
    echo "[`date`] $1" >> $LOGFILE
    echo "$1" > /dev/ttyS1
}

echo >> $LOGFILE
log "=== RTS3903N_RTSP $(cat /homever 2>/dev/null) booting from flash ==="

# 1. Library search path:
#    /lib                       — stock uClibc and base
#    /home/rt/lib               — stock Realtek runtime (librtstream, ...)
#    /home/app/locallib         — our additions (live555, pcre2, libstdc++, ...)
#    /home/app/dev-tools/lib    — libcrypt for dropbear; without this, the
#                                 rpath /var/tmp/sd/dev-tools/lib baked into
#                                 dropbear only resolves when an SD card with
#                                 the dev-tools payload is mounted. Adding
#                                 /home/app/dev-tools/lib to LD_LIBRARY_PATH
#                                 makes dropbear work either way.
# zlog.conf path resolution is done in the binary now (env-var → SD path →
# /home/app/zlog.conf fallback), so no symlink dance needed here.
export LD_LIBRARY_PATH=/lib:/home/rt/lib:/home/app/locallib:/home/app/dev-tools/lib:$LD_LIBRARY_PATH

# 2. Kernel modules. These have to come up *in this order* — rlx_dma is the
#    DMA backend used by rlx_i2s/rlx_codec; rts_cam* must precede the encoder
#    modules and rtstream. None of this is done by /etc/init.d/rcS — stock
#    init.sh is the only thing that ever insmods these.
insmod /home/rt/ko/rlx_dma.ko
insmod /home/rt/ko/rlx_i2s.ko
insmod /home/rt/ko/rlx_codec.ko
insmod /home/rt/ko/rlx_snd_intern.ko
[ -f /backup/8188fu.ko ] && insmod /backup/8188fu.ko
insmod /home/rt/ko/rtsx-icr.ko
insmod /home/rt/ko/rts_cam.ko
insmod /home/rt/ko/rts_cam_mem.ko
insmod /home/rt/ko/rts_cam_lock.ko
insmod /home/rt/ko/rts_camera_soc.ko
insmod /home/rt/ko/rts_camera_hx280enc.ko
insmod /home/rt/ko/rts_camera_jpgenc.ko
insmod /home/rt/ko/rts_camera_osd2.ko
insmod /home/rt/ko/rtstream.ko

# Board-specific: cpld_periph + ssp_ms41909 need hw= / gpio= parameters
# at insmod time. The stock `load_cpld_ssp` binary discovers those values
# from the board config and insmods with the right args; without it, the
# modules abort with "params error". Run it if present (CGI-style
# one-shot, exits immediately).
#
# If load_cpld_ssp isn't shipped (community builds may strip it), we
# reproduce its behaviour inline: read /dev/mtdblock6 at the documented
# offsets (docs/load_cpld_ssp.md §2), insmod cpld_periph.ko with the
# right params, then pattern-match gpio_pin to decide which (if any)
# of the two ssp_ms41909*.ko motor drivers to load (§3b–§3d).
#
# Optional auto-recovery: stock dispatch silently restores mtdblock6
# from /etc/back.bin if the factory partition's magic-byte sentinels
# are missing (docs/dispatch.md §6). We mirror that here so a board
# with a partially-erased factory partition still comes up.
# Both candidate paths are checked — /etc/back.bin (legacy, from
# camera that ran stock before our flash) and /backup/back.bin
# (mtd5 jffs2, the right place on our layout). Costs nothing when
# neither file exists.
if [ -x /home/app/load_cpld_ssp ]; then
    /home/app/load_cpld_ssp >> $LOGFILE 2>&1
else
    # Sentinel check: byte 0xA4 must be 0xAA, byte 0xC8 must be 0xBB.
    # Read both as hex via od; busybox od supports -An -t x1.
    SENT1=$(dd if=/dev/mtdblock6 bs=1 skip=164 count=1 2>/dev/null | od -An -t x1 | tr -d ' \n')
    SENT2=$(dd if=/dev/mtdblock6 bs=1 skip=200 count=1 2>/dev/null | od -An -t x1 | tr -d ' \n')
    if [ "$SENT1" != "aa" ] || [ "$SENT2" != "bb" ]; then
        BACKUP_BIN=
        for cand in /backup/back.bin /etc/back.bin; do
            [ -f "$cand" ] && BACKUP_BIN="$cand" && break
        done
        if [ -n "$BACKUP_BIN" ]; then
            log "Factory partition sentinels invalid (got $SENT1/$SENT2), restoring from $BACKUP_BIN..."
            dd if="$BACKUP_BIN" of=/dev/mtdblock6 bs=1 count=292 2>>$LOGFILE
            SENT1=$(dd if=/dev/mtdblock6 bs=1 skip=164 count=1 2>/dev/null | od -An -t x1 | tr -d ' \n')
            SENT2=$(dd if=/dev/mtdblock6 bs=1 skip=200 count=1 2>/dev/null | od -An -t x1 | tr -d ' \n')
        else
            log "WARN: factory sentinels missing (got $SENT1/$SENT2) and no back.bin to restore from"
        fi
    fi

    if [ "$SENT1" = "aa" ] && [ "$SENT2" = "bb" ]; then
        # 168 = 0xA8 (hw_ver), 204 = 0xCC (gpio_pin). tr -d '\0' strips
        # any embedded NULs that would confuse the shell.
        HW_VER=$(dd if=/dev/mtdblock6 bs=1 skip=168 count=32 2>/dev/null | tr -d '\0')
        GPIO_PIN=$(dd if=/dev/mtdblock6 bs=1 skip=204 count=32 2>/dev/null | tr -d '\0')
        log "Factory: hw=\"$HW_VER\" gpio=\"$GPIO_PIN\""

        [ -f /home/rt/ko/cpld_periph.ko ] && \
            insmod /home/rt/ko/cpld_periph.ko "hw=$HW_VER" "gpio=$GPIO_PIN"

        # Motor pattern match — same shell-glob translation of
        # load_cpld_ssp's two memcmp tests. First match wins.
        case "$HW_VER" in
            1*)
                case "$GPIO_PIN" in
                    11111111*)
                        log "PTZ: 8-pin motor detected, insmod ssp_ms41909.ko"
                        [ -f /home/rt/ko/ssp_ms41909.ko ] && \
                            insmod /home/rt/ko/ssp_ms41909.ko "hw=$HW_VER" "gpio=$GPIO_PIN"
                        ;;
                    ???4444???4*)
                        log "PTZ: 4+1-pin motor detected, insmod ssp_ms41909_union.ko"
                        [ -f /home/rt/ko/ssp_ms41909_union.ko ] && \
                            insmod /home/rt/ko/ssp_ms41909_union.ko "hw=$HW_VER" "gpio=$GPIO_PIN"
                        ;;
                    *)
                        log "PTZ: hw says PTZ-capable but no known motor pattern in gpio_pin"
                        ;;
                esac
                ;;
            *)
                log "PTZ: not a PTZ board (hw_ver[0]='$(printf %.1s "$HW_VER")')"
                ;;
        esac
    else
        log "ERROR: cannot insmod cpld_periph.ko without valid factory data"
    fi
fi
# pid_list.ko is unparameterised — always safe to insmod.
[ -f /home/rt/ko/pid_list.ko ] && insmod /home/rt/ko/pid_list.ko

# Two-stage sensor probe + firmware load. This was the trickiest piece to
# reverse-engineer; see the long comment block below for the why.
#
# The sysfs interface at /sys/devices/platform/rts_soc_camera/loadfw accepts
# *two* kinds of input:
#   (a) a path to an ISP firmware blob — loads that blob into the ISP
#       coprocessor's program memory.
#   (b) a single ASCII digit ("1", "2") — a *command code* the kernel module
#       interprets internally. "1" triggers the initial probe / power-up of
#       the sensor bus; "2" triggers the i²c detection round that fills in
#       /sys/.../sensor with the detected sensor name (e.g. "SC2230").
#
# Stock `rmm` does the probe via (b): write "1", sleep 50ms, write "2", then
# poll /sys/.../sensor and write the matched sensor fw via (a). This was
# verified by decompiling rmm and observing that /sys/.../sensor only
# materialises after the magic-digit writes — writing a firmware blob *alone*
# does not create that sysfs file. Without it, the encoder runs on whatever
# generic fw is loaded and emits malformed H.264 (no SPS/PPS in the
# bitstream, so ffmpeg-based clients see `Video: h264, none`).
if [ -e /sys/devices/platform/rts_soc_camera/loadfw ]; then
    echo -n 1 > /sys/devices/platform/rts_soc_camera/loadfw
    sleep 0.05
    echo -n 2 > /sys/devices/platform/rts_soc_camera/loadfw
    # Probe is async — /sys/.../sensor takes 50–200ms to appear on this
    # hardware. Poll in 100ms steps with a 2s cap.
    for i in 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20; do
        [ -r /sys/devices/platform/rts_soc_camera/sensor ] && break
        sleep 0.1
    done
fi

# Stage 2: read the detected sensor, pick the matched fw, reload.
fw=
if [ -r /sys/devices/platform/rts_soc_camera/sensor ]; then
    sensor=$(cat /sys/devices/platform/rts_soc_camera/sensor 2>/dev/null | tr -d '\n\r ')
    log "Detected sensor via i2c probe: '$sensor'"
    case "$sensor" in
        SC2235) fw=/home/lib/sc2235/isp.fw ;;
        SC2232) fw=/home/lib/sc2232/isp.fw ;;
        SC1245) fw=/home/lib/sc1245/isp.fw ;;
        SC2230) fw=/home/lib/sc2230/isp_jin.fw ;;   # stock rmm's default variant
        SC2390) fw=/home/lib/sc2390/isp.fw ;;
        "")     log "WARN: sensor file empty after probe — i2c detect may have failed" ;;
        *)      log "WARN: unknown sensor '$sensor' — no fw mapping" ;;
    esac
else
    log "WARN: /sys/.../sensor never appeared after probe — i2c detect failed"
fi

if [ -n "$fw" ] && [ -f "$fw" ]; then
    echo -n "$fw" > /sys/devices/platform/rts_soc_camera/loadfw
    log "ISP firmware loaded for detected sensor: $fw"
else
    log "WARN: no matching ISP firmware loaded — frames will be malformed"
fi

# 3. Audio enable line. Stock init.sh reads byte 168 of mtdblock6 (vd1
#    factory data) — bit 6 selects active-high vs active-low for the audio
#    amp on GPIO9. Skip silently if /sys/class/gpio/export refuses (some
#    boards don't expose GPIO9 this way).
if echo 9 > /sys/class/gpio/export 2>/dev/null; then
    echo out > /sys/class/gpio/gpio9/direction
    HW=$(dd if=/dev/mtdblock6 bs=1 skip=168 count=32 2>/dev/null)
    if [ "${HW#??????1}" != "$HW" ]; then
        echo 1 > /sys/class/gpio/gpio9/value
    else
        echo 0 > /sys/class/gpio/gpio9/value
    fi
fi

# 4. ALSA mixer presets. Same values stock init.sh uses; the symbolic names
#    are different per codec, so we drive them by numid.
amixer cset numid=8  127 >/dev/null 2>&1   # capture digital gain
amixer cset numid=1  109 >/dev/null 2>&1   # speaker
amixer cset numid=11 30  >/dev/null 2>&1   # capture analog gain (max 69)

# 5. VM tunings copied from stock — the camera is memory-tight and these
#    keep allocator fragmentation under control. extfrag_threshold and
#    compact_memory are gated on CONFIG_COMPACTION, which our kernel build
#    may not have; redirect to skip the noisy "nonexistent directory"
#    errors when they're absent.
echo 2048 > /proc/sys/vm/min_free_kbytes
echo 100  > /proc/sys/vm/extfrag_threshold 2>/dev/null
echo 1    > /proc/sys/vm/compact_memory    2>/dev/null

ulimit -c 2048000
echo "/var/log/core.%e.%p" > /proc/sys/kernel/core_pattern

# 6. Mount SD card and sync configs to the persistent r/w partition.
#
# The model:
#   /home/app/<file>      — read-only baked-in default (mtd4 squashfs)
#   /backup/config/<file> — runtime, read/write (mtd5 jffs2)
#   /var/tmp/sd/<file>    — provisioning input from SD card (vfat)
#
# At every boot, for each managed file:
#   - if /var/tmp/sd/<file> exists and differs from /backup/config/<file>:
#       SD wins, copy SD → /backup/config (provisioning intent)
#   - if /backup/config/<file> doesn't exist:
#       seed from /home/app/<file> (first boot, no prior config)
#   - the "live" path the rest of the script uses is /backup/config/<file>
#
# Net effect: SD card *in* = source of truth; SD card *out* = persistent
# storage owns it. Runtime modifications via web UI only persist if the
# SD card isn't in (otherwise next boot reverts them from SD).
#
# rtsx-icr.ko was insmodded above; mmcblk0p1 detection is async, so give
# it a beat. Silent mount failure means no card / FAT corruption / etc.
mkdir -p /var/tmp/sd /backup/config
sleep 1
mount -t vfat /dev/mmcblk0p1 /var/tmp/sd 2>/dev/null

sync_config() {
    f="$1"
    sd="/var/tmp/sd/$f"
    bk="/backup/config/$f"
    # cmp isn't in this busybox build; md5sum is (stock update.sh uses
    # it). md5 is overkill for difference detection but cheap on these
    # tiny files and removes the dependency on cmp/diff.
    if [ -f "$sd" ]; then
        sd_sum=$(md5sum "$sd" | awk '{print $1}')
        bk_sum=
        [ -f "$bk" ] && bk_sum=$(md5sum "$bk" | awk '{print $1}')
        if [ "$sd_sum" != "$bk_sum" ]; then
            log "Updating $f from SD card → /backup/config/"
            cp "$sd" "$bk"
        fi
    elif [ ! -f "$bk" ]; then
        log "Seeding $bk from /home/app/$f"
        cp "/home/app/$f" "$bk" 2>/dev/null || true
    fi
}
sync_config network.ini
sync_config settings.json

NETWORK_INI=/backup/config/network.ini
WPA_CONF=/var/run/wpa_supplicant.conf

# eth0 doesn't have its own MAC on these boards — stock derives it from
# wlan0's MAC with a "d2:" prefix.
ifconfig wlan0 up
ETHMAC=d2:$(ifconfig wlan0 | grep HWaddr | cut -d' ' -f10 | cut -d: -f2-)
ifconfig eth0 hw ether $ETHMAC
ifconfig eth0 up

get_ini() {
    awk -v section="$1" -v key="$2" '
        /^[ \t]*[#;]/ { next }
        /^[ \t]*\[/ {
            sub(/^[ \t]*\[/, ""); sub(/\].*$/, "")
            in_section = ($0 == section); next
        }
        in_section {
            n = index($0, "=")
            if (n > 0) {
                k = substr($0, 1, n - 1); v = substr($0, n + 1)
                gsub(/^[ \t]+|[ \t]+$/, "", k)
                gsub(/^[ \t]+|[ \t]+$/, "", v)
                if (k == key) { print v; exit }
            }
        }
    ' "$3"
}

if [ -f "$NETWORK_INI" ]; then
    SSID=$(get_ini wifi    ssid     "$NETWORK_INI")
    PSK=$(get_ini  wifi    psk      "$NETWORK_INI")
    COUNTRY=$(get_ini wifi country  "$NETWORK_INI")
    BSSID=$(get_ini   wifi bssid    "$NETWORK_INI")
    NET_IP=$(get_ini      network  ip       "$NETWORK_INI")
    NET_NETMASK=$(get_ini network  netmask  "$NETWORK_INI")
    NET_GATEWAY=$(get_ini network  gateway  "$NETWORK_INI")

    if [ -n "$SSID" ]; then
        log "Generating wpa_supplicant.conf from $NETWORK_INI..."
        {
            echo "ctrl_interface=/var/run/wpa_supplicant"
            echo "update_config=1"
            # See config.sh for rationale on country / bgscan / bssid.
            [ -n "$COUNTRY" ] && echo "country=$COUNTRY"
            echo ""
            echo "network={"
            echo "    ssid=\"$SSID\""
            if [ -n "$PSK" ]; then
                echo "    psk=\"$PSK\""
                echo "    key_mgmt=WPA-PSK"
            else
                echo "    key_mgmt=NONE"
            fi
            echo "    scan_ssid=1"
            # bssid_hint (soft preference) not bssid (hard pin) — see
            # config.sh for the rationale on why a hard pin is dangerous.
            [ -n "$BSSID" ] && echo "    bssid_hint=$BSSID"
            echo "    bgscan=\"\""
            echo "}"
        } > "$WPA_CONF"
        wpa_supplicant -c"$WPA_CONF" -g/var/run/wpa_supplicant-global -Dwext -iwlan0 -B
        sleep 3

        # Force WiFi power-save off (see config.sh for rationale).
        iwconfig wlan0 power off >/dev/null 2>&1
    fi
else
    log "WARN: $NETWORK_INI missing — Wi-Fi will not come up"
fi

if [ -n "$NET_IP" ] && [ -n "$NET_NETMASK" ] && [ -n "$NET_GATEWAY" ]; then
    log "Static IP: $NET_IP / $NET_NETMASK / gw $NET_GATEWAY"
    ifconfig wlan0 "$NET_IP" netmask "$NET_NETMASK" up
    route add default gw "$NET_GATEWAY" wlan0
else
    log "DHCP on wlan0..."
    udhcpc -i wlan0 -b -s /home/app/default.script &
    sleep 8
fi
# busybox ifconfig formats inet as "inet addr:1.2.3.4 ..." while modern
# ifconfig uses "inet 1.2.3.4 ...". Strip the "addr:" prefix if present.
IP_ADDR=$(ifconfig wlan0 | awk '
    /inet addr:/ { gsub(/addr:/, "", $2); print $2; exit }
    /inet [0-9]/ { print $2; exit }
')
log "wlan0 IP: $IP_ADDR"

# 7. DNS + Time sync.
#
# Stock rootfs has /etc/resolv.conf as a symlink to /dev/null. We can't
# replace the symlink (/etc is mtd3 squashfs, RO). And `mount --bind` onto
# the symlink follows it to /dev/null, which Linux refuses (can't bind a
# regular file onto a char device). So: stage a writable copy of /etc in
# tmpfs, drop a real resolv.conf into it, and bind-mount the whole copy
# over /etc. Heavier than mount-bind-one-file but it actually works.
#
# `cp -a /etc/.` (note the trailing /.) copies the contents of /etc into
# /var/etc rather than nesting it; preserves the existing symlinks (most
# of which point to real files; the resolv.conf one we explicitly nuke
# and replace).
mkdir -p /var/etc
cp -a /etc/. /var/etc/
rm -f /var/etc/resolv.conf
{
    echo "nameserver 1.1.1.1"   # Cloudflare
    echo "nameserver 8.8.8.8"   # Google fallback
} > /var/etc/resolv.conf
mount --bind /var/etc /etc

# Wait for actual Wi-Fi association before SNTP. wpa_supplicant -B
# returns as soon as it daemonizes, well before the 4-way handshake
# completes. Bounded at 60s; if the hinted AP is unreachable and the
# soft-fallback hasn't kicked in by then, blank out bssid_hint and
# retry — same escape hatch as config.sh.
log "Waiting for Wi-Fi association..."
waited=0
while [ "$waited" -lt 60 ]; do
    if iwconfig wlan0 2>/dev/null | grep -q "Access Point: [0-9A-Fa-f]"; then
        log "wlan0 associated after ${waited}s"
        break
    fi
    sleep 5
    waited=$((waited + 5))
done
if ! iwconfig wlan0 2>/dev/null | grep -q "Access Point: [0-9A-Fa-f]"; then
    log "WiFi: still Not-Associated after 60s — clearing bssid_hint and retrying"
    sed -i 's/^    bssid_hint=.*/    bssid_hint=/' "$WPA_CONF"
    killall wpa_supplicant 2>/dev/null
    sleep 1
    wpa_supplicant -c"$WPA_CONF" -g/var/run/wpa_supplicant-global -Dwext -iwlan0 -B
    sleep 3
    iwconfig wlan0 power off >/dev/null 2>&1
fi

# Log the achieved RSSI / link quality so an operator can grep boot.log
# across cameras without ssh-ing each one.
if [ -r /proc/net/rtl8188fu/wlan0/rx_signal ]; then
    rssi=$(awk -F: '/rssi/{print $2}' /proc/net/rtl8188fu/wlan0/rx_signal)
    sigq=$(awk -F: '/signal_qual/{print $2}' /proc/net/rtl8188fu/wlan0/rx_signal)
    bssid=$(iwconfig wlan0 2>/dev/null | awk '/Access Point/{for(i=1;i<=NF;i++) if($i=="Point:") print $(i+1)}')
    log "WiFi: associated to ${bssid:-?}  RSSI=${rssi} dBm  link_quality=${sigq}/100"
fi

log "SNTP sync..."
/home/app/sntp pool.ntp.org >> $LOGFILE 2>&1 || log "SNTP failed; continuing with unsynced clock"

# 7.5. Dev-tools (SSH/FTP/telnet). Present only when the build was run with
#    -DBUILD_DEV_TOOLS=ON, so file-existence-gated. Stock /etc/init.d/rcS
#    already starts /bin/telnetd on :23 (busybox in mtd3 rootfs); we re-run
#    it here defensively because some Yi rcS variants skip it. devpts is
#    mounted by stock rcS so SSH PTY allocation works.
#
#    Dropbear's rpath is /var/tmp/sd/dev-tools/lib/, which only resolves
#    when an SD card with the dev-tools payload is mounted. On flash with
#    no SD card, /home/app/dev-tools/lib is in LD_LIBRARY_PATH (set at the
#    top), and the loader falls through to it when rpath search misses.
#
#    Host keys persist in /backup/dropbear/ (jffs2 mtd5, writable, survives
#    reboots — important so SSH client trust-on-first-use stays valid).
#    Only ED25519 (instant); skipped RSA because it takes ~30s on this CPU.
#
#    uftpd serves / so the user can push to any writable area (/tmp,
#    /var/run, /backup, /var/tmp/sd if a card's mounted) — filesystem
#    permissions gate writes naturally, no point trying to limit the root.
if [ -d /home/app/dev-tools ]; then
    log "Starting telnetd on :23..."
    /bin/busybox telnetd -p 23 >> $LOGFILE 2>&1 &

    log "Starting uftpd on :21 (root=/, writable)..."
    /home/app/dev-tools/sbin/uftpd -o writable / >> $LOGFILE 2>&1 &

    DROPBEAR_KEYDIR=/backup/dropbear
    mkdir -p "$DROPBEAR_KEYDIR"
    if [ ! -f "$DROPBEAR_KEYDIR/dropbear_ed25519_host_key" ]; then
        log "Generating dropbear ED25519 host key (one-time)..."
        /home/app/dev-tools/bin/dropbearkey -t ed25519 \
            -f "$DROPBEAR_KEYDIR/dropbear_ed25519_host_key" >> $LOGFILE 2>&1
    fi
    log "Starting dropbear SSH on :22..."
    # -B  allow blank passwords (stock root has no password)
    # -P  pidfile (default /var/run/dropbear.pid is fine; tmpfs-backed)
    # Syslog disabled at compile time — logs go via stderr → $LOGFILE.
    /home/app/dev-tools/sbin/dropbear \
        -r "$DROPBEAR_KEYDIR/dropbear_ed25519_host_key" \
        -P /var/run/dropbear.pid \
        -p 22 -B \
        >> $LOGFILE 2>&1 &
fi

# 8. lighttpd → ONVIF → imagerd.
#
# Settings.json lives at /backup/config/settings.json (synced above).
# imagerd reads it from CWD, so we cd /backup/config before launching it.
# onvif_conf_gen takes the settings path as argv[1] so it's explicit.
# onvif_simple_server (CGI, invoked by lighttpd) needs CWD=/home/app for
# its relative XML template lookups — the dispatcher scripts in /tmp/onvif
# handle that with their own `cd /home/app`.

log "Starting lighttpd on :80..."
/home/app/lighttpd -f /home/app/http/lighttpd.conf >> $LOGFILE 2>&1 &

ONVIF_CONF_DIR=/var/run/onvif
mkdir -p "$ONVIF_CONF_DIR"
if /home/app/onvif_conf_gen /backup/config/settings.json "$ONVIF_CONF_DIR/onvif.conf" >> $LOGFILE 2>&1; then
    log "ONVIF: regenerated $ONVIF_CONF_DIR/onvif.conf"
    mkdir -p /tmp/onvif
    for svc in device_service media_service media2_service ptz_service imaging_service events_service deviceio_service; do
        cat > /tmp/onvif/$svc <<EOF
#!/bin/sh
cd /home/app
exec /home/app/onvif_simple_server -c $ONVIF_CONF_DIR/onvif.conf $svc
EOF
        chmod +x /tmp/onvif/$svc
    done

    ONVIF_IFS=$(awk -F= '/^ifs=/{print $2; exit}' "$ONVIF_CONF_DIR/onvif.conf")
    ONVIF_PORT=$(awk -F= '/^port=/{print $2; exit}' "$ONVIF_CONF_DIR/onvif.conf")
    ONVIF_MODEL=$(awk -F= '/^model=/{print $2; exit}' "$ONVIF_CONF_DIR/onvif.conf")
    ONVIF_MANUF=$(awk -F= '/^manufacturer=/{print $2; exit}' "$ONVIF_CONF_DIR/onvif.conf")
    if [ "$ONVIF_PORT" = "80" ]; then
        ONVIF_XADDR="http://$IP_ADDR/onvif/device_service"
    else
        ONVIF_XADDR="http://$IP_ADDR:$ONVIF_PORT/onvif/device_service"
    fi
    (
        while true; do
            log "Starting wsd_simple_server (xaddr=$ONVIF_XADDR)..."
            /home/app/wsd_simple_server \
                -i "$ONVIF_IFS" -x "$ONVIF_XADDR" \
                -m "$ONVIF_MODEL" -n "$ONVIF_MANUF" \
                -p /tmp/wsd_simple_server.pid \
                -t /home/app/wsd_files -f
            log "wsd_simple_server exited (rc=$?), restarting in 5s..."
            sleep 5
        done
    ) >> $LOGFILE 2>&1 &
fi

(
    cd /backup/config    # settings.json is read from CWD by imagerd
    while true; do
        log "Starting imagerd..."
        /home/app/imagerd
        log "imagerd exited (rc=$?), restarting in 5s..."
        sleep 5
    done
) >> $LOGFILE 2>&1 &

# 9. Hardware watchdog. Stock kicks every 2s with a 5s timeout — the kernel
#    will reset the SoC if userspace stops kicking. Critical when running
#    headless: a wedged imagerd reboots itself instead of bricking the
#    camera until next power-cycle.
watchdog -t 2 -T 5 /dev/watchdog &

log "init.sh complete"
