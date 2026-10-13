/* download_upgrade — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "download_upgrade.h"

// ==== _init @ 0040121c size=72

void _init(void)

{
  FUN_00401c6c();
  FUN_004039e0();
  return;
}



// ==== _ftext @ 00401270 size=2140

undefined4 _ftext(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_26f8 [4096];
  char local_16f8 [4096];
  undefined1 auStack_6f8 [1024];
  undefined1 auStack_2f8 [64];
  undefined1 auStack_2b8 [64];
  undefined1 auStack_278 [256];
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  undefined *local_38 [2];
  int local_30;
  int local_2c;
  
  memset(auStack_6f8,0,0x400);
  memset(auStack_2f8,0,0x1c0);
  memset(&g_download_upgrade_info,0,0xd4);
  iVar1 = fopen("/backup/upgrade_conf",&DAT_00403bd8);
  if (iVar1 == 0) {
    puts("download_upgrade open upgrade_conf failed!");
    return 0xffffffff;
  }
  fread(auStack_2f8,1,0x1c0,iVar1);
  close(iVar1);
  printf("g_upgrade_conf =%s %s %s %s",auStack_2f8,auStack_178,auStack_278,auStack_2b8);
  snprintf(auStack_6f8,0x400,"/backup/wifi_conf \"%s\" \"%s\"",auStack_2f8,auStack_2b8);
  system(auStack_6f8);
  local_30 = access("/tmp/wpa_supplicant.conf",0);
  if (local_30 != 0) {
    puts("wifi_conf set wpa_supplicant.conf failed!");
    return 0xffffffff;
  }
  DAT_0041482c = 0;
  DAT_00414830 = 0;
  local_30 = 0;
  do {
    memset(local_16f8,0,0x1000);
    memset(auStack_26f8,0,0x1000);
    local_38[0] = (undefined *)0x0;
    system_cmd_withret_timeout("wpa_cli -i wlan0 status",auStack_26f8,0x1000,0x3c);
    iVar1 = strstr(auStack_26f8,"wpa_state=COMPLETED");
    if (iVar1 == 0) {
      uVar3 = strlen(auStack_26f8);
      if (uVar3 < 4) {
        iVar1 = 0;
        g_download_upgrade_info = g_download_upgrade_info + 1;
      }
      else {
        system_cmd_withret_timeout
                  ("wpa_cli -i wlan0 mib|grep dot11RSNA4WayHandshakeFailures|cut -d= -f2",
                   auStack_26f8,0x1000,0x3c);
        iVar1 = atoi(auStack_26f8);
        if (0 < iVar1) {
          puts("wifi password wrong");
          DAT_00414830 = 3;
          DAT_0041482c = 0;
          puts("wifi pwd error!");
          return 0xffffffff;
        }
        iVar1 = 0;
      }
    }
    else {
      iVar1 = strstr(auStack_26f8,"ip_address=");
      if (iVar1 == 0) {
        iVar1 = 1;
        DAT_00414824 = DAT_00414824 + 1;
      }
      else if (DAT_0041482c == 0) {
        local_2c = strstr(auStack_26f8,"bssid=");
        if (local_2c == 0) {
LAB_00401468:
          local_2c = 0x410000;
          memset_s(&DAT_00414894,0x20,0,0x20);
          sscanf(iVar1 + 0xb,"%s",local_2c + 0x4894);
          local_38[0] = &DAT_00414894;
          rm_enter(local_38);
          printf("ip = (%s)\n",&DAT_00414894);
        }
        else {
          memset_s(&DAT_00414854,0x20,0,0x20);
          sscanf(local_2c + 6,"%s");
          local_38[0] = &DAT_00414854;
          rm_enter(local_38);
          printf("bssid = (%s)\n",&DAT_00414854);
          iVar1 = strstr(auStack_26f8,"ip_address=");
          if (iVar1 != 0) goto LAB_00401468;
        }
        iVar1 = system_cmd_withret_timeout("cat /tmp/gw1",auStack_26f8,0x1000,0x3c);
        if (0 < iVar1) {
          memset(auStack_138,0,0x100);
          memset_s(&DAT_004148b4,0x20,0,0x20);
          snprintf(&DAT_004148b4,0x20,"%s",auStack_26f8);
          local_38[0] = &DAT_004148b4;
          rm_enter(local_38);
          printf("gw = (%s)\n",&DAT_004148b4);
          snprintf(auStack_138,0x100,
                   "arping %s -I wlan0 -c 1|grep \"reply from\"|sed -n 1p|cut -d[ -f2 | cut -d] -f1 | tr a-z A-Z"
                   ,&DAT_004148b4);
          iVar1 = system_cmd_withret_timeout(auStack_138,auStack_26f8,0x1000,0x3c);
          if (0 < iVar1) {
            memset_s(&DAT_00414874,0x20,0,0x20);
            snprintf(&DAT_00414874,0x20,"%s",auStack_26f8);
            local_38[0] = &DAT_00414874;
            rm_enter(local_38);
            printf("gwmac = (%s)\n",&DAT_00414874);
          }
        }
        iVar1 = system_cmd_withret_timeout("cat /tmp/mask",auStack_26f8,0x1000,0x3c);
        if (0 < iVar1) {
          memset_s(&DAT_004148d4,0x20,0,0x20);
          snprintf(&DAT_004148d4,0x20,"%s",auStack_26f8);
          local_38[0] = &DAT_004148d4;
          rm_enter(local_38);
          printf("mask = (%s)\n",&DAT_004148d4);
        }
        iVar1 = system_cmd_withret_timeout
                          ("ifconfig wlan0|grep HWaddr|awk \'{print $5}\'",auStack_26f8,0x1000,0x3c)
        ;
        if (iVar1 < 1) {
          iVar1 = 2;
          puts("reboot: ifconfig timeout no usb dev cause reboot1 !!! ");
          system("reboot -f");
        }
        else {
          memset_s(&DAT_00414834,0x20,0,0x20);
          snprintf(&DAT_00414834,0x20,"%s",auStack_26f8);
          local_38[0] = &DAT_00414834;
          iVar1 = 2;
          rm_enter(local_38);
          printf("mac = (%s)\n",&DAT_00414834);
        }
      }
      else {
        iVar1 = 2;
        puts("wifi have connected!");
      }
    }
    if (5 < g_download_upgrade_info) {
      puts("wpa may crashed, now reset");
      memset_s(local_16f8,0x1000,0,0x1000);
      system_cmd_withret_timeout("lsusb|grep \"0a5c\"",local_16f8,0x1000,0x3c);
      if (local_16f8[0] == '\0') {
        puts("no usb dev");
        puts("reboot: lsusb|grep cause reboot !!! ");
        system("reboot -f");
      }
      DAT_00414830 = 0;
      DAT_0041482c = 0;
      system_cmd_withret_timeout("/backup/script/killwifi.sh 1",local_16f8,0x1000,10);
      system_cmd_withret_timeout("/backup/script/wificonnect.sh",local_16f8,0x1000,0x3c);
    }
    DAT_00414828 = DAT_00414828 + 1;
    if (DAT_00414828 < 0x3d) {
      if (iVar1 != 0) goto LAB_00401720;
LAB_004016ac:
      if (DAT_00414830 == 0) {
        DAT_00414830 = 1;
        DAT_0041482c = 0;
        g_download_upgrade_info = 0;
        puts("wifi disconnected, now reconnect wifi");
        goto LAB_004017b0;
      }
    }
    else {
      puts("timeout reset wifi");
      DAT_00414830 = 0;
      DAT_0041482c = 0;
      DAT_00414828 = 0;
      system_cmd_withret_timeout("/backup/script/killwifi.sh 1",local_16f8,0x1000,10);
      system_cmd_withret_timeout("/backup/script/wificonnect.sh",local_16f8,0x1000,0x3c);
      if (iVar1 == 0) goto LAB_004016ac;
LAB_00401720:
      if (iVar1 != 1) break;
      if (DAT_00414830 != 2) {
        DAT_00414830 = 2;
        DAT_0041482c = 0;
        DAT_00414824 = 0;
        puts("wpa connected , now dhcp");
        system_cmd_withret_timeout("/backup/script/wifidhcp.sh",local_16f8,0x1000,0x3c);
        puts("wpa connected , now dhcp finish");
      }
      if (0x78 < DAT_00414824) {
        puts("long time no ip, now reset");
        DAT_00414830 = 0;
        DAT_0041482c = 0;
        DAT_00414824 = 0;
LAB_004017b0:
        system_cmd_withret_timeout("/backup/script/killwifi.sh 1",local_16f8,0x1000,10);
        system_cmd_withret_timeout("/backup/script/wificonnect.sh",local_16f8,0x1000,0x3c);
      }
    }
    DAT_0041482c = 0;
    usleep(1000000);
  } while( true );
  DAT_00414830 = 0;
  DAT_0041482c = 1;
  iVar1 = 5;
  DAT_00414828 = 0;
  puts("wifi connected ok!");
  while( true ) {
    memset(auStack_26f8,0,0x200);
    snprintf(auStack_26f8,0x200,"rm -rf %s;mkdir %s","/tmp/update","/tmp/update");
    system(auStack_26f8);
    iVar2 = get_upgrade_file(auStack_278,auStack_178);
    if (iVar2 == 0) {
      printf("get_upgradefile_ok");
      return local_30;
    }
    if (iVar2 == -2) {
      iVar1 = iVar1 + -1;
    }
    else if (iVar2 == -1) break;
    if (iVar1 < 1) break;
    sleep(5);
  }
  puts("download firmware try too much times");
  return 0xffffffff;
}



// ==== __uClibc_main @ 00403a30 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00401bbc();
  return;
}



// ==== _fini @ 00403a50 size=56

void _fini(void)

{
  FUN_00401bbc();
  return;
}



