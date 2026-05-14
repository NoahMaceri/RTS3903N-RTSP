#!/bin/sh
# /home/app/init.sh — on-flash boot entry for RTS3903N_RTSP.
#
# Invoked by the stock /etc/init.d/rcS after it mounts mtd4 (this squashfs)
# at /home. This is the on-flash equivalent of sd_payload/wifi/config.sh:
# the SD-card hijack starts after stock init.sh has loaded the kernel
# modules; on-flash, *we* are init.sh, so we have to do that ourselves.

LOGFILE=/var/log/boot.log
mkdir -p /var/log
log() {
    echo "[`date`] $1" >> $LOGFILE
    echo "$1" > /dev/ttyS1
}

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
# modules abort with "params error". Run it if present (it's a CGI-style
# one-shot, exits immediately) and fall back to plain insmod otherwise.
if [ -x /home/app/load_cpld_ssp ]; then
    /home/app/load_cpld_ssp >> $LOGFILE 2>&1
else
    [ -f /home/rt/ko/cpld_periph.ko ]      && insmod /home/rt/ko/cpld_periph.ko
    [ -f /home/rt/ko/ssp_ms41909.ko ]      && insmod /home/rt/ko/ssp_ms41909.ko
    [ -f /home/rt/ko/ssp_ms41909_union.ko ] && insmod /home/rt/ko/ssp_ms41909_union.ko
fi
# pid_list.ko is unparameterised — always safe to insmod.
[ -f /home/rt/ko/pid_list.ko ] && insmod /home/rt/ko/pid_list.ko

# Load the ISP firmware. This is the missing piece stock `rmm` does at
# startup — without it, sensor i²c never works and zero frames flow.
#
# It's a *two-stage* load:
#   1. Write any sensor's isp.fw to /sys/.../loadfw. The kernel module
#      uses this to bring up its ISP firmware loader, do basic ISP setup,
#      and probe the i²c sensor. After this, /sys/.../sensor is populated
#      with the detected sensor name (e.g. "SC2230"). The "wrong" fw is
#      enough for the probe step — it's not enough to actually drive
#      another sensor, but it gets the i²c bus alive.
#   2. Read /sys/.../sensor, map to the *specific* fw variant for that
#      sensor, write it to loadfw. This is the firmware that actually
#      tunes the ISP for the real sensor, and after it lands the encoder
#      pipeline starts producing frames.
#
# Each sensor has one or more fw variants in /home/lib/<sensor>/. SC2230
# has three (jin/lang/mipi) for different sensor sub-revisions; stock rmm
# defaults to isp_jin.fw. SC2390 has isp.fw + isp_dvp.fw. We default to
# the same as stock; if you have a different SC2230/SC2390 sub-variant,
# put the path in /backup/config/isp_firmware to override.
ISP_FW_OVERRIDE=/backup/config/isp_firmware

# Stage 1: bootstrap probe. Writing any valid isp.fw triggers the kernel
# module to set up the ISP and probe the sensor over i²c. We use sc2235's
# fw as the bootstrap because it exists on every Yi/Realtek SDK image —
# any of them would work since this load isn't expected to drive frames.
if [ -e /sys/devices/platform/rts_soc_camera/loadfw ]; then
    echo -n /home/lib/sc2235/isp.fw > /sys/devices/platform/rts_soc_camera/loadfw 2>/dev/null
    # The sensor probe is async; give it a beat to settle. Stock rmm sleeps
    # ~1s between the bootstrap load and reading the sensor file.
    sleep 1
fi

# Stage 2: read the detected sensor, pick the matched fw, reload.
fw=
if [ -f "$ISP_FW_OVERRIDE" ]; then
    fw=$(cat "$ISP_FW_OVERRIDE" 2>/dev/null)
    log "ISP firmware override: $fw"
elif [ -r /sys/devices/platform/rts_soc_camera/sensor ]; then
    sensor=$(cat /sys/devices/platform/rts_soc_camera/sensor 2>/dev/null | tr -d '\n\r ')
    log "Detected sensor via i2c probe: '$sensor'"
    case "$sensor" in
        SC2235) fw=/home/lib/sc2235/isp.fw ;;
        SC2232) fw=/home/lib/sc2232/isp.fw ;;
        SC1245) fw=/home/lib/sc1245/isp.fw ;;
        SC2230) fw=/home/lib/sc2230/isp_jin.fw ;;   # stock rmm's default variant
        SC2390) fw=/home/lib/sc2390/isp.fw ;;
        "")     log "WARN: sensor file empty after stage-1 probe — i2c probe may have failed" ;;
        *)      log "WARN: unknown sensor '$sensor' — no fw mapping" ;;
    esac
else
    log "WARN: /sys/.../sensor not readable; cannot detect sensor"
fi

if [ -n "$fw" ] && [ -f "$fw" ]; then
    echo -n "$fw" > /sys/devices/platform/rts_soc_camera/loadfw
    log "ISP firmware loaded for detected sensor: $fw"
else
    log "WARN: no matching ISP firmware loaded — frames will not flow"
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
            [ -n "$BSSID" ] && echo "    bssid=$BSSID"
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

# Wait for actual Wi-Fi association before SNTP. wpa_supplicant -B returns
# as soon as it daemonizes, well before the 4-way handshake completes; on
# this hardware it's typically ~5–8s after the static-IP-assign call.
# Without this poll, SNTP fires while the link layer is still negotiating
# and getaddrinfo/connect both hang or fail. Bound the wait at 15s so we
# don't stall the boot if Wi-Fi is broken.
log "Waiting for Wi-Fi association..."
for i in 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15; do
    if iwconfig wlan0 2>/dev/null | grep -q "Access Point: [0-9A-Fa-f]"; then
        log "wlan0 associated after ${i}s"
        break
    fi
    sleep 1
done

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
    for svc in device_service media_service media2_service ptz_service events_service deviceio_service; do
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
