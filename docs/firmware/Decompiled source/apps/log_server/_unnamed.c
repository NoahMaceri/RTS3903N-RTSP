/* log_server — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "log_server.h"

// ==== FUN_00400ca0 @ 00400ca0 size=64

/* WARNING: Removing unreachable block (ram,0x00400cc0) */
/* WARNING: Removing unreachable block (ram,0x00400cd0) */

void FUN_00400ca0(void)

{
  return;
}



// ==== FUN_00400ce0 @ 00400ce0 size=76

/* WARNING: Removing unreachable block (ram,0x00400d0c) */
/* WARNING: Removing unreachable block (ram,0x00400d1c) */

void FUN_00400ce0(void)

{
  return;
}



// ==== FUN_00400d2c @ 00400d2c size=176

/* WARNING: Removing unreachable block (ram,0x00400d8c) */

void FUN_00400d2c(void)

{
  if (DAT_00411920 == '\0') {
    FUN_00400ca0();
    DAT_00411920 = '\x01';
  }
  return;
}



// ==== FUN_00400ddc @ 00400ddc size=60

/* WARNING: Removing unreachable block (ram,0x00400df8) */

void FUN_00400ddc(void)

{
  FUN_00400ce0();
  return;
}



// ==== FUN_00400e20 @ 00400e20 size=400

undefined4 FUN_00400e20(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_res4 [3];
  undefined1 auStack_220 [516];
  
  local_res4[0] = param_2;
  memset(auStack_220,0,0x200);
  if (__bss_start == 0) {
LAB_00400e98:
    piVar3 = &DAT_00411930;
    iVar4 = 0;
    snprintf(auStack_220,0x200,"ps | grep -w %d | grep -v grep | awk \'{print $5}\'",param_1);
    FUN_00400fe0(auStack_220,local_res4[0],0x20,0x3c);
    FUN_004011d0(local_res4);
    uVar1 = local_res4[0];
    iVar5 = __bss_start;
    if (__bss_start != 0) {
      do {
        iVar4 = iVar4 + 1;
        iVar2 = strncmp(piVar3 + 1,uVar1,0x20);
        if (iVar2 == 0) {
          *piVar3 = param_1;
          return 0;
        }
        piVar3 = piVar3 + 9;
      } while (iVar4 != iVar5);
    }
    strncpy(piVar3 + 1,uVar1,0x20);
    *piVar3 = param_1;
    __bss_start = iVar5 + 1;
    return 0;
  }
  iVar5 = 0;
  if (DAT_00411930 == param_1) {
    piVar3 = &DAT_00411930;
  }
  else {
    piVar3 = &DAT_00411930;
    do {
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 9;
      if (iVar5 == __bss_start) goto LAB_00400e98;
    } while (*piVar3 != param_1);
  }
  strncpy(local_res4[0],piVar3 + 1,0x20);
  return 0;
}



// ==== FUN_00400fb0 @ 00400fb0 size=48

void FUN_00400fb0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = popen(param_1,&DAT_0040147c);
  if (iVar1 != 0) {
    pclose(iVar1);
    return;
  }
  return;
}



// ==== FUN_00400fe0 @ 00400fe0 size=496

int FUN_00400fe0(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_a8 [32];
  uint local_28 [2];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = popen(param_1,&DAT_0040147c);
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
      FUN_00400fb0("killall cloudAPI");
      FUN_00400fb0("killall cloudAPI");
      FUN_00400fb0("killall cloudAPI");
    }
  }
  return -1;
}



// ==== FUN_004011d0 @ 004011d0 size=100

void FUN_004011d0(int *param_1)

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



// ==== FUN_00401240 @ 00401240 size=72

void FUN_00401240(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00411864;
  pcVar2 = DAT_00411864;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



