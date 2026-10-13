/* cloud — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloud.h"

// ==== entry @ 004013b0 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_00423760;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00423764)
            (PTR_main_00423758,param_2,&stack0x00000004,PTR__init_0042375c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== strhex2byte @ 00401590 size=340

uint strhex2byte(int param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = strlen(param_2);
  uVar1 = uVar1 >> 1;
  if (uVar1 != 0) {
    uVar7 = 0;
    do {
      uVar2 = (uint)*param_2;
      if (uVar2 - 0x41 < 6) {
        uVar2 = uVar2 - 0x37 & 0xff;
LAB_004015e8:
        bVar3 = param_2[1];
        iVar6 = (int)(char)bVar3;
        uVar4 = (uint)bVar3;
        if (5 < uVar4 - 0x41) goto LAB_0040166c;
LAB_00401600:
        bVar3 = bVar3 - 0x37;
      }
      else {
        if (5 < uVar2 - 0x61) {
          uVar2 = uVar2 - 0x30 & 0xff;
          if (9 < uVar2) {
            uVar2 = 0x10;
          }
          goto LAB_004015e8;
        }
        bVar3 = param_2[1];
        iVar6 = (int)(char)bVar3;
        uVar4 = (uint)bVar3;
        uVar2 = uVar2 - 0x57 & 0xff;
        if (uVar4 - 0x41 < 6) goto LAB_00401600;
LAB_0040166c:
        if (uVar4 - 0x61 < 6) {
          bVar3 = (char)uVar4 + 0xa9;
        }
        else {
          bVar3 = (byte)(uVar4 - 0x30);
          if (9 < (uVar4 - 0x30 & 0xff)) goto LAB_004016ac;
        }
      }
      if (uVar2 == 0x10) {
LAB_004016ac:
        printf(&DAT_0040deb0,"strhex2byte",0x94e,uVar7 << 1,(int)(char)*param_2,iVar6);
        return 0xffffffff;
      }
      pbVar5 = (byte *)(param_1 + uVar7);
      uVar7 = uVar7 + 1;
      *pbVar5 = bVar3 | (byte)(uVar2 << 4);
      param_2 = param_2 + 2;
    } while (uVar1 != uVar7);
  }
  return uVar1;
}



// ==== msg_proc @ 0040244c size=740

void msg_proc(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_2b0 [8];
  undefined2 local_2a8;
  undefined4 local_2a4;
  undefined1 auStack_2a0 [496];
  uint local_b0 [32];
  undefined4 local_30;
  
  memset(auStack_2b0,0,0x200);
  do {
    do {
      uVar2 = 0;
      do {
        uVar3 = uVar2 + 1;
        local_b0[uVar2] = 0;
        uVar2 = uVar3;
      } while (uVar3 < 0x20);
      local_b0[DAT_00423a44 >> 5] = local_b0[DAT_00423a44 >> 5] | 1 << (DAT_00423a44 & 0x1f);
      iVar1 = select(DAT_00423a44 + 1,local_b0,0,0,0);
    } while (((iVar1 < 0) || (((int)local_b0[DAT_00423a44 >> 5] >> (DAT_00423a44 & 0x1f) & 1U) == 0)
             ) || (iVar1 = mq_receive(DAT_00423a44,auStack_2b0,0x200,0), iVar1 < 1));
    switch(local_2a8) {
    case 0x6000:
      DAT_004239bc = 0;
      sem_post(&DAT_004239d4);
      break;
    case 0x6001:
      DAT_004239bc = 1;
      break;
    case 0x6002:
      DAT_004239b8 = 1;
      cloud_set_babycry_occur();
      break;
    case 0x6003:
      DAT_004239b4 = 1;
      break;
    case 0x6004:
      DAT_004239b0 = 1;
      cloud_set_abnormal_sound_occur();
      break;
    case 0x6005:
      if (DAT_004239ac == 0) {
        memset(&DAT_004237ac,0,0x200);
        local_30 = local_2a4;
        memcpy(&DAT_004237ac,auStack_2a0,local_2a4);
        DAT_004239ac = 1;
        FUN_0040b244("cloud.c","msg_proc",0x1448,"rcd_file_path is %s, len = %d\n",&DAT_004237ac,
                     local_30);
      }
      break;
    case 0x6006:
      DAT_00423a6c = 1;
      break;
    case 0x6007:
      DAT_00423a6c = 0;
      FUN_00401918(DAT_00423a40,0x7001,0,0);
      break;
    case 0x6008:
      DAT_004237a4 = 0;
      break;
    case 0x6009:
      DAT_004237a4 = 1;
      break;
    case 0x600a:
      DAT_004237a4 = 2;
      break;
    case 0x600b:
      DAT_004237a4 = 3;
      break;
    case 0x600c:
      DAT_004237a4 = 4;
      break;
    case 0x600d:
      DAT_004237a4 = 5;
      break;
    case 0x600e:
      DAT_004237a4 = 6;
      break;
    case 0x600f:
      DAT_004237a4 = 7;
      break;
    case 0x6010:
      DAT_004237a4 = 8;
      break;
    default:
      FUN_0040b244("cloud.c","msg_proc",0x1469,"unknown msg 0x%04x",local_2a8);
    }
  } while( true );
}



// ==== do_update_ex @ 00402988 size=132

void do_update_ex(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_210 [516];
  
  memset(auStack_210,0,0x200);
  FUN_0040b244("cloud.c","do_update_ex",0x4e0,"start force update url[%s] md5[%s]\n",param_1,param_2
              );
  sprintf(auStack_210,
          "killall upgrade_firmware;rm -f /tmp/sd/home_r10;rm -f /tmp/sd/home_r10m;/home/app/upgrade_firmware \"%s\" \"%s\" &"
          ,param_1,param_2);
  system(auStack_210);
  return;
}



// ==== report_tnp_on_line_status @ 00406c54 size=656

undefined4 report_tnp_on_line_status(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_d08 [2048];
  undefined1 auStack_508 [1024];
  undefined1 auStack_108 [128];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  memset(auStack_508,0,0x400);
  memset(auStack_d08,0,0x800);
  memset(auStack_108,0,0x80);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  snprintf(&local_48,0x20,"%s",DAT_00423a48 + 0x255);
  snprintf(&local_68,0x20,"%s",DAT_00423a48 + 400);
  iVar2 = 3;
  snprintf(&local_88,0x20,"%s",DAT_00423a48 + 0x360);
  FUN_0040b7f4();
  sprintf(auStack_508,
          "%s -c 192 -url \"%s/ipc/monitor/heartbeat\" -did %s -version %s -mac %s -heart_time %llu -p2p_status %d "
          ,"/backup/cloudAPI","https://monitor-log.xiaoyi.com",&local_48,&local_68,&local_88);
  while( true ) {
    memset(auStack_d08,0,0x800);
    FUN_0040b48c(auStack_508,auStack_d08,0x800,0x3c);
    FUN_0040b244("cloud.c","report_tnp_on_line_status",0x10f5,"cmd = %s\n",auStack_508);
    FUN_0040b244("cloud.c","report_tnp_on_line_status",0x10f6,"ret_string = %s\n",auStack_d08);
    memset(auStack_108,0,0x80);
    iVar1 = FUN_0040b8cc(auStack_108,&DAT_0040e020,auStack_d08);
    if ((iVar1 == 1) && (iVar1 = atoi(auStack_108), iVar1 == 1)) break;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
    usleep(2000000);
  }
  FUN_0040b244("cloud.c","report_tnp_on_line_status",0x10fa,
               "report_tnp_on_line_status success state = %d did = %s\n",param_1,&local_48);
  return 0;
}



// ==== do_need_update @ 00406ee4 size=200

void do_need_update(void)

{
  int iVar1;
  undefined1 auStack_158 [256];
  undefined1 auStack_58 [64];
  undefined4 local_18 [3];
  
  memset(auStack_158,0,0x100);
  memset(auStack_58,0,0x40);
  local_18[0] = 1;
  if (DAT_004237a8 == 0) {
    DAT_004237a8 = 1;
    iVar1 = FUN_00402a0c(auStack_158,auStack_58);
    if (iVar1 == 1) {
      iVar1 = FUN_00401918(DAT_00423a40,0x4024,local_18,4);
      if (iVar1 < 0) {
        FUN_0040b244("cloud.c","do_need_update",0x1137,"DISPATCH_UPGRADE_MODE\n");
        return;
      }
      do_update_ex(auStack_158,auStack_58);
    }
  }
  DAT_004237a8 = 0;
  return;
}



// ==== sync_time @ 00408550 size=228

void sync_time(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0;
      ((*(int *)(DAT_00423a48 + 0x5bc) != 1 || (*(char *)(DAT_00423a48 + 0x300) == '\0')) ||
      (iVar2 != 3)); iVar2 = iVar2 + 1) {
    iVar1 = yi_sync_time();
    if (iVar1 == 0) {
      FUN_0040b244("cloud.c","sync_time",0x1507,"sync_time ok!\n");
      return;
    }
    if ((4 < iVar2) && (*(char *)(DAT_00423a48 + 0xa33) != *(char *)(DAT_00423a48 + 0x9f0))) {
      send_apmode_result(0);
    }
    FUN_0040b864(3000);
  }
  cloud_set_bind_result(0x98);
  do {
    sleep(10);
  } while( true );
}



// ==== sys_init @ 00408634 size=408

undefined4 sys_init(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_218 [516];
  
  sem_init(&DAT_004239f4,0,0);
  sem_init(&DAT_004239e4,0,0);
  FUN_0040b10c(&DAT_00423a70,0x6140,0,0x6140);
  FUN_0040b10c(&DAT_00423a40,0x30,0,0x30);
  FUN_0040b244("cloud.c","sys_init",0x1517,"open share mem ok\n");
  iVar1 = FUN_0040b67c(&DAT_00423a40,"/ipc_dispatch");
  if (iVar1 == 0) {
    iVar1 = FUN_0040b67c(&DAT_00423a44,"/ipc_cloud");
    if (iVar1 == 0) {
      while (DAT_00423a48 = FUN_0040b700("/tmp/mmap.info",0xaa0), DAT_00423a48 == 0) {
        FUN_0040b864(1000);
      }
      iVar1 = *(int *)(DAT_00423a48 + 0x5c8);
      while (iVar1 != 1) {
        FUN_0040b864(100);
        iVar1 = *(int *)(DAT_00423a48 + 0x5c8);
      }
      do {
        iVar1 = mq_receive(DAT_00423a44,auStack_218,0x200,0);
        uVar2 = 0;
      } while (0 < iVar1);
    }
    else {
      FUN_0040b244("cloud.c","sys_init",0x1521,"init_mqueue cloud fail!\n");
      uVar2 = 0xffffffff;
    }
  }
  else {
    FUN_0040b244("cloud.c","sys_init",0x151b,"init_mqueue dispatch fail!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== aec_dec @ 004087cc size=208

void aec_dec(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 auStack_1138 [4096];
  undefined1 auStack_138 [288];
  
  iVar2 = strhex2byte(auStack_1138);
  if (0 < iVar2) {
    uVar3 = strlen(param_3);
    FUN_0040c644(auStack_138,param_3,uVar3,param_4,1);
    FUN_0040ceb0(auStack_138,param_1,auStack_1138,iVar2);
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      printf("%02x ",(int)cVar1);
    } while (pcVar4 != param_1 + iVar2);
    printf(&DAT_00410018,"aec_dec",0x1542,param_1);
  }
  return;
}



// ==== cJSON_GetIntObjItem @ 0040b02c size=116

undefined4 cJSON_GetIntObjItem(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0040ae6c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (*(int *)(iVar1 + 0xc) == 3) {
    uVar2 = 0;
    *param_3 = *(undefined4 *)(iVar1 + 0x14);
  }
  else {
    printf("%s(\"%s\") not a number item obj!\n","cJSON_GetIntObjItem",param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== cJSON_GetStrObjItem @ 0040b0a0 size=108

undefined4 cJSON_GetStrObjItem(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0040ae6c();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(iVar1 + 0xc) != 4) {
      printf("%s(\"%s\") not a string item obj!\n","cJSON_GetStrObjItem",param_2);
      return 0;
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
  }
  return uVar2;
}



// ==== putchar @ 00413220 size=16

void putchar(void)

{
  (*(code *)PTR_FUN_00423630)();
  return;
}



// ==== strcpy @ 00413230 size=4

void strcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041323c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00423634)();
  return;
}



// ==== popen @ 00413240 size=16

void popen(void)

{
  (*(code *)PTR_FUN_00423638)();
  return;
}



// ==== printf @ 00413250 size=4

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_0042363c)();
  return;
}



// ==== pclose @ 00413280 size=16

void pclose(void)

{
  (*(code *)PTR_FUN_00423648)();
  return;
}



// ==== snprintf @ 00413290 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041329c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_0042364c)();
  return;
}



// ==== usleep @ 004132b0 size=16

void usleep(void)

{
  (*(code *)PTR_FUN_00423654)();
  return;
}



// ==== getpid @ 004132c0 size=16

void getpid(void)

{
  (*(code *)PTR_FUN_00423658)();
  return;
}



// ==== memcpy @ 004132d0 size=4

void memcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x004132dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_0042365c)();
  return;
}



// ==== perror @ 004132e0 size=16

void perror(void)

{
  (*(code *)PTR_FUN_00423660)();
  return;
}



// ==== puts @ 00413300 size=16

void puts(void)

{
  (*(code *)PTR_FUN_00423668)();
  return;
}



// ==== system @ 00413310 size=4

void system(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041331c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_0042366c)();
  return;
}



// ==== malloc @ 00413320 size=16

void malloc(void)

{
  (*(code *)PTR_FUN_00423670)();
  return;
}



// ==== remove @ 00413330 size=16

void remove(void)

{
  (*(code *)PTR_FUN_00423674)();
  return;
}



// ==== sleep @ 00413340 size=16

void sleep(void)

{
  (*(code *)PTR_FUN_00423678)();
  return;
}



// ==== vsnprintf @ 00413350 size=16

void vsnprintf(void)

{
  (*(code *)PTR_FUN_0042367c)();
  return;
}



// ==== sem_post @ 00413380 size=16

void sem_post(void)

{
  (*(code *)PTR_FUN_00423688)();
  return;
}



// ==== socket @ 00413390 size=16

void socket(void)

{
  (*(code *)PTR_FUN_0042368c)();
  return;
}



// ==== select @ 004133a0 size=4

void select(void)

{
                    /* WARNING: Could not recover jumptable at 0x004133ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00423690)();
  return;
}



// ==== mmap @ 004133b0 size=16

void mmap(void)

{
  (*(code *)PTR_FUN_00423694)();
  return;
}



// ==== strrchr @ 004133d0 size=16

void strrchr(void)

{
  (*(code *)PTR_FUN_0042369c)();
  return;
}



// ==== atof @ 004133e0 size=16

void atof(void)

{
                    /* WARNING: Could not recover jumptable at 0x004133ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236a0)();
  return;
}



// ==== sem_init @ 004133f0 size=4

void sem_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x004133fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236a4)();
  return;
}



// ==== mktime @ 00413400 size=16

void mktime(void)

{
  (*(code *)PTR_FUN_004236a8)();
  return;
}



// ==== strstr @ 00413410 size=16

void strstr(void)

{
  (*(code *)PTR_FUN_004236ac)();
  return;
}



// ==== rand @ 00413420 size=4

void rand(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236b0)();
  return;
}



// ==== signal @ 00413430 size=16

void signal(void)

{
  (*(code *)PTR_FUN_004236b4)();
  return;
}



// ==== strncmp @ 00413440 size=4

void strncmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041344c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236b8)();
  return;
}



// ==== pow @ 00413450 size=16

void pow(void)

{
  (*(code *)PTR_FUN_004236bc)();
  return;
}



// ==== strncpy @ 00413460 size=4

void strncpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041346c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236c0)();
  return;
}



// ==== sendto @ 00413470 size=16

void sendto(void)

{
  (*(code *)PTR_FUN_004236c4)();
  return;
}



// ==== memcmp @ 00413480 size=4

void memcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041348c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236c8)();
  return;
}



// ==== sscanf @ 00413490 size=16

void sscanf(void)

{
  (*(code *)PTR_FUN_004236cc)();
  return;
}



// ==== fread @ 004134a0 size=4

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x004134ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236d0)();
  return;
}



// ==== gettimeofday @ 004134b0 size=16

void gettimeofday(void)

{
  (*(code *)PTR_FUN_004236d4)();
  return;
}



// ==== fopen @ 004134c0 size=4

void fopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x004134cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236d8)();
  return;
}



// ==== localtime @ 004134d0 size=16

void localtime(void)

{
  (*(code *)PTR_FUN_004236dc)();
  return;
}



// ==== memset @ 004134e0 size=16

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x004134ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236e0)();
  return;
}



// ==== srand @ 004134f0 size=4

void srand(void)

{
                    /* WARNING: Could not recover jumptable at 0x004134fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236e4)();
  return;
}



// ==== fclose @ 00413500 size=16

void fclose(void)

{
  (*(code *)PTR_FUN_004236e8)();
  return;
}



// ==== time @ 00413510 size=16

void time(void)

{
  (*(code *)PTR_FUN_004236ec)();
  return;
}



// ==== strcmp @ 00413520 size=4

void strcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041352c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236f0)();
  return;
}



// ==== sprintf @ 00413530 size=16

void sprintf(void)

{
  (*(code *)PTR_FUN_004236f4)();
  return;
}



// ==== fwrite @ 00413550 size=16

void fwrite(void)

{
  (*(code *)PTR_FUN_004236fc)();
  return;
}



// ==== access @ 00413560 size=16

void access(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041356c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00423700)();
  return;
}



// ==== exit @ 00413570 size=4

void exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041357c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00423704)();
  return;
}



// ==== atoi @ 00413580 size=16

void atoi(void)

{
  (*(code *)PTR_FUN_00423708)();
  return;
}



// ==== fileno @ 00413590 size=4

void fileno(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041359c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_0042370c)();
  return;
}



// ==== strlen @ 004135a0 size=16

void strlen(void)

{
  (*(code *)PTR_FUN_00423710)();
  return;
}



// ==== open @ 004135b0 size=4

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x004135bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00423714)();
  return;
}



// ==== strchr @ 004135c0 size=16

void strchr(void)

{
  (*(code *)PTR_FUN_00423718)();
  return;
}



// ==== close @ 004135e0 size=4

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x004135ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00423720)();
  return;
}



// ==== vfprintf @ 004135f0 size=16

void vfprintf(void)

{
  (*(code *)PTR_FUN_00423724)();
  return;
}



// ==== free @ 00413600 size=4

void free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041360c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00423728)();
  return;
}



