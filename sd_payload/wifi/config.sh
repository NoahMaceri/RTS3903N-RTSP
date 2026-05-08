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

# Static network configuration (leave empty to use DHCP)
# To use static IP, set all three values:
#   IP="192.168.1.100"
#   NETMASK="255.255.255.0"
#   GATEWAY="192.168.1.1"
IP=""
NETMASK=""
GATEWAY=""

# Launch wpa_supplicant if config exists
if [ -f /var/tmp/sd/Factory/wpa_supplicant.conf ]; then
    log "Running wpa_supplicant..."
    wpa_supplicant -c/var/tmp/sd/Factory/wpa_supplicant.conf -g/var/tmp/wpa_supplicant-global -Dwext -iwlan0 -B
    sleep 3s
fi

# Configure network - use static IP if all values are set, otherwise use DHCP
if [ -n "$IP" ] && [ -n "$NETMASK" ] && [ -n "$GATEWAY" ]; then
    log "Configuring static IP: $IP..."
    ifconfig wlan0 $IP netmask $NETMASK up
    route add default gw $GATEWAY wlan0

    # Verify gateway is reachable
    ping -c 3 -W 2 $GATEWAY > /dev/null 2>&1
    if [ $? -eq 0 ]; then
        log "Static IP configured successfully, gateway reachable."
    else
        log "Warning: Gateway $GATEWAY not reachable, but continuing with static IP."
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

# Start HTTP server (lighttpd) for web interface
log "Starting HTTP server on port 80..."
/var/tmp/sd/lighttpd -f /var/tmp/sd/http/lighttpd.conf >> $LOGFILE 2>&1 &

# Wait for PTZ initialization (for compatible models)
log "Waiting 30s for PTZ movement to complete..."
sleep 30s
killall dispatch 2>/dev/null
killall init.sh 2>/dev/null

# Start imager streamer and RTSP server under a respawn supervisor. If either
# daemon exits (crash, fatal threshold), the supervisor logs and restarts it
# after a short backoff — the camera stays usable without a reboot.
cd /var/tmp/sd/

(
    while true; do
        log "Starting imager_streamer..."
        ./imager_streamer
        log "imager_streamer exited (rc=$?), restarting in 5s..."
        sleep 5
    done
) >> $LOGFILE 2>&1 &
sleep 2

(
    while true; do
        log "Starting rtsp_server..."
        ./rtsp_server
        log "rtsp_server exited (rc=$?), restarting in 5s..."
        sleep 5
    done
) >> $LOGFILE 2>&1 &

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

log "config.sh fully executed."