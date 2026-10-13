/* arp_test — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "arp_test.h"

// ==== FUN_00400c20 @ 00400c20 size=64

/* WARNING: Removing unreachable block (ram,0x00400c40) */
/* WARNING: Removing unreachable block (ram,0x00400c50) */

void FUN_00400c20(void)

{
  return;
}



// ==== FUN_00400c60 @ 00400c60 size=76

/* WARNING: Removing unreachable block (ram,0x00400c8c) */
/* WARNING: Removing unreachable block (ram,0x00400c9c) */

void FUN_00400c60(void)

{
  return;
}



// ==== FUN_00400cac @ 00400cac size=176

/* WARNING: Removing unreachable block (ram,0x00400d0c) */

void FUN_00400cac(void)

{
  if (DAT_004120f0 == '\0') {
    FUN_00400c20();
    DAT_004120f0 = '\x01';
  }
  return;
}



// ==== FUN_00400d5c @ 00400d5c size=60

/* WARNING: Removing unreachable block (ram,0x00400d78) */

void FUN_00400d5c(void)

{
  FUN_00400c60();
  return;
}



// ==== FUN_00400da0 @ 00400da0 size=228

void FUN_00400da0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 local_4;
  
  local_4 = CONCAT11(DAT_004019e5,DAT_004019e4);
  DAT_00412180 = DAT_004019e0;
  DAT_00412184 = (uint)local_4;
  DAT_00412184 = DAT_00412184 | *param_1 << 0x10;
  DAT_0041218c = 0x608;
  DAT_00412188 = CONCAT13(*(undefined1 *)((int)param_1 + 5),
                          CONCAT12((char)param_1[1],(short)((uint)*param_1 >> 0x10)));
  DAT_00412190 = 8;
  DAT_00412192 = 6;
  DAT_0041218e = 0x100;
  DAT_00412193 = 4;
  DAT_00412194 = *param_1 << 0x10 | 0x100;
  DAT_0041219c = param_2;
  DAT_004121a1 = 0;
  DAT_004121a2 = 0;
  DAT_004121a3 = 0;
  DAT_004121a4 = 0;
  DAT_004121a5 = 0;
  DAT_00412198 = CONCAT13(*(undefined1 *)((int)param_1 + 5),
                          CONCAT12((char)param_1[1],(short)((uint)*param_1 >> 0x10)));
  DAT_004121a0 = 0;
  DAT_004121a6 = param_3;
  return;
}



// ==== FUN_00400fb8 @ 00400fb8 size=436

undefined4 FUN_00400fb8(void)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint local_a8 [32];
  uint local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (_fdata == 0xffffffff) {
    _fdata = socket(0x11,10,0x608);
    if ((int)_fdata < 0) {
      perror("arp_recv socket");
      return 0xffffffff;
    }
    iVar1 = fcntl(_fdata,4,0x80);
    if (iVar1 == -1) {
      perror("arp_send fcntl");
      close(_fdata);
      _fdata = 0xffffffff;
      return 0xffffffff;
    }
  }
  puVar3 = local_a8;
  local_28 = 0x6c770000;
  local_20 = 0;
  local_24 = 0x6e61;
  local_1c = 0;
  local_22 = 0x30;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (&local_28 != puVar3);
  local_a8[_fdata >> 5] = local_a8[_fdata >> 5] | 1 << (_fdata & 0x1f);
  FUN_00401360(&local_18,8,0,8);
  local_18 = 0;
  local_14 = 100000;
  iVar1 = select(_fdata + 1,local_a8,0,0,&local_18);
  if ((0 < iVar1) && (((int)local_a8[_fdata >> 5] >> (_fdata & 0x1f) & 1U) != 0)) {
    uVar2 = recv(_fdata,&DAT_00412100,0x80,0);
    return uVar2;
  }
  return 0;
}



// ==== FUN_0040116c @ 0040116c size=300

undefined4 FUN_0040116c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = socket(2,1,0);
  if (iVar1 < -1) {
    perror("socket error");
  }
  else {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    uStack_26 = 0;
    local_24 = 0;
    uStack_22 = 0;
    uStack_21 = 0;
    local_20 = 0;
    local_1c = 0;
    local_38 = 0x6e616c77;
    local_34 = 0x30;
    iVar2 = ioctl(iVar1,0x8927,&local_38);
    if (iVar2 == 0) {
      *param_1 = CONCAT22(local_24,uStack_26);
      *(undefined1 *)(param_1 + 1) = uStack_22;
      *(undefined1 *)((int)param_1 + 5) = uStack_21;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      uStack_26 = 0;
      local_24 = 0;
      uStack_22 = 0;
      uStack_21 = 0;
      local_20 = 0;
      local_1c = 0;
      local_38 = 0x6e616c77;
      local_34 = 0x30;
      iVar1 = ioctl(iVar1,0x8915,&local_38);
      if (iVar1 == 0) {
        *param_2 = CONCAT13(uStack_21,CONCAT12(uStack_22,local_24));
        return 0;
      }
    }
    perror("ioctl error");
  }
  return 0xffffffff;
}



// ==== FUN_00401360 @ 00401360 size=28

void FUN_00401360(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memset(param_1,param_3,param_4);
  return;
}



// ==== FUN_0040137c @ 0040137c size=284

undefined4 FUN_0040137c(int *param_1)

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
    acStack_76[0] = s__tmp_logsock_00401a28[0];
    acStack_76[1] = s__tmp_logsock_00401a28[1];
    acStack_76[2] = s__tmp_logsock_00401a28[2];
    acStack_76[3] = s__tmp_logsock_00401a28[3];
    acStack_72[0] = s__tmp_logsock_00401a28[4];
    acStack_72[1] = s__tmp_logsock_00401a28[5];
    acStack_72[2] = s__tmp_logsock_00401a28[6];
    acStack_72[3] = s__tmp_logsock_00401a28[7];
    local_6e[0] = s__tmp_logsock_00401a28[8];
    local_6e[1] = s__tmp_logsock_00401a28[9];
    local_6e[2] = s__tmp_logsock_00401a28[10];
    local_6e[3] = s__tmp_logsock_00401a28[0xb];
    local_6a = s__tmp_logsock_00401a28[0xc];
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



// ==== FUN_00401498 @ 00401498 size=536

void FUN_00401498(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  if (DAT_00412208 == (undefined4 *)0x0) {
    iVar1 = FUN_0040137c(&DAT_00412220);
    if (iVar1 == 0) {
      DAT_00412208 = (undefined4 *)&DAT_00412220;
    }
    else if (DAT_00412208 == (undefined4 *)0x0) goto LAB_004015e8;
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
  iVar1 = sendto(*DAT_00412208,&local_2828,uVar2 + 4,0x40,DAT_00412208 + 2,DAT_00412208[1]);
  if (0 < iVar1) {
    return;
  }
LAB_004015e8:
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



// ==== FUN_004016b0 @ 004016b0 size=88

int FUN_004016b0(int *param_1,undefined4 param_2)

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



// ==== FUN_00401708 @ 00401708 size=44

undefined4 FUN_00401708(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != -1) && (param_3 < 0x201)) {
    uVar1 = mq_send();
    return uVar1;
  }
  return 0xffffffff;
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



// ==== FUN_00401830 @ 00401830 size=72

void FUN_00401830(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00412000;
  pcVar2 = DAT_00412000;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



