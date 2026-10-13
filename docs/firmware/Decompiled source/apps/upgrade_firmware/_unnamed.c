/* upgrade_firmware — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "upgrade_firmware.h"

// ==== FUN_00400be0 @ 00400be0 size=64

/* WARNING: Removing unreachable block (ram,0x00400c00) */
/* WARNING: Removing unreachable block (ram,0x00400c10) */

void FUN_00400be0(void)

{
  return;
}



// ==== FUN_00400c20 @ 00400c20 size=76

/* WARNING: Removing unreachable block (ram,0x00400c4c) */
/* WARNING: Removing unreachable block (ram,0x00400c5c) */

void FUN_00400c20(void)

{
  return;
}



// ==== FUN_00400c6c @ 00400c6c size=176

/* WARNING: Removing unreachable block (ram,0x00400ccc) */

void FUN_00400c6c(void)

{
  if (DAT_004122d0 == '\0') {
    FUN_00400be0();
    DAT_004122d0 = '\x01';
  }
  return;
}



// ==== FUN_00400d1c @ 00400d1c size=60

/* WARNING: Removing unreachable block (ram,0x00400d38) */

void FUN_00400d1c(void)

{
  FUN_00400c20();
  return;
}



// ==== FUN_00400e30 @ 00400e30 size=108

undefined4 FUN_00400e30(undefined4 param_1)

{
  undefined1 auStack_108 [256];
  
  memset(auStack_108,0,0x100);
  snprintf(auStack_108,0x100,"mv %s %s/%s;sync",param_1,"/tmp/update","firmware_m.bin");
  system(auStack_108);
  return 0;
}



// ==== FUN_00400e9c @ 00400e9c size=108

undefined4 FUN_00400e9c(void)

{
  undefined1 auStack_208 [516];
  
  memset(auStack_208,0,0x200);
  snprintf(auStack_208,0x200,"rm -f /%s/%s;rm -rf %s;mkdir %s;mkdir %s","/tmp/update",
           "firmware_m.bin","/tmp/loadtmp","/tmp/loadtmp","/tmp/update");
  system(auStack_208);
  return 0;
}



// ==== FUN_00400f08 @ 00400f08 size=232

void FUN_00400f08(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  int local_41c;
  undefined1 auStack_418 [1008];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  memset(&local_428,0,0x400);
  local_24 = 0x80;
  local_20 = CONCAT22(1,(short)param_2);
  if (0x1009 < param_2) {
    if (param_2 < 0x100d) {
      local_28 = 2;
      goto LAB_00400f7c;
    }
    if (param_2 - 0x600b < 4) {
      local_28 = 4;
      goto LAB_00400f7c;
    }
  }
  local_28 = 1;
LAB_00400f7c:
  local_428 = local_28;
  local_424 = 0x80;
  local_420 = local_20;
  local_41c = param_4;
  local_1c = param_4;
  memcpy(auStack_418,param_3,param_4);
  FUN_004017dc(param_1,&local_428,param_4 + 0x10);
  return;
}



// ==== FUN_00400ff0 @ 00400ff0 size=576

undefined4 FUN_00400ff0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_458 [512];
  undefined1 auStack_258 [512];
  undefined1 auStack_58 [68];
  
  memset(auStack_58,0,0x40);
  memset(auStack_258,0,0x200);
  memset(auStack_458,0,0x200);
  snprintf(auStack_58,0x40,"%s/%s","/tmp/loadtmp","firmware_m.bin");
  snprintf(auStack_258,0x200,"%s -c 300 -url %shome_r10m -filename %s","/backup/cloudAPI",param_1,
           auStack_58);
  puVar3 = auStack_258;
  FUN_0040134c("upgrade_firmware.c","get_upgrade_file",0x7e,"downloading file(%s)",auStack_258);
  FUN_00401594(auStack_258,auStack_458,0x200,300);
  iVar1 = strstr(auStack_458,"success");
  if (iVar1 == 0) {
    FUN_00400f08(DAT_004122e4,0x600c,0,0);
    FUN_0040134c("upgrade_firmware.c","get_upgrade_file",0x84,"download fail\n",puVar3);
    uVar2 = 0xfffffffe;
  }
  else {
    FUN_00400f08(DAT_004122e4,0x600b,0,0);
    FUN_0040134c("upgrade_firmware.c","get_upgrade_file",0x88,"download success\n",puVar3);
    iVar1 = md5_check_file(auStack_58,param_2);
    if (iVar1 == 0) {
      FUN_00400f08(DAT_004122e4,0x600d,0,0);
      FUN_0040134c("upgrade_firmware.c","get_upgrade_file",0x92,"md5_check_file success\n");
      iVar1 = FUN_00400e30(auStack_58);
      if (iVar1 == 0) {
        FUN_0040134c("upgrade_firmware.c","get_upgrade_file",0x9a,"move_file success\n");
        FUN_0040134c("upgrade_firmware.c","get_upgrade_file",0x9c,"get_upgrade_file ok!\n",
                     auStack_58);
        uVar2 = 0;
      }
      else {
        FUN_0040134c("upgrade_firmware.c","get_upgrade_file",0x97,"move_file fail!\n");
        uVar2 = 0xffffffff;
      }
    }
    else {
      FUN_00400f08(DAT_004122e4,0x600e,0,0);
      FUN_0040134c("upgrade_firmware.c","get_upgrade_file",0x8e,"md5_check_file fail!\n");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// ==== FUN_00401230 @ 00401230 size=284

undefined4 FUN_00401230(int *param_1)

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
    acStack_76[0] = s__tmp_logsock_00401d78[0];
    acStack_76[1] = s__tmp_logsock_00401d78[1];
    acStack_76[2] = s__tmp_logsock_00401d78[2];
    acStack_76[3] = s__tmp_logsock_00401d78[3];
    acStack_72[0] = s__tmp_logsock_00401d78[4];
    acStack_72[1] = s__tmp_logsock_00401d78[5];
    acStack_72[2] = s__tmp_logsock_00401d78[6];
    acStack_72[3] = s__tmp_logsock_00401d78[7];
    local_6e[0] = s__tmp_logsock_00401d78[8];
    local_6e[1] = s__tmp_logsock_00401d78[9];
    local_6e[2] = s__tmp_logsock_00401d78[10];
    local_6e[3] = s__tmp_logsock_00401d78[0xb];
    local_6a = s__tmp_logsock_00401d78[0xc];
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



// ==== FUN_0040134c @ 0040134c size=536

void FUN_0040134c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  if (DAT_004122f8 == (undefined4 *)0x0) {
    iVar1 = FUN_00401230(&DAT_00412310);
    if (iVar1 == 0) {
      DAT_004122f8 = (undefined4 *)&DAT_00412310;
    }
    else if (DAT_004122f8 == (undefined4 *)0x0) goto LAB_0040149c;
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
  iVar1 = sendto(*DAT_004122f8,&local_2828,uVar2 + 4,0x40,DAT_004122f8 + 2,DAT_004122f8[1]);
  if (0 < iVar1) {
    return;
  }
LAB_0040149c:
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



// ==== FUN_00401564 @ 00401564 size=48

void FUN_00401564(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = popen(param_1,&DAT_00401e18);
  if (iVar1 != 0) {
    pclose(iVar1);
    return;
  }
  return;
}



// ==== FUN_00401594 @ 00401594 size=496

int FUN_00401594(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_a8 [32];
  uint local_28 [2];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = popen(param_1,&DAT_00401e18);
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
      FUN_00401564("killall cloudAPI");
      FUN_00401564("killall cloudAPI");
      FUN_00401564("killall cloudAPI");
    }
  }
  return -1;
}



// ==== FUN_00401784 @ 00401784 size=88

int FUN_00401784(int *param_1,undefined4 param_2)

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



// ==== FUN_004017dc @ 004017dc size=44

undefined4 FUN_004017dc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != -1) && (param_3 < 0x201)) {
    uVar1 = mq_send();
    return uVar1;
  }
  return 0xffffffff;
}



// ==== FUN_00401808 @ 00401808 size=244

int FUN_00401808(undefined4 param_1,undefined4 param_2)

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



// ==== FUN_004018fc @ 004018fc size=100

void FUN_004018fc(int *param_1)

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



// ==== FUN_00401960 @ 00401960 size=8

void FUN_00401960(void)

{
  return;
}



// ==== FUN_00401970 @ 00401970 size=72

void FUN_00401970(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00412204;
  pcVar2 = DAT_00412204;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



