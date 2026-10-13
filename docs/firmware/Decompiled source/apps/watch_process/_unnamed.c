/* watch_process — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "watch_process.h"

// ==== FUN_00400f80 @ 00400f80 size=64

/* WARNING: Removing unreachable block (ram,0x00400fa0) */
/* WARNING: Removing unreachable block (ram,0x00400fb0) */

void FUN_00400f80(void)

{
  return;
}



// ==== FUN_00400fc0 @ 00400fc0 size=76

/* WARNING: Removing unreachable block (ram,0x00400fec) */
/* WARNING: Removing unreachable block (ram,0x00400ffc) */

void FUN_00400fc0(void)

{
  return;
}



// ==== FUN_0040100c @ 0040100c size=176

/* WARNING: Removing unreachable block (ram,0x0040106c) */

void FUN_0040100c(void)

{
  if (DAT_00412100 == '\0') {
    FUN_00400f80();
    DAT_00412100 = '\x01';
  }
  return;
}



// ==== FUN_004010bc @ 004010bc size=60

/* WARNING: Removing unreachable block (ram,0x004010d8) */

void FUN_004010bc(void)

{
  FUN_00400fc0();
  return;
}



// ==== FUN_00401100 @ 00401100 size=100

int FUN_00401100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strstr(param_3);
  if (iVar1 != 0) {
    iVar2 = strlen(param_2);
    sscanf(iVar1 + iVar2,"[%[^]]",param_1);
  }
  return iVar1;
}



// ==== FUN_00401164 @ 00401164 size=28

void FUN_00401164(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memset(param_1,param_3,param_4);
  return;
}



// ==== FUN_00401180 @ 00401180 size=284

undefined4 FUN_00401180(int *param_1)

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
    acStack_76[0] = s__tmp_logsock_00401b18[0];
    acStack_76[1] = s__tmp_logsock_00401b18[1];
    acStack_76[2] = s__tmp_logsock_00401b18[2];
    acStack_76[3] = s__tmp_logsock_00401b18[3];
    acStack_72[0] = s__tmp_logsock_00401b18[4];
    acStack_72[1] = s__tmp_logsock_00401b18[5];
    acStack_72[2] = s__tmp_logsock_00401b18[6];
    acStack_72[3] = s__tmp_logsock_00401b18[7];
    local_6e[0] = s__tmp_logsock_00401b18[8];
    local_6e[1] = s__tmp_logsock_00401b18[9];
    local_6e[2] = s__tmp_logsock_00401b18[10];
    local_6e[3] = s__tmp_logsock_00401b18[0xb];
    local_6a = s__tmp_logsock_00401b18[0xc];
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



// ==== FUN_0040129c @ 0040129c size=536

void FUN_0040129c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  if (DAT_00412128 == (undefined4 *)0x0) {
    iVar1 = FUN_00401180(&DAT_00412b98);
    if (iVar1 == 0) {
      DAT_00412128 = (undefined4 *)&DAT_00412b98;
    }
    else if (DAT_00412128 == (undefined4 *)0x0) goto LAB_004013ec;
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
  iVar1 = sendto(*DAT_00412128,&local_2828,uVar2 + 4,0x40,DAT_00412128 + 2,DAT_00412128[1]);
  if (0 < iVar1) {
    return;
  }
LAB_004013ec:
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



// ==== FUN_004014b4 @ 004014b4 size=48

void FUN_004014b4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = popen(param_1,&DAT_004019f4);
  if (iVar1 != 0) {
    pclose(iVar1);
    return;
  }
  return;
}



// ==== FUN_004014e4 @ 004014e4 size=496

int FUN_004014e4(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_a8 [32];
  uint local_28 [2];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = popen(param_1,&DAT_004019f4);
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
      FUN_004014b4("killall cloudAPI");
      FUN_004014b4("killall cloudAPI");
      FUN_004014b4("killall cloudAPI");
    }
  }
  return -1;
}



// ==== FUN_004016d4 @ 004016d4 size=96

undefined4 FUN_004016d4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = ftell();
  fseek(param_1,0,2);
  uVar2 = ftell(param_1);
  fseek(param_1,uVar1,0);
  return uVar2;
}



// ==== FUN_00401734 @ 00401734 size=244

int FUN_00401734(undefined4 param_1,undefined4 param_2)

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



// ==== FUN_00401828 @ 00401828 size=104

void FUN_00401828(uint param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1 / 1000;
  local_c = (param_1 % 1000) * 1000;
  select(0,0,0,0,&local_10);
  return;
}



// ==== FUN_00401890 @ 00401890 size=72

void FUN_00401890(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00412014;
  pcVar2 = DAT_00412014;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



