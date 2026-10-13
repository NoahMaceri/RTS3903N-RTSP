/* dispatch — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "dispatch.h"

// ==== FUN_00401a70 @ 00401a70 size=64

/* WARNING: Removing unreachable block (ram,0x00401a90) */
/* WARNING: Removing unreachable block (ram,0x00401aa0) */

void FUN_00401a70(void)

{
  return;
}



// ==== FUN_00401ab0 @ 00401ab0 size=76

/* WARNING: Removing unreachable block (ram,0x00401adc) */
/* WARNING: Removing unreachable block (ram,0x00401aec) */

void FUN_00401ab0(void)

{
  return;
}



// ==== FUN_00401afc @ 00401afc size=176

/* WARNING: Removing unreachable block (ram,0x00401b5c) */

void FUN_00401afc(void)

{
  if (DAT_00426310 == '\0') {
    FUN_00401a70();
    DAT_00426310 = '\x01';
  }
  return;
}



// ==== FUN_00401bac @ 00401bac size=60

/* WARNING: Removing unreachable block (ram,0x00401bc8) */

void FUN_00401bac(void)

{
  FUN_00401ab0();
  return;
}



// ==== FUN_00401bf0 @ 00401bf0 size=148

undefined4 FUN_00401bf0(void)

{
  undefined1 auStack_208 [512];
  
  if (*(int *)(DAT_0042640c + 0x938) == 0x271c) {
    *(undefined4 *)(DAT_0042640c + 0x5ac) = 0;
    DAT_00426ab4 = 0;
  }
  else if (*(int *)(DAT_0042640c + 0x938) == 10000) {
    memset(auStack_208,0,0x200);
    FUN_00410988("/home/app/script/mount_sd.sh",auStack_208,0x200,0);
    *(undefined4 *)(DAT_0042640c + 0x5ac) = 1;
    DAT_00426ab4 = 0;
  }
  else {
    DAT_00426ab4 = 1;
    *(undefined4 *)(DAT_0042640c + 0x5ac) = 1;
  }
  return 0;
}



// ==== FUN_00401c84 @ 00401c84 size=124

void FUN_00401c84(int param_1)

{
  undefined2 uVar1;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  memset(&local_418,0,0x400);
  uVar1 = 0x74;
  if (param_1 == 0) {
    uVar1 = 0x75;
  }
  local_10 = CONCAT22(1,uVar1);
  local_14 = 1;
  local_18 = 1;
  local_418 = 1;
  local_414 = 1;
  local_c = 0;
  local_410 = local_10;
  local_40c = 0;
  FUN_00410ca4(DAT_004263f0,&local_418,0x10);
  return;
}



// ==== FUN_00401d00 @ 00401d00 size=68

void FUN_00401d00(void)

{
  undefined4 uVar1;
  
  uVar1 = open("/dev/console",1);
  ioctl(uVar1,0x80047478);
  close(uVar1);
  return;
}



// ==== FUN_004021e4 @ 004021e4 size=332

void FUN_004021e4(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  undefined1 auStack_198 [256];
  char local_98 [68];
  char local_54 [68];
  
  memset(auStack_198,0,0x100);
  if (*param_1 == '\0') {
    snprintf(auStack_198,0x100,"%s stop","/home/base/tools/hostapd.sh");
  }
  else {
    memset(local_54,0,0x42);
    memset(local_98,0,0x42);
    param_1 = param_1 + 1;
    iVar3 = 0;
    pcVar1 = local_54;
    pcVar2 = local_98;
    do {
      while( true ) {
        iVar3 = iVar3 + 1;
        if (*param_1 == '\"') break;
        cVar4 = param_1[0x21];
        pcVar5 = pcVar1 + 1;
        *pcVar1 = *param_1;
        pcVar1 = pcVar5;
        if (cVar4 != '\"') goto LAB_00402270;
LAB_004022ac:
        param_1 = param_1 + 1;
        *pcVar2 = '\\';
        pcVar2[1] = cVar4;
        pcVar2 = pcVar2 + 2;
        if (iVar3 == 0x21) goto LAB_004022c8;
      }
      cVar4 = param_1[0x21];
      *pcVar1 = '\\';
      pcVar5 = pcVar1 + 2;
      pcVar1[1] = '\"';
      pcVar1 = pcVar5;
      if (cVar4 == '\"') goto LAB_004022ac;
LAB_00402270:
      param_1 = param_1 + 1;
      *pcVar2 = cVar4;
      pcVar2 = pcVar2 + 1;
    } while (iVar3 != 0x21);
LAB_004022c8:
    snprintf(auStack_198,0x100,"%s start \"%s\" \"%s\"","/home/base/tools/hostapd.sh",local_54,
             local_98);
  }
  system(auStack_198);
  return;
}



// ==== FUN_00402330 @ 00402330 size=1344

void FUN_00402330(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_528 [1024];
  undefined4 local_128;
  undefined2 local_124;
  undefined1 local_116;
  undefined1 local_115;
  uint local_114;
  uint local_28;
  uint local_24;
  undefined1 *local_20 [3];
  
  memset(auStack_528,0,0x400);
  if (DAT_00426b50 == 0) {
    FUN_00410988("/home/app/script/ethdhcp.sh",auStack_528,0x400,0x3c);
    printf(&DAT_004120f8,"do_eth_connect",0x7e7,auStack_528);
    if (_fdata < 0) {
      printf(&DAT_00412120,"do_get_ip_info",0x7c0);
    }
    else {
      local_128 = 0x30687465;
      local_124 = (ushort)local_124._1_1_ << 8;
      iVar3 = ioctl(_fdata,0x8915,&local_128);
      if (iVar3 < 0) {
        puVar5 = (undefined4 *)__errno_location();
        uVar6 = *puVar5;
        uVar4 = strerror(uVar6);
        printf(&DAT_00412144,"do_get_ip_info",0x7c6,uVar6,uVar4);
      }
      else {
        local_28 = local_114;
        iVar3 = ioctl(_fdata,0x891b,&local_128);
        if (iVar3 < 0) {
          puVar5 = (undefined4 *)__errno_location();
          uVar6 = *puVar5;
          uVar4 = strerror(uVar6);
          printf(&DAT_00412144,"do_get_ip_info",0x7cc,uVar6,uVar4);
        }
        else {
          local_24 = local_114;
          FUN_00401d00();
          iVar3 = DAT_0042640c;
          *(undefined4 *)(DAT_0042640c + 0x9e8) = 2;
          *(undefined4 *)(iVar3 + 0x58c) = 100;
          uVar4 = inet_ntoa(local_28);
          strcpy(iVar3 + 0x3c0,uVar4);
          iVar3 = DAT_0042640c + 0x400;
          uVar4 = inet_ntoa(local_24);
          strcpy(iVar3,uVar4);
          printf(&DAT_00412178,"do_eth_connect",0x7ef,&DAT_004121a0,DAT_0042640c + 0x3c0,
                 DAT_0042640c + 0x400);
          FUN_00410988("ifconfig wlan0 0.0.0.0",auStack_528,0x400,0x3c);
          if (_fdata < 0) {
            printf(&DAT_00412120,"do_get_mac",0x7af);
          }
          else {
            local_128 = 0x6e616c77;
            local_124 = 0x30;
            iVar3 = ioctl(_fdata,0x8927,&local_128);
            if (iVar3 < 0) {
              puVar5 = (undefined4 *)__errno_location();
              uVar6 = *puVar5;
              uVar4 = strerror(uVar6);
              printf(&DAT_004121c0,"do_get_mac",0x7b5,uVar6,uVar4);
            }
            else {
              sprintf(DAT_0042640c + 0x360,"%02X:%02X:%02X:%02X:%02X:%02X",local_116,local_115,
                      local_114 & 0xff,local_114 >> 8 & 0xff,local_114 >> 0x10 & 0xff,
                      local_114 >> 0x18);
              printf(&DAT_00412214,"do_eth_connect",0x7f4,DAT_0042640c + 0x360);
            }
          }
          iVar3 = DAT_0042640c;
          uVar4 = DAT_0041223c;
          if (*(char *)(DAT_0042640c + 0x380) == '\0') {
            *(undefined4 *)(DAT_0042640c + 0x380) = DAT_00412238;
            uVar6 = DAT_00412240;
            *(undefined4 *)(iVar3 + 900) = uVar4;
            uVar4 = DAT_00412244;
            *(undefined4 *)(iVar3 + 0x388) = uVar6;
            uVar2 = DAT_00412249;
            uVar1 = DAT_00412248;
            *(undefined4 *)(iVar3 + 0x38c) = uVar4;
            *(undefined1 *)(iVar3 + 0x390) = uVar1;
            *(undefined1 *)(iVar3 + 0x391) = uVar2;
          }
          iVar3 = FUN_00410988("cat /tmp/gw0",auStack_528,0x400,0x3c);
          if (0 < iVar3) {
            local_20[0] = auStack_528;
            FUN_00410e6c(local_20);
            strcpy(DAT_0042640c + 0x3e0,auStack_528);
            printf(&DAT_0041225c,"do_eth_connect",0x7fe,DAT_0042640c + 0x3e0);
            snprintf(&local_128,0x100,
                     "arping %s -I %s -c 1|grep \"reply from\"|sed -n 1p|cut -d[ -f2 | cut -d] -f1 | tr a-z A-Z"
                     ,DAT_0042640c + 0x3e0,&DAT_004121a0);
            iVar3 = FUN_00410988(&local_128,auStack_528,0x400,0x3c);
            if (0 < iVar3) {
              FUN_00410e6c(local_20);
              strcpy(DAT_0042640c + 0x3a0,auStack_528);
              FUN_00410740("dispatch.c","do_eth_connect",0x804,"gwmac(%s)",DAT_0042640c + 0x3a0);
              printf(&DAT_004122e4,"do_eth_connect",0x805,DAT_0042640c + 0x3a0);
            }
          }
          uVar4 = DAT_00426410;
          *(undefined4 *)(DAT_0042640c + 0x584) = 1;
          iVar3 = ioctl(uVar4,0x20007001,0);
          if (iVar3 < 0) {
            puVar5 = (undefined4 *)__errno_location();
            uVar6 = *puVar5;
            uVar4 = strerror(uVar6);
            FUN_00410740("dispatch.c","do_eth_connect",0x809,"ioctl(%d) error(%d),%s",0x20007001,
                         uVar6,uVar4);
          }
          iVar3 = ioctl(DAT_00426410,0x2000700a,0);
          if (iVar3 < 0) {
            puVar5 = (undefined4 *)__errno_location();
            uVar6 = *puVar5;
            uVar4 = strerror(uVar6);
            FUN_00410740("dispatch.c","do_eth_connect",0x80a,"ioctl(%d) error(%d),%s",0x2000700a,
                         uVar6,uVar4);
          }
        }
      }
    }
  }
  else if (DAT_00426324 == 0) {
    system("/tmp/sd/Factory/factory_test.sh &");
    DAT_00426324 = 1;
    return;
  }
  return;
}



// ==== FUN_00402de8 @ 00402de8 size=3252

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00402de8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_2130 [4096];
  undefined1 auStack_1130 [4096];
  undefined1 auStack_130 [256];
  int local_30 [2];
  
  memset(auStack_1130,0,0x1000);
  memset(auStack_2130,0,0x1000);
  local_30[0] = 0;
  FUN_00410988("wpa_cli -i wlan0 status",auStack_2130,0x1000,0x3c);
  iVar1 = strstr(auStack_2130,"wpa_state=COMPLETED");
  if (iVar1 == 0) {
    uVar4 = strlen(auStack_2130);
    if (uVar4 < 4) {
      iVar1 = 0;
      DAT_0042641c = DAT_0042641c + 1;
    }
    else {
      if (*(int *)(DAT_0042640c + 0x5bc) == 1) {
        FUN_00410988("wpa_cli -i wlan0 mib|grep dot11RSNA4WayHandshakeFailures|cut -d= -f2",
                     auStack_2130,0x1000,0x3c);
        iVar1 = atoi(auStack_2130);
        if (0 < iVar1) {
          FUN_00410740("dispatch.c","do_monitor_wifi",0x66d,"wifi password wrong\n");
          uVar6 = DAT_00426410;
          iVar1 = DAT_0042640c;
          *(undefined4 *)(DAT_0042640c + 0x588) = 3;
          *(undefined4 *)(iVar1 + 0x584) = 0;
          iVar1 = ioctl(uVar6,0x20007004,0);
          if (iVar1 < 0) {
            puVar5 = (undefined4 *)__errno_location();
            uVar7 = *puVar5;
            uVar6 = strerror(uVar7);
            FUN_00410740("dispatch.c","do_monitor_wifi",0x670,"ioctl(%d) error(%d),%s",0x20007004,
                         uVar7,uVar6);
          }
          iVar1 = ioctl(DAT_00426410,0x2000700c,0);
          if (iVar1 < 0) {
            puVar5 = (undefined4 *)__errno_location();
            uVar7 = *puVar5;
            uVar6 = strerror(uVar7);
            FUN_00410740("dispatch.c","do_monitor_wifi",0x671,"ioctl(%d) error(%d),%s",0x2000700c,
                         uVar7,uVar6);
          }
          uVar6 = *(undefined4 *)(DAT_0042640c + 0x5ac);
          goto LAB_004037d0;
        }
      }
      iVar1 = 0;
    }
  }
  else {
    iVar2 = strstr(auStack_2130,"ip_address=");
    iVar1 = DAT_0042640c;
    if (iVar2 == 0) {
      iVar1 = 1;
      DAT_00426420 = DAT_00426420 + 1;
    }
    else if (*(int *)(DAT_0042640c + 0x584) == 0) {
      iVar3 = strstr(auStack_2130,"bssid=");
      if (iVar3 == 0) {
LAB_00402fa8:
        FUN_004105ec(iVar1 + 0x3c0,0x20,0,0x20);
        sscanf(iVar2 + 0xb,"%s",DAT_0042640c + 0x3c0);
        local_30[0] = DAT_0042640c + 0x3c0;
        FUN_00410e6c(local_30);
        iVar3 = DAT_0042640c + 0x3c0;
        FUN_00410740("dispatch.c","check_wifi_connect",0x5dc,"ip(%s)",iVar3);
      }
      else {
        FUN_004105ec(iVar1 + 0x380,0x20,0,0x20);
        sscanf(iVar3 + 6,"%s",DAT_0042640c + 0x380);
        local_30[0] = DAT_0042640c + 0x380;
        FUN_00410e6c(local_30);
        iVar3 = DAT_0042640c + 0x380;
        FUN_00410740("dispatch.c","check_wifi_connect",0x5c6,"bssid(%s)",iVar3);
        iVar2 = strstr(auStack_2130,"ip_address=");
        iVar1 = DAT_0042640c;
        if (iVar2 != 0) goto LAB_00402fa8;
      }
      iVar1 = FUN_00410988("cat /tmp/gw1",auStack_2130,0x1000,0x3c);
      if (0 < iVar1) {
        memset(auStack_130,0,0x100);
        FUN_004105ec(DAT_0042640c + 0x3e0,0x20,0,0x20);
        snprintf(DAT_0042640c + 0x3e0,0x20,"%s",auStack_2130);
        local_30[0] = DAT_0042640c + 0x3e0;
        FUN_00410e6c(local_30);
        iVar3 = DAT_0042640c + 0x3e0;
        FUN_00410740("dispatch.c","check_wifi_connect",0x5e7,"gw(%s)",iVar3);
        snprintf(auStack_130,0x100,
                 "arping %s -I wlan0 -c 1|grep \"reply from\"|sed -n 1p|cut -d[ -f2 | cut -d] -f1 | tr a-z A-Z"
                 ,DAT_0042640c + 0x3e0);
        iVar1 = FUN_00410988(auStack_130,auStack_2130,0x1000,0x3c);
        if (0 < iVar1) {
          FUN_004105ec(DAT_0042640c + 0x3a0,0x20,0,0x20);
          snprintf(DAT_0042640c + 0x3a0,0x20,"%s",auStack_2130);
          local_30[0] = DAT_0042640c + 0x3a0;
          FUN_00410e6c(local_30);
          iVar3 = DAT_0042640c + 0x3a0;
          FUN_00410740("dispatch.c","check_wifi_connect",0x5f0,"gwmac(%s)",iVar3);
        }
      }
      iVar1 = FUN_00410988("cat /tmp/mask",auStack_2130,0x1000,0x3c);
      if (0 < iVar1) {
        FUN_004105ec(DAT_0042640c + 0x400,0x20,0,0x20);
        snprintf(DAT_0042640c + 0x400,0x20,"%s",auStack_2130);
        local_30[0] = DAT_0042640c + 0x400;
        FUN_00410e6c(local_30);
        iVar3 = DAT_0042640c + 0x400;
        FUN_00410740("dispatch.c","check_wifi_connect",0x5fa,"mask(%s)",iVar3);
      }
      iVar1 = FUN_00410988("ifconfig wlan0|grep HWaddr|awk \'{print $5}\'",auStack_2130,0x1000,0x3c)
      ;
      if (iVar1 < 1) {
        FUN_00410740("dispatch.c","check_wifi_connect",0x608,"ifconfig timeout no usb dev\n",iVar3);
        FUN_00411098(*(undefined4 *)(DAT_0042640c + 0x5ac),"no_wifi_dev");
        puts("reboot: ifconfig timeout no usb dev cause reboot1 !!! ");
        send_reboot_msg(DAT_004263f0);
      }
      else {
        FUN_004105ec(DAT_0042640c + 0x360,0x20,0,0x20);
        snprintf(DAT_0042640c + 0x360,0x20,"%s",auStack_2130);
        local_30[0] = DAT_0042640c + 0x360;
        FUN_00410e6c(local_30);
        iVar3 = DAT_0042640c + 0x360;
        FUN_00410740("dispatch.c","check_wifi_connect",0x604,"mac(%s)",iVar3);
      }
      iVar2 = FUN_00410988("iwconfig wlan0|grep Quality|cut -d= -f2",auStack_2130,0x1000,0x3c);
      iVar1 = DAT_0042640c;
      if (iVar2 < 1) {
        iVar1 = 2;
        FUN_00410740("dispatch.c","check_wifi_connect",0x61d,"iwconfig timeout no usb dev\n",iVar3);
        FUN_00411098(*(undefined4 *)(DAT_0042640c + 0x5ac),"no_wifi_dev");
        puts("reboot: ifconfig timeout no usb dev cause reboot2 !!! ");
        send_reboot_msg(DAT_004263f0);
      }
      else {
        if (*(int *)(DAT_0042640c + 0x9a8) == 0) {
          iVar2 = atoi(auStack_2130);
          iVar2 = iVar2 * 0x14;
          *(int *)(iVar1 + 0x58c) = iVar2;
        }
        else {
          iVar2 = atoi(auStack_2130);
          *(int *)(iVar1 + 0x58c) = iVar2;
        }
        FUN_00410740("dispatch.c","check_wifi_connect",0x619,"signal_quality(%d)",iVar2);
        iVar1 = 2;
      }
    }
    else {
      iVar1 = 2;
      if (DAT_0042642c < *(uint *)(DAT_0042640c + 0x18c)) {
        iVar2 = FUN_00410988("iwconfig wlan0|grep Quality|cut -d= -f2",auStack_2130,0x1000,0x3c);
        iVar1 = DAT_0042640c;
        if (0 < iVar2) {
          if (*(int *)(DAT_0042640c + 0x9a8) == 0) {
            iVar2 = atoi(auStack_2130);
            iVar2 = iVar2 * 0x14;
            *(int *)(iVar1 + 0x58c) = iVar2;
          }
          else {
            iVar2 = atoi(auStack_2130);
            *(int *)(iVar1 + 0x58c) = iVar2;
          }
          FUN_00410740("dispatch.c","check_wifi_connect",0x632,"signal_quality(%d)",iVar2);
        }
        iVar1 = 2;
        DAT_0042642c = *(int *)(DAT_0042640c + 0x18c) + 6000;
      }
    }
  }
  DAT_00426424 = DAT_00426424 + 1;
  iVar2 = DAT_0042640c;
  uVar6 = DAT_00426410;
  if (0x3c < DAT_00426424) {
    FUN_00410740("dispatch.c","do_monitor_wifi",0x692,"timeout reset wifi\n");
    iVar2 = DAT_0042640c;
    if (*(int *)(DAT_0042640c + 0x5bc) == 1) {
      FUN_00410740("dispatch.c","do_monitor_wifi",0x695,"wifi connect timeout\n");
      uVar6 = DAT_00426410;
      iVar1 = DAT_0042640c;
      *(undefined4 *)(DAT_0042640c + 0x588) = 3;
      *(undefined4 *)(iVar1 + 0x584) = 0;
      iVar1 = ioctl(uVar6,0x20007004,0);
      if (iVar1 < 0) {
        puVar5 = (undefined4 *)__errno_location();
        uVar7 = *puVar5;
        uVar6 = strerror(uVar7);
        FUN_00410740("dispatch.c","do_monitor_wifi",0x698,"ioctl(%d) error(%d),%s",0x20007004,uVar7,
                     uVar6);
      }
      iVar1 = ioctl(DAT_00426410,0x2000700c,0);
      if (iVar1 < 0) {
        puVar5 = (undefined4 *)__errno_location();
        uVar7 = *puVar5;
        uVar6 = strerror(uVar7);
        FUN_00410740("dispatch.c","do_monitor_wifi",0x699,"ioctl(%d) error(%d),%s",0x2000700c,uVar7,
                     uVar6);
      }
      uVar6 = *(undefined4 *)(DAT_0042640c + 0x5ac);
      DAT_00426424 = 0;
LAB_004037d0:
      FUN_00411098(uVar6,"pwd_wrong");
      send_pwdwrong_msg(DAT_004263f0);
      return 0xffffffff;
    }
    *(undefined4 *)(DAT_0042640c + 0x588) = 0;
    *(undefined4 *)(iVar2 + 0x584) = 0;
    DAT_00426424 = 0;
    FUN_00410988("/home/app/script/killwifi.sh 1",auStack_1130,0x1000,10);
    FUN_00410988("/home/app/script/wificonnect.sh",auStack_1130,0x1000,0x3c);
    iVar2 = DAT_0042640c;
    uVar6 = DAT_00426410;
  }
  DAT_0042640c = iVar2;
  DAT_00426410 = uVar6;
  if (iVar1 == 0) {
    if (*(int *)(iVar2 + 0x588) == 0) {
      *(undefined4 *)(iVar2 + 0x588) = 1;
      *(undefined4 *)(iVar2 + 0x584) = 0;
      DAT_0042641c = 0;
      DAT_00426430 = 0;
      iVar1 = ioctl(uVar6,0x20007004,0);
      if (iVar1 < 0) {
        puVar5 = (undefined4 *)__errno_location();
        uVar7 = *puVar5;
        uVar6 = strerror(uVar7);
        FUN_00410740("dispatch.c","do_monitor_wifi",0x6b5,"ioctl(%d) error(%d),%s",0x20007004,uVar7,
                     uVar6);
      }
      iVar1 = ioctl(DAT_00426410,0x2000700a,0);
      if (iVar1 < 0) {
        puVar5 = (undefined4 *)__errno_location();
        uVar7 = *puVar5;
        uVar6 = strerror(uVar7);
        FUN_00410740("dispatch.c","do_monitor_wifi",0x6b6,"ioctl(%d) error(%d),%s",0x2000700a,uVar7,
                     uVar6);
      }
      FUN_00410740("dispatch.c","do_monitor_wifi",0x6b8,"wifi disconnected, now reconnect wifi\n");
      FUN_00401d00();
      FUN_00410988("/home/app/script/killwifi.sh 1",auStack_1130,0x1000,10);
      FUN_00410988("/home/app/script/wificonnect.sh",auStack_1130,0x1000,0x3c);
    }
  }
  else {
    if (iVar1 != 1) {
      if (*(int *)(iVar2 + 0x584) == 0) {
        iVar1 = ioctl(uVar6,0x20007001,0);
        if (iVar1 < 0) {
          puVar5 = (undefined4 *)__errno_location();
          uVar7 = *puVar5;
          uVar6 = strerror(uVar7);
          FUN_00410740("dispatch.c","do_monitor_wifi",0x6dd,"ioctl(%d) error(%d),%s",0x20007001,
                       uVar7,uVar6);
        }
        iVar1 = ioctl(DAT_00426410,0x2000700a,0);
        if (iVar1 < 0) {
          puVar5 = (undefined4 *)__errno_location();
          uVar7 = *puVar5;
          uVar6 = strerror(uVar7);
          FUN_00410740("dispatch.c","do_monitor_wifi",0x6de,"ioctl(%d) error(%d),%s",0x2000700a,
                       uVar7,uVar6);
        }
        if (*(int *)(DAT_0042640c + 0x5bc) == 1) {
          send_connected_msg(DAT_004263f0);
        }
        FUN_00411098(*(undefined4 *)(DAT_0042640c + 0x5ac),"wifi_connected");
        iVar1 = DAT_0042640c;
        DAT_00426424 = 0;
        *(undefined4 *)(DAT_0042640c + 0x588) = 0;
        *(undefined4 *)(iVar1 + 0x584) = 1;
      }
      else {
        *(undefined4 *)(iVar2 + 0x588) = 0;
        *(undefined4 *)(iVar2 + 0x584) = 1;
        DAT_00426424 = 0;
      }
      return 0;
    }
    if (*(int *)(iVar2 + 0x588) != 2) {
      *(undefined4 *)(iVar2 + 0x588) = 2;
      *(undefined4 *)(iVar2 + 0x584) = 0;
      DAT_00426420 = 0;
      FUN_00410740("dispatch.c","do_monitor_wifi",0x6c4,"wpa connected , now dhcp\n");
      FUN_00410988("/home/app/script/wifidhcp.sh",auStack_1130,0x1000,0x3c);
      FUN_00410740("dispatch.c","do_monitor_wifi",0x6c6,"wpa connected , now dhcp finish\n");
    }
    if (0x78 < DAT_00426420) {
      FUN_00410740("dispatch.c","do_monitor_wifi",0x6d0,"long time no ip, now reset\n");
      iVar1 = DAT_0042640c;
      *(undefined4 *)(DAT_0042640c + 0x588) = 0;
      *(undefined4 *)(iVar1 + 0x584) = 0;
      DAT_00426420 = 0;
      FUN_00410988("/home/app/script/killwifi.sh 1",auStack_1130,0x1000,10);
      FUN_00410988("/home/app/script/wificonnect.sh",auStack_1130,0x1000,0x3c);
    }
  }
  *(undefined4 *)(DAT_0042640c + 0x584) = 0;
  return 0;
}



// ==== FUN_00404118 @ 00404118 size=60

undefined4 FUN_00404118(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strncmp(DAT_0042640c + 0x277,&DAT_004128d8,2);
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== FUN_0040454c @ 0040454c size=764

void FUN_0040454c(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar2 = DAT_0042640c;
  *(undefined1 *)(DAT_0042640c + 0x7c) = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)((int)puVar2 + 0x1f1) = *(undefined1 *)(param_1 + 3);
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == 'C') {
    if (*(char *)(param_1 + 3) != 'N') goto LAB_00404628;
  }
  else {
    if (cVar1 == 'B') {
      uVar6 = 0x7080;
      if (*(char *)(param_1 + 3) == 'J') {
        uVar5 = 2;
        goto joined_r0x00404688;
      }
LAB_00404628:
      if (cVar1 == 'P') {
        cVar3 = *(char *)(param_1 + 3);
        uVar6 = 0;
        if (cVar3 == 'H') {
          uVar5 = 6;
          goto joined_r0x00404688;
        }
LAB_004046fc:
        uVar6 = 0;
        if (cVar3 == 'L') {
          uVar5 = 0xb;
          goto joined_r0x00404688;
        }
LAB_00404708:
        uVar6 = 0x7080;
        if (cVar1 == 'E') {
          uVar5 = 1;
          if (*(char *)(param_1 + 3) == 'U') {
            uVar6 = 0;
            uVar5 = 0x10;
          }
          goto joined_r0x00404688;
        }
        goto LAB_004047b8;
      }
      if (cVar1 != 'I') goto LAB_004045a4;
      cVar3 = *(char *)(param_1 + 3);
      uVar6 = 0;
      if (cVar3 == 'D') {
        uVar5 = 7;
        goto joined_r0x00404688;
      }
LAB_00404644:
      uVar6 = 0;
      if (cVar3 == 'L') {
        uVar5 = 10;
        goto joined_r0x00404688;
      }
LAB_00404650:
      if (cVar1 != 'N') goto LAB_0040474c;
      uVar6 = 0;
      if (*(char *)(param_1 + 3) == 'L') {
        uVar5 = 0xd;
        goto joined_r0x00404688;
      }
    }
    else {
      if (cVar1 == 'T') {
        uVar6 = 0;
        if (*(char *)(param_1 + 3) == 'W') {
          uVar5 = 3;
          goto joined_r0x00404688;
        }
LAB_004045a4:
        if (cVar1 != 'S') {
LAB_004046d8:
          if (cVar1 == 'I') {
            cVar3 = *(char *)(param_1 + 3);
            goto LAB_00404644;
          }
          goto LAB_00404798;
        }
        if (*(char *)(param_1 + 3) == 'G') {
          uVar6 = 0;
          uVar5 = 8;
          goto joined_r0x00404688;
        }
        if (*(char *)(param_1 + 3) == '1') {
          uVar6 = 0;
          uVar5 = 9;
          goto joined_r0x00404688;
        }
LAB_0040474c:
        uVar6 = 0x7080;
        if (cVar1 == 'C') {
          uVar5 = 1;
          if (*(char *)(param_1 + 3) == 'Z') {
            uVar6 = 0;
            uVar5 = 0xe;
          }
          goto joined_r0x00404688;
        }
        uVar5 = 1;
        if (cVar1 == 'D') {
          if (*(char *)(param_1 + 3) == 'E') {
            uVar6 = 0;
            uVar5 = 0xf;
          }
          goto joined_r0x00404688;
        }
        goto LAB_00404708;
      }
      if (cVar1 == 'K') {
        uVar6 = 0;
        if ((*(byte *)(param_1 + 3) & 0xfd) == 0x50) {
          uVar5 = 4;
          goto joined_r0x00404688;
        }
        goto LAB_004046d8;
      }
      if (cVar1 != 'J') goto LAB_00404628;
      if (*(char *)(param_1 + 3) == 'P') {
        uVar6 = 0;
        uVar5 = 5;
        goto joined_r0x00404688;
      }
LAB_00404798:
      if (cVar1 == 'P') {
        cVar3 = *(char *)(param_1 + 3);
        goto LAB_004046fc;
      }
      if (cVar1 != 'R') goto LAB_00404650;
      uVar6 = 0;
      if (*(char *)(param_1 + 3) == 'U') {
        uVar5 = 0xc;
        goto joined_r0x00404688;
      }
LAB_004047b8:
      uVar6 = 0x7080;
      if (cVar1 == 'U') {
        uVar5 = 1;
        if (*(char *)(param_1 + 3) == 'S') {
          uVar6 = 0;
          uVar5 = 0x11;
        }
        goto joined_r0x00404688;
      }
    }
    if (cVar1 == 'Y') {
      uVar6 = 0x7080;
      uVar5 = 1;
      if (*(char *)(param_1 + 3) == 'I') {
        uVar6 = 0;
        uVar5 = 0x11;
      }
      goto joined_r0x00404688;
    }
  }
  uVar6 = 0x7080;
  uVar5 = 1;
joined_r0x00404688:
  if (param_2 == 0) {
    *puVar2 = uVar5;
  }
  else if (param_2 == 1) {
    *puVar2 = uVar5;
    puVar2[1] = uVar5;
  }
  uVar4 = FUN_00404118();
  puVar2[0x12d] = uVar6;
  puVar2[2] = uVar4;
  choose_server(uVar5);
  return;
}



// ==== FUN_00404908 @ 00404908 size=288

void FUN_00404908(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fopen("/backup/upgrade_conf",&DAT_00412aa0);
  if (iVar1 != 0) {
    snprintf(&DAT_00426b70,0x40,"%s",DAT_0042640c + 0x420);
    snprintf(&DAT_00426bb0,0x40,"%s",DAT_0042640c + 0x460);
    snprintf(&DAT_00426bf0,0x100,"%s",param_1);
    snprintf(&DAT_00426cf0,0x40,"%s",param_2);
    fwrite(&DAT_00426b70,0x1c0,1,iVar1);
    fclose(iVar1);
    return;
  }
  printf("write_backup_url_md5_info error");
  return;
}



// ==== FUN_00404a28 @ 00404a28 size=14508

void FUN_00404a28(void)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  char cVar11;
  int *piVar12;
  undefined1 *puVar13;
  char cVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  ushort uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  int *piVar23;
  undefined4 *puVar24;
  uint local_6e0;
  int local_6dc;
  uint local_2e0;
  uint local_2dc;
  ushort local_2d8;
  int local_2d4;
  undefined4 local_2d0;
  int local_2cc;
  int *local_2c8;
  int local_2c4 [5];
  undefined1 auStack_2b0 [32];
  undefined1 local_290;
  undefined1 local_28f;
  undefined1 local_28e;
  undefined1 local_250;
  undefined1 local_24f;
  undefined1 auStack_248 [64];
  undefined1 auStack_208 [56];
  undefined1 auStack_1d0 [240];
  uint local_e0 [32];
  int *local_60;
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [2];
  int *local_30;
  int *local_2c;
  
  memset(&local_2e0,0,0x200);
  do {
    while( true ) {
      do {
        while( true ) {
          uVar21 = 0;
          do {
            uVar20 = uVar21 + 1;
            local_e0[uVar21] = 0;
            uVar21 = uVar20;
          } while (uVar20 < 0x20);
          local_40 = 10;
          local_e0[DAT_004263f0 >> 5] = local_e0[DAT_004263f0 >> 5] | 1 << (DAT_004263f0 & 0x1f);
          local_3c = 0;
          iVar4 = select(DAT_004263f0 + 1,local_e0,0,0,&local_40);
          if (-1 < iVar4) break;
          puVar10 = (undefined4 *)__errno_location();
          uVar19 = *puVar10;
          uVar6 = strerror(uVar19);
          FUN_00410740("dispatch.c","do_mq_process",0x9d4,"Select error(%d),%s",uVar19,uVar6);
          FUN_00410ed0(1000);
        }
      } while ((iVar4 == 0) ||
              (((int)local_e0[DAT_004263f0 >> 5] >> (DAT_004263f0 & 0x1f) & 1U) == 0));
      iVar4 = mq_receive(DAT_004263f0,&local_2e0,0x200,0);
      if (iVar4 != -1) break;
      FUN_00410740("dispatch.c","do_mq_process",0x9e1,"MsgHandle: mq_receive failure on mqfd");
      FUN_00410ed0(1000);
    }
    uVar21 = (uint)local_2d8;
    FUN_00410740("dispatch.c","do_mq_process",0x9e6,"dispatch got (0x%x)\n",uVar21);
    iVar5 = local_2cc;
    piVar9 = local_2d0;
    uVar18 = local_2d8;
    puVar10 = DAT_00426b54;
    piVar12 = DAT_0042640c;
    uVar6 = DAT_00426408;
    if (local_2d8 == 0x100) {
      FUN_00410740("dispatch.c","do_mq_process",0x1104,"do DISPATCH_APPLY_ABILITY_SETS\n",uVar21);
      piVar12 = DAT_0042640c;
      *(int **)((int)DAT_0042640c + 0xa87) = local_2d0;
      *(int *)((int)piVar12 + 0xa8b) = local_2cc;
      *(int **)((int)piVar12 + 0xa8f) = local_2c8;
      *(int *)((int)piVar12 + 0xa93) = local_2c4[0];
      *(int *)((int)piVar12 + 0xa97) = local_2c4[1];
      uVar18 = local_2d8;
    }
    else {
      cVar11 = (char)local_2d0;
      if (local_2d8 < 0x101) {
        if (local_2d8 == 0x91) {
          FUN_00410740("dispatch.c","do_mq_process",0xb6b,"set DISPATCH_SET_OTA_STATE\n",uVar21);
          DAT_0042640c[0x136] = (int)local_2d0;
          uVar18 = local_2d8;
        }
        else if (local_2d8 < 0x92) {
          if (local_2d8 == 0x7f) {
            DAT_0042640c[0x1de] = (int)local_2d0;
          }
          else if (local_2d8 < 0x80) {
            if (local_2d8 == 0x76) {
              if ((DAT_0042640c[0x12f] != 1) && (DAT_0042640c[0x182] == 0)) {
                iVar5 = ioctl(DAT_00426410,0x2000701c,0);
                if (iVar5 < 0) {
                  puVar10 = (undefined4 *)__errno_location();
                  local_30 = (int *)*puVar10;
                  uVar6 = strerror(local_30);
                  uVar21 = 0x2000701c;
                  FUN_00410740("dispatch.c","do_mq_process",0xeb4,"ioctl(%d) error(%d),%s",
                               0x2000701c,local_30,uVar6);
                }
                piVar12 = DAT_0042640c;
                uVar6 = DAT_00426408;
                DAT_0042640c[0x181] = 0;
                piVar12[0x24b] = 0;
                send_saveconfig_msg(uVar6);
                FUN_00410740("dispatch.c","do_mq_process",0xeb8,"DISPATCH_SET_LIGHT_ON save conf\n",
                             uVar21);
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 < 0x77) {
              if (local_2d8 == 0x72) {
                memset(&local_6e0,0,0x100);
                piVar12 = DAT_0042640c;
                uVar21 = DAT_004263f0;
                if (DAT_0042640c[0x16f] == 1) {
                  DAT_0042640c[0x170] = 1;
                  piVar12[299] = 1;
                  piVar12[0x16f] = 0;
                  send_success_msg(uVar21);
                  send_saveconfig_msg(DAT_00426408);
                  snprintf(&local_6e0,0x100,"%s stop","/home/base/tools/hostapd.sh");
                  system(&local_6e0);
                  FUN_00411098(DAT_0042640c[0x16b],"bind_success");
                  FUN_00410740("dispatch.c","do_mq_process",0xa49,"reset finished");
                  uVar18 = local_2d8;
                }
              }
              else if (local_2d8 < 0x73) {
                if (local_2d8 == 0x70) {
                  memset(&local_6e0,0,0x400);
                  snprintf(DAT_0042640c + 0x108,0x40,"%s",&local_2d0);
                  snprintf(DAT_0042640c + 0x118,0x40,"%s",&local_290);
                  snprintf(DAT_0042640c + 0xc0,0x20,"%s",&local_250);
                  FUN_004105ec((undefined1 *)((int)DAT_0042640c + 0x275),0x20,0,0x20);
                  memset((undefined1 *)((int)DAT_0042640c + 0x275),0x30,0x14);
                  piVar12 = DAT_0042640c;
                  puVar13 = (undefined1 *)((int)DAT_0042640c + 0x275);
                  *(undefined1 *)((int)DAT_0042640c + 0x277) = local_250;
                  *(undefined1 *)(piVar12 + 0x9e) = local_24f;
                  FUN_0040454c(puVar13,1);
                  link_audio_file();
                  FUN_00410988("/home/app/localbin/wifi_conf",&local_6e0,0x400,0x3c);
                  iVar5 = access("/tmp/wpa_supplicant.conf",0);
                  uVar18 = local_2d8;
                  if (iVar5 == 0) {
                    if (DAT_0042640c[0x162] == 3) {
                      FUN_00410988("/home/app/script/killwifi.sh 1",&local_6e0,0x400,10);
                      FUN_00410988("/home/app/script/wificonnect.sh",&local_6e0,0x400,0x3c);
                    }
                    piVar12 = DAT_0042640c;
                    piVar9 = DAT_0042640c + 0x118;
                    DAT_0042640c[0x161] = 0;
                    piVar12[0x162] = 0;
                    DAT_00426428 = 0;
                    FUN_00410740("dispatch.c","do_mq_process",0xa14,"got pwd(%s)",piVar9);
                    send_connectting_msg(DAT_004263f0);
                    uVar18 = local_2d8;
                  }
                }
                else if (local_2d8 < 0x71) {
                  if (local_2d8 != 0x68) goto LAB_00405c44;
                  DAT_0042640c[0x164] = 1;
                  FUN_00410740("dispatch.c","do_mq_process",0xa38,"wifi connected",uVar21);
                  uVar18 = local_2d8;
                }
                else {
                  memset(&local_6e0,0,0x80);
                  local_60 = local_2d0;
                  local_5c = 100000;
                  settimeofday(&local_60,0);
                  piVar12 = DAT_0042640c;
                  DAT_0042640c[0x167] = 1;
                  piVar12[0x168] = 1;
                  FUN_00410740("dispatch.c","do_mq_process",0xa32,"DISPATCH_SET_TIME %lu %s",
                               local_2d0,&local_6e0);
                  uVar18 = local_2d8;
                }
              }
              else if (local_2d8 == 0x74) {
                printf(&DAT_00413430,"do_mq_process",0xee5);
                uVar18 = local_2d8;
                if (DAT_0042640c[0x12f] != 1) {
                  if ((DAT_00426b54 != (undefined4 *)0x0) && (DAT_00426ab0 == 2)) {
                    (*(code *)DAT_00426b54[6])(1);
                  }
                  piVar12 = DAT_0042640c + 0x24b;
                  DAT_0042640c[0x182] = 0;
                  if (*piVar12 == 1) {
                    iVar5 = ioctl(DAT_00426410,0x2000701c,0);
                    if (iVar5 < 0) {
                      puVar10 = (undefined4 *)__errno_location();
                      local_30 = (int *)*puVar10;
                      uVar6 = strerror(local_30);
                      uVar21 = 0x2000701c;
                      FUN_00410740("dispatch.c","do_mq_process",0xef0,"ioctl(%d) error(%d),%s",
                                   0x2000701c,local_30,uVar6);
                    }
                    piVar12 = DAT_0042640c;
                    DAT_0042640c[0x181] = 0;
                    piVar12[0x24b] = 0;
                  }
                  send_saveconfig_msg(DAT_00426408);
                  FUN_00410740("dispatch.c","do_mq_process",0xef5,
                               "DISPATCH_SET_POWER_ON save conf\n",uVar21);
                  uVar18 = local_2d8;
                }
              }
              else if (local_2d8 < 0x75) {
                send_bind_fail_msg(DAT_004263f0);
                FUN_00410740("dispatch.c","do_mq_process",0xa50,"DISPATCH_SET_BIND_FAIL",uVar21);
                FUN_00411098(DAT_0042640c[0x16b],"bind_fail");
                uVar18 = local_2d8;
              }
              else {
                printf(&DAT_004133d8,"do_mq_process",0xecb);
                iVar5 = ioctl(DAT_00426410,0x2000701b,0);
                if (iVar5 < 0) {
                  puVar10 = (undefined4 *)__errno_location();
                  local_30 = (int *)*puVar10;
                  uVar6 = strerror(local_30);
                  uVar21 = 0x2000701b;
                  FUN_00410740("dispatch.c","do_mq_process",0xecc,"ioctl(%d) error(%d),%s",
                               0x2000701b,local_30,uVar6);
                }
                piVar9 = DAT_0042640c;
                piVar12 = DAT_0042640c + 0x181;
                DAT_0042640c[0x182] = 1;
                if (*piVar12 == 0) {
                  piVar9[0x24b] = 1;
                }
                puVar10 = DAT_00426b54;
                piVar9[0x181] = 1;
                DAT_00426a98 = 1;
                if (puVar10 != (undefined4 *)0x0) {
                  (*(code *)puVar10[1])();
                  piVar9 = DAT_0042640c;
                }
                if (piVar9[0x228] == 9) {
                  piVar9[0x13d] = 0;
                  piVar9[0x13c] = 3;
                }
                DAT_00426a9c = 6;
                send_saveconfig_msg(DAT_00426408);
                FUN_00410740("dispatch.c","do_mq_process",0xee0,"DISPATCH_SET_POWER_OFF save conf\n"
                             ,uVar21);
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 == 0x7a) {
              if (DAT_0042640c[0x180] != 1) {
                DAT_0042640c[0x180] = 1;
                send_saveconfig_msg(uVar6);
                FUN_00410740("dispatch.c","do_mq_process",0xe8f,"DISPATCH_SET_MIRROR_ON save conf\n"
                             ,uVar21);
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 < 0x7b) {
              if (local_2d8 == 0x78) {
                if (DAT_0042640c[0x185] != 0) {
                  DAT_0042640c[0x185] = 0;
                  send_saveconfig_msg(uVar6);
                  FUN_00410740("dispatch.c","do_mq_process",0xf69,
                               "DISPATCH_SET_MOTION_RCD save conf\n",uVar21);
                  uVar18 = local_2d8;
                }
              }
              else if (local_2d8 < 0x79) {
                if (DAT_0042640c[0x182] == 0) {
                  iVar5 = ioctl(DAT_00426410,0x2000701b,0);
                  if (iVar5 < 0) {
                    puVar10 = (undefined4 *)__errno_location();
                    local_30 = (int *)*puVar10;
                    uVar6 = strerror(local_30);
                    uVar21 = 0x2000701b;
                    FUN_00410740("dispatch.c","do_mq_process",0xec1,"ioctl(%d) error(%d),%s",
                                 0x2000701b,local_30,uVar6);
                  }
                  piVar12 = DAT_0042640c;
                  uVar6 = DAT_00426408;
                  DAT_0042640c[0x181] = 1;
                  piVar12[0x24b] = 0;
                  send_saveconfig_msg(uVar6);
                  FUN_00410740("dispatch.c","do_mq_process",0xec5,
                               "DISPATCH_SET_LIGHT_OFF save conf\n",uVar21);
                  uVar18 = local_2d8;
                }
              }
              else if (DAT_0042640c[0x185] != 1) {
                DAT_0042640c[0x185] = 1;
                send_saveconfig_msg(uVar6);
                FUN_00410740("dispatch.c","do_mq_process",0xf73,
                             "DISPATCH_SET_ALWAYS_RCD save conf\n",uVar21);
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 == 0x7c) {
              if (DAT_0042640c[0x168] == 1) {
                local_2c = DAT_0042640c;
                iVar5 = time(0);
                piVar12 = DAT_0042640c;
                local_2c[0x175] = iVar5;
                piVar12[0x174] = 0;
                piVar12[0x173] = 1;
                DAT_00426a94 = piVar12[99] + 100;
                FUN_00410740("dispatch.c","do_mq_process",0xa81,
                             "g_dispatch_info.mmap_info->motion_type  =%d, motion_time =[%lu]\n",0,
                             piVar12[0x175]);
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 < 0x7c) {
              if (DAT_0042640c[0x180] != 0) {
                DAT_0042640c[0x180] = 0;
                send_saveconfig_msg(uVar6);
                FUN_00410740("dispatch.c","do_mq_process",0xe99,
                             "DISPATCH_SET_MIRROR_OFF save conf\n",uVar21);
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 == 0x7d) {
              DAT_0042640c[0x173] = 0;
            }
            else {
              if (local_2d8 != 0x7e) goto LAB_00405c44;
              local_30 = DAT_0042640c;
              iVar5 = strcmp(DAT_0042640c + 0x1ff,&local_290);
              piVar12 = local_30 + 0x1df;
              if ((iVar5 != 0) ||
                 (local_30 = piVar12, iVar5 = strcmp(piVar12,&local_2d0), piVar12 = local_30,
                 iVar5 != 0)) {
                memset(piVar12,0,0x40);
                memset(DAT_0042640c + 0x1ef,0,0x40);
                memset(DAT_0042640c + 0x1ff,0,0x80);
                uVar6 = strlen(&local_2d0);
                strncpy(DAT_0042640c + 0x1df,&local_2d0,uVar6);
                uVar6 = strlen(auStack_2b0);
                strncpy(DAT_0042640c + 0x1ef,auStack_2b0,uVar6);
                uVar6 = strlen(&local_290);
                strncpy(DAT_0042640c + 0x1ff,&local_290,uVar6);
                FUN_00410958("killall p2p_tnp");
                send_saveconfig_msg(DAT_00426408);
                FUN_00410740("dispatch.c","do_mq_process",0xa72,"DISPATCH_SET_TNP save conf\n");
                uVar18 = local_2d8;
              }
            }
          }
          else if (local_2d8 == 0x88) {
            FUN_00410740("dispatch.c","do_mq_process",0xb47,"set DISPATCH_SET_BAN_DEVICE\n",uVar21);
            uVar6 = DAT_00426410;
            DAT_0042640c[0x12f] = 1;
            iVar5 = ioctl(uVar6,0x2000701b,0);
            if (iVar5 < 0) {
              puVar10 = (undefined4 *)__errno_location();
              local_30 = (int *)*puVar10;
              uVar6 = strerror(local_30);
              FUN_00410740("dispatch.c","do_mq_process",0xb4a,"ioctl(%d) error(%d),%s",0x2000701b,
                           local_30,uVar6);
            }
            puVar10 = DAT_00426b54;
            piVar12 = DAT_0042640c;
            DAT_0042640c[0x182] = 1;
            piVar12[0x181] = 1;
            DAT_00426a98 = 1;
            if (puVar10 != (undefined4 *)0x0) {
              (*(code *)puVar10[1])();
              piVar12 = DAT_0042640c;
            }
            if (piVar12[0x228] == 9) {
              piVar12[0x13d] = 0;
              piVar12[0x13c] = 3;
            }
            DAT_00426a9c = 6;
            uVar18 = local_2d8;
          }
          else if (local_2d8 < 0x89) {
            if (local_2d8 == 0x83) {
              DAT_0042640c[0x223] = DAT_0042640c[0x223] + 1;
            }
            else if (local_2d8 < 0x84) {
              if (local_2d8 == 0x81) {
                iVar5 = DAT_0042640c[0x166];
                DAT_0042640c[0x221] = DAT_0042640c[0x221] + 1;
                if (0 < iVar5) {
                  iVar5 = iVar5 - (char)(&DAT_00426adc)[DAT_00426b40 % 100];
                }
                (&DAT_00426adc)[DAT_00426b40 % 100] = 0;
                DAT_00426b40 = (DAT_00426b40 + 1) % 100;
                piVar12[0x166] = iVar5;
              }
              else if (local_2d8 < 0x82) {
                if (local_2d0 == (int *)&_DYNAMIC_LINKING) {
                  DAT_0042640c[0x21f] = DAT_0042640c[0x21f] + 1;
                }
                else if (local_2d0 == (int *)0x2) {
                  DAT_0042640c[0x220] = DAT_0042640c[0x220] + 1;
                }
              }
              else {
                iVar5 = DAT_0042640c[0x166];
                DAT_0042640c[0x222] = DAT_0042640c[0x222] + 1;
                if (((&DAT_00426adc)[DAT_00426b40 % 100] == '\0') && (iVar5 < 100)) {
                  iVar5 = iVar5 + 1;
                }
                (&DAT_00426adc)[DAT_00426b40 % 100] = 1;
                DAT_00426b40 = (DAT_00426b40 + 1) % 100;
                piVar12[0x166] = iVar5;
              }
            }
            else if (local_2d8 == 0x85) {
              DAT_0042655c = 1;
              FUN_00410740("dispatch.c","do_mq_process",0xea5,"set do format",uVar21);
              send_saveconfig_msg(DAT_00426408);
              usleep(1000000);
              puts("reboot: DISPATCH_SET_SD_FORMAT cause reboot !!! ");
              send_reboot_msg(DAT_004263f0);
              FUN_00410740("dispatch.c","do_mq_process",0xeaa,"DISPATCH_SET_SD_FORMAT save conf\n");
              uVar18 = local_2d8;
            }
            else if (local_2d8 < 0x85) {
              DAT_0042640c[0x224] = (int)local_2d0;
            }
            else {
              if (local_2d8 != 0x87) goto LAB_00405c44;
              cVar11 = local_2d0._2_1_;
              cVar14 = local_2d0._1_1_;
              if (((((char)DAT_0042640c[0x263] != (char)local_2d0) ||
                   (cVar1 = *(char *)((int)DAT_0042640c + 0x98d), cVar1 != local_2d0._1_1_)) ||
                  (cVar14 = cVar1, *(char *)((int)DAT_0042640c + 0x98e) != local_2d0._2_1_)) ||
                 (cVar11 = *(char *)((int)DAT_0042640c + 0x98e),
                 *(char *)((int)DAT_0042640c + 0x98f) != local_2d0._3_1_)) {
                *(char *)(DAT_0042640c + 0x263) = (char)local_2d0;
                *(char *)((int)piVar12 + 0x98d) = cVar14;
                *(char *)((int)piVar12 + 0x98e) = cVar11;
                *(char *)((int)piVar12 + 0x98f) = local_2d0._3_1_;
                send_saveconfig_msg(uVar6);
                FUN_00410740("dispatch.c","do_mq_process",0xb41,
                             "DISPATCH_SET_VIDEO_BACKUP_STATE save conf\n",uVar21);
                uVar18 = local_2d8;
              }
            }
          }
          else if (local_2d8 == 0x8c) {
            FUN_00410740("dispatch.c","do_mq_process",0xbb6,"set DISPATCH_SET_CLOUD_STORAGE_OFF\n",
                         uVar21);
            *(undefined2 *)(DAT_0042640c + 0x131) = 0;
            uVar18 = local_2d8;
          }
          else if (local_2d8 < 0x8d) {
            if (local_2d8 == 0x8a) {
              FUN_00410740("dispatch.c","do_mq_process",0xb80,
                           "set DISPATCH_FINISH_SYNC_INFO_FROM_SERVER\n",uVar21);
              DAT_0042640c[0x130] = 0;
              uVar18 = local_2d8;
            }
            else if (local_2d8 < 0x8b) {
              FUN_00410740("dispatch.c","do_mq_process",0xb72,"set DISPATCH_SYNC_INFO_FROM_SERVER\n"
                           ,uVar21);
              DAT_0042640c[0x130] = 1;
              uVar18 = local_2d8;
            }
            else {
              FUN_00410740("dispatch.c","do_mq_process",0xbb0,"set DISPATCH_SET_CLOUD_STORAGE_ON\n",
                           uVar21);
              *(undefined2 *)(DAT_0042640c + 0x131) = 1;
              uVar18 = local_2d8;
            }
          }
          else if (local_2d8 == 0x8e) {
            FUN_00410740("dispatch.c","do_mq_process",0xb78,"set DISPATCH_SET_TZ_OFFSET\n",uVar21);
            DAT_0042640c[0x12e] = (int)local_2d0 / 1000;
            FUN_00410740("dispatch.c","do_mq_process",0xb7b,"tz_offset(%d)\n",(int)local_2d0 / 1000)
            ;
            uVar18 = local_2d8;
          }
          else if (local_2d8 < 0x8e) {
            FUN_00410740("dispatch.c","do_mq_process",0xbc8,"set DISPATCH_SET_REGION\n",uVar21);
            memset(DAT_0042640c + 3,0,0x80);
            memset(DAT_0042640c + 0x43,0,0x40);
            memset(DAT_0042640c + 0x53,0,0x40);
            snprintf(DAT_0042640c + 3,0x80,"%s",&local_2c8);
            snprintf(DAT_0042640c + 0x43,0x40,"%s",auStack_248);
            snprintf(DAT_0042640c + 0x53,0x40,"%s",auStack_208);
            piVar12 = DAT_0042640c;
            DAT_0042640c[1] = (int)local_2d0;
            piVar12[2] = local_2cc;
            uVar18 = local_2d8;
          }
          else if (local_2d8 == 0x8f) {
            FUN_00410740("dispatch.c","do_mq_process",0xb5d,"set DISPATCH_SET_PWD_USED_CNT\n",uVar21
                        );
            DAT_0042640c[0x15e] = DAT_0042640c[0x15e] + 1;
            uVar18 = local_2d8;
          }
          else {
            if (local_2d8 != 0x90) goto LAB_00405c44;
            FUN_00410740("dispatch.c","do_mq_process",0xb64,"set DISPATCH_SET_PWD_SYNC_SERVER\n",
                         uVar21);
            DAT_0042640c[0x15f] = 1;
            uVar18 = local_2d8;
          }
        }
        else if (local_2d8 == 0xe7) {
          DAT_00426b48 = DAT_0042640c[99] + 600;
          FUN_00410740("dispatch.c","do_mq_process",0x100a,"got rcd heartbeat\n",uVar21);
          uVar18 = local_2d8;
        }
        else if (local_2d8 < 0xe8) {
          if (local_2d8 == 0x99) {
            send_wrong_device_msg(DAT_004263f0);
            FUN_00410740("dispatch.c","do_mq_process",0xa57,"DISPATCH_SPEAK_WRONG_DEVICE",uVar21);
            FUN_00411098(DAT_0042640c[0x16b],"wrong_device");
            uVar18 = local_2d8;
          }
          else if (local_2d8 < 0x9a) {
            if (local_2d8 == 0x95) {
              FUN_00410740("dispatch.c","do_mq_process",0xbbc,
                           "set DISPATCH_SET_CLOUD_STORAGE_MODE_ALL_DAY\n",uVar21);
              *(undefined2 *)((int)DAT_0042640c + 0x4c6) = 1;
              uVar18 = local_2d8;
            }
            else if (local_2d8 < 0x96) {
              if (local_2d8 == 0x93) {
                FUN_00410740("dispatch.c","do_mq_process",0xc11,
                             "set DISPATCH_SET_PANORAMA_CAPTURE_COUNT\n",uVar21);
                DAT_0042640c[0x13d] = DAT_0042640c[0x13d] + 1;
                uVar18 = local_2d8;
              }
              else if (local_2d8 < 0x94) {
                DAT_0042640c[0x13c] = (int)local_2d0;
                FUN_00410740("dispatch.c","do_mq_process",0xc08,
                             "set DISPATCH_SET_PANORAMA_CAPTURE_STATE [0x%x]\n",local_2d0);
                uVar18 = local_2d8;
                if (DAT_0042640c[0x13c] == 0) {
                  DAT_0042640c[0x13d] = 0;
                }
              }
              else {
                FUN_00410740("dispatch.c","do_mq_process",0xbc2,
                             "set DISPATCH_SET_CLOUD_STORAGE_MODE_MOTION_DETECT\n",uVar21);
                *(undefined2 *)((int)DAT_0042640c + 0x4c6) = 0;
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 == 0x97) {
              FUN_00410740("dispatch.c","do_mq_process",0xb8d,"set DISPATCH_CLEAR_API_SERVER\n",
                           uVar21);
              uVar6 = DAT_00426408;
              DAT_0042640c[0xae] = 2;
              send_saveconfig_msg(uVar6);
              uVar18 = local_2d8;
            }
            else if (local_2d8 < 0x98) {
              FUN_00410740("dispatch.c","do_mq_process",0xb86,"set DISPATCH_SAVE_API_SERVER\n",
                           uVar21);
              uVar6 = DAT_00426408;
              DAT_0042640c[0xae] = 1;
              send_saveconfig_msg(uVar6);
              uVar18 = local_2d8;
            }
            else {
              send_bind_timeout_msg(DAT_004263f0);
              FUN_00410740("dispatch.c","do_mq_process",0xa5e,"DISPATCH_SET_BIND_TIMEOUT finished",
                           uVar21);
              FUN_00411098(DAT_0042640c[0x16b],"bind_timeout");
              uVar18 = local_2d8;
            }
          }
          else if (local_2d8 == 0xe2) {
            if (0 < DAT_0042640c[0x16c]) {
              DAT_0042640c[0x16c] = DAT_0042640c[0x16c] + -1;
            }
          }
          else if (local_2d8 < 0xe3) {
            if (local_2d8 == 0x9b) {
              local_30 = local_2d0;
              FUN_00410740("dispatch.c","do_mq_process",0x10b8,
                           "set DISPATCH_SET_LAPSE_VIDEO_MODIFY, %d\n",local_2d0);
              DAT_0042640c[0x276] = (int)local_30;
              uVar18 = local_2d8;
            }
            else if (local_2d8 < 0x9b) {
              piVar9 = (int *)DAT_0042640c[0x275];
              if (piVar9 != local_2d0) {
                DAT_0042640c[0x275] = (int)local_2d0;
                piVar12[0x276] = 1;
                local_2c = local_2d0;
                send_saveconfig_msg(uVar6);
                FUN_00410740("dispatch.c","do_mq_process",0x10ad,
                             "DISPATCH_SET_LAPSE_VIDEO save conf(lapse_video_enable=%d)\n",local_2c)
                ;
                piVar9 = (int *)DAT_0042640c[0x275];
              }
              uVar18 = local_2d8;
              if (piVar9 == (int *)&_DYNAMIC_LINKING) {
                DAT_0042640c[0x277] = 0;
              }
            }
            else {
              if (local_2d8 != 0xe1) goto LAB_00405c44;
              piVar9 = DAT_0042640c + 0x16f;
              DAT_0042640c[0x16c] = DAT_0042640c[0x16c] + 1;
              uVar20 = DAT_004263f0;
              if (*piVar9 == 1) {
                piVar12[0x170] = 1;
                piVar12[0x16f] = 0;
                send_success_msg(uVar20);
                send_saveconfig_msg(DAT_00426408);
                FUN_00411098(DAT_0042640c[0x16b],"bind_success");
                FUN_00410740("dispatch.c","do_mq_process",0xc23,"DISPATCH_P2P_CONNECTTED finished",
                             uVar21);
                uVar18 = local_2d8;
              }
            }
          }
          else if (local_2d8 == 0xe4) {
            DAT_0042640c[0x16d] = (int)local_2d0;
            if (((local_2d0 == (int *)0x0) && (piVar12[0x161] != 0)) &&
               (iVar5 = ioctl(DAT_00426410,0x20007001,0), uVar18 = local_2d8, iVar5 < 0)) {
              puVar10 = (undefined4 *)__errno_location();
              local_30 = (int *)*puVar10;
              uVar6 = strerror(local_30);
              FUN_00410740("dispatch.c","do_mq_process",0xc4d,"ioctl(%d) error(%d),%s",0x20007001,
                           local_30,uVar6);
              uVar18 = local_2d8;
            }
          }
          else if (local_2d8 < 0xe4) {
            DAT_0042640c[0x16d] = (int)local_2d0;
            if (((0 < (int)local_2d0) && (*piVar12 == 1)) && (piVar12[0x16b] == 1)) {
              DAT_00426b44 = 1;
            }
          }
          else if (local_2d8 == 0xe5) {
            piVar9 = DAT_0042640c + 0x161;
            DAT_0042640c[0x16d] = 0;
            if ((*piVar9 != 0) &&
               (iVar5 = ioctl(DAT_00426410,0x20007001,0), piVar12 = DAT_0042640c, iVar5 < 0)) {
              puVar10 = (undefined4 *)__errno_location();
              uVar19 = *puVar10;
              uVar6 = strerror(uVar19);
              FUN_00410740("dispatch.c","do_mq_process",0xc57,"ioctl(%d) error(%d),%s",0x20007001,
                           uVar19,uVar6);
              piVar12 = DAT_0042640c;
            }
            FUN_00411098(piVar12[0x16b],"p2p_clr");
            uVar18 = local_2d8;
          }
          else {
            if (local_2d8 != 0xe6) goto LAB_00405c44;
            if (DAT_0042640c[0x168] == 1) {
              local_2c = DAT_0042640c;
              iVar5 = time(0);
              piVar12 = DAT_0042640c;
              local_2c[0x175] = iVar5;
              piVar12[0x174] = 1;
              piVar12[0x173] = 1;
              FUN_00410740("dispatch.c","do_mq_process",0xa91,
                           "g_dispatch_info.mmap_info->motion_type  =%d, motion_time =[%lu]\n",1,
                           piVar12[0x175]);
              uVar18 = local_2d8;
            }
          }
        }
        else if (local_2d8 == 0xf0) {
          FUN_00410740("dispatch.c","do_mq_process",0x10e0,"set DISPATCH_CLOUD_PIC_INDEX_OCCUR\n",
                       uVar21);
          piVar12 = DAT_0042640c;
          uVar18 = local_2d8;
          if (DAT_0042640c[0x168] == 1) {
            DAT_0042640c[0x133] = (int)local_2d0;
            iVar5 = time(0);
            piVar12[0x134] = iVar5;
            uVar18 = local_2d8;
          }
        }
        else if (local_2d8 < 0xf1) {
          if (local_2d8 == 0xec) {
            DAT_0042640c[0x26e] = (int)local_2d0;
            piVar12[0x26f] = local_2cc;
            piVar12[0x270] = (int)local_2c8;
            piVar12[0x271] = local_2c4[0];
            piVar12[0x272] = local_2c4[1];
            piVar12[0x273] = local_2c4[2];
            FUN_00410740("dispatch.c","do_mq_process",0x1038,"DISPATCH_SET_SCHEDULE_POWER\n",uVar21)
            ;
            uVar18 = local_2d8;
          }
          else if (local_2d8 < 0xed) {
            if (local_2d8 == 0xea) {
              DAT_0042640c[0x17c] = 1;
              piVar12[0x17d] = 1;
            }
            else if (local_2d8 < 0xeb) {
              if (local_2d8 != 0xe8) goto LAB_00405c44;
              DAT_00426b4c = (int)(DAT_00426b4c + (int)local_2d0) / 2;
              FUN_00410740("dispatch.c","do_mq_process",0x1011,"rcd cost %d\n",DAT_00426b4c);
              uVar18 = local_2d8;
              if (DAT_00426b4c < 0x9c41) {
                if (DAT_00426b4c < 20000) {
                  DAT_0042640c[0x24e] = 10000;
                }
              }
              else {
                DAT_0042640c[0x24e] = 0x2713;
              }
            }
            else {
              FUN_00410740("dispatch.c","do_mq_process",0xf02,"DISPATCH_BABYCRY_CLEAR chn = %d\n",
                           local_2d0);
              uVar18 = local_2d8;
              if (local_2d0 < (int *)0x2) {
                DAT_0042640c[(int)(local_2d0 + 0x5f)] = 0;
              }
            }
          }
          else if (local_2d8 == 0xee) {
            DAT_0042640c[0x17e] = 1;
            piVar12[0x17f] = 1;
          }
          else if (local_2d8 < 0xef) {
            if (DAT_0042640c[0x168] == 1) {
              local_2c = DAT_0042640c;
              iVar5 = time(0);
              piVar12 = DAT_0042640c;
              local_2c[0x175] = iVar5;
              piVar12[0x174] = 2;
              piVar12[0x173] = 1;
              DAT_00426a94 = piVar12[99] + 100;
              puts("test human detect!!!");
              FUN_00410740("dispatch.c","do_mq_process",0xaa2,
                           "g_dispatch_info.mmap_info->motion_type  =%d, motion_time =[%lu]\n",
                           DAT_0042640c[0x174],DAT_0042640c[0x175]);
              uVar18 = local_2d8;
            }
          }
          else {
            FUN_00410740("dispatch.c","do_mq_process",0xf12,
                         "DISPATCH_ABNORMAL_SOUND_CLEAR chn = %d\n",local_2d0);
            uVar18 = local_2d8;
            if (local_2d0 < (int *)0x2) {
              DAT_0042640c[(int)((int)local_2d0 + 0x17e)] = 0;
            }
          }
        }
        else if (local_2d8 == 0xf4) {
          FUN_00410740("dispatch.c","do_mq_process",0x10ff,"set DISPATCH_SET_CLOUD_IMAGE_OFF\n",
                       uVar21);
          DAT_0042640c[0x132] = 0;
          uVar18 = local_2d8;
        }
        else if (local_2d8 < 0xf5) {
          if (local_2d8 == 0xf2) {
            DAT_0042640c[0x135] = (int)local_2d0;
            FUN_00410740("dispatch.c","do_mq_process",0x10f4,
                         "dispatch DISPATCH_CLOUD_PIC_SET_INTERVAL, value = %d\n",local_2d0);
            uVar18 = local_2d8;
          }
          else if (local_2d8 < 0xf3) {
            FUN_00410740("dispatch.c","do_mq_process",0x10eb,"set DISPATCH_CLOUD_PIC_INDEX_CLEAR\n",
                         uVar21);
            piVar12 = DAT_0042640c;
            DAT_0042640c[0x133] = 0;
            piVar12[0x134] = 0;
            uVar18 = local_2d8;
          }
          else {
            FUN_00410740("dispatch.c","do_mq_process",0x10f9,"set DISPATCH_SET_CLOUD_IMAGE_ON\n",
                         uVar21);
            DAT_0042640c[0x132] = 1;
            uVar18 = local_2d8;
          }
        }
        else if (local_2d8 == 0xf6) {
          DAT_0042640c[0x177] = 0;
        }
        else if (local_2d8 < 0xf6) {
LAB_00405bfc:
          uVar18 = local_2d8;
          if (DAT_0042640c[0x168] == 1) {
            DAT_0042640c[0x177] = 1;
          }
        }
        else if (local_2d8 == 0xf7) {
          *(undefined1 *)((int)DAT_0042640c + 499) = 1;
          send_saveconfig_msg(uVar6);
          uVar18 = local_2d8;
        }
        else {
          if (local_2d8 != 0xf8) goto LAB_00405c44;
          *(undefined1 *)((int)DAT_0042640c + 499) = 0;
          send_saveconfig_msg(uVar6);
          uVar18 = local_2d8;
        }
      }
      else if (local_2d8 == 0x3002) {
        if ((uint)*(byte *)(DAT_0042640c + 0x26d) != ((uint)local_2d0 & 0xff)) {
          *(char *)(DAT_0042640c + 0x26d) = (char)local_2d0;
          send_saveconfig_msg(uVar6);
          FUN_00410740("dispatch.c","do_mq_process",0x1024,
                       "DISPATCH_SET_VIEWPOINT_TRACE save conf(viewpoint_trace=%d)\n",
                       (uint)local_2d0 & 0xff);
          uVar18 = local_2d8;
        }
      }
      else if (local_2d8 < 0x3003) {
        if (local_2d8 == 0x1029) {
          FUN_00410740("dispatch.c","do_mq_process",0xbe7,"set RMM_SET_BABY_CRY\n",uVar21);
          uVar6 = DAT_00426408;
          DAT_0042640c[0x138] = (int)local_2d0;
          send_saveconfig_msg(uVar6);
          uVar18 = local_2d8;
        }
        else if (local_2d8 < 0x102a) {
          if (local_2d8 == 0xfff) {
            pthread_mutex_lock(&DAT_00426b58);
            system("/home/app/localbin/reboot_by_watchdog");
            system("ifconfig wlan0 down");
            sleep(1);
            system("reboot -f");
            uVar18 = local_2d8;
          }
          else if (local_2d8 < 0x1000) {
            if (local_2d8 == 0x104) {
              FUN_00410740("dispatch.c","do_mq_process",0x107f,"set DISPATCH_SET_ALARM_SOUND, %d\n",
                           local_2d0);
              uVar6 = DAT_00426408;
              *(char *)((int)DAT_0042640c + 0x9ee) = cVar11;
              send_saveconfig_msg(uVar6);
              uVar18 = local_2d8;
            }
            else if (local_2d8 < 0x105) {
              if (local_2d8 == 0x102) {
                FUN_00410740("dispatch.c","do_mq_process",0x106f,
                             "set DISPATCH_SET_MOTION_DETECT_STATUS, %d\n",local_2d0);
                uVar6 = DAT_00426408;
                *(char *)((int)DAT_0042640c + 0x9ef) = cVar11;
                send_saveconfig_msg(uVar6);
                uVar18 = local_2d8;
              }
              else {
                if (local_2d8 < 0x103) {
                  DAT_0042640c[0x176] = (int)local_2d0;
                  FUN_00410740("dispatch.c","do_mq_process",0xab0,
                               "DISPATCH_SET_PREV_MOTION_STATE %d\n",local_2d0);
                  goto LAB_00405bfc;
                }
                FUN_00410740("dispatch.c","do_mq_process",0x1077,
                             "set DISPATCH_SET_DOUBLE_LIGHT, %d\n",local_2d0);
                uVar6 = DAT_00426408;
                *(char *)((int)DAT_0042640c + 0x9ed) = cVar11;
                send_saveconfig_msg(uVar6);
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 == 0x106) {
              local_30 = DAT_0042640c + 0x27c;
              piVar9 = (int *)((int)DAT_0042640c + 0xa33);
              DAT_0042640c[0x29e] = 0;
              piVar22 = local_30;
              do {
                piVar23 = piVar22;
                piVar7 = piVar9;
                iVar17 = piVar7[1];
                iVar15 = piVar7[2];
                iVar5 = piVar7[3];
                piVar9 = piVar7 + 4;
                *piVar23 = *piVar7;
                piVar23[1] = iVar17;
                piVar23[2] = iVar15;
                piVar23[3] = iVar5;
                piVar22 = piVar23 + 4;
              } while (piVar9 != (int *)((int)piVar12 + 0xa73));
              *(char *)(piVar23 + 4) = (char)*piVar9;
              *(undefined1 *)((int)piVar23 + 0x11) = *(undefined1 *)((int)piVar7 + 0x11);
              *(undefined1 *)((int)piVar23 + 0x12) = *(undefined1 *)((int)piVar7 + 0x12);
              FUN_00410740("dispatch.c","do_mq_process",0x1094,
                           "set DISPATCH_SET_APMODE_OK,enable(%d)\n",(char)piVar12[0x27c]);
              send_saveconfig_msg(DAT_00426408);
              uVar18 = local_2d8;
              if ((char)piVar12[0x27c] != '\0') {
                FUN_004021e4(local_30);
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 < 0x106) {
              FUN_00410740("dispatch.c","do_mq_process",0x1087,
                           "set DISPATCH_SET_AP_MODE,enable(%d)\n",(uint)local_2d0 & 0xff);
              piVar12 = DAT_0042640c;
              if ((char)local_2d0 == '\0') {
                FUN_004021e4(&local_2d0);
                piVar12 = DAT_0042640c;
                DAT_0042640c[0x29e] = DAT_0042640c[99] + 600;
              }
              puVar10 = &local_2d0;
              puVar3 = (undefined4 *)((int)piVar12 + 0xa33);
              do {
                puVar24 = puVar3;
                puVar8 = puVar10 + 4;
                uVar16 = puVar10[1];
                uVar19 = puVar10[2];
                uVar6 = puVar10[3];
                *puVar24 = *puVar10;
                puVar24[1] = uVar16;
                puVar24[2] = uVar19;
                puVar24[3] = uVar6;
                puVar10 = puVar8;
                puVar3 = puVar24 + 4;
              } while (puVar8 != (undefined4 *)&local_290);
              *(undefined1 *)(puVar24 + 4) = local_290;
              *(undefined1 *)((int)puVar24 + 0x11) = local_28f;
              *(undefined1 *)((int)puVar24 + 0x12) = local_28e;
              uVar18 = local_2d8;
            }
            else {
              if (local_2d8 != 0x107) goto LAB_00405c44;
              local_30 = DAT_0042640c + 0x27c;
              piVar22 = (int *)((int)DAT_0042640c + 0xa33);
              DAT_0042640c[0x29e] = 0;
              piVar9 = local_30;
              do {
                piVar23 = piVar22;
                piVar7 = piVar9;
                iVar17 = piVar7[1];
                iVar15 = piVar7[2];
                iVar5 = piVar7[3];
                piVar9 = piVar7 + 4;
                *piVar23 = *piVar7;
                piVar23[1] = iVar17;
                piVar23[2] = iVar15;
                piVar23[3] = iVar5;
                piVar22 = piVar23 + 4;
              } while (piVar9 != piVar12 + 0x28c);
              *(char *)(piVar23 + 4) = (char)*piVar9;
              *(undefined1 *)((int)piVar23 + 0x11) = *(undefined1 *)((int)piVar7 + 0x11);
              *(undefined1 *)((int)piVar23 + 0x12) = *(undefined1 *)((int)piVar7 + 0x12);
              FUN_00410740("dispatch.c","do_mq_process",0x109f,
                           "set DISPATCH_SET_APMODE_FAIL,enable(%d)\n",(char)piVar12[0x27c]);
              uVar18 = local_2d8;
              if ((char)piVar12[0x27c] != '\0') {
                FUN_004021e4(local_30);
                uVar18 = local_2d8;
              }
            }
          }
          else if (local_2d8 == 0x1024) {
            if (local_2d0 != (int *)DAT_0042640c[300]) {
              DAT_0042640c[300] = (int)local_2d0;
              send_saveconfig_msg(uVar6);
              FUN_00410740("dispatch.c","do_mq_process",0xf3c,"RMM_SET_DAY_NIGHT_MODE save conf\n",
                           uVar21);
              uVar18 = local_2d8;
            }
          }
          else if (local_2d8 < 0x1025) {
            if (local_2d8 < 0x1021) goto LAB_00405c44;
            if (0x1022 < local_2d8) {
              DAT_0042640c[0x178] = (int)local_2d0;
              piVar12[0x179] = local_2cc;
              piVar12[0x17a] = (int)local_2c8;
              uVar6 = DAT_00426408;
              piVar12[0x17b] = local_2c4[0];
              send_saveconfig_msg(uVar6);
              FUN_00410740("dispatch.c","do_mq_process",0xf29,"RMM_SET_MOTION_DETECT save conf\n",
                           uVar21);
              uVar18 = local_2d8;
            }
          }
          else if (local_2d8 == 0x1026) {
            *(undefined1 *)((int)DAT_0042640c + 0x931) = 0;
          }
          else if (local_2d8 < 0x1026) {
            *(undefined1 *)((int)DAT_0042640c + 0x931) = 1;
            DAT_00426a98 = 1;
            if (puVar10 != (undefined4 *)0x0) {
              (*(code *)puVar10[1])();
              piVar12 = DAT_0042640c;
            }
            if (piVar12[0x228] == 9) {
              piVar12[0x13d] = 0;
              piVar12[0x13c] = 3;
            }
            DAT_00426a9c = 0;
            DAT_00426a94 = piVar12[99] + 0x32;
            uVar18 = local_2d8;
          }
          else if (local_2d8 == 0x1027) {
            if (local_2d0 != (int *)(uint)*(byte *)((int)DAT_0042640c + 0x933)) {
              *(char *)((int)DAT_0042640c + 0x933) = (char)local_2d0;
              send_saveconfig_msg(uVar6);
              FUN_00410740("dispatch.c","do_mq_process",0xf7f,
                           "RMM_SET_MOTION_SENSITIVITY save conf\n",uVar21);
              uVar18 = local_2d8;
            }
          }
          else {
            if (local_2d8 != 0x1028) goto LAB_00405c44;
            FUN_00410740("dispatch.c","do_mq_process",0xbd7,"set RMM_SET_LDC\n",uVar21);
            if ((int *)0x64 < piVar9) {
              piVar9 = (int *)0x0;
            }
            DAT_0042640c[0x137] = (int)piVar9;
            uVar18 = local_2d8;
            if ((local_2dc & 8) != 0) {
              send_saveconfig_msg(DAT_00426408);
              uVar18 = local_2d8;
            }
          }
        }
        else if (local_2d8 == 0x1038) {
          puts("\n\n[Peter] dispatch RMM_APP_AUDIO_MODE_SIMPLEX mode\n");
          uVar6 = DAT_00426408;
          uVar18 = local_2d8;
          if ((char)DAT_0042640c[0x27b] != '\x01') {
            *(undefined1 *)(DAT_0042640c + 0x27b) = 1;
            send_saveconfig_msg(uVar6);
            uVar18 = local_2d8;
          }
        }
        else if (local_2d8 < 0x1039) {
          if (local_2d8 == 0x1032) {
            DAT_0042640c[0x13e] = (int)local_2d0;
            send_saveconfig_msg(uVar6);
            uVar18 = local_2d8;
          }
          else if (local_2d8 < 0x1033) {
            if (local_2d8 == 0x102b) {
              if (DAT_0042640c[0x13c] == 0) {
                if (DAT_00426b54 == (undefined4 *)0x0) {
                  DAT_0042640c[0x13d] = 0;
                  piVar12[0x13c] = 1;
                  DAT_00426a98 = 1;
                }
                else {
                  (*(code *)DAT_00426b54[6])(1);
                  puVar10 = DAT_00426b54;
                  piVar12 = DAT_0042640c;
                  DAT_0042640c[0x13d] = 0;
                  piVar12[0x13c] = 1;
                  DAT_00426a98 = 1;
                  if (puVar10 != (undefined4 *)0x0) {
                    (*(code *)puVar10[1])();
                  }
                }
                DAT_00426a9c = 9;
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 < 0x102b) {
              FUN_00410740("dispatch.c","do_mq_process",0xc00,"set RMM_SET_MIC_VOLUME\n",uVar21);
              uVar6 = DAT_00426408;
              DAT_0042640c[0x13b] = (int)local_2d0;
              send_saveconfig_msg(uVar6);
              uVar18 = local_2d8;
            }
            else {
              if (local_2d8 != 0x102c) goto LAB_00405c44;
              DAT_00426a98 = 1;
              if (DAT_00426b54 != (undefined4 *)0x0) {
                (*(code *)DAT_00426b54[1])();
                (*(code *)DAT_00426b54[6])(0);
              }
              piVar12 = DAT_0042640c;
              DAT_00426a9c = 0;
              DAT_0042640c[0x13d] = 0;
              piVar12[0x13c] = 0;
              uVar18 = local_2d8;
            }
          }
          else if (local_2d8 == 0x1036) {
            FUN_00410740("dispatch.c","do_mq_process",0x10bf,"set RMM_SET_LAPSE_FRAMERATE, %d, %d\n"
                         ,local_2cc,local_2c8);
            piVar12 = DAT_0042640c;
            DAT_0042640c[0x277] = (int)local_2d0;
            piVar12[0x278] = local_2cc;
            piVar12[0x279] = (int)local_2c8;
            uVar18 = local_2d8;
          }
          else if (local_2d8 < 0x1037) {
            if (local_2d8 != 0x1033) goto LAB_00405c44;
            DAT_0042640c[0x13f] = (int)local_2d0;
          }
          else {
            FUN_00410740("dispatch.c","do_mq_process",0x10c7,"set RMM_SET_LAPSE_FORCE_IDR\n",uVar21)
            ;
            uVar18 = local_2d8;
          }
        }
        else if (local_2d8 == 0x103c) {
          FUN_00410740("dispatch.c","do_mq_process",0xbf9,"set RMM_SET_HUMAN_MOTION\n",uVar21);
          uVar6 = DAT_00426408;
          DAT_0042640c[0x13a] = (int)local_2d0;
          send_saveconfig_msg(uVar6);
          uVar18 = local_2d8;
        }
        else if (local_2d8 < 0x103d) {
          if (local_2d8 == 0x103a) {
            FUN_00410740("dispatch.c","do_mq_process",0xbee,"set RMM_SET_ABNORMAL_SOUND\n",uVar21);
            piVar9 = DAT_0042640c;
            piVar12 = DAT_0042640c + 0x24d;
            DAT_0042640c[0x139] = (int)local_2d0;
            if ((char)*piVar12 == '\0') {
              *(undefined1 *)(piVar9 + 0x24d) = 0x50;
            }
            send_saveconfig_msg(DAT_00426408);
            uVar18 = local_2d8;
          }
          else if (local_2d8 < 0x103b) {
            puts("\n\n[Peter] dispatch RMM_APP_AUDIO_MODE_DUPLEX mode\n");
            uVar6 = DAT_00426408;
            uVar18 = local_2d8;
            if ((char)DAT_0042640c[0x27b] != '\x02') {
              *(undefined1 *)(DAT_0042640c + 0x27b) = 2;
              send_saveconfig_msg(uVar6);
              uVar18 = local_2d8;
            }
          }
          else if (local_2d0 != (int *)(uint)*(byte *)(DAT_0042640c + 0x24d)) {
            *(char *)(DAT_0042640c + 0x24d) = (char)local_2d0;
            send_saveconfig_msg(uVar6);
            FUN_00410740("dispatch.c","do_mq_process",0xf8a,
                         "RMM_SET_ABNORMAL_SOUND_SENSITIVITY save conf\n",uVar21);
            uVar18 = local_2d8;
          }
        }
        else if (local_2d8 == 0x2000) {
          if ((DAT_0042640c[0x16b] == 1) && (DAT_00426b44 == 0)) {
            FUN_00410740("dispatch.c","do_mq_process",0xafa,
                         "exit recbackup by RCD_START_SHORT_VIDEO %d\n",DAT_0042640c[0x165]);
            DAT_00426b44 = 2;
            uVar18 = local_2d8;
          }
        }
        else if (local_2d8 < 0x2001) {
          if (local_2d8 != 0x180a) {
            FUN_00410740("dispatch.c","do_mq_process",0x110e,"invalid msg 0x%x\n",local_2d8);
            uVar18 = local_2d8;
          }
        }
        else if (local_2d8 == 0x3000) {
          DAT_0042640c[0x226] = 1;
        }
        else {
          if (local_2d8 != 0x3001) goto LAB_00405c44;
          DAT_0042640c[0x226] = 0;
        }
      }
      else if (local_2d8 < 0x4011) {
        if (local_2d8 < 0x400f) {
          if (local_2d8 == 0x4006) {
            if ((DAT_00426b54 != (undefined4 *)0x0) && (DAT_0042640c[0x182] != 1)) {
              iVar5 = DAT_0042640c[0x228];
              if (iVar5 == 9) {
                if ((local_2dc & 2) == 0) {
                  DAT_0042640c[0x13d] = 0;
                  piVar12[0x13c] = 3;
                  goto LAB_004079b4;
                }
              }
              else {
                if ((local_2dc & 2) == 0) {
LAB_004079b4:
                  uVar21 = piVar12[99];
                }
                else if ((DAT_0042640c[0x227] == 1) ||
                        (((uVar21 = DAT_0042640c[99], iVar5 - 4U < 2 || (iVar5 == 1)) &&
                         (uVar21 <= DAT_00426a94)))) goto LAB_00404ce4;
                if (DAT_00426acc <= uVar21) {
                  DAT_00426ac8 = (int *)0x0;
                }
                (*(code *)puVar10[6])(1);
                FUN_004105ec(&local_60,0x20,0,0x20);
                if (DAT_0042640c[0x180] == 0) {
                  local_58 = local_2d0;
LAB_00406bd4:
                  iVar5 = DAT_0042640c[99];
                  DAT_00426a94 = iVar5 + 100;
                  if ((local_2dc & 2) != 0) goto LAB_00406bec;
LAB_00408154:
                  DAT_00426a90 = iVar5 + 0x1e;
                  DAT_00426a9c = 4;
                  local_54 = 0;
                }
                else {
                  piVar12 = (int *)0x2;
                  if (local_2d0 != (int *)&_DYNAMIC_LINKING) {
                    piVar12 = (int *)0x3;
                    if (local_2d0 == (int *)0x2) {
                      local_58 = (int *)&_DYNAMIC_LINKING;
                    }
                    else if (local_2d0 == (int *)0x3) {
                      local_58 = (int *)0x4;
                    }
                    else if (local_2d0 == (int *)0x4) goto LAB_00408138;
                    goto LAB_00406bd4;
                  }
LAB_00408138:
                  iVar5 = DAT_0042640c[99];
                  DAT_00426a94 = iVar5 + 100;
                  local_58 = piVar12;
                  if ((local_2dc & 2) == 0) goto LAB_00408154;
LAB_00406bec:
                  DAT_00426a9c = 8;
                  local_54 = 10;
                }
                if ((DAT_00426ac8 != local_2d0) || (uVar18 = local_2d8, DAT_00426a9c != 4)) {
                  DAT_00426a98 = 1;
                  (*(code *)DAT_00426b54[1])();
                  FUN_00410ed0(0x14);
                  if ((local_2dc & 8) != 0) {
                    (*(code *)*DAT_00426b54)(&local_6e0);
                    bVar2 = (local_6e0 & 0xffffefff) == 0;
                    DAT_00426ab8 = (uint)bVar2;
                    printf("======g_dispatch_info.ptz_x_edge =%d\n",bVar2);
                    if ((local_6dc == 0) || (local_6dc == 0x5a0)) {
                      DAT_00426abc = 1;
                    }
                    else {
                      DAT_00426abc = 0;
                    }
                    if (local_58 == (int *)&_DYNAMIC_LINKING) {
                      DAT_00426acc = DAT_0042640c[99] + 5 + local_6dc / 0x19;
                      if ((DAT_00426abc == 1) && (local_6dc == 0x5a0)) {
                        DAT_00426abc = 0;
                      }
                    }
                    else {
                      if (local_58 != (int *)0x2) {
                        if (local_58 == (int *)0x3) {
                          DAT_00426acc = DAT_0042640c[99] + 5 + (int)(0x1000 - local_6e0) / 0x28;
                          if ((DAT_00426ab8 == 1) && (local_6e0 == 0)) {
                            DAT_00426ab8 = 0;
                          }
                        }
                        else {
                          if (local_58 != (int *)0x4) goto LAB_00406c40;
                          DAT_00426acc = DAT_0042640c[99] + 5 + (int)local_6e0 / 0x28;
                          if ((DAT_00426ab8 == 1) && (local_6e0 == 0x1000)) {
                            DAT_00426ab8 = 0;
                          }
                        }
                        DAT_00426abc = 0;
                        goto LAB_00406c40;
                      }
                      DAT_00426acc = DAT_0042640c[99] + 5 + (0x5a0 - local_6dc) / 0x19;
                      if ((DAT_00426abc == 1) && (local_6dc == 0)) {
                        DAT_00426abc = 0;
                      }
                    }
                    DAT_00426ab8 = 0;
                  }
LAB_00406c40:
                  if (DAT_00426ab0 == 1) {
                    DAT_00426ab8 = 0;
                    DAT_00426abc = 0;
LAB_00406c58:
                    DAT_00426ac8 = local_2d0;
                    if (DAT_00426abc == 0) {
                      (*(code *)DAT_00426b54[4])(&local_60);
                      uVar18 = local_2d8;
                      goto LAB_00404ce4;
                    }
                  }
                  else if (DAT_00426ab8 == 0) goto LAB_00406c58;
                  DAT_00426ac8 = local_2d0;
                  uVar18 = local_2d8;
                }
              }
            }
          }
          else if (local_2d8 < 0x4007) {
            if (local_2d8 == 0x4002) {
              if ((DAT_00426b54 != (undefined4 *)0x0) && ((int)local_2d0 < 8)) {
                local_30 = local_2d0;
                (*(code *)DAT_00426b54[6])(1);
                DAT_00426a98 = 1;
                (*(code *)DAT_00426b54[1])();
                piVar12 = DAT_0042640c;
                if (DAT_0042640c[0x228] == 9) {
                  DAT_0042640c[0x13d] = 0;
                  piVar12[0x13c] = 3;
                }
                DAT_00426a9c = 1;
                DAT_00426aa0 = local_30;
                FUN_00410740("dispatch.c","do_mq_process",0xc99,
                             "g_dispatch_info.ptz_preset=========== =%d\n",local_30);
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 < 0x4003) {
              if (local_2d8 == 0x4000) {
                if (DAT_00426b54 != (undefined4 *)0x0) {
                  (*(code *)*DAT_00426b54)(&local_6e0);
                  piVar12 = DAT_0042640c;
                  uVar6 = DAT_00426408;
                  iVar5 = 0;
                  piVar9 = DAT_0042640c;
                  do {
                    piVar22 = piVar9 + 0x22e;
                    piVar9 = piVar9 + 3;
                    if (*piVar22 != 1) {
                      DAT_0042640c[iVar5 * 3 + 0x22e] = 1;
                      piVar12[iVar5 * 3 + 0x22f] = local_6e0;
                      piVar12[iVar5 * 3 + 0x230] = local_6dc;
                      send_saveconfig_msg(uVar6);
                      FUN_00410740("dispatch.c","do_mq_process",0xc6e,
                                   "DISPATCH_P2P_PTZ_PRESET_ADD save conf\n",uVar21);
                      uVar18 = local_2d8;
                      break;
                    }
                    iVar5 = iVar5 + 1;
                    uVar18 = local_2d8;
                  } while (iVar5 != 8);
                }
              }
              else if (local_2d8 < 0x4001) {
                if (local_2d8 != 0x3003) goto LAB_00405c44;
                if ((uint)*(byte *)((int)DAT_0042640c + 0x9b5) != ((uint)local_2d0 & 0xff)) {
                  *(char *)((int)DAT_0042640c + 0x9b5) = (char)local_2d0;
                  send_saveconfig_msg(uVar6);
                  FUN_00410740("dispatch.c","do_mq_process",0x1030,
                               "DISPATCH_SET_VOICE_CTRL save conf(voice_ctrl=%d)\n",
                               (uint)local_2d0 & 0xff);
                  uVar18 = local_2d8;
                }
              }
              else if (local_2d0 < (int *)0x8) {
                DAT_0042640c[(int)local_2d0 * 3 + 0x22e] = 0;
                piVar12[(int)local_2d0 * 3 + 0x22f] = 0;
                piVar12[(int)local_2d0 * 3 + 0x230] = 0;
                send_saveconfig_msg(uVar6);
                FUN_00410740("dispatch.c","do_mq_process",0xc7e,
                             "DISPATCH_P2P_PTZ_PRESET_DEL save conf\n",uVar21);
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 == 0x4004) {
              if (DAT_00426b54 != (undefined4 *)0x0) {
                (*(code *)DAT_00426b54[6])(1);
              }
              uVar6 = DAT_00426408;
              if (DAT_0042640c[0x22a] != 1) {
                DAT_0042640c[0x22a] = 1;
                send_saveconfig_msg(uVar6);
                FUN_00410740("dispatch.c","do_mq_process",0xdf7,
                             "DISPATCH_P2P_PTZ_CRUISE_START save conf\n",uVar21);
              }
              uVar18 = local_2d8;
              if ((DAT_0042640c[0x228] != 9) &&
                 (DAT_00426a98 = 1, DAT_00426b54 != (undefined4 *)0x0)) {
                (*(code *)DAT_00426b54[1])();
                DAT_00426a9c = (*(code *)DAT_00426b54[0x12])();
                uVar18 = local_2d8;
              }
            }
            else if (local_2d8 < 0x4005) {
              if (DAT_00426b54 != (undefined4 *)0x0) {
                DAT_0042640c[0x247] = (int)local_2d0;
                if (local_2cc == 0) {
                  local_2cc = 10;
                }
                if (local_2d0 == (int *)0x0) {
                  piVar12[0x229] = local_2cc;
                }
                else {
                  piVar12[0x246] = local_2cc;
                }
                piVar12 = local_2d0;
                FUN_00410740("dispatch.c","do_mq_process",0xcb3,"p_time->mode =%d\n",local_2d0);
                if (local_2d0 == (int *)0x0) {
                  if (DAT_0042640c[0x228] == 3) {
LAB_00407a00:
                    DAT_00426a98 = 1;
                    (*(code *)DAT_00426b54[1])();
                    DAT_00426a9c = 0;
                  }
                }
                else if (DAT_0042640c[0x228] == 2) goto LAB_00407a00;
                send_saveconfig_msg(DAT_00426408);
                FUN_00410740("dispatch.c","do_mq_process",0xcc7,
                             "DISPATCH_P2P_PTZ_SET_CURISE_STAY_TIME save conf\n",piVar12);
                uVar18 = local_2d8;
              }
            }
            else if (DAT_00426b54 != (undefined4 *)0x0) {
              if (DAT_0042640c[0x22a] == 1) {
                DAT_0042640c[0x22a] = 0;
                send_saveconfig_msg(uVar6);
                FUN_00410740("dispatch.c","do_mq_process",0xdb3,
                             "DISPATCH_P2P_PTZ_CRUISE_STOP save conf\n",uVar21);
              }
              if (DAT_0042640c[0x228] - 2U < 2) {
                DAT_00426a98 = 1;
                (*(code *)DAT_00426b54[1])();
              }
              DAT_00426aac = 0;
              (*(code *)DAT_00426b54[6])(0);
              uVar18 = local_2d8;
            }
          }
          else if (local_2d8 == 0x400a) {
            if (DAT_00426b54 != (undefined4 *)0x0) {
              DAT_0042640c[0x248] = (int)local_2d0;
              piVar12[0x249] = local_2cc;
              send_saveconfig_msg(uVar6);
              FUN_00410740("dispatch.c","do_mq_process",0xcdb,
                           "DISPATCH_P2P_PTZ_SET_CURISE_PERIOD save conf\n",uVar21);
              uVar18 = local_2d8;
            }
          }
          else if (local_2d8 < 0x400b) {
            if (local_2d8 == 0x4008) {
              if (DAT_00426b54 == (undefined4 *)0x0) {
                DAT_00426a98 = 1;
              }
              else {
                (*(code *)DAT_00426b54[6])(1);
                DAT_00426a98 = 1;
                if (DAT_00426b54 != (undefined4 *)0x0) {
                  (*(code *)DAT_00426b54[1])();
                }
              }
              piVar12 = DAT_0042640c;
              if (DAT_0042640c[0x228] == 9) {
                DAT_0042640c[0x13d] = 0;
                piVar12[0x13c] = 3;
              }
              DAT_00426a9c = 5;
              DAT_00426aa4 = 0;
              DAT_00426aa8 = 800;
              uVar18 = local_2d8;
            }
            else if (local_2d8 < 0x4009) {
              if (DAT_00426b54 != (undefined4 *)0x0) {
                if ((local_2dc & 2) == 0) {
                  DAT_00426a98 = 1;
                  DAT_00426a90 = 0;
                  (*(code *)DAT_00426b54[1])();
                  iVar5 = DAT_0042640c[0x228];
                  piVar12 = DAT_0042640c;
                }
                else {
                  if ((DAT_0042640c[0x228] != 8) &&
                     (FUN_00410740("dispatch.c","do_mq_process",0xdcb,"skip this stop",uVar21),
                     uVar18 = local_2d8, DAT_0042640c[0x228] == 9)) goto LAB_00404ce4;
                  (*(code *)DAT_00426b54[1])();
                  iVar5 = DAT_0042640c[0x228];
                  piVar12 = DAT_0042640c;
                }
                DAT_0042640c = piVar12;
                if (iVar5 == 9) {
                  piVar12[0x13d] = 0;
                  piVar12[0x13c] = 3;
                  DAT_00426a9c = 0;
                }
                DAT_00426ac8 = (int *)0x0;
                (*(code *)DAT_00426b54[6])(0);
                DAT_00426ab8 = 0;
                DAT_00426abc = 0;
                uVar18 = local_2d8;
                if ((local_2dc & 8) != 0) {
                  (*(code *)*DAT_00426b54)(&local_6e0);
                  piVar12 = DAT_0042640c;
                  DAT_0042640c[0x22b] = local_6e0;
                  piVar12[0x22c] = local_6dc;
                  uVar18 = local_2d8;
                }
              }
            }
            else {
              if (DAT_00426b54 == (undefined4 *)0x0) {
                DAT_00426a98 = 1;
              }
              else {
                (*(code *)DAT_00426b54[6])(1);
                DAT_00426a98 = 1;
                if (DAT_00426b54 != (undefined4 *)0x0) {
                  (*(code *)DAT_00426b54[1])();
                }
              }
              puVar10 = DAT_00426b54;
              piVar12 = DAT_0042640c;
              if (DAT_0042640c[0x228] == 9) {
                DAT_0042640c[0x13d] = 0;
                piVar12[0x13c] = 3;
              }
              DAT_00426a9c = 5;
              if (puVar10 != (undefined4 *)0x0) {
                (*(code *)*puVar10)(&local_6e0);
                piVar12 = DAT_0042640c;
              }
              if (piVar12[0x180] == 0) {
                DAT_00426aa4 = local_6e0 - ((int)((int)local_2d0 + -0x32) * 0x3ca) / 100;
                DAT_00426aa8 = local_6dc + ((local_2cc + -0x32) * 0x244) / 100;
                if (DAT_00426aa4 < 0) {
                  DAT_00426aa4 = 0;
                }
              }
              else {
                DAT_00426aa4 = local_6e0 + (((int)local_2d0 + -0x32) * 0x3ca) / 100;
                DAT_00426aa8 = local_6dc - ((local_2cc + -0x32) * 0x244) / 100;
                if (DAT_00426aa4 < 0) {
                  DAT_00426aa4 = 0;
                }
              }
              if (DAT_00426aa8 < 0) {
                DAT_00426aa8 = 0;
              }
              DAT_00426abc = 0;
              DAT_00426ab8 = 0;
              if (local_6dc == 0) {
                if (0 < DAT_00426aa8) goto LAB_00405960;
LAB_00407aa4:
                DAT_00426abc = 1;
                if (local_6e0 != 0) goto LAB_00407ab0;
LAB_00405968:
                if (DAT_00426aa4 < 1) {
LAB_00407ac8:
                  DAT_00426ab8 = 1;
                }
              }
              else {
                if ((local_6dc == 0x5a0) && (0x59f < DAT_00426aa8)) goto LAB_00407aa4;
LAB_00405960:
                if (local_6e0 == 0) goto LAB_00405968;
LAB_00407ab0:
                if ((local_6e0 == 0x1000) && (0xfff < DAT_00426aa4)) goto LAB_00407ac8;
              }
              uVar18 = local_2d8;
              if (DAT_00426ab0 == 1) {
                DAT_00426ab8 = 0;
                DAT_00426abc = 0;
              }
            }
          }
          else if (local_2d8 == 0x400c) {
            if (DAT_00426b54 != (undefined4 *)0x0) {
              (*(code *)DAT_00426b54[0x11])(local_2d0,local_2cc);
              uVar18 = local_2d8;
            }
          }
          else if (local_2d8 < 0x400c) {
            if (DAT_00426b54 != (undefined4 *)0x0) {
              DAT_0042640c[0x24a] = (int)local_2d0;
              if ((local_2d0 == (int *)0x0) && (piVar12[0x228] == 8)) {
                (*(code *)puVar10[1])();
                (*(code *)DAT_00426b54[6])(0);
              }
              send_saveconfig_msg(DAT_00426408);
              FUN_00410740("dispatch.c","do_mq_process",0xceb,
                           "DISPATCH_P2P_PTZ_SET_MOTION_TRACK save conf =%d\n",DAT_0042640c[0x24a]);
              uVar18 = local_2d8;
            }
          }
          else if (local_2d8 == 0x400d) {
            if (DAT_00426b54 != (undefined4 *)0x0) {
              (*(code *)DAT_00426b54[8])();
              uVar18 = local_2d8;
            }
          }
          else {
            if (local_2d8 != 0x400e) goto LAB_00405c44;
            if (local_2d0 == (int *)0x64) {
              memset(&local_6e0,0,0x100);
              DAT_0042640c[0x161] = 0;
              FUN_00410988("/home/app/script/killwifi.sh 1",&local_6e0,0x100,10);
            }
            iVar5 = DAT_00426b44;
            piVar12 = DAT_0042640c;
            bVar2 = 1 < DAT_00426b44;
            DAT_0042640c[0x165] = (int)local_2d0;
            if (bVar2) {
              DAT_00426b44 = iVar5 + -1;
            }
            uVar18 = local_2d8;
            if (local_2d0 < (int *)0xb) {
              if ((((local_2d0 < (int *)0x5) && (DAT_00426b44 == 1)) && (piVar12[0x16d] == 0)) &&
                 ((*piVar12 == 1 && (piVar12[0x16b] == 1)))) {
                DAT_00426b44 = 0;
                FUN_00410740("dispatch.c","do_mq_process",0xb22,"start recbackup inpacketloss %d\n",
                             local_2d0);
                system("/home/app/script/start_recbak.sh &");
                uVar18 = local_2d8;
              }
            }
            else if (((*piVar12 == 1) && (piVar12[0x16b] == 1)) && (DAT_00426b44 == 0)) {
              FUN_00410740("dispatch.c","do_mq_process",0xb15,
                           "exit recbackup by too many inpacketloss %d\n",local_2d0);
              DAT_00426b44 = 1;
              uVar18 = local_2d8;
            }
          }
        }
      }
      else if (local_2d8 == 0x5000) {
        *(undefined1 *)((int)DAT_0042640c + 0x932) = 0;
      }
      else if (local_2d8 < 0x5001) {
        if (local_2d8 == 0x4020) {
          *(undefined2 *)((int)DAT_0042640c + 0x9d2) = 0;
        }
        else if (local_2d8 < 0x4021) {
          if (local_2d8 == 0x4018) {
            *(undefined2 *)(DAT_0042640c + 0x274) = 0;
          }
          else if (local_2d8 == 0x4019) {
            *(undefined2 *)((int)DAT_0042640c + 0x9d2) = 1;
          }
          else {
            if (local_2d8 != 0x4017) goto LAB_00405c44;
            *(undefined2 *)(DAT_0042640c + 0x274) = 1;
          }
        }
        else if (local_2d8 == 0x4023) {
          memset(&local_6e0,0,0x400);
          piVar12 = DAT_0042640c;
          if (DAT_0042640c[0x128] == 0) {
            iVar5 = FUN_004105c4();
            piVar12[0x128] = iVar5;
            if (DAT_0042640c[0x128] == 0) {
              FUN_00410740("dispatch.c","do_mq_process",0x1044,
                           "status_gather json array create failed!\n",uVar21);
              uVar18 = local_2d8;
              goto LAB_00404ce4;
            }
          }
          piVar12 = DAT_0042640c;
          memcpy(&local_6e0,&local_2d0,local_2d4);
          iVar5 = FUN_0041049c(&local_6e0);
          piVar9 = DAT_0042640c;
          piVar12[0x129] = iVar5;
          FUN_004104e0(piVar9[0x128],piVar9[0x129]);
          piVar12 = (int *)FUN_004104c0(DAT_0042640c[0x128]);
          uVar18 = local_2d8;
          if (4 < (int)piVar12) {
            local_30 = DAT_0042640c;
            iVar5 = FUN_004104ac(DAT_0042640c[0x128]);
            piVar9 = DAT_0042640c;
            local_30[0x12a] = iVar5;
            FUN_00410740("dispatch.c","do_mq_process",0x104f,"json_res = %s\n",piVar9[0x12a]);
            local_30 = (int *)0x0;
            do {
              local_30 = (int *)((int)local_30 + 1);
              FUN_004105a4(DAT_0042640c[0x128],0);
            } while (local_30 != piVar12);
            sem_post(&DAT_00426d30);
            uVar18 = local_2d8;
          }
        }
        else {
          if (local_2d8 == 0x4024) {
            DAT_0042640c[0x2a7] = (int)local_2d0;
            FUN_00410740("dispatch.c","do_mq_process",0x110b,
                         "do  g_dispatch_info.mmap_info->upgrade_mode =%d\n",local_2d0);
          }
          else if (local_2d8 == 0x4021) {
            FUN_00404908(&local_2d0,auStack_1d0);
            printf("down_load_info->url =%s %s\n",&local_2d0,auStack_1d0);
            uVar18 = local_2d8;
            goto LAB_00404ce4;
          }
LAB_00405c44:
          FUN_00410740("dispatch.c","do_mq_process",0x110e,"invalid msg 0x%x\n",local_2d8);
          uVar18 = local_2d8;
        }
      }
      else if (local_2d8 == 0x5004) {
        *(undefined1 *)((int)&local_2d0 + local_2d4) = 0;
        local_38[0] = 0;
        local_60 = (int *)0x0;
        local_6e0 = 0;
        sscanf(&local_2d0,"extra_disk:%d,%d,%d",local_38,&local_60,&local_6e0);
        FUN_00410740("dispatch.c","do_mq_process",0xfcc,
                     "extra_sd_total_size = %d, extra_sd_free_size= %d, extra_sd_cam_used_size = %d\n"
                     ,local_38[0],local_60,local_6e0);
        piVar12 = DAT_0042640c;
        DAT_0042640c[0x267] = local_38[0];
        piVar9 = (int *)0x3e7;
        if (0x432 < (int)local_60) {
          piVar9 = local_60;
        }
        piVar12[0x268] = (int)piVar9;
        piVar12[0x269] = local_6e0;
        uVar18 = local_2d8;
      }
      else if (local_2d8 < 0x5005) {
        if (local_2d8 == 0x5002) {
          *(undefined1 *)((int)DAT_0042640c + 0x932) = 2;
        }
        else if (local_2d8 < 0x5003) {
          *(undefined1 *)((int)DAT_0042640c + 0x932) = 1;
        }
        else {
          *(undefined1 *)((int)&local_2d0 + local_2d4) = 0;
          local_38[0] = 0;
          local_60 = (int *)0x0;
          local_6e0 = 0;
          sscanf(&local_2d0,"router_disk:%d,%d,%d",local_38,&local_60,&local_6e0);
          FUN_00410740("dispatch.c","do_mq_process",0xfb7,
                       "router_sd_total_size = %d, router_sd_free_size= %d, router_sd_cam_used_size = %d\n"
                       ,local_38[0],local_60,local_6e0);
          piVar12 = DAT_0042640c;
          DAT_0042640c[0x264] = local_38[0];
          piVar9 = (int *)0x3e7;
          if (0x432 < (int)local_60) {
            piVar9 = local_60;
          }
          piVar12[0x265] = (int)piVar9;
          piVar12[0x266] = local_6e0;
          uVar18 = local_2d8;
        }
      }
      else if (local_2d8 == 0x5006) {
        local_30 = local_2c8;
        local_2c = local_2d0;
        FUN_00410740("dispatch.c","do_mq_process",0xff2,
                     "extra_sd_total_size = %d, extra_sd_free_size= %d, extra_sd_cam_used_size = %d\n"
                     ,local_2d0,local_2cc,local_2c8);
        piVar12 = DAT_0042640c;
        if (iVar5 < 0x433) {
          iVar5 = 999;
        }
        DAT_0042640c[0x268] = iVar5;
        piVar12[0x267] = (int)local_2c;
        piVar12[0x269] = (int)local_30;
        uVar18 = local_2d8;
      }
      else if (local_2d8 < 0x5006) {
        local_30 = local_2c8;
        local_2c = local_2d0;
        FUN_00410740("dispatch.c","do_mq_process",0xfdf,
                     "router_sd_total_size = %d, router_sd_free_size= %d, router_sd_cam_used_size = %d\n"
                     ,local_2d0,local_2cc,local_2c8);
        piVar12 = DAT_0042640c;
        if (iVar5 < 0x433) {
          iVar5 = 999;
        }
        DAT_0042640c[0x265] = iVar5;
        piVar12[0x264] = (int)local_2c;
        piVar12[0x266] = (int)local_30;
        uVar18 = local_2d8;
      }
      else if (local_2d8 == 0x6008) {
        *(char *)(DAT_0042640c + 0x7d) = (char)local_2d0;
        FUN_00410740("dispatch.c","do_mq_process",0xb96,"set update_seq = %d\n",
                     (uint)local_2d0 & 0xff);
        send_saveconfig_msg(DAT_00426408);
        uVar18 = local_2d8;
      }
      else {
        if (local_2d8 != 0x6009) goto LAB_00405c44;
        strncpy(DAT_0042640c + 0x74,&local_2d0,local_2d4);
        FUN_00410740("dispatch.c","do_mq_process",0xb9e,"set update_version = %s\n",
                     DAT_0042640c + 0x74);
        send_saveconfig_msg(DAT_00426408);
        uVar18 = local_2d8;
      }
    }
LAB_00404ce4:
    FUN_00410740("dispatch.c","do_mq_process",0x1112,"Process (0x%x) end\n",uVar18);
    if ((local_2e0 & 2) != 0) {
      FUN_00410ca4(DAT_004263f4,&local_2e0,iVar4);
    }
    if ((local_2e0 & 4) != 0) {
      FUN_00410ca4(DAT_004263f8,&local_2e0,iVar4);
    }
    if ((local_2e0 & 8) != 0) {
      FUN_00410ca4(DAT_004263fc,&local_2e0,iVar4);
    }
    if ((local_2e0 & 0x10) != 0) {
      FUN_00410ca4(DAT_00426404,&local_2e0,iVar4);
    }
    if ((local_2e0 & 0x20) != 0) {
      FUN_00410ca4(DAT_00426400,&local_2e0,iVar4);
    }
  } while( true );
}



// ==== FUN_004082d4 @ 004082d4 size=132

void FUN_004082d4(void)

{
  int iVar1;
  
  iVar1 = open("/dev/mtdblock7",2,0x1ff);
  if (iVar1 != -1) {
    pthread_mutex_lock(&DAT_00426b58);
    read(iVar1,&DAT_00426434,0x65c);
    pthread_mutex_unlock(&DAT_00426b58);
    close(iVar1);
    return;
  }
  return;
}



// ==== FUN_00408358 @ 00408358 size=132

void FUN_00408358(void)

{
  int iVar1;
  
  iVar1 = open("/dev/mtdblock7",2,0x1ff);
  if (iVar1 != -1) {
    pthread_mutex_lock(&DAT_00426b58);
    write(iVar1,&DAT_00426434,0x65c);
    pthread_mutex_unlock(&DAT_00426b58);
    close(iVar1);
    return;
  }
  return;
}



// ==== FUN_00409418 @ 00409418 size=216

undefined4 FUN_00409418(void)

{
  int iVar1;
  undefined1 auStack_19008 [102400];
  
  memset(auStack_19008,0,0x19000);
  iVar1 = access("/sys/devices/platform/rts3903-sdhc/cd",0);
  if (iVar1 == 0) {
    iVar1 = FUN_00410988("cat /sys/devices/platform/rts3903-sdhc/cd 2>/dev/null",auStack_19008,
                         0x19000,10);
    if (iVar1 < 1) {
      return 0x271c;
    }
    iVar1 = strtol(auStack_19008,0,10);
  }
  else {
    iVar1 = FUN_00410988("cat /sys/block/mmcblk0/device/cid 2>/dev/null",auStack_19008,0x19000,10);
  }
  if (iVar1 < 1) {
    return 0x271c;
  }
  return 10000;
}



// ==== FUN_0040a7dc @ 0040a7dc size=104

void FUN_0040a7dc(void)

{
  undefined4 uVar1;
  
  uVar1 = pthread_self();
  pthread_detach(uVar1);
  do {
    sem_wait(&DAT_00426d30);
    if (*(int *)(DAT_0042640c + 0x4a8) != 0) {
      dispatch_report_cloud_alarm_status(*(int *)(DAT_0042640c + 0x4a8));
      free(*(undefined4 *)(DAT_0042640c + 0x4a8));
    }
    FUN_00410ed0(500);
  } while( true );
}



// ==== FUN_0040a844 @ 0040a844 size=88

bool FUN_0040a844(void)

{
  int iVar1;
  
  if ((DAT_00426b50 == 0) && (*DAT_00426320 != '2')) {
    iVar1 = access("/tmp/sd/debug_msg",0);
    return iVar1 != 0;
  }
  return false;
}



// ==== FUN_0040a89c @ 0040a89c size=408

undefined4 FUN_0040a89c(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar1 = DAT_0042640c;
  if (*(int *)(DAT_0042640c + 0x89c) != 0) {
    iVar3 = *(int *)(DAT_0042640c + 0x8a0);
    if (iVar3 == 1) {
      *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 0x81
      ;
      goto LAB_0040a8f4;
    }
    if (iVar3 == 8) {
      bVar2 = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4);
      if (*(int *)(DAT_0042640c + 0x928) != 0) {
        *(byte *)(DAT_0042640c + 0x930) = bVar2 | 0x82;
        goto LAB_0040a8f4;
      }
    }
    else {
      if (iVar3 - 2U < 2) {
        *(byte *)(DAT_0042640c + 0x930) =
             (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 0x84;
        goto LAB_0040a8f4;
      }
      bVar2 = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4);
      if (iVar3 == 9) {
        *(byte *)(DAT_0042640c + 0x930) = bVar2 | 0x88;
        goto LAB_0040a8f4;
      }
    }
    *(byte *)(DAT_0042640c + 0x930) = bVar2 | 0x80;
    goto LAB_0040a8f4;
  }
  iVar3 = *(int *)(DAT_0042640c + 0x8a0);
  if (iVar3 == 1) {
    *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 1;
    goto LAB_0040a8f4;
  }
  if (iVar3 == 8) {
    if (*(int *)(DAT_0042640c + 0x928) != 0) {
      *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 2;
      goto LAB_0040a8f4;
    }
  }
  else {
    if (iVar3 - 2U < 2) {
      *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 4;
      goto LAB_0040a8f4;
    }
    if (iVar3 == 9) {
      *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 8;
      goto LAB_0040a8f4;
    }
  }
  *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426abc << 4) | (byte)(DAT_00426ab8 << 5);
LAB_0040a8f4:
  if (*(int *)(iVar1 + 0x9d4) == 2) {
    *(byte *)(iVar1 + 0x930) = *(byte *)(iVar1 + 0x930) | 0x40;
  }
  return 0;
}



// ==== FUN_0040aa34 @ 0040aa34 size=408

undefined4 FUN_0040aa34(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar1 = DAT_0042640c;
  if (*(int *)(DAT_0042640c + 0x89c) != 0) {
    iVar3 = *(int *)(DAT_0042640c + 0x8a0);
    if (iVar3 == 1) {
      *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 0x81
      ;
      goto LAB_0040aa8c;
    }
    if (iVar3 == 8) {
      bVar2 = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4);
      if (*(int *)(DAT_0042640c + 0x928) != 0) {
        *(byte *)(DAT_0042640c + 0x930) = bVar2 | 0x82;
        goto LAB_0040aa8c;
      }
    }
    else {
      if (iVar3 - 2U < 2) {
        *(byte *)(DAT_0042640c + 0x930) =
             (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 0x84;
        goto LAB_0040aa8c;
      }
      bVar2 = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4);
      if (iVar3 == 9) {
        *(byte *)(DAT_0042640c + 0x930) = bVar2 | 0x88;
        goto LAB_0040aa8c;
      }
    }
    *(byte *)(DAT_0042640c + 0x930) = bVar2 | 0x80;
    goto LAB_0040aa8c;
  }
  iVar3 = *(int *)(DAT_0042640c + 0x8a0);
  if (iVar3 == 1) {
    *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 1;
    goto LAB_0040aa8c;
  }
  if (iVar3 == 8) {
    if (*(int *)(DAT_0042640c + 0x928) != 0) {
      *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 2;
      goto LAB_0040aa8c;
    }
  }
  else {
    if (iVar3 - 2U < 2) {
      *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 4;
      goto LAB_0040aa8c;
    }
    if (iVar3 == 9) {
      *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426ab8 << 5) | (byte)(DAT_00426abc << 4) | 8;
      goto LAB_0040aa8c;
    }
  }
  *(byte *)(DAT_0042640c + 0x930) = (byte)(DAT_00426abc << 4) | (byte)(DAT_00426ab8 << 5);
LAB_0040aa8c:
  if (*(int *)(iVar1 + 0x9d4) == 2) {
    *(byte *)(iVar1 + 0x930) = *(byte *)(iVar1 + 0x930) | 0x40;
  }
  return 0;
}



// ==== FUN_0040abcc @ 0040abcc size=68

undefined4 FUN_0040abcc(int param_1)

{
  ssp_uart_send_cmd(2,param_1);
  printf("\n\n\n~~~~~~~dir = %d, speed = %d~~~~~~\n\n\n",*(undefined4 *)(param_1 + 8),
         *(undefined4 *)(param_1 + 0xc));
  return 0;
}



// ==== FUN_0040ac10 @ 0040ac10 size=92

undefined4 FUN_0040ac10(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_004105ec(auStack_30,0x20,0,0x20);
  local_24 = 10;
  local_28 = param_2;
  local_20 = param_1;
  FUN_0040abcc(auStack_30);
  return 0;
}



// ==== FUN_0040ac6c @ 0040ac6c size=32

void FUN_0040ac6c(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_0042640c;
  piVar1 = (int *)(DAT_0042640c + 0x9b0);
  *(undefined4 *)(DAT_0042640c + 0x89c) = 1;
  *(int *)(iVar2 + 0x9b0) = *piVar1 + 1;
  return;
}



// ==== FUN_0040acc4 @ 0040acc4 size=64

undefined4 FUN_0040acc4(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_0042640c;
  if (DAT_00426414 < 0) {
    FUN_00410740("ptz_ctl.c","modify_ptz_running_stat",0x10e,"PTZ not open");
    return 0xffffffff;
  }
  if (param_1 != 0) {
    piVar1 = (int *)(DAT_0042640c + 0x9b0);
    *(undefined4 *)(DAT_0042640c + 0x89c) = 1;
    *(int *)(iVar2 + 0x9b0) = *piVar1 + 1;
    return 0;
  }
  *(undefined4 *)(DAT_0042640c + 0x89c) = 0;
  return 0;
}



// ==== FUN_0040aea4 @ 0040aea4 size=140

undefined4 FUN_0040aea4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_30 [20];
  int local_1c;
  
  iVar1 = 1;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  uVar3 = *(uint *)(DAT_0042640c + 0x18c);
  uVar2 = iVar1 + uVar3;
  do {
    if (uVar2 <= uVar3) {
      FUN_004105ec(auStack_30,0x20,0,0x20);
      h601r_get_position(auStack_30);
      if (local_1c == 0) {
        return 0;
      }
    }
    FUN_00410ed0(100);
    uVar3 = *(uint *)(DAT_0042640c + 0x18c);
  } while( true );
}



// ==== FUN_0040af30 @ 0040af30 size=152

void FUN_0040af30(void)

{
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0040ac6c();
  h601r_stop();
  local_18 = 0xa000;
  local_20 = 3;
  local_1c = 10;
  FUN_0040abcc(auStack_28);
  FUN_0040aea4(0x28,3);
  h601r_stop();
  local_18 = 0x3840;
  local_20 = 1;
  local_1c = 10;
  FUN_0040abcc(auStack_28);
  FUN_0040aea4(0xe,1);
  h601r_stop();
  *(undefined4 *)(DAT_0042640c + 0x89c) = 0;
  return;
}



// ==== FUN_0040afc8 @ 0040afc8 size=100

void FUN_0040afc8(void)

{
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0040ac6c();
  h601r_stop();
  local_18 = 0x7080;
  local_20 = 1;
  local_1c = 10;
  FUN_0040abcc(auStack_28);
  FUN_0040aea4(0x1c,1);
  h601r_stop();
  *(undefined4 *)(DAT_0042640c + 0x89c) = 0;
  return;
}



// ==== FUN_0040b02c @ 0040b02c size=156

void FUN_0040b02c(void)

{
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0040ac6c();
  h601r_stop();
  local_18 = 0x14000;
  local_20 = 4;
  local_1c = 10;
  FUN_0040abcc(auStack_28);
  FUN_0040aea4(0x51,4);
  h601r_stop();
  local_18 = 0x7080;
  local_20 = 2;
  local_1c = 10;
  FUN_0040abcc(auStack_28);
  FUN_0040aea4(0x1c,2);
  h601r_stop();
  *(undefined4 *)(DAT_0042640c + 0x89c) = 0;
  return;
}



// ==== FUN_0040b0c8 @ 0040b0c8 size=100

void FUN_0040b0c8(void)

{
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0040ac6c();
  h601r_stop();
  local_18 = 0x7080;
  local_20 = 2;
  local_1c = 10;
  FUN_0040abcc(auStack_28);
  FUN_0040aea4(0x1c,2);
  h601r_stop();
  *(undefined4 *)(DAT_0042640c + 0x89c) = 0;
  return;
}



// ==== FUN_0040b12c @ 0040b12c size=176

undefined4 FUN_0040b12c(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_30 [20];
  int local_1c;
  
  if (param_1 < 1) {
    param_1 = 1;
  }
  uVar2 = *(uint *)(DAT_0042640c + 0x18c);
  uVar1 = param_1 + uVar2;
  if (DAT_00426a98 != 1) {
    while( true ) {
      if (uVar1 <= uVar2) {
        FUN_004105ec(auStack_30,0x20,0,0x20);
        h601r_get_position(auStack_30);
        if (local_1c == 0) {
          return 0;
        }
      }
      FUN_00410ed0(100);
      if (DAT_00426a98 == 1) break;
      uVar2 = *(uint *)(DAT_0042640c + 0x18c);
    }
    return 0;
  }
  return 0;
}



// ==== FUN_0040b1dc @ 0040b1dc size=100

void FUN_0040b1dc(void)

{
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0040ac6c();
  h601r_stop();
  local_18 = 0x7080;
  local_20 = 2;
  local_1c = 10;
  FUN_0040abcc(auStack_28);
  FUN_0040b12c(0x1c,2);
  h601r_stop();
  *(undefined4 *)(DAT_0042640c + 0x89c) = 0;
  return;
}



// ==== FUN_0040b240 @ 0040b240 size=104

void FUN_0040b240(void)

{
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0040ac6c();
  h601r_stop();
  local_18 = 0x14000;
  local_20 = 4;
  local_1c = 10;
  FUN_0040abcc(auStack_28);
  FUN_0040b12c(0x51,4);
  h601r_stop();
  *(undefined4 *)(DAT_0042640c + 0x89c) = 0;
  return;
}



// ==== FUN_0040b2a8 @ 0040b2a8 size=128

void FUN_0040b2a8(int param_1,undefined4 param_2)

{
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  h601r_stop();
  local_20 = param_1 * 0x14;
  local_24 = 10;
  local_28 = param_2;
  FUN_0040abcc(auStack_30);
  FUN_0040b12c(param_1 / 0x32,param_2);
  h601r_stop();
  return;
}



// ==== FUN_0040b328 @ 0040b328 size=876

undefined4 FUN_0040b328(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_40;
  int local_3c;
  
  FUN_0040ac6c();
  FUN_0040aa34();
  h601r_stop();
  FUN_004105ec(&local_40,0x20,0,0x20);
  h601r_get_position(&local_40);
  if (local_40 < 0xc9) {
    iVar1 = -200 - local_40;
    iVar2 = param_1;
  }
  else {
    iVar1 = param_1 - local_40;
    iVar2 = 0;
  }
  if (local_3c < 0x65) {
    iVar4 = param_2 + -0x5a0;
    iVar3 = 0x604 - local_3c;
  }
  else {
    iVar3 = param_2 - local_3c;
    iVar4 = 0;
  }
  printf("x =%d %d %d %d x_step =%d %d x_step_2 =%d %d\n",param_1,param_2,local_40,local_3c,iVar1,
         iVar3,iVar2,iVar4);
  if (DAT_00426a98 != 1) {
    h601r_stop();
    if (iVar1 < 1) {
      if (iVar1 != 0) {
        FUN_0040ac10(iVar1 * -0x14,4);
        FUN_0040b12c(-(iVar1 / 0x32),4);
      }
    }
    else {
      FUN_0040ac10(iVar1 * 0x14,3);
      FUN_0040b12c(iVar1 / 0x32,3);
    }
    if (DAT_00426a98 != 1) {
      h601r_stop();
      if (iVar2 < 1) {
        if (iVar2 != 0) {
          FUN_0040ac10(iVar2 * -0x14,4);
          FUN_0040b12c(-(iVar2 / 0x32),4);
        }
      }
      else {
        FUN_0040ac10(iVar2 * 0x14,3);
        FUN_0040b12c(iVar2 / 0x32,3);
      }
      if (DAT_00426a98 != 1) {
        h601r_stop();
        if (iVar3 < 1) {
          if (iVar3 != 0) {
            FUN_0040ac10(iVar3 * -0x14,1);
            FUN_0040b12c(-(iVar3 / 0x32),1);
          }
        }
        else {
          FUN_0040ac10(iVar3 * 0x14,2);
          FUN_0040b12c(iVar3 / 0x32,2);
        }
        if (DAT_00426a98 != 1) {
          h601r_stop();
          if (iVar4 < 1) {
            if (iVar4 != 0) {
              FUN_0040ac10(iVar4 * -0x14,1);
              FUN_0040b12c(-(iVar4 / 0x32),1);
            }
          }
          else {
            FUN_0040ac10(iVar4 * 0x14,2);
            FUN_0040b12c(iVar4 / 0x32,2);
          }
          h601r_stop();
          *(undefined4 *)(DAT_0042640c + 0x89c) = 0;
          FUN_0040aa34();
        }
      }
    }
  }
  return 0;
}



// ==== FUN_0040b7ac @ 0040b7ac size=92

undefined4 FUN_0040b7ac(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_004105ec(auStack_30,0x20,0,0x20);
  local_24 = 10;
  local_28 = param_2;
  local_20 = param_1;
  set_motor_dir_speed(auStack_30);
  return 0;
}



// ==== FUN_0040b930 @ 0040b930 size=140

undefined4 FUN_0040b930(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_30 [20];
  int local_1c;
  
  iVar1 = 1;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  uVar3 = *(uint *)(DAT_0042640c + 0x18c);
  uVar2 = iVar1 + uVar3;
  do {
    if (uVar2 <= uVar3) {
      FUN_004105ec(auStack_30,0x20,0,0x20);
      ptz_get_position(auStack_30);
      if (local_1c == 0) {
        return 0;
      }
    }
    FUN_00410ed0(100);
    uVar3 = *(uint *)(DAT_0042640c + 0x18c);
  } while( true );
}



// ==== FUN_0040b9bc @ 0040b9bc size=176

undefined4 FUN_0040b9bc(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_30 [20];
  int local_1c;
  
  if (param_1 < 1) {
    param_1 = 1;
  }
  uVar2 = *(uint *)(DAT_0042640c + 0x18c);
  uVar1 = param_1 + uVar2;
  if (DAT_00426a98 != 1) {
    while( true ) {
      if (uVar1 <= uVar2) {
        FUN_004105ec(auStack_30,0x20,0,0x20);
        ptz_get_position(auStack_30);
        if (local_1c == 0) {
          return 0;
        }
      }
      FUN_00410ed0(100);
      if (DAT_00426a98 == 1) break;
      uVar2 = *(uint *)(DAT_0042640c + 0x18c);
    }
    return 0;
  }
  return 0;
}



// ==== FUN_0040bd8c @ 0040bd8c size=204

void FUN_0040bd8c(void)

{
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_0040acc4(1);
  ptz_stop();
  local_28 = 3;
  local_20 = 0x14000;
  local_24 = 10;
  set_motor_dir_speed(auStack_30);
  FUN_0040b930(0x51,3);
  ptz_stop();
  local_28 = 4;
  local_20 = 0x14000;
  local_24 = 10;
  set_motor_dir_speed(auStack_30);
  FUN_0040b930(0x51,4);
  ptz_stop();
  local_20 = 0x7080;
  local_28 = 1;
  local_24 = 10;
  set_motor_dir_speed(auStack_30);
  FUN_0040b930(0x1c,1);
  ptz_stop();
  FUN_0040acc4(0);
  return;
}



// ==== FUN_0040be58 @ 0040be58 size=96

void FUN_0040be58(void)

{
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0040acc4(1);
  ptz_stop();
  local_18 = 0x7080;
  local_20 = 2;
  local_1c = 10;
  set_motor_dir_speed(auStack_28);
  FUN_0040b9bc(0x1c,2);
  ptz_stop();
  FUN_0040acc4(0);
  return;
}



// ==== FUN_0040beb8 @ 0040beb8 size=100

void FUN_0040beb8(void)

{
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0040acc4(1);
  ptz_stop();
  local_18 = 0x14000;
  local_20 = 4;
  local_1c = 10;
  set_motor_dir_speed(auStack_28);
  FUN_0040b9bc(0x51,4);
  ptz_stop();
  FUN_0040acc4(0);
  return;
}



// ==== FUN_0040bf1c @ 0040bf1c size=96

void FUN_0040bf1c(void)

{
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0040acc4(1);
  ptz_stop();
  local_18 = 0x7080;
  local_20 = 2;
  local_1c = 10;
  set_motor_dir_speed(auStack_28);
  FUN_0040b930(0x1c,2);
  ptz_stop();
  FUN_0040acc4(0);
  return;
}



// ==== FUN_0040bf7c @ 0040bf7c size=128

void FUN_0040bf7c(int param_1,undefined4 param_2)

{
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  ptz_stop();
  local_20 = param_1 * 0x14;
  local_24 = 10;
  local_28 = param_2;
  set_motor_dir_speed(auStack_30);
  FUN_0040b9bc(param_1 / 0x32,param_2);
  ptz_stop();
  return;
}



// ==== FUN_0040bffc @ 0040bffc size=884

undefined4 FUN_0040bffc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_40;
  int local_3c;
  
  FUN_0040acc4(1);
  FUN_0040a89c();
  ptz_stop();
  FUN_004105ec(&local_40,0x20,0,0x20);
  ptz_get_position(&local_40);
  if (local_40 < 0xc9) {
    iVar1 = -200 - local_40;
    iVar2 = param_1;
  }
  else {
    iVar1 = param_1 - local_40;
    iVar2 = 0;
  }
  if (local_3c < 0x65) {
    iVar3 = -100 - local_3c;
    iVar4 = param_2;
  }
  else {
    iVar3 = param_2 - local_3c;
    iVar4 = 0;
  }
  printf("x =%d %d %d %d x_step =%d %d x_step_2 =%d %d\n",param_1,param_2,local_40,local_3c,iVar1,
         iVar3,iVar2,iVar4);
  if (DAT_00426a98 != 1) {
    ptz_stop();
    if (iVar1 < 1) {
      if (iVar1 != 0) {
        FUN_0040b7ac(iVar1 * -0x14,4);
        FUN_0040b9bc(-(iVar1 / 0x32),4);
      }
    }
    else {
      FUN_0040b7ac(iVar1 * 0x14,3);
      FUN_0040b9bc(iVar1 / 0x32,3);
    }
    if (DAT_00426a98 != 1) {
      ptz_stop();
      if (iVar2 < 1) {
        if (iVar2 != 0) {
          FUN_0040b7ac(iVar2 * -0x14,4);
          FUN_0040b9bc(-(iVar2 / 0x32),4);
        }
      }
      else {
        FUN_0040b7ac(iVar2 * 0x14,3);
        FUN_0040b9bc(iVar2 / 0x32,3);
      }
      if (DAT_00426a98 != 1) {
        ptz_stop();
        if (iVar3 < 1) {
          if (iVar3 != 0) {
            FUN_0040b7ac(iVar3 * -0x14,1);
            FUN_0040b9bc(-(iVar3 / 0x32),1);
          }
        }
        else {
          FUN_0040b7ac(iVar3 * 0x14,2);
          FUN_0040b9bc(iVar3 / 0x32,2);
        }
        if (DAT_00426a98 != 1) {
          ptz_stop();
          if (iVar4 < 1) {
            if (iVar4 != 0) {
              FUN_0040b7ac(iVar4 * -0x14,1);
              FUN_0040b9bc(-(iVar4 / 0x32),1);
            }
          }
          else {
            FUN_0040b7ac(iVar4 * 0x14,2);
            FUN_0040b9bc(iVar4 / 0x32,2);
          }
          ptz_stop();
          FUN_0040acc4(0);
          FUN_0040a89c();
        }
      }
    }
  }
  return 0;
}



// ==== FUN_0040c3b4 @ 0040c3b4 size=320

undefined4 FUN_0040c3b4(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20 [3];
  
  if (*(char *)(DAT_0042640c + 0x931) == '\x01') {
    return 0;
  }
  if (*(int *)(DAT_0042640c + 0x8a8) == 0) {
    DAT_00426aac = 0;
    uVar2 = 0;
  }
  else {
    local_20[0] = time(0);
    local_20[0] = local_20[0] + *(int *)(DAT_0042640c + 0x4b8);
    piVar1 = (int *)localtime(local_20);
    iVar4 = *(int *)(DAT_0042640c + 0x920);
    iVar5 = *(int *)(DAT_0042640c + 0x924);
    iVar3 = (piVar1[2] * 0x3c + piVar1[1]) * 0x3c + *piVar1;
    printf("cur_time =%d %d %d %d\n",iVar3,iVar4,iVar5,*(undefined4 *)(DAT_0042640c + 0x4b8));
    if ((iVar3 < iVar4) || (uVar2 = 2, iVar5 < iVar3)) {
      DAT_00426aac = 0;
      return 0;
    }
    if (*(int *)(DAT_0042640c + 0x91c) != 0) {
      uVar2 = 3;
    }
  }
  return uVar2;
}



// ==== FUN_0040ca84 @ 0040ca84 size=320

undefined4 FUN_0040ca84(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20 [3];
  
  if (*(char *)(DAT_0042640c + 0x931) == '\x01') {
    return 0;
  }
  if (*(int *)(DAT_0042640c + 0x8a8) == 0) {
    DAT_00426aac = 0;
    uVar2 = 0;
  }
  else {
    local_20[0] = time(0);
    local_20[0] = local_20[0] + *(int *)(DAT_0042640c + 0x4b8);
    piVar1 = (int *)localtime(local_20);
    iVar4 = *(int *)(DAT_0042640c + 0x920);
    iVar5 = *(int *)(DAT_0042640c + 0x924);
    iVar3 = (piVar1[2] * 0x3c + piVar1[1]) * 0x3c + *piVar1;
    printf("cur_time =%d %d %d %d\n",iVar3,iVar4,iVar5,*(undefined4 *)(DAT_0042640c + 0x4b8));
    if ((iVar3 < iVar4) || (uVar2 = 2, iVar5 < iVar3)) {
      DAT_00426aac = 0;
      return 0;
    }
    if (*(int *)(DAT_0042640c + 0x91c) != 0) {
      uVar2 = 3;
    }
  }
  return uVar2;
}



// ==== FUN_0040d154 @ 0040d154 size=144

void FUN_0040d154(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  int local_414;
  undefined1 auStack_410 [1016];
  undefined4 local_18;
  
  memset(&local_420,0,0x400);
  local_18 = 0x10281028;
  local_420 = 2;
  local_41c = 1;
  local_418 = 0x10281028;
  local_414 = param_3;
  memcpy(auStack_410,param_2,param_3);
  FUN_00410ca4(param_1,&local_420,param_3 + 0x10);
  return;
}



// ==== FUN_0040d1e4 @ 0040d1e4 size=144

void FUN_0040d1e4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  int local_414;
  undefined1 auStack_410 [1016];
  undefined4 local_18;
  
  memset(&local_420,0,0x400);
  local_18 = 0x102d102d;
  local_420 = 2;
  local_41c = 1;
  local_418 = 0x102d102d;
  local_414 = param_3;
  memcpy(auStack_410,param_2,param_3);
  FUN_00410ca4(param_1,&local_420,param_3 + 0x10);
  return;
}



// ==== FUN_0040d274 @ 0040d274 size=704

void FUN_0040d274(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_90 [64];
  int local_50;
  int local_4c;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  local_2c[0] = 0;
  local_30 = 0;
  memset(auStack_90,0,0x40);
  FUN_0040acc4(1);
  ptz_get_position(&local_50);
  if (local_50 < 0x801) {
    iVar3 = 3;
    FUN_0040bf7c(0x1000,4);
  }
  else {
    iVar3 = 4;
    FUN_0040bf7c(0x1000,3);
  }
  iVar1 = DAT_00426a98;
  *(int *)(DAT_0042640c + 0x9ac) = ((0x5a0 - local_4c) * 0xf) / 100;
  if (iVar1 == 1) {
    FUN_0040acc4(0);
    return;
  }
  iVar1 = access("/tmp/panorama_capture",0);
  if (iVar1 == -1) {
    mkdir("/tmp/panorama_capture",0x1ff);
  }
  local_30 = *(undefined4 *)(DAT_0042640c + 0x4dc);
  local_2c[0] = 100;
  iVar1 = 0;
  FUN_0040d154(DAT_004263f0,local_2c,4);
  iVar4 = *(int *)(DAT_0042640c + 0x4f4);
  while (iVar4 < 6) {
    if (iVar1 == iVar4) {
      if (iVar3 == 4) {
        if ((iVar1 != 0) && (FUN_0040bf7c(0x2aa,4), DAT_00426a98 == 1)) goto LAB_0040d400;
        if (*(int *)(DAT_0042640c + 0x600) != 0) goto LAB_0040d4cc;
LAB_0040d46c:
        snprintf(auStack_90,0x40,"/tmp/panorama_capture/%d.jpg",iVar1);
      }
      else {
        FUN_0040bf7c(0x2aa,3);
        if (DAT_00426a98 == 1) goto LAB_0040d400;
        if (*(int *)(DAT_0042640c + 0x600) != 0) goto LAB_0040d46c;
LAB_0040d4cc:
        snprintf(auStack_90,0x40,"/tmp/panorama_capture/%d.jpg",5 - iVar1);
      }
      iVar1 = iVar1 + 1;
      uVar2 = strlen(auStack_90);
      FUN_0040d1e4(DAT_004263f0,auStack_90,uVar2);
    }
    if (((*(int *)(DAT_0042640c + 0x4f0) == 3) || (*(int *)(DAT_0042640c + 0x4f0) == 0)) ||
       (DAT_00426a98 == 1)) goto LAB_0040d400;
    sleep(1,&local_30);
    iVar4 = *(int *)(DAT_0042640c + 0x4f4);
  }
  puts("ptz_panorama_capture finish");
  *(undefined4 *)(DAT_0042640c + 0x4f0) = 2;
LAB_0040d400:
  FUN_0040d154(DAT_004263f0,&local_30,4);
  FUN_0040acc4(0);
  return;
}



// ==== FUN_0040df64 @ 0040df64 size=36

undefined ** FUN_0040df64(int param_1)

{
  if (param_1 != 1) {
    return &PTR_ptz_get_position_004261e0;
  }
  return &PTR_h601r_get_position_00426188;
}



// ==== FUN_0040df88 @ 0040df88 size=388

int FUN_0040df88(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(char)*param_1;
  uVar2 = (uint)*param_1;
  if (uVar2 - 0x30 < 10) {
    iVar5 = iVar5 + -0x30;
    bVar1 = param_1[1];
LAB_0040dfa8:
    iVar3 = (int)(char)bVar1;
    uVar2 = (uint)bVar1;
    iVar5 = iVar5 << 4;
    if (9 < uVar2 - 0x30) goto LAB_0040dfbc;
LAB_0040e040:
    iVar4 = (int)(char)param_1[2];
    uVar2 = (uint)param_1[2];
    iVar5 = (iVar3 + -0x30 + iVar5) * 0x10;
    if (9 < uVar2 - 0x30) goto LAB_0040e060;
LAB_0040dfec:
    iVar5 = iVar4 + -0x30 + iVar5;
  }
  else {
    if (5 < uVar2 - 0x41) {
      iVar5 = iVar5 + -0x57;
      if (5 < uVar2 - 0x61) {
        return 0;
      }
      bVar1 = param_1[1];
      goto LAB_0040dfa8;
    }
    iVar3 = (int)(char)param_1[1];
    uVar2 = (uint)param_1[1];
    iVar5 = (iVar5 + -0x37) * 0x10;
    if (uVar2 - 0x30 < 10) goto LAB_0040e040;
LAB_0040dfbc:
    if (uVar2 - 0x41 < 6) {
      iVar3 = iVar3 + -0x37;
    }
    else {
      if (5 < uVar2 - 0x61) {
        return 0;
      }
      iVar3 = iVar3 + -0x57;
    }
    iVar4 = (int)(char)param_1[2];
    uVar2 = (uint)param_1[2];
    iVar5 = (iVar3 + iVar5) * 0x10;
    if (uVar2 - 0x30 < 10) goto LAB_0040dfec;
LAB_0040e060:
    if (uVar2 - 0x41 < 6) {
      bVar1 = param_1[3];
      iVar5 = (iVar4 + -0x37 + iVar5) * 0x10;
      goto joined_r0x0040e088;
    }
    if (5 < uVar2 - 0x61) {
      return 0;
    }
    iVar5 = iVar4 + -0x57 + iVar5;
  }
  bVar1 = param_1[3];
  iVar5 = iVar5 << 4;
joined_r0x0040e088:
  uVar2 = (uint)bVar1;
  iVar3 = (int)(char)bVar1;
  if (uVar2 - 0x30 < 10) {
    return iVar3 + -0x30 + iVar5;
  }
  if (5 < uVar2 - 0x41) {
    if (5 < uVar2 - 0x61) {
      return 0;
    }
    return iVar3 + -0x57 + iVar5;
  }
  return iVar3 + -0x37 + iVar5;
}



// ==== FUN_0040e10c @ 0040e10c size=72

int FUN_0040e10c(void)

{
  int iVar1;
  
  iVar1 = (*DAT_00426244)(0x28);
  if (iVar1 != 0) {
    memset(iVar1,0,0x28);
  }
  return iVar1;
}



// ==== FUN_0040e154 @ 0040e154 size=272

int FUN_0040e154(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      param_2 = param_1[2] + param_2;
      iVar1 = iVar1 + param_1[2];
      if (param_1[1] < param_2) {
        uVar2 = param_2 - 1;
        uVar2 = (int)uVar2 >> 1 | uVar2;
        uVar2 = (int)uVar2 >> 2 | uVar2;
        uVar2 = (int)uVar2 >> 4 | uVar2;
        uVar2 = (int)uVar2 >> 8 | uVar2;
        iVar3 = ((int)uVar2 >> 0x10 | uVar2) + 1;
        iVar1 = (*DAT_00426244)(iVar3);
        if (iVar1 != 0) {
          memcpy(iVar1,*param_1,param_1[1]);
          (*(code *)PTR_free_00426240)(*param_1);
          param_1[1] = iVar3;
          *param_1 = iVar1;
          return iVar1 + param_1[2];
        }
        (*(code *)PTR_free_00426240)(*param_1);
        iVar1 = 0;
        param_1[1] = 0;
        *param_1 = 0;
      }
    }
  }
  return iVar1;
}



// ==== FUN_0040e2c4 @ 0040e2c4 size=72

int FUN_0040e2c4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar2 = param_1[2];
    iVar1 = strlen(*param_1 + iVar2);
    return iVar1 + iVar2;
  }
  return 0;
}



// ==== FUN_0040e5c4 @ 0040e5c4 size=816

undefined1 * FUN_0040e5c4(byte *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  
  bVar6 = *param_1;
  iVar7 = (int)(char)bVar6;
  if (iVar7 == 0) {
    pbVar5 = (byte *)0x3;
    pbVar8 = (byte *)0x0;
  }
  else {
    bVar1 = false;
    pbVar5 = param_1;
LAB_0040e620:
    do {
      pbVar8 = pbVar5;
      bVar4 = true;
      if (0x1e < (iVar7 - 1U & 0xff)) {
        if (iVar7 == 0x22) {
          iVar7 = (int)(char)pbVar8[1];
          bVar1 = true;
          pbVar5 = pbVar8 + 1;
          if (iVar7 == 0) break;
          goto LAB_0040e620;
        }
        bVar4 = iVar7 == 0x5c;
      }
      iVar7 = (int)(char)pbVar8[1];
      bVar1 = (bool)(bVar1 | bVar4);
      pbVar5 = pbVar8 + 1;
    } while (iVar7 != 0);
    if (bVar1) {
      iVar7 = 0;
      iVar2 = strchr(&DAT_00414bc4,bVar6);
      pbVar8 = param_1;
      if (iVar2 == 0) goto LAB_0040e6a0;
LAB_0040e678:
      iVar7 = iVar7 + 2;
      do {
        pbVar8 = pbVar8 + 1;
        bVar6 = *pbVar8;
        while( true ) {
          if (bVar6 == 0) {
            if (param_2 == 0) {
              puVar3 = (undefined1 *)(*DAT_00426244)(iVar7 + 3);
            }
            else {
              puVar3 = (undefined1 *)FUN_0040e154(param_2);
            }
            if (puVar3 == (undefined1 *)0x0) goto LAB_0040e8ec;
            *puVar3 = 0x22;
            pbVar5 = puVar3 + 1;
            bVar6 = *param_1;
            pbVar8 = pbVar5;
            if (bVar6 != 0) goto LAB_0040e704;
            goto LAB_0040e738;
          }
          iVar2 = strchr(&DAT_00414bc4,bVar6);
          if (iVar2 != 0) goto LAB_0040e678;
LAB_0040e6a0:
          if (0x1f < bVar6) break;
          pbVar8 = pbVar8 + 1;
          bVar6 = *pbVar8;
          iVar7 = iVar7 + 6;
        }
        iVar7 = iVar7 + 1;
      } while( true );
    }
    pbVar8 = pbVar8 + (1 - (int)param_1);
    pbVar5 = pbVar8 + 3;
  }
  if (param_2 == 0) {
    puVar3 = (undefined1 *)(*DAT_00426244)(pbVar5);
  }
  else {
    puVar3 = (undefined1 *)FUN_0040e154(param_2);
  }
  if (puVar3 == (undefined1 *)0x0) {
LAB_0040e8ec:
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *puVar3 = 0x22;
    iVar7 = strcpy(puVar3 + 1,param_1);
    pbVar8[iVar7] = 0x22;
    (pbVar8 + iVar7)[1] = 0;
  }
  return puVar3;
LAB_0040e704:
  if (((bVar6 < 0x20) || (bVar6 == 0x22)) || (bVar6 == 0x5c)) {
    *pbVar8 = 0x5c;
    bVar6 = *param_1;
    if (bVar6 == 0xc) {
      pbVar8[1] = 0x66;
      pbVar5 = pbVar8 + 2;
    }
    else if (bVar6 < 0xd) {
      if (bVar6 == 9) {
        pbVar5 = pbVar8 + 2;
        pbVar8[1] = 0x74;
      }
      else if (bVar6 == 10) {
        pbVar5 = pbVar8 + 2;
        pbVar8[1] = 0x6e;
      }
      else {
        if (bVar6 != 8) goto LAB_0040e81c;
        pbVar5 = pbVar8 + 2;
        pbVar8[1] = 0x62;
      }
    }
    else if ((bVar6 == 0x22) || (bVar6 == 0x5c)) {
      pbVar8[1] = bVar6;
      pbVar5 = pbVar8 + 2;
    }
    else if (bVar6 == 0xd) {
      pbVar5 = pbVar8 + 2;
      pbVar8[1] = 0x72;
    }
    else {
LAB_0040e81c:
      sprintf(pbVar8 + 1,"u%04x");
      pbVar5 = pbVar8 + 6;
    }
  }
  else {
    *pbVar8 = bVar6;
    pbVar5 = pbVar8 + 1;
  }
  bVar6 = param_1[1];
  pbVar8 = pbVar5;
  param_1 = param_1 + 1;
  if (bVar6 == 0) {
LAB_0040e738:
    *pbVar5 = 0x22;
    pbVar5[1] = 0;
    return puVar3;
  }
  goto LAB_0040e704;
}



// ==== FUN_0040e8f4 @ 0040e8f4 size=1096

byte * FUN_0040e8f4(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar8 = (byte *)(param_3 + 1);
  if (*param_3 != '\"') {
    DAT_00426374 = param_3;
    return (byte *)0x0;
  }
  iVar5 = 0;
  pbVar1 = pbVar8;
  do {
    bVar7 = *pbVar1;
    while( true ) {
      iVar5 = iVar5 + 1;
      if ((bVar7 == 0x22) || (bVar7 == 0)) {
        pbVar1 = (byte *)(*DAT_00426244)(iVar5);
        if (pbVar1 == (byte *)0x0) {
          return (byte *)0x0;
        }
        bVar7 = param_3[1];
        pbVar9 = pbVar1;
        goto joined_r0x0040e9dc;
      }
      if (bVar7 == 0x5c) break;
      pbVar1 = pbVar1 + 1;
      bVar7 = *pbVar1;
    }
    pbVar1 = pbVar1 + 2;
  } while( true );
joined_r0x0040e9dc:
  while( true ) {
    if ((bVar7 == 0x22) || (bVar7 == 0)) {
      *pbVar9 = 0;
      bVar7 = *pbVar8;
      *param_2 = pbVar1;
      *param_1 = 4;
      pbVar1 = pbVar8 + 1;
      if (bVar7 != 0x22) {
        pbVar1 = pbVar8;
      }
      return pbVar1;
    }
    if (bVar7 == 0x5c) break;
    *pbVar9 = bVar7;
    pbVar8 = pbVar8 + 1;
    bVar7 = *pbVar8;
    pbVar9 = pbVar9 + 1;
  }
  switch(pbVar8[1] + 0x9e) {
  case 0:
    *pbVar9 = 8;
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x0040e9dc;
  default:
    *pbVar9 = pbVar8[1];
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x0040e9dc;
  case 4:
    *pbVar9 = 0xc;
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x0040e9dc;
  case 0xc:
    *pbVar9 = 10;
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x0040e9dc;
  case 0x10:
    *pbVar9 = 0xd;
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x0040e9dc;
  case 0x12:
    *pbVar9 = 9;
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x0040e9dc;
  case 0x13:
    break;
  }
  uVar2 = FUN_0040df88(pbVar8 + 2);
  pbVar4 = pbVar8 + 5;
  if ((0x3ff < uVar2 - 0xdc00) && (uVar2 != 0)) {
    if (uVar2 - 0xd800 < 0x400) {
      bVar7 = pbVar8[6];
      if (bVar7 != 0x5c) {
        pbVar8 = pbVar8 + 6;
        goto joined_r0x0040e9dc;
      }
      bVar7 = 0x5c;
      if (pbVar8[7] == 0x75) {
        uVar3 = FUN_0040df88(pbVar8 + 8);
        pbVar4 = pbVar8 + 0xb;
        if (uVar3 - 0xdc00 < 0x400) {
          uVar2 = (uVar3 & 0x3ff | (uVar2 & 0x3ff) << 10) + 0x10000;
          goto LAB_0040ece8;
        }
        bVar7 = pbVar8[0xc];
        pbVar8 = pbVar8 + 0xc;
        goto joined_r0x0040e9dc;
      }
    }
    else {
      if (uVar2 < 0x80) {
        iVar5 = 1;
        iVar6 = 1;
      }
      else {
        iVar5 = 2;
        if (uVar2 < 0x800) {
          iVar6 = 2;
        }
        else {
LAB_0040ece8:
          if (uVar2 < 0x10000) {
            iVar5 = 3;
            iVar6 = 3;
          }
          else {
            iVar5 = 4;
            pbVar9[3] = (byte)uVar2 & 0x3f | 0x80;
            uVar2 = uVar2 >> 6;
            iVar6 = 4;
          }
          pbVar9[2] = (byte)uVar2 & 0x3f | 0x80;
          uVar2 = uVar2 >> 6;
        }
        pbVar9[1] = (byte)uVar2 & 0x3f | 0x80;
        uVar2 = uVar2 >> 6;
      }
      *pbVar9 = (byte)uVar2 | (&DAT_00414cf0)[iVar6];
      bVar7 = pbVar4[1];
      pbVar9 = pbVar9 + iVar5;
    }
    pbVar8 = pbVar4 + 1;
    goto joined_r0x0040e9dc;
  }
  bVar7 = pbVar8[6];
  pbVar8 = pbVar8 + 6;
  goto joined_r0x0040e9dc;
}



// ==== FUN_0040ed3c @ 0040ed3c size=2212

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0040ed3c(int param_1,byte *param_2)

{
  byte *in_zero;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  char *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  DAT_00426370 = DAT_00426370 + 1;
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  iVar1 = strncmp(param_2,&DAT_00414bd4,4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    return param_2 + 4;
  }
  iVar1 = strncmp(param_2,"false",5);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return param_2 + 5;
  }
  iVar1 = strncmp(param_2,&DAT_00414be4,4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = 1;
    return param_2 + 4;
  }
  uVar2 = (uint)(char)*param_2;
  if (uVar2 == 0x22) {
    pbVar9 = (byte *)FUN_0040e8f4(param_1 + 0xc,param_1 + 0x10,param_2);
    return pbVar9;
  }
  if (uVar2 == 0x2d) {
    param_2 = param_2 + 1;
    uVar2 = (uint)(char)*param_2;
    dVar14 = DAT_00414d38;
  }
  else {
    dVar14 = DAT_00414d30;
    if (9 < (uVar2 - 0x30 & 0xff)) {
      if (uVar2 == 0x5b) {
        *(undefined4 *)(param_1 + 0xc) = 5;
        if (param_2 + 1 == (byte *)0x0) {
LAB_0040eeb0:
          bVar10 = *in_zero;
          pbVar9 = (byte *)0x0;
LAB_0040eebc:
          if (bVar10 == 0x5d) {
            return pbVar9 + 1;
          }
        }
        else {
          bVar10 = param_2[1];
          pbVar9 = param_2 + 1;
          while (bVar10 != 0) {
            pbVar8 = pbVar9 + 1;
            if (0x20 < bVar10) goto LAB_0040eebc;
            if (pbVar8 == (byte *)0x0) goto LAB_0040eeb0;
            pbVar9 = pbVar8;
            bVar10 = *pbVar8;
          }
        }
        piVar4 = (int *)FUN_0040e10c();
        *(int **)(param_1 + 8) = piVar4;
        if (piVar4 == (int *)0x0) {
          return (byte *)0x0;
        }
        do {
          pbVar8 = pbVar9 + 1;
          if (0x1f < (byte)(*pbVar9 - 1)) break;
          pbVar9 = pbVar8;
        } while (pbVar8 != (byte *)0x0);
        pbVar9 = (byte *)FUN_0040ed3c(piVar4,pbVar9);
        do {
          param_2 = pbVar9;
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          iVar1 = (int)(char)*param_2;
          pbVar9 = param_2 + 1;
        } while ((iVar1 - 1U & 0xff) < 0x20);
        while (iVar1 == 0x2c) {
          piVar6 = (int *)FUN_0040e10c();
          if (piVar6 == (int *)0x0) {
            return (byte *)0x0;
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          pbVar9 = (byte *)0x0;
          if (param_2 != (byte *)0xffffffff) {
            pbVar9 = param_2 + 2;
            if ((byte)(param_2[1] - 1) < 0x20) {
              for (; (pbVar9 != (byte *)0x0 && ((byte)(*pbVar9 - 1) < 0x20)); pbVar9 = pbVar9 + 1) {
              }
            }
            else {
              pbVar9 = param_2 + 1;
            }
          }
          param_2 = (byte *)FUN_0040ed3c(piVar6,pbVar9);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          bVar10 = *param_2;
          while (iVar1 = (int)(char)bVar10, piVar4 = piVar6, (iVar1 - 1U & 0xff) < 0x20) {
            param_2 = param_2 + 1;
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
            bVar10 = *param_2;
          }
        }
        if (iVar1 == 0x5d) {
LAB_0040f5d8:
          return param_2 + 1;
        }
      }
      else if (uVar2 == 0x7b) {
        *(undefined4 *)(param_1 + 0xc) = 6;
        if (param_2 + 1 == (byte *)0x0) {
LAB_0040f344:
          bVar10 = *in_zero;
          pbVar9 = (byte *)0x0;
LAB_0040ee40:
          if (bVar10 == 0x7d) {
            return pbVar9 + 1;
          }
        }
        else {
          bVar10 = param_2[1];
          pbVar9 = param_2 + 1;
          while (bVar10 != 0) {
            pbVar8 = pbVar9 + 1;
            if (0x20 < bVar10) goto LAB_0040ee40;
            if (pbVar8 == (byte *)0x0) goto LAB_0040f344;
            pbVar9 = pbVar8;
            bVar10 = *pbVar8;
          }
        }
        piVar4 = (int *)FUN_0040e10c();
        *(int **)(param_1 + 8) = piVar4;
        if (piVar4 != (int *)0x0) {
          do {
            if (0x1f < (byte)(*pbVar9 - 1)) break;
            pbVar9 = pbVar9 + 1;
          } while (pbVar9 != (byte *)0x0);
          pcVar5 = (char *)FUN_0040e8f4(piVar4 + 3,piVar4 + 4,pbVar9);
          if (pcVar5 != (char *)0x0) {
            while (pcVar11 = pcVar5 + 1, (byte)(*pcVar5 - 1U) < 0x20) {
              pcVar5 = pcVar11;
              if (pcVar11 == (char *)0x0) {
                return (byte *)0x0;
              }
            }
            iVar1 = piVar4[4];
            piVar4[4] = 0;
            piVar4[8] = iVar1;
            if (*pcVar5 != ':') {
              DAT_00426374 = (byte *)pcVar5;
              return (byte *)0x0;
            }
            pcVar11 = (char *)0x0;
            if (pcVar5 != (char *)0xffffffff) {
              pcVar11 = pcVar5 + 2;
              if ((byte)(pcVar5[1] - 1U) < 0x20) {
                for (; (pcVar11 != (char *)0x0 && ((byte)(*pcVar11 - 1U) < 0x20));
                    pcVar11 = pcVar11 + 1) {
                }
              }
              else {
                pcVar11 = pcVar5 + 1;
              }
            }
            pbVar9 = (byte *)FUN_0040ed3c(piVar4,pcVar11);
            do {
              param_2 = pbVar9;
              if (param_2 == (byte *)0x0) {
                return (byte *)0x0;
              }
              iVar1 = (int)(char)*param_2;
              pbVar9 = param_2 + 1;
            } while ((iVar1 - 1U & 0xff) < 0x20);
            while (iVar1 == 0x2c) {
              piVar6 = (int *)FUN_0040e10c();
              if (piVar6 == (int *)0x0) {
                return (byte *)0x0;
              }
              *piVar4 = (int)piVar6;
              piVar6[1] = (int)piVar4;
              pbVar9 = (byte *)0x0;
              if (param_2 != (byte *)0xffffffff) {
                pbVar9 = param_2 + 2;
                if ((byte)(param_2[1] - 1) < 0x20) {
                  for (; (pbVar9 != (byte *)0x0 && ((byte)(*pbVar9 - 1) < 0x20));
                      pbVar9 = pbVar9 + 1) {
                  }
                }
                else {
                  pbVar9 = param_2 + 1;
                }
              }
              pcVar5 = (char *)FUN_0040e8f4(piVar6 + 3,piVar6 + 4,pbVar9);
              if (pcVar5 == (char *)0x0) {
                return (byte *)0x0;
              }
              if ((byte)(*pcVar5 - 1U) < 0x20) {
                do {
                  pcVar5 = pcVar5 + 1;
                  if (pcVar5 == (char *)0x0) {
                    return (byte *)0x0;
                  }
                } while ((byte)(*pcVar5 - 1U) < 0x20);
                iVar1 = piVar6[4];
              }
              else {
                iVar1 = piVar6[4];
              }
              piVar6[4] = 0;
              piVar6[8] = iVar1;
              if (*pcVar5 != ':') {
                DAT_00426374 = (byte *)pcVar5;
                return (byte *)0x0;
              }
              pcVar11 = (char *)0x0;
              if (pcVar5 != (char *)0xffffffff) {
                pcVar11 = pcVar5 + 2;
                if ((byte)(pcVar5[1] - 1U) < 0x20) {
                  for (; (pcVar11 != (char *)0x0 && ((byte)(*pcVar11 - 1U) < 0x20));
                      pcVar11 = pcVar11 + 1) {
                  }
                }
                else {
                  pcVar11 = pcVar5 + 1;
                }
              }
              param_2 = (byte *)FUN_0040ed3c(piVar6,pcVar11);
              if (param_2 == (byte *)0x0) {
                return (byte *)0x0;
              }
              bVar10 = *param_2;
              while (iVar1 = (int)(char)bVar10, piVar4 = piVar6, (iVar1 - 1U & 0xff) < 0x20) {
                param_2 = param_2 + 1;
                if (param_2 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                bVar10 = *param_2;
              }
            }
            if (iVar1 != 0x7d) {
              DAT_00426374 = param_2;
              return (byte *)0x0;
            }
            goto LAB_0040f5d8;
          }
        }
        return (byte *)0x0;
      }
      DAT_00426374 = param_2;
      return (byte *)0x0;
    }
  }
  if (uVar2 == 0x30) {
    uVar2 = (uint)(char)param_2[1];
    param_2 = param_2 + 1;
  }
  if ((uVar2 - 0x31 & 0xff) < 9) {
    dVar12 = 0.0;
    uVar3 = uVar2;
    do {
      param_2 = param_2 + 1;
      uVar2 = (uint)(char)*param_2;
      dVar12 = (double)CONCAT44(uVar3 - 0x30,SUB84(dVar12 * _DAT_00414d40,0)) +
               (double)(int)(uVar3 - 0x30);
      uVar3 = uVar2;
    } while ((uVar2 - 0x30 & 0xff) < 10);
  }
  else {
    dVar12 = 0.0;
  }
  if (uVar2 == 0x2e) {
    pbVar9 = param_2 + 1;
    if (9 < ((int)(char)*pbVar9 - 0x30U & 0xff)) {
      dVar13 = 0.0;
      goto LAB_0040f0c8;
    }
    param_2 = param_2 + 1;
    dVar13 = 0.0;
    uVar3 = (int)(char)*pbVar9;
    do {
      param_2 = param_2 + 1;
      uVar2 = (uint)(char)*param_2;
      dVar13 = dVar13 - DAT_00414d30;
      dVar12 = (double)CONCAT44(uVar3 - 0x30,SUB84(dVar12 * _DAT_00414d40,0)) +
               (double)(int)(uVar3 - 0x30);
      uVar3 = uVar2;
    } while ((uVar2 - 0x30 & 0xff) < 10);
  }
  else {
    dVar13 = 0.0;
  }
  if ((uVar2 & 0xffffffdf) == 0x45) {
    iVar1 = (int)(char)param_2[1];
    iVar7 = 1;
    if (iVar1 == 0x2b) {
      iVar1 = (int)(char)param_2[2];
      param_2 = param_2 + 2;
    }
    else if (iVar1 == 0x2d) {
      iVar1 = (int)(char)param_2[2];
      iVar7 = -1;
      param_2 = param_2 + 2;
    }
    else {
      param_2 = param_2 + 1;
    }
    uVar2 = iVar1 - 0x30;
    iVar1 = 0;
    if ((uVar2 & 0xff) < 10) {
      do {
        param_2 = param_2 + 1;
        iVar1 = iVar1 * 10 + uVar2;
        uVar2 = (int)(char)*param_2 - 0x30;
      } while ((uVar2 & 0xff) < 10);
      dVar12 = (double)CONCAT44(iVar1 * iVar7,SUB84(dVar12,0));
      dVar13 = dVar13 + (double)(iVar1 * iVar7);
      goto LAB_0040f0c8;
    }
  }
  dVar13 = dVar13 + 0.0;
LAB_0040f0c8:
  dVar14 = dVar14 * dVar12;
  pow(_DAT_00414d40,dVar13);
  *(undefined4 *)(param_1 + 0xc) = 3;
  iVar1 = (int)(dVar14 * dVar12);
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(iVar1,SUB84(dVar14 * dVar12,0));
  *(int *)(param_1 + 0x14) = iVar1;
  return param_2;
}



// ==== FUN_0040f98c @ 0040f98c size=2468

/* WARNING: Control flow encountered bad instruction data */

char * FUN_0040f98c(int param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 *puVar12;
  int *piVar13;
  undefined4 uVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  char *pcVar22;
  int iVar23;
  char *pcVar24;
  char *pcVar25;
  
  if (param_1 == 0) {
    return (char *)0x0;
  }
  if (param_4 == (int *)0x0) {
    switch(*(undefined1 *)(param_1 + 0xc)) {
    case 0:
      pcVar11 = "false";
      break;
    case 1:
      pcVar11 = "true";
      break;
    case 2:
      pcVar11 = "null";
      break;
    case 3:
      halt_baddata();
    case 4:
      pcVar11 = (char *)FUN_0040e5c4(*(undefined4 *)(param_1 + 0x10),0);
      return pcVar11;
    case 5:
      param_4 = (int *)0x0;
      goto LAB_0040f5e0;
    case 6:
      param_4 = (int *)0x0;
      goto LAB_0040fb70;
    default:
      goto switchD_0040f9c0_default;
    }
    iVar21 = strlen();
    iVar20 = (*DAT_00426244)(iVar21 + 1);
    pcVar24 = (char *)0x0;
    if (iVar20 != 0) {
      pcVar24 = (char *)memcpy(iVar20,pcVar11,iVar21 + 1);
    }
    return pcVar24;
  }
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 0:
    pcVar11 = (char *)FUN_0040e154(param_4,6);
    cVar3 = s_false_00414bdc[5];
    cVar2 = s_false_00414bdc[4];
    if (pcVar11 != (char *)0x0) {
      *(undefined4 *)pcVar11 = s_false_00414bdc._0_4_;
      pcVar11[4] = cVar2;
      pcVar11[5] = cVar3;
      return pcVar11;
    }
    break;
  case 1:
    pcVar11 = (char *)FUN_0040e154(param_4,5);
    cVar2 = DAT_00414be8;
    if (pcVar11 != (char *)0x0) {
      *(undefined4 *)pcVar11 = DAT_00414be4;
      pcVar11[4] = cVar2;
      return pcVar11;
    }
    break;
  case 2:
    pcVar11 = (char *)FUN_0040e154(param_4,5);
    cVar2 = DAT_00414bd8;
    if (pcVar11 != (char *)0x0) {
      *(undefined4 *)pcVar11 = DAT_00414bd4;
      pcVar11[4] = cVar2;
      return pcVar11;
    }
    break;
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
    pcVar11 = (char *)FUN_0040e5c4(*(undefined4 *)(param_1 + 0x10),param_4);
    return pcVar11;
  case 5:
LAB_0040f5e0:
    piVar4 = (int *)(param_1 + 8);
    piVar13 = (int *)*piVar4;
    if (piVar13 == (int *)0x0) {
      if (param_4 == (int *)0x0) {
        pcVar11 = (char *)(*DAT_00426244)(3);
      }
      else {
        pcVar11 = (char *)FUN_0040e154(param_4,3);
      }
      if (pcVar11 != (char *)0x0) {
        *pcVar11 = '[';
        pcVar11[1] = ']';
        pcVar11[2] = '\0';
        return pcVar11;
      }
    }
    else {
      iVar21 = 0;
      do {
        iVar20 = iVar21;
        piVar13 = (int *)*piVar13;
        iVar21 = iVar20 + 1;
      } while (piVar13 != (int *)0x0);
      if (param_4 == (int *)0x0) {
        piVar13 = (int *)(*DAT_00426244)(iVar21 * 4);
        if (piVar13 != (int *)0x0) {
          memset(piVar13,0,iVar21 * 4);
          piVar4 = (int *)*piVar4;
          if (piVar4 == (int *)0x0) {
            iVar16 = 5;
          }
          else {
            iVar16 = 5;
            piVar8 = piVar13;
            do {
              iVar17 = FUN_0040f98c(piVar4,param_2 + 1,param_3,0);
              *piVar8 = iVar17;
              if (iVar17 == 0) goto LAB_0040f838;
              iVar17 = strlen(iVar17);
              piVar4 = (int *)*piVar4;
              iVar16 = (param_3 != 0) + 2 + iVar16 + iVar17;
              piVar8 = piVar8 + 1;
            } while (piVar4 != (int *)0x0);
          }
          pcVar11 = (char *)(*DAT_00426244)(iVar16);
          if (pcVar11 != (char *)0x0) {
            pcVar24 = pcVar11 + 1;
            iVar16 = 0;
            *pcVar11 = '[';
            pcVar11[1] = '\0';
            piVar4 = piVar13;
            do {
              iVar19 = *piVar4;
              iVar17 = strlen(iVar19);
              memcpy(pcVar24,iVar19,iVar17);
              pcVar24 = pcVar24 + iVar17;
              if (iVar16 != iVar20) {
                *pcVar24 = ',';
                pcVar15 = pcVar24 + 2;
                if (param_3 == 0) {
                  pcVar15 = pcVar24 + 1;
                }
                else {
                  pcVar24[1] = ' ';
                }
                *pcVar15 = '\0';
                pcVar24 = pcVar15;
              }
              iVar17 = *piVar4;
              iVar16 = iVar16 + 1;
              piVar4 = piVar4 + 1;
              (*(code *)PTR_free_00426240)(iVar17);
            } while (iVar16 < iVar21);
            (*(code *)PTR_free_00426240)(piVar13);
            *pcVar24 = ']';
            pcVar24[1] = '\0';
            return pcVar11;
          }
LAB_0040f838:
          iVar20 = 0;
          piVar4 = piVar13;
          do {
            iVar16 = *piVar4;
            iVar20 = iVar20 + 1;
            piVar4 = piVar4 + 1;
            if (iVar16 != 0) {
              (*(code *)PTR_free_00426240)();
            }
          } while (iVar20 < iVar21);
          (*(code *)PTR_free_00426240)(piVar13);
        }
      }
      else {
        iVar21 = param_4[2];
        puVar5 = (undefined1 *)FUN_0040e154(param_4,1);
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0x5b;
          piVar4 = (int *)*piVar4;
          param_4[2] = param_4[2] + 1;
          if (piVar4 != (int *)0x0) {
            uVar14 = 3;
            iVar20 = 1;
            if (param_3 == 0) {
              uVar14 = 2;
            }
            else {
              iVar20 = 2;
            }
            do {
              FUN_0040f98c(piVar4,param_2 + 1,param_3,param_4);
              iVar16 = FUN_0040e2c4(param_4);
              iVar17 = *piVar4;
              param_4[2] = iVar16;
              if (iVar17 == 0) break;
              puVar5 = (undefined1 *)FUN_0040e154(param_4,uVar14);
              if (puVar5 == (undefined1 *)0x0) {
                return (char *)0x0;
              }
              *puVar5 = 0x2c;
              puVar12 = puVar5 + 1;
              if (param_3 != 0) {
                puVar5[1] = 0x20;
                puVar12 = puVar5 + 2;
              }
              *puVar12 = 0;
              piVar4 = (int *)*piVar4;
              param_4[2] = param_4[2] + iVar20;
            } while (piVar4 != (int *)0x0);
          }
          puVar5 = (undefined1 *)FUN_0040e154(param_4,2);
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = 0x5d;
            puVar5[1] = 0;
            return (char *)(*param_4 + iVar21);
          }
        }
      }
    }
    return (char *)0x0;
  case 6:
LAB_0040fb70:
    piVar13 = (int *)(param_1 + 8);
    piVar4 = (int *)*piVar13;
    if (piVar4 == (int *)0x0) {
      if (param_4 == (int *)0x0) {
        if (param_3 == 0) {
          iVar21 = 3;
        }
        else {
          iVar21 = param_2 + 4;
        }
        pcVar11 = (char *)(*DAT_00426244)(iVar21);
      }
      else {
        iVar21 = 3;
        if (param_3 != 0) {
          iVar21 = param_2 + 4;
        }
        pcVar11 = (char *)FUN_0040e154(param_4,iVar21);
      }
      if (pcVar11 != (char *)0x0) {
        *pcVar11 = '{';
        if (param_3 == 0) {
          pcVar24 = pcVar11 + 1;
        }
        else {
          pcVar11[1] = '\n';
          pcVar24 = pcVar11 + 2;
          if (1 < param_2) {
            pcVar25 = pcVar24 + param_2 + -1;
            pcVar15 = pcVar24;
            do {
              pcVar22 = pcVar15 + 1;
              *pcVar15 = '\t';
              pcVar24 = pcVar25;
              pcVar15 = pcVar22;
            } while (pcVar22 != pcVar25);
          }
        }
        *pcVar24 = '}';
        pcVar24[1] = '\0';
        return pcVar11;
      }
      return (char *)0x0;
    }
    iVar21 = 0;
    do {
      iVar20 = iVar21;
      piVar4 = (int *)*piVar4;
      iVar21 = iVar20 + 1;
    } while (piVar4 != (int *)0x0);
    if (param_4 != (int *)0x0) {
      uVar14 = 3;
      iVar21 = param_4[2];
      if (param_3 == 0) {
        uVar14 = 2;
      }
      iVar20 = 1;
      if (param_3 != 0) {
        iVar20 = 2;
      }
      puVar5 = (undefined1 *)FUN_0040e154(param_4,uVar14);
      if (puVar5 == (undefined1 *)0x0) {
        return (char *)0x0;
      }
      *puVar5 = 0x7b;
      if (param_3 == 0) {
        puVar12 = puVar5 + 1;
      }
      else {
        puVar12 = puVar5 + 2;
        puVar5[1] = 10;
      }
      *puVar12 = 0;
      piVar13 = (int *)*piVar13;
      iVar16 = param_2 + 1;
      param_4[2] = param_4[2] + iVar20;
      if (piVar13 != (int *)0x0) {
        do {
          if (param_3 == 0) {
            iVar17 = 1;
            FUN_0040e5c4(piVar13[8],param_4);
            iVar20 = FUN_0040e2c4(param_4);
            param_4[2] = iVar20;
          }
          else {
            puVar5 = (undefined1 *)FUN_0040e154(param_4,iVar16);
            if (puVar5 == (undefined1 *)0x0) {
              return (char *)0x0;
            }
            puVar12 = puVar5;
            if (0 < iVar16) {
              do {
                puVar6 = puVar12 + 1;
                *puVar12 = 9;
                puVar12 = puVar6;
              } while (puVar6 != puVar5 + iVar16);
            }
            iVar20 = piVar13[8];
            iVar17 = 2;
            param_4[2] = param_4[2] + iVar16;
            FUN_0040e5c4(iVar20,param_4);
            iVar20 = FUN_0040e2c4(param_4);
            param_4[2] = iVar20;
          }
          puVar5 = (undefined1 *)FUN_0040e154(param_4,iVar17);
          if (puVar5 == (undefined1 *)0x0) {
            return (char *)0x0;
          }
          *puVar5 = 0x3a;
          if (param_3 != 0) {
            puVar5[1] = 9;
          }
          param_4[2] = param_4[2] + iVar17;
          FUN_0040f98c(piVar13,iVar16,param_3,param_4);
          iVar20 = FUN_0040e2c4(param_4);
          iVar17 = *piVar13;
          param_4[2] = iVar20;
          iVar20 = (uint)(param_3 != 0) + (uint)(iVar17 != 0);
          puVar5 = (undefined1 *)FUN_0040e154(param_4,iVar20 + 1);
          if (puVar5 == (undefined1 *)0x0) {
            return (char *)0x0;
          }
          puVar12 = puVar5;
          if (*piVar13 != 0) {
            puVar12 = puVar5 + 1;
            *puVar5 = 0x2c;
          }
          puVar5 = puVar12;
          if ((param_3 != 0) != 0) {
            puVar5 = puVar12 + 1;
            *puVar12 = 10;
          }
          *puVar5 = 0;
          piVar13 = (int *)*piVar13;
          param_4[2] = param_4[2] + iVar20;
        } while (piVar13 != (int *)0x0);
      }
      if (param_3 == 0) {
        puVar5 = (undefined1 *)FUN_0040e154(param_4,2);
        if (puVar5 == (undefined1 *)0x0) {
          return (char *)0x0;
        }
      }
      else {
        puVar5 = (undefined1 *)FUN_0040e154(param_4,param_2 + 2);
        if (puVar5 == (undefined1 *)0x0) {
          return (char *)0x0;
        }
        if (param_2 < 1) {
          iVar21 = 0;
        }
        else {
          puVar6 = puVar5 + param_2;
          puVar12 = puVar5;
          do {
            puVar7 = puVar12 + 1;
            *puVar12 = 9;
            puVar12 = puVar7;
            puVar5 = puVar6;
            iVar21 = param_2;
          } while (puVar7 != puVar6);
        }
      }
      *puVar5 = 0x7d;
      puVar5[1] = 0;
      return (char *)(*param_4 + iVar21);
    }
    iVar16 = iVar21 * 4;
    piVar4 = (int *)(*DAT_00426244)(iVar16);
    if (piVar4 == (int *)0x0) {
      return (char *)0x0;
    }
    piVar8 = (int *)(*DAT_00426244)(iVar16);
    if (piVar8 == (int *)0x0) {
      (*(code *)PTR_free_00426240)(piVar4);
      return (char *)0x0;
    }
    iVar17 = param_2 + 1;
    memset(piVar4,0,iVar16);
    memset(piVar8,0,iVar16);
    piVar13 = (int *)*piVar13;
    if (param_3 == 0) {
      iVar16 = 7;
    }
    else {
      iVar16 = param_2 + 8;
    }
    if (piVar13 != (int *)0x0) {
      iVar19 = 0;
      bVar1 = false;
      iVar23 = param_2 + 3;
      if (param_3 == 0) {
        iVar23 = 0;
      }
      do {
        iVar9 = FUN_0040e5c4(piVar13[8],0);
        *(int *)((int)piVar8 + iVar19) = iVar9;
        iVar10 = FUN_0040f98c(piVar13,iVar17,param_3,0);
        *(int *)((int)piVar4 + iVar19) = iVar10;
        if (iVar9 == 0) {
          bVar1 = true;
        }
        else if (iVar10 == 0) {
          bVar1 = true;
        }
        else {
          iVar10 = strlen(iVar10);
          iVar9 = strlen(iVar9);
          iVar16 = iVar23 + 2 + iVar16 + iVar10 + iVar9;
        }
        piVar13 = (int *)*piVar13;
        iVar19 = iVar19 + 4;
      } while (piVar13 != (int *)0x0);
      if (bVar1) goto LAB_0040fe48;
    }
    pcVar11 = (char *)(*DAT_00426244)(iVar16);
    if (pcVar11 != (char *)0x0) {
      *pcVar11 = '{';
      if (param_3 == 0) {
        pcVar24 = pcVar11 + 1;
      }
      else {
        pcVar24 = pcVar11 + 2;
        pcVar11[1] = '\n';
      }
      iVar16 = 0;
      *pcVar24 = '\0';
      piVar13 = piVar8;
      piVar18 = piVar4;
      do {
        if (param_3 == 0) {
          iVar23 = *piVar13;
          iVar19 = strlen(iVar23);
          memcpy(pcVar24,iVar23,iVar19);
          pcVar15 = pcVar24 + iVar19 + 1;
          pcVar24[iVar19] = ':';
        }
        else {
          pcVar15 = pcVar24;
          if (0 < iVar17) {
            pcVar15 = pcVar24 + iVar17;
            do {
              pcVar25 = pcVar24 + 1;
              *pcVar24 = '\t';
              pcVar24 = pcVar25;
            } while (pcVar25 != pcVar15);
          }
          iVar23 = *piVar13;
          iVar19 = strlen(iVar23);
          iVar23 = memcpy(pcVar15,iVar23,iVar19);
          puVar5 = (undefined1 *)(iVar23 + iVar19);
          *puVar5 = 0x3a;
          pcVar15 = puVar5 + 2;
          puVar5[1] = 9;
        }
        strcpy(pcVar15,*piVar18);
        iVar19 = strlen(*piVar18);
        pcVar15 = pcVar15 + iVar19;
        if (iVar20 != iVar16) {
          *pcVar15 = ',';
          pcVar15 = pcVar15 + 1;
        }
        pcVar24 = pcVar15;
        if (param_3 != 0) {
          pcVar24 = pcVar15 + 1;
          *pcVar15 = '\n';
        }
        *pcVar24 = '\0';
        iVar16 = iVar16 + 1;
        iVar19 = *piVar13;
        piVar13 = piVar13 + 1;
        (*(code *)PTR_free_00426240)(iVar19);
        (*(code *)PTR_free_00426240)(*piVar18);
        piVar18 = piVar18 + 1;
      } while (iVar16 < iVar21);
      (*(code *)PTR_free_00426240)(piVar8);
      (*(code *)PTR_free_00426240)(piVar4);
      pcVar15 = pcVar24;
      if ((param_3 != 0) && (pcVar25 = pcVar24 + param_2, 0 < param_2)) {
        do {
          pcVar15 = pcVar24 + 1;
          *pcVar24 = '\t';
          pcVar24 = pcVar15;
        } while (pcVar15 != pcVar25);
      }
      *pcVar15 = '}';
      pcVar15[1] = '\0';
      return pcVar11;
    }
LAB_0040fe48:
    iVar20 = 0;
    piVar13 = piVar4;
    piVar18 = piVar8;
    do {
      iVar16 = *piVar18;
      iVar20 = iVar20 + 1;
      piVar18 = piVar18 + 1;
      if (iVar16 != 0) {
        (*(code *)PTR_free_00426240)();
      }
      iVar16 = *piVar13;
      piVar13 = piVar13 + 1;
      if (iVar16 != 0) {
        (*(code *)PTR_free_00426240)();
      }
    } while (iVar20 < iVar21);
    (*(code *)PTR_free_00426240)(piVar8);
    (*(code *)PTR_free_00426240)(piVar4);
    return (char *)0x0;
  }
switchD_0040f9c0_default:
  return (char *)0x0;
}



// ==== FUN_004102a0 @ 004102a0 size=200

void FUN_004102a0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  do {
    if (param_1 == (int *)0x0) {
      return;
    }
    uVar2 = param_1[3];
    iVar1 = *param_1;
    if ((uVar2 & 0x100) == 0) {
      if (param_1[2] != 0) {
        FUN_004102a0();
        uVar2 = param_1[3];
        if ((uVar2 & 0x100) != 0) goto LAB_004102d0;
      }
      if (param_1[4] != 0) {
        (*(code *)PTR_free_00426240)();
        uVar2 = param_1[3];
      }
    }
LAB_004102d0:
    if (((uVar2 & 0x200) == 0) && (param_1[8] != 0)) {
      (*(code *)PTR_free_00426240)();
    }
    (*(code *)PTR_free_00426240)(param_1);
    param_1 = (int *)iVar1;
  } while( true );
}



// ==== FUN_00410368 @ 00410368 size=308

int FUN_00410368(char *param_1,undefined4 *param_2,int param_3)

{
  char *pcVar1;
  char *in_zero;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = FUN_0040e10c();
  DAT_00426374 = (byte *)0x0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    do {
      pcVar1 = param_1;
      if (pcVar1 == (char *)0x0) break;
      param_1 = pcVar1 + 1;
    } while ((byte)(*pcVar1 - 1U) < 0x20);
    pbVar3 = (byte *)FUN_0040ed3c(iVar2,pcVar1);
    if (pbVar3 == (byte *)0x0) {
      FUN_004102a0(iVar2);
      iVar2 = 0;
    }
    else {
      if (param_3 != 0) {
        do {
          if (*pbVar3 == 0) goto LAB_00410424;
          if (0x20 < *pbVar3) goto LAB_00410470;
          pbVar3 = pbVar3 + 1;
        } while (pbVar3 != (byte *)0x0);
        if (*in_zero != '\0') {
LAB_00410470:
          FUN_004102a0(iVar2);
          DAT_00426374 = pbVar3;
          return 0;
        }
      }
LAB_00410424:
      if (param_2 == (undefined4 *)0x0) {
        return iVar2;
      }
      *param_2 = pbVar3;
    }
  }
  return iVar2;
}



// ==== FUN_0041049c @ 0041049c size=16

void FUN_0041049c(undefined4 param_1)

{
  FUN_00410368(param_1,0,0);
  return;
}



// ==== FUN_004104ac @ 004104ac size=20

void FUN_004104ac(undefined4 param_1)

{
  FUN_0040f98c(param_1,0,0,0);
  return;
}



// ==== FUN_004104c0 @ 004104c0 size=32

int FUN_004104c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// ==== FUN_004104e0 @ 004104e0 size=60

void FUN_004104e0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    do {
      piVar2 = piVar1;
      piVar1 = (int *)*piVar2;
    } while ((int *)*piVar2 != (int *)0x0);
    *piVar2 = param_2;
    *(int **)(param_2 + 4) = piVar2;
    return;
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}



// ==== FUN_0041051c @ 0041051c size=136

int * FUN_0041051c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar4 = piVar1;
  if (param_2 < 1) {
    piVar3 = (int *)piVar1[1];
  }
  else {
    do {
      piVar4 = (int *)*piVar4;
      param_2 = param_2 + -1;
      if (piVar4 == (int *)0x0) {
        return (int *)0x0;
      }
    } while (param_2 != 0);
    piVar3 = (int *)piVar4[1];
  }
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar4;
  }
  iVar2 = *piVar4;
  if (iVar2 != 0) {
    *(int **)(iVar2 + 4) = piVar3;
  }
  if (piVar4 == piVar1) {
    *(int *)(param_1 + 8) = iVar2;
    *piVar4 = 0;
    piVar4[1] = 0;
    return piVar4;
  }
  *piVar4 = 0;
  piVar4[1] = 0;
  return piVar4;
}



// ==== FUN_004105a4 @ 004105a4 size=32

void FUN_004105a4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041051c();
  FUN_004102a0(uVar1);
  return;
}



// ==== FUN_004105c4 @ 004105c4 size=40

void FUN_004105c4(void)

{
  int iVar1;
  
  iVar1 = FUN_0040e10c();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 5;
  }
  return;
}



// ==== FUN_004105ec @ 004105ec size=28

void FUN_004105ec(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memset(param_1,param_3,param_4);
  return;
}



// ==== FUN_00410608 @ 00410608 size=28

void FUN_00410608(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memcpy(param_1,param_3,param_4);
  return;
}



// ==== FUN_00410624 @ 00410624 size=284

undefined4 FUN_00410624(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_80 [2];
  undefined2 local_78;
  char acStack_76 [4];
  char acStack_72 [4];
  char local_6e [4];
  char local_6a;
  int aiStack_10 [2];
  
  if (param_1 == (int *)0x0) {
    puts("invalid para, is null\r");
    uVar2 = 0xffffffff;
  }
  else {
    memset(local_80,0,0x78);
    local_78 = 1;
    acStack_76[0] = s__tmp_logsock_00414d60[0];
    acStack_76[1] = s__tmp_logsock_00414d60[1];
    acStack_76[2] = s__tmp_logsock_00414d60[2];
    acStack_76[3] = s__tmp_logsock_00414d60[3];
    acStack_72[0] = s__tmp_logsock_00414d60[4];
    acStack_72[1] = s__tmp_logsock_00414d60[5];
    acStack_72[2] = s__tmp_logsock_00414d60[6];
    acStack_72[3] = s__tmp_logsock_00414d60[7];
    local_6e[0] = s__tmp_logsock_00414d60[8];
    local_6e[1] = s__tmp_logsock_00414d60[9];
    local_6e[2] = s__tmp_logsock_00414d60[10];
    local_6e[3] = s__tmp_logsock_00414d60[0xb];
    local_6a = s__tmp_logsock_00414d60[0xc];
    local_80[1] = 0x6e;
    local_80[0] = socket(1,1,0);
    if (local_80[0] < 0) {
      puts("create socket fail\r");
      uVar2 = 0xffffffff;
    }
    else {
      piVar6 = local_80;
      do {
        piVar5 = piVar6;
        piVar4 = param_1;
        piVar6 = piVar5 + 4;
        iVar1 = piVar5[1];
        *piVar4 = *piVar5;
        iVar3 = piVar5[2];
        piVar4[1] = iVar1;
        iVar1 = piVar5[3];
        piVar4[2] = iVar3;
        piVar4[3] = iVar1;
        param_1 = piVar4 + 4;
      } while (piVar6 != aiStack_10);
      uVar2 = 0;
      iVar1 = piVar5[5];
      piVar4[4] = *piVar6;
      piVar4[5] = iVar1;
    }
  }
  return uVar2;
}



// ==== FUN_00410740 @ 00410740 size=536

void FUN_00410740(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_2828;
  int local_2824 [2559];
  undefined1 *local_28;
  undefined1 auStack_24 [8];
  
  if (param_4 == 0) {
    return;
  }
  if (DAT_00426388 == (undefined4 *)0x0) {
    iVar1 = FUN_00410624(&DAT_00426d40);
    if (iVar1 == 0) {
      DAT_00426388 = (undefined4 *)&DAT_00426d40;
    }
    else if (DAT_00426388 == (undefined4 *)0x0) goto LAB_00410890;
  }
  memset(&local_2828,0,0x2800);
  local_2828 = getpid();
  snprintf(local_2824,0x27fc,"%s:%d|%s() ",param_1,param_3,param_2);
  local_28 = &stack0x00000010;
  iVar1 = strlen(local_2824);
  vsnprintf((int)local_2824 + iVar1,0x27fc - iVar1,param_4,&stack0x00000010);
  uVar2 = strlen(local_2824);
  if ((uVar2 < 0x27fb) && (*(char *)((int)local_2824 + (uVar2 - 1)) != '\n')) {
    *(undefined1 *)((int)local_2824 + uVar2) = 10;
    uVar2 = uVar2 + 1;
  }
  iVar1 = sendto(*DAT_00426388,&local_2828,uVar2 + 4,0x40,DAT_00426388 + 2,DAT_00426388[1]);
  if (0 < iVar1) {
    return;
  }
LAB_00410890:
  time(auStack_24);
  puVar3 = (undefined4 *)localtime(auStack_24);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  gettimeofday(&local_2828,0);
  if (local_2824[0] < 0) {
    local_2824[0] = local_2824[0] + 0x3ff;
  }
  printf("%02d-%02d %02d:%02d:%02d.%03d %s:%d|%s() ",puVar3[4] + 1,puVar3[3],puVar3[2],puVar3[1],
         *puVar3,local_2824[0] >> 10,param_1,param_3,param_2);
  local_28 = &stack0x00000010;
  vfprintf(stdout,param_4,local_28);
  putchar(10);
  return;
}



// ==== FUN_00410958 @ 00410958 size=48

void FUN_00410958(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = popen(param_1,&DAT_00414dfc);
  if (iVar1 != 0) {
    pclose(iVar1);
    return;
  }
  return;
}



// ==== FUN_00410988 @ 00410988 size=496

int FUN_00410988(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_a8 [32];
  uint local_28 [2];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = popen(param_1,&DAT_00414dfc);
    if (iVar1 == 0) {
      return -3;
    }
    uVar2 = fileno(iVar1);
    puVar5 = local_28;
    if ((int)uVar2 < 0) {
      return 0;
    }
    puVar4 = local_a8;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (puVar5 != puVar4);
    local_28[0] = param_4;
    local_28[1] = 0;
    local_a8[uVar2 >> 5] = local_a8[uVar2 >> 5] | 1 << (uVar2 & 0x1f);
    if ((int)param_4 < 1) {
      puVar5 = (uint *)0x0;
    }
    iVar3 = select(uVar2 + 1,local_a8,0,0,puVar5);
    if (0 < iVar3) {
      if (((int)local_a8[uVar2 >> 5] >> (uVar2 & 0x1f) & 1U) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fread(param_2,1,param_3 + -1,iVar1);
        *(undefined1 *)(param_2 + iVar3) = 0;
      }
      pclose(iVar1);
      return iVar3;
    }
    iVar1 = strstr(param_1,"cloudAPI");
    if (iVar1 != 0) {
      FUN_00410958("killall cloudAPI");
      FUN_00410958("killall cloudAPI");
      FUN_00410958("killall cloudAPI");
    }
  }
  return -1;
}



// ==== FUN_00410c4c @ 00410c4c size=88

int FUN_00410c4c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_24 = 8;
  local_20 = 0x200;
  local_28 = 0;
  iVar1 = mq_open(param_2,0x182,0x1b6,&local_28);
  *param_1 = iVar1;
  return -(uint)(iVar1 == -1);
}



// ==== FUN_00410ca4 @ 00410ca4 size=44

undefined4 FUN_00410ca4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != -1) && (param_3 < 0x201)) {
    uVar1 = mq_send();
    return uVar1;
  }
  return 0xffffffff;
}



// ==== FUN_00410cd0 @ 00410cd0 size=244

int FUN_00410cd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 10;
  do {
    iVar1 = open(param_1,0);
    iVar2 = iVar2 + -1;
    if (iVar1 != -1) {
      iVar2 = mmap(0,param_2,1,1,iVar1,0);
      if (iVar2 == -1) {
        close(iVar1);
        return 0;
      }
      close(iVar1);
      return iVar2;
    }
    usleep(100000);
  } while (iVar2 != 0);
  return 0;
}



// ==== FUN_00410dc4 @ 00410dc4 size=168

int FUN_00410dc4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = open(param_1,0x102,0x1ff);
  if (iVar1 == -1) {
    iVar2 = 0;
  }
  else {
    lseek(iVar1,param_2 + -1,0);
    write(iVar1,"",1);
    iVar2 = mmap(0,param_2,3,1,iVar1,0);
    if (iVar2 == -1) {
      close(iVar1);
      iVar2 = 0;
    }
  }
  return iVar2;
}



// ==== FUN_00410e6c @ 00410e6c size=100

void FUN_00410e6c(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar1 = strlen(iVar2);
    if ((1 < iVar1) && (pcVar3 = (char *)(iVar2 + iVar1 + -1), *pcVar3 == '\n')) {
      *pcVar3 = '\0';
      return;
    }
  }
  return;
}



// ==== FUN_00410ed0 @ 00410ed0 size=104

void FUN_00410ed0(uint param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1 / 1000;
  local_c = (param_1 % 1000) * 1000;
  select(0,0,0,0,&local_10);
  return;
}



// ==== FUN_00410f38 @ 00410f38 size=20

void FUN_00410f38(void)

{
  gettimeofday(&DAT_0042638c,0);
  return;
}



// ==== FUN_00410f4c @ 00410f4c size=108

int FUN_00410f4c(void)

{
  int local_10;
  int local_c;
  
  gettimeofday(&local_10,0);
  return (local_10 - DAT_0042638c) * 1000 + (local_c - DAT_00426390) / 1000;
}



// ==== FUN_00410fb8 @ 00410fb8 size=224

undefined4 FUN_00410fb8(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     (iVar2 = strstr(param_3), iVar2 == 0)) {
    return 0;
  }
  iVar3 = strlen(param_2);
  pcVar6 = (char *)(iVar2 + iVar3 + 1);
  iVar5 = 2;
  do {
    iVar4 = iVar5;
    cVar1 = *pcVar6;
    if (((cVar1 != ':') && (cVar1 != '\'')) && (cVar1 != '\"')) goto LAB_00411034;
    iVar5 = iVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (iVar5 != 0xc);
  pcVar6 = (char *)(iVar2 + iVar4 + iVar3);
LAB_00411034:
  sscanf(pcVar6,"%[^\"\',}]",param_1);
  return 1;
}



// ==== FUN_00411098 @ 00411098 size=8

void FUN_00411098(void)

{
  return;
}



// ==== FUN_004110a0 @ 004110a0 size=184

void FUN_004110a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[6];
  if ((iVar2 == 0) || (iVar2 != param_1[4])) {
    param_1[4] = param_1[4] + 1;
    return;
  }
  iVar3 = iVar2 + param_1[7];
  param_1[8] = param_1[8] + iVar2;
  param_1[7] = iVar3;
  if (*param_1 == 3) {
    if (0xfff < iVar3) {
      param_1[7] = 0x1000;
      goto LAB_00411104;
    }
  }
  else if ((*param_1 == 2) && (0x59f < iVar3)) {
    param_1[7] = 0x5a0;
    goto LAB_00411104;
  }
  if (iVar3 < 1) {
    param_1[7] = 0;
  }
LAB_00411104:
  uVar1 = DAT_00426290;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  write(uVar1,&DAT_004262a4,7);
  return;
}



// ==== FUN_00411158 @ 00411158 size=184

void FUN_00411158(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[6];
  if ((iVar2 == 0) || (iVar2 != param_1[5])) {
    param_1[5] = param_1[5] + 1;
    return;
  }
  iVar3 = param_1[7] - iVar2;
  param_1[8] = param_1[8] + iVar2;
  param_1[5] = 0;
  param_1[7] = iVar3;
  if (*param_1 == 4) {
    if (0xfff < iVar3) {
      param_1[7] = 0x1000;
      goto LAB_004111c0;
    }
  }
  else if ((*param_1 == 1) && (0x59f < iVar3)) {
    param_1[7] = 0x5a0;
    goto LAB_004111c0;
  }
  if (iVar3 < 1) {
    param_1[7] = 0;
  }
LAB_004111c0:
  uVar1 = DAT_00426290;
  *param_1 = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  write(uVar1,&DAT_004262a4,7);
  return;
}



// ==== FUN_00411850 @ 00411850 size=268

undefined4
FUN_00411850(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,int param_6,undefined4 param_7)

{
  uint uVar1;
  
  if (param_4 - 3U < 2) {
    if (DAT_004263cc == 0) {
      trap(0x1c00);
    }
    uVar1 = (uint)(param_6 * 100) / (uint)(DAT_004263d0 / DAT_004263cc);
    if (DAT_004263d0 / DAT_004263cc == 0) {
      trap(0x1c00);
    }
    DAT_004263c4 = param_4;
    DAT_004263c8 = param_7;
    DAT_004263dc = 0x1000;
    if (uVar1 < 0x1000) {
      DAT_004263dc = uVar1;
    }
  }
  else if (param_4 - 1U < 2) {
    if (DAT_004263a8 == 0) {
      trap(0x1c00);
    }
    uVar1 = (uint)(param_6 * 100) / (uint)(DAT_004263ac / DAT_004263a8);
    if (DAT_004263ac / DAT_004263a8 == 0) {
      trap(0x1c00);
    }
    DAT_004263a0 = param_4;
    DAT_004263a4 = param_7;
    DAT_004263b8 = 0x5a0;
    if (uVar1 < 0x5a0) {
      DAT_004263b8 = uVar1;
    }
  }
  write(DAT_00426290,param_1,7);
  return 0;
}



// ==== FUN_00411f30 @ 00411f30 size=72

void FUN_00411f30(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00426000;
  pcVar2 = DAT_00426000;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



