#!/bin/sh

# Path to log file
LOGFILE=/var/tmp/sd/boot.log

# make a function to both log to the file and printk
log () {
    echo "[`date`] $1" >> $LOGFILE
    # This is the serial output on the board
    echo "$1" > /dev/ttyS1
}

# if logfile exists, delete it
if [ -f $LOGFILE ]; then
    rm $LOGFILE
fi

# echo "[`date`] Starting config.sh..." >> $LOGFILE
log "Starting config.sh..."

# Set LD_LIBRARY_PATH for required shared libraries
export LD_LIBRARY_PATH=/lib:/home/lib:/home/rt/lib:/home/app/locallib:/var/tmp/sd/lib:$LD_LIBRARY_PATH
# echo "[`date`] LD_LIBRARY_PATH=$LD_LIBRARY_PATH" >> $LOGFILE
log "LD_LIBRARY_PATH=$LD_LIBRARY_PATH"


# Function to kill unnecessary cloud-related processes
kill_cloud () {
    # echo "[`date`] Killing cloud processes..." >> $LOGFILE
    log "Killing cloud processes..."
    killall watch_process 2>/dev/null
    killall watchdog 2>/dev/null
    killall log_server 2>/dev/null
    killall cloud 2>/dev/null
    killall p2p_tnp 2>/dev/null
    killall mp4record 2>/dev/null
    killall oss 2>/dev/null
    killall rmm 2>/dev/null
    killall arp_test 2>/dev/null
}

# Backup firmware if it doesn't already exist
if [ ! -f /var/tmp/sd/backup/mtdblock0.bin ]; then
    # echo "[`date`] Running firmware backup..." >> $LOGFILE
    log "Running firmware backup..."
    /var/tmp/sd/wifi/make_backup.sh 2>&1 >> $LOGFILE &
    kill_cloud
fi

# Ensure cloud processes are killed
kill_cloud

# Determine the default DHCP script location
DEFAULT_SCRIPT=/backup/script/default.script
if [ -f /home/app/script/default.script ]; then
    DEFAULT_SCRIPT=/home/app/script/default.script
fi

# Network configuration is now driven by /var/tmp/sd/network.ini — that's
# the single file the user edits. We parse it here, regenerate
# wifi/wpa_supplicant.conf, and (optionally) apply static IP from it.
NETWORK_INI=/var/tmp/sd/network.ini
WPA_CONF=/var/tmp/sd/wifi/wpa_supplicant.conf

# Read a value from a sectioned INI file: get_ini <section> <key> <file>
# Pure busybox awk; ignores comments (#/;), tolerates whitespace around =.
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

if [ ! -f "$NETWORK_INI" ]; then
    log "ERROR: $NETWORK_INI is missing — copy network.ini from the SD payload"
    log "       and edit it with your WiFi credentials before booting."
else
    SSID=$(get_ini wifi    ssid     "$NETWORK_INI")
    PSK=$(get_ini  wifi    psk      "$NETWORK_INI")
    COUNTRY=$(get_ini wifi country  "$NETWORK_INI")
    BSSID=$(get_ini   wifi bssid    "$NETWORK_INI")
    NET_IP=$(get_ini       network  ip       "$NETWORK_INI")
    NET_NETMASK=$(get_ini  network  netmask  "$NETWORK_INI")
    NET_GATEWAY=$(get_ini  network  gateway  "$NETWORK_INI")

    if [ -n "$SSID" ]; then
        log "Generating $WPA_CONF from $NETWORK_INI..."
        {
            echo "# AUTO-GENERATED at boot from /var/tmp/sd/network.ini"
            echo "# DO NOT EDIT — this file is overwritten on every reboot."
            echo "ctrl_interface=/var/run/wpa_supplicant"
            echo "update_config=1"
            # Country code goes in the global section. Drivers that don't
            # support nl80211 regdomain queries (wext on Realtek 8188fu)
            # will just ignore this, so it's safe to always emit when set.
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
            # Express a preference for a specific AP if the user listed
            # a BSSID — useful for mesh / extender networks where
            # wpa_supplicant's roaming logic bounces between APs
            # mid-stream. We use `bssid_hint=` (soft preference) rather
            # than `bssid=` (hard lock) so a momentarily-unreachable AP
            # doesn't render the camera permanently unreachable — wpa
            # will fall back to ANY matching SSID if the hint can't be
            # associated.
            [ -n "$BSSID" ] && echo "    bssid_hint=$BSSID"
            # Disable background scanning while associated. The default
            # "simple:30:-65:300" bgscan kicks off a passive scan every 30s
            # when RSSI < -65 dBm, which knocks RTP off air for ~100-300ms
            # per scan — visible as stutters in Frigate / VLC.
            echo "    bgscan=\"\""
            echo "}"
        } > "$WPA_CONF"

        # Stock /etc/init.d/rcS starts its own wpa_supplicant + udhcpc from
        # /tmp/wpa_supplicant.conf before our SD hook runs. wlan0 is already
        # associated with the stock SSID at this point, and a second
        # wpa_supplicant -B would fail silently (interface busy / global
        # ctrl-socket collision). Tear them down so ours can take over.
        log "Stopping stock wpa_supplicant / udhcpc..."
        killall wpa_supplicant 2>/dev/null
        killall udhcpc 2>/dev/null
        sleep 1

        log "Running wpa_supplicant..."
        wpa_supplicant -c"$WPA_CONF" -g/var/tmp/wpa_supplicant-global -Dwext -iwlan0 -B
        sleep 3

        # Defensively force WiFi power-save off. The Realtek 8188fu driver
        # currently boots with PM off, but firmware updates have flipped
        # this default before — losing 50-200ms beacon-interval latency
        # mid-stream is hard to debug if it ever comes back on. iwconfig
        # is in busybox; silently no-op if missing.
        iwconfig wlan0 power off >/dev/null 2>&1

        # Boot-time association watchdog. wpa_supplicant returns
        # immediately after fork (we pass -B), so association happens
        # asynchronously. Poll for up to 60 s; if the radio is still
        # Not-Associated by then, blank out the bssid_hint and restart
        # wpa_supplicant. This is the escape hatch for the case where
        # a hinted AP is unreachable AND the soft fallback isn't kicking
        # in fast enough.
        waited=0
        while [ "$waited" -lt 60 ]; do
            if ! iwconfig wlan0 2>/dev/null | grep -q "Not-Associated"; then
                break
            fi
            sleep 5
            waited=$((waited + 5))
        done
        if iwconfig wlan0 2>/dev/null | grep -q "Not-Associated"; then
            log "WiFi: still Not-Associated after 60s — clearing bssid_hint and retrying"
            sed -i 's/^    bssid_hint=.*/    bssid_hint=/' "$WPA_CONF"
            killall wpa_supplicant 2>/dev/null
            sleep 1
            wpa_supplicant -c"$WPA_CONF" -g/var/tmp/wpa_supplicant-global -Dwext -iwlan0 -B
            sleep 3
            iwconfig wlan0 power off >/dev/null 2>&1
        fi

        # Log the achieved RSSI / link quality so an operator can grep
        # boot.log across cameras without ssh-ing each one. Falls back
        # to iwconfig if the driver-specific proc node isnt available
        # (e.g. on a non-rtl8188fu variant).
        if [ -r /proc/net/rtl8188fu/wlan0/rx_signal ]; then
            rssi=$(awk -F: '/rssi/{print $2}' /proc/net/rtl8188fu/wlan0/rx_signal)
            sigq=$(awk -F: '/signal_qual/{print $2}' /proc/net/rtl8188fu/wlan0/rx_signal)
            bssid=$(iwconfig wlan0 2>/dev/null | awk '/Access Point/{for(i=1;i<=NF;i++) if($i=="Point:") print $(i+1)}')
            log "WiFi: associated to ${bssid:-?}  RSSI=${rssi} dBm  link_quality=${sigq}/100"
        else
            line=$(iwconfig wlan0 2>/dev/null | awk '/Link Quality|Access Point/{gsub(/^[ \t]+/, ""); print; exit}')
            log "WiFi: ${line:-(no driver state)}"
        fi
    else
        log "WiFi: ssid empty in $NETWORK_INI; skipping wpa_supplicant"
    fi
fi

# Configure addressing — static IP if all three fields were set, else DHCP.
if [ -n "$NET_IP" ] && [ -n "$NET_NETMASK" ] && [ -n "$NET_GATEWAY" ]; then
    log "Configuring static IP: $NET_IP..."
    ifconfig wlan0 "$NET_IP" netmask "$NET_NETMASK" up
    route add default gw "$NET_GATEWAY" wlan0
    if ping -c 3 -W 2 "$NET_GATEWAY" > /dev/null 2>&1; then
        log "Static IP configured successfully, gateway reachable."
    else
        log "Warning: Gateway $NET_GATEWAY not reachable, but continuing."
    fi
else
    log "Using DHCP for network configuration..."
    udhcpc -i wlan0 -b -s "$DEFAULT_SCRIPT" &
    sleep 10
fi

# Log final IP information
# echo "[`date`] Checking assigned IP on wlan0..." >> $LOGFILE
log "Checking assigned IP on wlan0..."
# ifconfig wlan0 >> $LOGFILE
IP_ADDR=$(ifconfig wlan0 | grep 'inet ' | awk '{print $2}')
log "Assigned IP on wlan0: $IP_ADDR"

# Check if dev-tools folder exists
if [ -d /var/tmp/sd/dev-tools ]; then
    log "Dev-tools detected in /var/tmp/sd/dev-tools."

    # Make sure UNIX98 PTYs are available. Without devpts mounted on /dev/pts,
    # dropbear's open("/dev/ptmx") fails and SSH clients see "PTY allocation
    # request failed on channel 0" right after auth. Busybox telnetd uses BSD
    # ptys (/dev/pty* static nodes) so it works either way; that's why telnet
    # has been fine and SSH wasn't.
    mkdir -p /dev/pts
    grep -q ' /dev/pts ' /proc/mounts || mount -t devpts devpts /dev/pts

    # Start Telnet server on port 23 if not already running
    log "Starting Telnet on port 23..."
    /bin/busybox telnetd -p 23 >> $LOGFILE 2>&1 &
    log "Starting uftpd (dev-tools) on /var/tmp/sd..."
    /var/tmp/sd/dev-tools/sbin/uftpd -o writable /var/tmp/sd >> $LOGFILE 2>&1 &
    # dropbear: SSH server on port 22. Everything writable lives under
    # /var/tmp/sd (the SD card) — that's the only r/w location on this camera.
    # Host keys persist there so they survive reboots; generated on first boot
    # (RSA gen on this MIPS-I CPU takes ~30s; ED25519 is ~instant).
    DROPBEAR_BIN=/var/tmp/sd/dev-tools/sbin/dropbear
    DROPBEAR_KEYGEN=/var/tmp/sd/dev-tools/bin/dropbearkey
    DROPBEAR_KEYDIR=/var/tmp/sd/dev-tools/etc/dropbear
    DROPBEAR_PIDFILE=/var/tmp/sd/dev-tools/var/dropbear.pid
    if [ -x "$DROPBEAR_BIN" ]; then
        mkdir -p "$DROPBEAR_KEYDIR" "$(dirname "$DROPBEAR_PIDFILE")"
        if [ ! -f "$DROPBEAR_KEYDIR/dropbear_rsa_host_key" ]; then
            log "Generating dropbear RSA host key (one-time, ~30s)..."
            $DROPBEAR_KEYGEN -t rsa -f "$DROPBEAR_KEYDIR/dropbear_rsa_host_key" >> $LOGFILE 2>&1
        fi
        if [ ! -f "$DROPBEAR_KEYDIR/dropbear_ed25519_host_key" ]; then
            log "Generating dropbear ED25519 host key (one-time)..."
            $DROPBEAR_KEYGEN -t ed25519 -f "$DROPBEAR_KEYDIR/dropbear_ed25519_host_key" >> $LOGFILE 2>&1
        fi
        log "Starting dropbear SSH on port 22..."
        # -B  allow blank passwords (stock /etc/passwd often has empty root pwd)
        # -P  pidfile under /var/tmp/sd; default /var/run/* is tmpfs but make it
        #     explicit so all dropbear state stays in one r/w place.
        # (Syslog was disabled at compile time, so dropbear logs to stderr by
        #  default — no flag needed; -E only exists in syslog-enabled builds.)
        $DROPBEAR_BIN \
            -r "$DROPBEAR_KEYDIR/dropbear_rsa_host_key" \
            -r "$DROPBEAR_KEYDIR/dropbear_ed25519_host_key" \
            -P "$DROPBEAR_PIDFILE" \
            -p 22 \
            -B \
            >> $LOGFILE 2>&1 &
    fi
else
    log "Dev-tools not found in /var/tmp/sd/dev-tools; skipping Telnet and uftpd setup."
fi

# Skip the 30s stock PTZ calibration wait on non-PTZ boards.
# `ptz_tool probe`: mtdblock6 hw_ver[0] fast-path, /dev/ssp fallback.
# See docs/load_cpld_ssp.md §4 and docs/dispatch.md §10.
PTZ_TOOL=/var/tmp/sd/ptz_tool
if [ -x "$PTZ_TOOL" ] && "$PTZ_TOOL" probe >/dev/null 2>&1; then
    # `info` prints the detected motor variant; surface it in the log
    # so users debugging "stock loaded a different ssp.ko" can see
    # exactly what factory data says about this board.
    MOTOR=$("$PTZ_TOOL" info 2>/dev/null | awk -F'Motor type: *' '/Motor type:/ {print $2; exit}')
    log "PTZ detected (motor: ${MOTOR:-unknown}), waiting 30s for stock calibration..."
    sleep 30s
elif [ ! -x "$PTZ_TOOL" ] && [ -c /dev/ssp ]; then
    log "PTZ device present but ptz_tool missing; waiting 30s (conservative)..."
    sleep 30s
else
    log "No PTZ hardware detected, skipping 30s calibration wait."
fi
killall dispatch 2>/dev/null
killall init.sh 2>/dev/null

# Sync system time via SNTP. The hardware has no RTC, so without this every
# reboot starts the clock at the kernel epoch (~1970). The stock busybox image
# has no ntpd / ntpdate / rdate and a stripped wget, so we ship our own tiny
# SNTP client (./sntp) which does one UDP/123 round-trip and settimeofday.
#
# Run BEFORE lighttpd / imagerd / wsd_simple_server so anything that captures
# timestamps (logs, ONVIF SOAP responses, RTSP session creation) starts off
# with a sane wall clock instead of seeing it jump forward mid-operation.
# Blocking, but with a hard cap so a dead network can't stall the boot — the
# RTP path uses CLOCK_MONOTONIC, so a missed sync only affects log readability.
log "Syncing system time via SNTP (pool.ntp.org)..."
if /var/tmp/sd/sntp pool.ntp.org >> $LOGFILE 2>&1; then
    log "Time synced via SNTP."
else
    log "SNTP sync failed (rc=$?); continuing with unsynced clock."
fi

# Start HTTP server (lighttpd) for web interface
log "Starting HTTP server on port 80..."
/var/tmp/sd/lighttpd -f /var/tmp/sd/http/lighttpd.conf >> $LOGFILE 2>&1 &

# Start the imagerd daemon under a respawn supervisor. The RTSP
# server is now in-process, so this single binary serves both the encoder
# pipeline and the RTSP frontend on port 554.
cd /var/tmp/sd/

# if dev-tools is present dont allow the infinite cycle
if [ -d /var/tmp/sd/dev-tools ]; then
    log "Starting imagerd without respawn (dev-tools present)..."
    ./imagerd >> $LOGFILE 2>&1 &
else
  (
      while true; do
          log "Starting imagerd..."
          ./imagerd
          log "imagerd exited (rc=$?), restarting in 5s..."
          sleep 5
      done
  ) >> $LOGFILE 2>&1 &
fi

# ONVIF setup. Two pieces:
#   1. onvif_simple_server: SOAP request handler. NOT a daemon — it's a CGI
#      program invoked per HTTP request by lighttpd. We generate small
#      dispatcher scripts in /tmp/onvif/, one per ONVIF service. Each
#      tail-calls the binary with the service name as its last argument
#      (which is how onvif_simple_server selects the service handler).
#      lighttpd.conf aliases /onvif/ → /tmp/onvif/.
#   2. wsd_simple_server: real daemon. Listens on UDP 3702 multicast for
#      WS-Discovery probes and broadcasts Hello/Bye. Supervised.
#
# The conf at /var/tmp/sd/onvif/onvif.conf is regenerated from
# settings.json on every boot — see onvif_conf_gen.cpp.
ONVIF_CONF_DIR=/var/tmp/sd/onvif
mkdir -p "$ONVIF_CONF_DIR"
if /var/tmp/sd/onvif_conf_gen /var/tmp/sd/settings.json "$ONVIF_CONF_DIR/onvif.conf" >> $LOGFILE 2>&1; then
    log "ONVIF: regenerated $ONVIF_CONF_DIR/onvif.conf"

    # CGI dispatcher scripts in tmpfs (FAT32 can't preserve exec bits or
    # symlinks reliably). One file per service so lighttpd's alias mapping
    # works without mod_rewrite. The `cd` is critical — onvif_simple_server
    # opens its XML response templates ("device_service_files/*.xml" etc.)
    # via relative paths, so it has to run with /var/tmp/sd/ as CWD where
    # those directories live.
    mkdir -p /tmp/onvif
    for svc in device_service media_service media2_service ptz_service imaging_service events_service deviceio_service; do
        cat > /tmp/onvif/$svc <<EOF
#!/bin/sh
cd /var/tmp/sd
exec /var/tmp/sd/onvif_simple_server -c $ONVIF_CONF_DIR/onvif.conf $svc
EOF
        chmod +x /tmp/onvif/$svc
    done
    log "ONVIF: CGI dispatcher scripts written to /tmp/onvif/"

    # WS-Discovery daemon. Its CLI is positional (no -c): we have to pass
    # interface, XAddr URL, model, manufacturer, pidfile, and the XML
    # template directory ourselves. Most values come from the onvif.conf
    # we just generated (flat key=value, simple awk extract); the XAddr
    # URL needs the camera's runtime IP so we compose it here.
    ONVIF_IFS=$(awk -F= '/^ifs=/{print $2; exit}' "$ONVIF_CONF_DIR/onvif.conf")
    ONVIF_PORT=$(awk -F= '/^port=/{print $2; exit}' "$ONVIF_CONF_DIR/onvif.conf")
    ONVIF_MODEL=$(awk -F= '/^model=/{print $2; exit}' "$ONVIF_CONF_DIR/onvif.conf")
    ONVIF_MANUF=$(awk -F= '/^manufacturer=/{print $2; exit}' "$ONVIF_CONF_DIR/onvif.conf")
    if [ "$ONVIF_PORT" = "80" ]; then
        ONVIF_XADDR="http://$IP_ADDR/onvif/device_service"
    else
        ONVIF_XADDR="http://$IP_ADDR:$ONVIF_PORT/onvif/device_service"
    fi
    WSD_ARGS="-i $ONVIF_IFS -x $ONVIF_XADDR -m $ONVIF_MODEL -n $ONVIF_MANUF -p /tmp/wsd_simple_server.pid -t /var/tmp/sd/wsd_files -f"

    if [ -d /var/tmp/sd/dev-tools ]; then
        log "Starting wsd_simple_server without respawn (dev-tools present)..."
        /var/tmp/sd/wsd_simple_server $WSD_ARGS >> $LOGFILE 2>&1 &
    else
      (
          while true; do
              log "Starting wsd_simple_server (xaddr=$ONVIF_XADDR)..."
              /var/tmp/sd/wsd_simple_server $WSD_ARGS
              log "wsd_simple_server exited (rc=$?), restarting in 5s..."
              sleep 5
          done
      ) >> $LOGFILE 2>&1 &
    fi
else
    log "ONVIF: conf generation failed, skipping ONVIF services"
fi

log "config.sh fully executed."