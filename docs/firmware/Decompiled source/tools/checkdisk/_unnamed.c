/* checkdisk — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "checkdisk.h"

// ==== FUN_00400fc0 @ 00400fc0 size=64

/* WARNING: Removing unreachable block (ram,0x00400fe0) */
/* WARNING: Removing unreachable block (ram,0x00400ff0) */

void FUN_00400fc0(void)

{
  return;
}



// ==== FUN_00401000 @ 00401000 size=76

/* WARNING: Removing unreachable block (ram,0x0040102c) */
/* WARNING: Removing unreachable block (ram,0x0040103c) */

void FUN_00401000(void)

{
  return;
}



// ==== FUN_0040104c @ 0040104c size=176

/* WARNING: Removing unreachable block (ram,0x004010ac) */

void FUN_0040104c(void)

{
  if (DAT_00413190 == '\0') {
    FUN_00400fc0();
    DAT_00413190 = '\x01';
  }
  return;
}



// ==== FUN_004010fc @ 004010fc size=60

/* WARNING: Removing unreachable block (ram,0x00401118) */

void FUN_004010fc(void)

{
  FUN_00401000();
  return;
}



// ==== FUN_00401140 @ 00401140 size=152

int FUN_00401140(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_10 [2];
  
  iVar1 = open("/dev/mmcblk0p1",2);
  local_10[0] = 0;
  if (iVar1 == -1) {
    return -1;
  }
  iVar2 = ioctl(iVar1,0x2000125e,local_10);
  if ((iVar2 == 0) && (local_10[0] != 0)) {
    close(iVar1);
    puVar3 = (undefined4 *)__errno_location();
    *puVar3 = 0x1e;
    iVar1 = -1;
  }
  return iVar1;
}



// ==== FUN_004011d8 @ 004011d8 size=188

undefined4 FUN_004011d8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_19010 [102400];
  
  memset(auStack_19010,0,0x19000);
  iVar1 = FUN_00402068("cat /sys/block/mmcblk0/device/cid",auStack_19010,0x19000,10);
  if (0 < iVar1) {
    strncpy(param_1,auStack_19010,param_2);
    return 10000;
  }
  return 0x271c;
}



// ==== FUN_00401d04 @ 00401d04 size=284

undefined4 FUN_00401d04(int *param_1)

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
    acStack_76[0] = s__tmp_logsock_00402b98[0];
    acStack_76[1] = s__tmp_logsock_00402b98[1];
    acStack_76[2] = s__tmp_logsock_00402b98[2];
    acStack_76[3] = s__tmp_logsock_00402b98[3];
    acStack_72[0] = s__tmp_logsock_00402b98[4];
    acStack_72[1] = s__tmp_logsock_00402b98[5];
    acStack_72[2] = s__tmp_logsock_00402b98[6];
    acStack_72[3] = s__tmp_logsock_00402b98[7];
    local_6e[0] = s__tmp_logsock_00402b98[8];
    local_6e[1] = s__tmp_logsock_00402b98[9];
    local_6e[2] = s__tmp_logsock_00402b98[10];
    local_6e[3] = s__tmp_logsock_00402b98[0xb];
    local_6a = s__tmp_logsock_00402b98[0xc];
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



// ==== FUN_00401e20 @ 00401e20 size=536

void FUN_00401e20(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  if (DAT_004131b8 == (undefined4 *)0x0) {
    iVar1 = FUN_00401d04(&DAT_004131d0);
    if (iVar1 == 0) {
      DAT_004131b8 = (undefined4 *)&DAT_004131d0;
    }
    else if (DAT_004131b8 == (undefined4 *)0x0) goto LAB_00401f70;
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
  iVar1 = sendto(*DAT_004131b8,&local_2828,uVar2 + 4,0x40,DAT_004131b8 + 2,DAT_004131b8[1]);
  if (0 < iVar1) {
    return;
  }
LAB_00401f70:
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



// ==== FUN_00402038 @ 00402038 size=48

void FUN_00402038(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = popen(param_1,&DAT_00402c34);
  if (iVar1 != 0) {
    pclose(iVar1);
    return;
  }
  return;
}



// ==== FUN_00402068 @ 00402068 size=496

int FUN_00402068(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_a8 [32];
  uint local_28 [2];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = popen(param_1,&DAT_00402c34);
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
      FUN_00402038("killall cloudAPI");
      FUN_00402038("killall cloudAPI");
      FUN_00402038("killall cloudAPI");
    }
  }
  return -1;
}



// ==== FUN_00402258 @ 00402258 size=168

int FUN_00402258(undefined4 param_1,int param_2)

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



// ==== FUN_00402300 @ 00402300 size=104

void FUN_00402300(uint param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1 / 1000;
  local_c = (param_1 % 1000) * 1000;
  select(0,0,0,0,&local_10);
  return;
}



// ==== FUN_00402370 @ 00402370 size=72

void FUN_00402370(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_004130a4;
  pcVar2 = DAT_004130a4;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



