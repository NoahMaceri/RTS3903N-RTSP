/* reboot_by_watchdog — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "reboot_by_watchdog.h"

// ==== FUN_00400a60 @ 00400a60 size=64

/* WARNING: Removing unreachable block (ram,0x00400a80) */
/* WARNING: Removing unreachable block (ram,0x00400a90) */

void FUN_00400a60(void)

{
  return;
}



// ==== FUN_00400aa0 @ 00400aa0 size=76

/* WARNING: Removing unreachable block (ram,0x00400acc) */
/* WARNING: Removing unreachable block (ram,0x00400adc) */

void FUN_00400aa0(void)

{
  return;
}



// ==== FUN_00400aec @ 00400aec size=176

/* WARNING: Removing unreachable block (ram,0x00400b4c) */

void FUN_00400aec(void)

{
  if (DAT_00411830 == '\0') {
    FUN_00400a60();
    DAT_00411830 = '\x01';
  }
  return;
}



// ==== FUN_00400b9c @ 00400b9c size=60

/* WARNING: Removing unreachable block (ram,0x00400bb8) */

void FUN_00400b9c(void)

{
  FUN_00400aa0();
  return;
}



// ==== FUN_00400be0 @ 00400be0 size=284

undefined4 FUN_00400be0(int *param_1)

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
    acStack_76[0] = s__tmp_logsock_00401338[0];
    acStack_76[1] = s__tmp_logsock_00401338[1];
    acStack_76[2] = s__tmp_logsock_00401338[2];
    acStack_76[3] = s__tmp_logsock_00401338[3];
    acStack_72[0] = s__tmp_logsock_00401338[4];
    acStack_72[1] = s__tmp_logsock_00401338[5];
    acStack_72[2] = s__tmp_logsock_00401338[6];
    acStack_72[3] = s__tmp_logsock_00401338[7];
    local_6e[0] = s__tmp_logsock_00401338[8];
    local_6e[1] = s__tmp_logsock_00401338[9];
    local_6e[2] = s__tmp_logsock_00401338[10];
    local_6e[3] = s__tmp_logsock_00401338[0xb];
    local_6a = s__tmp_logsock_00401338[0xc];
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



// ==== FUN_00400cfc @ 00400cfc size=536

void FUN_00400cfc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  if (DAT_00411848 == (undefined4 *)0x0) {
    iVar1 = FUN_00400be0(&DAT_00411860);
    if (iVar1 == 0) {
      DAT_00411848 = (undefined4 *)&DAT_00411860;
    }
    else if (DAT_00411848 == (undefined4 *)0x0) goto LAB_00400e4c;
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
  iVar1 = sendto(*DAT_00411848,&local_2828,uVar2 + 4,0x40,DAT_00411848 + 2,DAT_00411848[1]);
  if (0 < iVar1) {
    return;
  }
LAB_00400e4c:
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



// ==== FUN_00400f14 @ 00400f14 size=48

void FUN_00400f14(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = popen(param_1,&DAT_004013d8);
  if (iVar1 != 0) {
    pclose(iVar1);
    return;
  }
  return;
}



// ==== FUN_00400f44 @ 00400f44 size=496

int FUN_00400f44(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_a8 [32];
  uint local_28 [2];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = popen(param_1,&DAT_004013d8);
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
      FUN_00400f14("killall cloudAPI");
      FUN_00400f14("killall cloudAPI");
      FUN_00400f14("killall cloudAPI");
    }
  }
  return -1;
}



// ==== FUN_00401134 @ 00401134 size=104

void FUN_00401134(uint param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1 / 1000;
  local_c = (param_1 % 1000) * 1000;
  select(0,0,0,0,&local_10);
  return;
}



// ==== FUN_004011a0 @ 004011a0 size=72

void FUN_004011a0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00411774;
  pcVar2 = DAT_00411774;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



