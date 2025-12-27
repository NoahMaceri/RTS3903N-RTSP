#!/bin/sh

# Path to log file
LOGFILE=/tmp/sd/boot.log
echo "[`date`] Starting config.sh..." >> $LOGFILE

# Set LD_LIBRARY_PATH for required shared libraries
export LD_LIBRARY_PATH=/lib:/home/lib:/home/rt/lib:/home/app/locallib:/var/tmp/sd/lib:/tmp/sd/lib:$LD_LIBRARY_PATH
echo "[`date`] LD_LIBRARY_PATH=$LD_LIBRARY_PATH" >> $LOGFILE

# Function to kill unnecessary cloud-related processes
kill_cloud () {
    echo "[`date`] Killing cloud processes..." >> $LOGFILE
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
    echo "[`date`] Running firmware backup..." >> $LOGFILE
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
IP="192.168.4.48"
NETMASK="255.255.255.0"
GATEWAY="192.168.4.1"

# Launch wpa_supplicant if config exists
if [ -f /var/tmp/sd/Factory/wpa_supplicant.conf ]; then
    echo "[`date`] Running wpa_supplicant..." >> $LOGFILE
    wpa_supplicant -c/var/tmp/sd/Factory/wpa_supplicant.conf -g/var/tmp/wpa_supplicant-global -Dwext -iwlan0 -B
    sleep 3s
fi

# Attempt to assign static IP
echo "[`date`] Assigning static IP $IP..." >> $LOGFILE
ifconfig wlan0 $IP netmask $NETMASK up
route add default gw $GATEWAY wlan0

# Check if the gateway is reachable
ping -c 3 -W 2 $GATEWAY > /dev/null 2>&1
if [ $? -eq 0 ]; then
    echo "[`date`] Static IP successfully assigned and gateway is reachable." >> $LOGFILE
else
    echo "[`date`] Static IP failed, falling back to DHCP..." >> $LOGFILE
    udhcpc -i wlan0 -b -s "$DEFAULT_SCRIPT" &
    sleep 15
fi

# Log final IP information
echo "[`date`] Checking assigned IP on wlan0..." >> $LOGFILE
ifconfig wlan0 >> $LOGFILE

# Start Telnet server on port 9999 if not already running
echo "[`date`] Starting Telnet on port 9999..." >> $LOGFILE
/bin/busybox telnetd -l /bin/ash -p 9999 >> $LOGFILE 2>&1 &
echo "[`date`] Telnet started." >> $LOGFILE

# Wait for PTZ initialization (for compatible models)
echo "[`date`] Waiting 30s for PTZ movement to complete..." >> $LOGFILE
sleep 30s
killall dispatch 2>/dev/null
killall init.sh 2>/dev/null

echo "[`date`] config.sh fully executed." >> $LOGFILE
