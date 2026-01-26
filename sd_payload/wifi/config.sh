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

# Static network configuration
IP="192.168.5.49"
NETMASK="255.255.252.0"
GATEWAY="192.168.4.1"

# Launch wpa_supplicant if config exists
if [ -f /var/tmp/sd/Factory/wpa_supplicant.conf ]; then
    # echo "[`date`] Running wpa_supplicant..." >> $LOGFILE
    log "Running wpa_supplicant..."
    wpa_supplicant -c/var/tmp/sd/Factory/wpa_supplicant.conf -g/var/tmp/wpa_supplicant-global -Dwext -iwlan0 -B
    sleep 3s
fi

# Attempt to assign static IP
# echo "[`date`] Assigning static IP $IP..." >> $LOGFILE
log "Assigning static IP $IP..."
ifconfig wlan0 $IP netmask $NETMASK up
route add default gw $GATEWAY wlan0

# Check if the gateway is reachable
ping -c 3 -W 2 $GATEWAY > /dev/null 2>&1
if [ $? -eq 0 ]; then
    # echo "[`date`] Static IP successfully assigned and gateway is reachable." >> $LOGFILE
    log "Static IP successfully assigned and gateway is reachable."

else
    # echo "[`date`] Static IP failed, falling back to DHCP..." >> $LOGFILE
    log "Static IP failed, falling back to DHCP..."
    udhcpc -i wlan0 -b -s "$DEFAULT_SCRIPT" &
    sleep 15
fi

# Log final IP information
# echo "[`date`] Checking assigned IP on wlan0..." >> $LOGFILE
log "Checking assigned IP on wlan0..."
# ifconfig wlan0 >> $LOGFILE
IP_ADDR=$(ifconfig wlan0 | grep 'inet ' | awk '{print $2}')
log "Assigned IP on wlan0: $IP_ADDR"

# Start Telnet server on port 23 if not already running
log "Starting Telnet on port 23..."
/bin/busybox telnetd -p 23 >> $LOGFILE 2>&1 &

# Start FTP server
/var/tmp/sd/proftpd_rel/proftpd -c /var/tmp/sd/proftpd_rel/proftpd.conf

# Start HTTP server (lighttpd) for web interface
log "Starting HTTP server on port 80..."
/var/tmp/sd/lighttpd -f /var/tmp/sd/http/lighttpd.conf >> $LOGFILE 2>&1 &

# Wait for PTZ initialization (for compatible models)
log "Waiting 30s for PTZ movement to complete..."
sleep 30s
killall dispatch 2>/dev/null
killall init.sh 2>/dev/null

# Start imager streamer and RTSP server
cd /var/tmp/sd/
log "Starting imager_streamer..."
./imager_streamer >> $LOGFILE 2>&1 &
sleep 2

log "Starting rtsp_server..."
./rtsp_server >> $LOGFILE 2>&1 &

log "config.sh fully executed."