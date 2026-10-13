/* crypt_file — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "crypt_file.h"

// ==== FUN_00400940 @ 00400940 size=12

void FUN_00400940(void)

{
  FUN_00404410();
  return;
}



// ==== FUN_00400950 @ 00400950 size=12

void FUN_00400950(void)

{
  FUN_00404680();
  return;
}



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
  if (DAT_00418100 == '\0') {
    FUN_00400c20();
    DAT_00418100 = '\x01';
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



// ==== FUN_00400da0 @ 00400da0 size=264

undefined4 FUN_00400da0(int param_1,uint param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_5 == 0) {
      return 0xffffffff;
    }
    if (param_3 != 0) {
      iVar1 = FUN_00400940(&DAT_00418140,param_5,0x10,0,0);
      if (-1 < iVar1) {
        if ((param_2 & 0xf) != 0) {
          if ((int)param_2 < 0) {
            param_2 = param_2 + 0xf;
          }
          param_2 = (((int)param_2 >> 4) + 1) * 0x10;
        }
        iVar1 = param_3;
        if ((int)param_2 < 1) {
          iVar1 = 0;
        }
        else {
          do {
            iVar2 = iVar1 + 0x10;
            _ftext(&DAT_00418140,iVar1,param_1);
            iVar1 = iVar2;
            param_1 = param_1 + 0x10;
          } while (iVar2 - param_3 < (int)param_2);
          iVar1 = ((param_2 - 1 >> 4) + 1) * 0x10;
        }
        *param_4 = iVar1;
        return 0;
      }
    }
  }
  return 0xffffffff;
}



// ==== FUN_00400ea8 @ 00400ea8 size=236

undefined4 FUN_00400ea8(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    if (param_5 == 0) {
      return 0xffffffff;
    }
    if (param_3 != 0) {
      iVar1 = FUN_00400940(&DAT_00418140,param_5,0x10,0,1);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
      if (param_2 < 1) {
        iVar1 = 0;
      }
      else {
        uVar3 = param_2 - 1U >> 4;
        iVar1 = param_3;
        do {
          iVar2 = iVar1 + 0x10;
          FUN_00400950(&DAT_00418140,iVar1,param_1);
          iVar1 = iVar2;
          param_1 = param_1 + 0x10;
        } while (iVar2 != param_3 + uVar3 * 0x10 + 0x10);
        iVar1 = (uVar3 + 1) * 0x10;
      }
      *param_4 = iVar1;
      return 0;
    }
  }
  return 0xffffffff;
}



// ==== FUN_00401444 @ 00401444 size=284

undefined4 FUN_00401444(int *param_1)

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
    acStack_76[0] = s__tmp_logsock_004052a8[0];
    acStack_76[1] = s__tmp_logsock_004052a8[1];
    acStack_76[2] = s__tmp_logsock_004052a8[2];
    acStack_76[3] = s__tmp_logsock_004052a8[3];
    acStack_72[0] = s__tmp_logsock_004052a8[4];
    acStack_72[1] = s__tmp_logsock_004052a8[5];
    acStack_72[2] = s__tmp_logsock_004052a8[6];
    acStack_72[3] = s__tmp_logsock_004052a8[7];
    local_6e[0] = s__tmp_logsock_004052a8[8];
    local_6e[1] = s__tmp_logsock_004052a8[9];
    local_6e[2] = s__tmp_logsock_004052a8[10];
    local_6e[3] = s__tmp_logsock_004052a8[0xb];
    local_6a = s__tmp_logsock_004052a8[0xc];
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



// ==== FUN_00401560 @ 00401560 size=536

void FUN_00401560(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  if (DAT_00418118 == (undefined4 *)0x0) {
    iVar1 = FUN_00401444(&DAT_00418254);
    if (iVar1 == 0) {
      DAT_00418118 = (undefined4 *)&DAT_00418254;
    }
    else if (DAT_00418118 == (undefined4 *)0x0) goto LAB_004016b0;
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
  iVar1 = sendto(*DAT_00418118,&local_2828,uVar2 + 4,0x40,DAT_00418118 + 2,DAT_00418118[1]);
  if (0 < iVar1) {
    return;
  }
LAB_004016b0:
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



// ==== FUN_00401780 @ 00401780 size=76

uint FUN_00401780(uint param_1,uint param_2)

{
  return param_1 >> (0x20 - param_2 & 0x1f) | param_1 << (param_2 & 0x1f);
}



// ==== FUN_004017cc @ 004017cc size=148

undefined4 FUN_004017cc(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x1780))
                    ((param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8,0x10);
  return uVar1;
}



// ==== FUN_00401860 @ 00401860 size=204

void FUN_00401860(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_18;
  
  for (local_18 = 0; local_18 < param_3 >> 2; local_18 = local_18 + 1) {
    uVar1 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(*(undefined4 *)(param_2 + local_18 * 4));
    *(undefined4 *)(param_1 + local_18 * 4) = uVar1;
  }
  return;
}



// ==== FUN_0040192c @ 0040192c size=152

void FUN_0040192c(int param_1,int param_2,uint param_3)

{
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
    *(uint *)(param_1 + local_10 * 4) =
         *(uint *)(param_1 + local_10 * 4) ^ *(uint *)(param_2 + local_10 * 4);
  }
  return;
}



// ==== FUN_004019c4 @ 004019c4 size=268

void FUN_004019c4(uint param_1,uint param_2,uint param_3)

{
  uint local_18;
  
  if (((param_1 | param_2 | param_3) & 3) == 0) {
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x192c))(param_1,param_2,param_3 >> 2);
  }
  else {
    for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
      *(byte *)(param_1 + local_18) = *(byte *)(param_1 + local_18) ^ *(byte *)(param_2 + local_18);
    }
  }
  return;
}



// ==== FUN_00401ad0 @ 00401ad0 size=3272

void FUN_00401ad0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_30;
  uint *local_2c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_30 = param_1[0x3c] >> 1;
  if ((local_30 < 8) && (local_30 != 0)) {
    (*DAT_004180dc)(&local_18,param_2,4);
    (*DAT_004180dc)(&local_14,param_2 + 4,4);
    (*DAT_004180dc)(&local_10,param_2 + 8,4);
    (*DAT_004180dc)(&local_c,param_2 + 0xc,4);
    local_18 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_18);
    local_14 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_14);
    local_10 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_10);
    local_c = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_c);
    local_18 = *param_1 ^ local_18;
    local_14 = param_1[1] ^ local_14;
    local_10 = param_1[2] ^ local_10;
    local_c = param_1[3] ^ local_c;
    local_2c = param_1;
    while( true ) {
      uVar1 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (local_18 >> 0x18) * 4 + 0x5558) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_14 >> 0x10 & 0xff) + 0x100) * 4 + 0x5558)
              ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_10 >> 8 & 0xff) + 0x200) * 4 + 0x5558) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_c & 0xff) + 0x300) * 4 + 0x5558) ^
              local_2c[4];
      uVar2 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (local_14 >> 0x18) * 4 + 0x5558) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_10 >> 0x10 & 0xff) + 0x100) * 4 + 0x5558)
              ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_c >> 8 & 0xff) + 0x200) * 4 + 0x5558) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_18 & 0xff) + 0x300) * 4 + 0x5558) ^
              local_2c[5];
      uVar3 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (local_10 >> 0x18) * 4 + 0x5558) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_c >> 0x10 & 0xff) + 0x100) * 4 + 0x5558) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_18 >> 8 & 0xff) + 0x200) * 4 + 0x5558) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_14 & 0xff) + 0x300) * 4 + 0x5558) ^
              local_2c[6];
      uVar4 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (local_c >> 0x18) * 4 + 0x5558) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_18 >> 0x10 & 0xff) + 0x100) * 4 + 0x5558)
              ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_14 >> 8 & 0xff) + 0x200) * 4 + 0x5558) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_10 & 0xff) + 0x300) * 4 + 0x5558) ^
              local_2c[7];
      puVar5 = local_2c + 8;
      local_30 = local_30 - 1;
      if (local_30 == 0) break;
      local_18 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (uVar1 >> 0x18) * 4 + 0x5558) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4 + 0x5558)
                 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4 + 0x5558) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 & 0xff) + 0x300) * 4 + 0x5558) ^
                 *puVar5;
      local_14 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (uVar2 >> 0x18) * 4 + 0x5558) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4 + 0x5558)
                 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4 + 0x5558) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 & 0xff) + 0x300) * 4 + 0x5558) ^
                 local_2c[9];
      local_10 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (uVar3 >> 0x18) * 4 + 0x5558) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4 + 0x5558)
                 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 >> 8 & 0xff) + 0x200) * 4 + 0x5558) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 & 0xff) + 0x300) * 4 + 0x5558) ^
                 local_2c[10];
      local_c = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (uVar4 >> 0x18) * 4 + 0x5558) ^
                *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 >> 0x10 & 0xff) + 0x100) * 4 + 0x5558) ^
                *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4 + 0x5558) ^
                *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 & 0xff) + 0x300) * 4 + 0x5558) ^
                local_2c[0xb];
      local_2c = puVar5;
    }
    local_18 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 >> 0x18) + 0x400) * 4 + 0x5558) &
               0xff000000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) &
               0xff0000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 >> 8 & 0xff) + 0x400) * 4 + 0x5558) &
               0xff00 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 & 0xff) + 0x400) * 4 + 0x5558) &
                        0xff ^ *puVar5;
    local_14 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 0x18) + 0x400) * 4 + 0x5558) &
               0xff000000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) &
               0xff0000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 >> 8 & 0xff) + 0x400) * 4 + 0x5558) &
               0xff00 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 & 0xff) + 0x400) * 4 + 0x5558) &
                        0xff ^ local_2c[9];
    local_10 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 >> 0x18) + 0x400) * 4 + 0x5558) &
               0xff000000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) &
               0xff0000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 >> 8 & 0xff) + 0x400) * 4 + 0x5558) &
               0xff00 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 & 0xff) + 0x400) * 4 + 0x5558) &
                        0xff ^ local_2c[10];
    local_c = *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 >> 0x18) + 0x400) * 4 + 0x5558) &
              0xff000000 ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) &
              0xff0000 ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + 0x5558) &
              0xff00 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 & 0xff) + 0x400) * 4 + 0x5558) &
                       0xff ^ local_2c[0xb];
    local_18 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_18);
    local_14 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_14);
    local_10 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_10);
    local_c = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_c);
    (*DAT_004180dc)(param_3,&local_18,4);
    (*DAT_004180dc)(param_3 + 4,&local_14,4);
    (*DAT_004180dc)(param_3 + 8,&local_10,4);
    (*DAT_004180dc)(param_3 + 0xc,&local_c,4);
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004180a8)(PTR_Elf32_Ehdr_004180a4 + 0x7d58);
  }
  return;
}



// ==== FUN_00402798 @ 00402798 size=3272

void FUN_00402798(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_30;
  uint *local_2c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_30 = param_1[0x3c] >> 1;
  if ((local_30 < 8) && (local_30 != 0)) {
    (*DAT_004180dc)(&local_18,param_2,4);
    (*DAT_004180dc)(&local_14,param_2 + 4,4);
    (*DAT_004180dc)(&local_10,param_2 + 8,4);
    (*DAT_004180dc)(&local_c,param_2 + 0xc,4);
    local_18 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_18);
    local_14 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_14);
    local_10 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_10);
    local_c = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_c);
    local_18 = *param_1 ^ local_18;
    local_14 = param_1[1] ^ local_14;
    local_10 = param_1[2] ^ local_10;
    local_c = param_1[3] ^ local_c;
    local_2c = param_1;
    while( true ) {
      uVar1 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (local_18 >> 0x18) * 4 + 0x6958) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_c >> 0x10 & 0xff) + 0x100) * 4 + 0x6958) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_10 >> 8 & 0xff) + 0x200) * 4 + 0x6958) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_14 & 0xff) + 0x300) * 4 + 0x6958) ^
              local_2c[4];
      uVar2 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (local_14 >> 0x18) * 4 + 0x6958) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_18 >> 0x10 & 0xff) + 0x100) * 4 + 0x6958)
              ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_c >> 8 & 0xff) + 0x200) * 4 + 0x6958) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_10 & 0xff) + 0x300) * 4 + 0x6958) ^
              local_2c[5];
      uVar3 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (local_10 >> 0x18) * 4 + 0x6958) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_14 >> 0x10 & 0xff) + 0x100) * 4 + 0x6958)
              ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_18 >> 8 & 0xff) + 0x200) * 4 + 0x6958) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_c & 0xff) + 0x300) * 4 + 0x6958) ^
              local_2c[6];
      uVar4 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (local_c >> 0x18) * 4 + 0x6958) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_10 >> 0x10 & 0xff) + 0x100) * 4 + 0x6958)
              ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_14 >> 8 & 0xff) + 0x200) * 4 + 0x6958) ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((local_18 & 0xff) + 0x300) * 4 + 0x6958) ^
              local_2c[7];
      puVar5 = local_2c + 8;
      local_30 = local_30 - 1;
      if (local_30 == 0) break;
      local_18 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (uVar1 >> 0x18) * 4 + 0x6958) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4 + 0x6958)
                 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4 + 0x6958) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 & 0xff) + 0x300) * 4 + 0x6958) ^
                 *puVar5;
      local_14 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (uVar2 >> 0x18) * 4 + 0x6958) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 >> 0x10 & 0xff) + 0x100) * 4 + 0x6958)
                 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4 + 0x6958) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 & 0xff) + 0x300) * 4 + 0x6958) ^
                 local_2c[9];
      local_10 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (uVar3 >> 0x18) * 4 + 0x6958) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4 + 0x6958)
                 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 >> 8 & 0xff) + 0x200) * 4 + 0x6958) ^
                 *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 & 0xff) + 0x300) * 4 + 0x6958) ^
                 local_2c[10];
      local_c = *(uint *)(PTR_Elf32_Ehdr_004180a4 + (uVar4 >> 0x18) * 4 + 0x6958) ^
                *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4 + 0x6958) ^
                *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4 + 0x6958) ^
                *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 & 0xff) + 0x300) * 4 + 0x6958) ^
                local_2c[0xb];
      local_2c = puVar5;
    }
    local_18 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 >> 0x18) + 0x400) * 4 + 0x6958) &
               0xff000000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 >> 0x10 & 0xff) + 0x400) * 4 + 0x6958) &
               0xff0000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 >> 8 & 0xff) + 0x400) * 4 + 0x6958) &
               0xff00 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 & 0xff) + 0x400) * 4 + 0x6958) &
                        0xff ^ *puVar5;
    local_14 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 0x18) + 0x400) * 4 + 0x6958) &
               0xff000000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 >> 0x10 & 0xff) + 0x400) * 4 + 0x6958) &
               0xff0000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 >> 8 & 0xff) + 0x400) * 4 + 0x6958) &
               0xff00 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 & 0xff) + 0x400) * 4 + 0x6958) &
                        0xff ^ local_2c[9];
    local_10 = *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 >> 0x18) + 0x400) * 4 + 0x6958) &
               0xff000000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + 0x6958) &
               0xff0000 ^
               *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 >> 8 & 0xff) + 0x400) * 4 + 0x6958) &
               0xff00 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 & 0xff) + 0x400) * 4 + 0x6958) &
                        0xff ^ local_2c[10];
    local_c = *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar4 >> 0x18) + 0x400) * 4 + 0x6958) &
              0xff000000 ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar3 >> 0x10 & 0xff) + 0x400) * 4 + 0x6958) &
              0xff0000 ^
              *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + 0x6958) &
              0xff00 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar1 & 0xff) + 0x400) * 4 + 0x6958) &
                       0xff ^ local_2c[0xb];
    local_18 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_18);
    local_14 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_14);
    local_10 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_10);
    local_c = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x17cc))(local_c);
    (*DAT_004180dc)(param_3,&local_18,4);
    (*DAT_004180dc)(param_3 + 4,&local_14,4);
    (*DAT_004180dc)(param_3 + 8,&local_10,4);
    (*DAT_004180dc)(param_3 + 0xc,&local_c,4);
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004180a8)(PTR_Elf32_Ehdr_004180a4 + 0x7d88);
  }
  return;
}



// ==== FUN_00403460 @ 00403460 size=3828

undefined4
FUN_00403460(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint *local_18;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  param_1[0x45] = 0;
  param_1[0x3c] = (param_3 >> 2) + 6;
  (*DAT_004180dc)(param_1,param_2,param_3);
  (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x1860))(param_1,param_1,param_3);
  local_18 = param_1;
  if (param_3 == 0x18) {
    while( true ) {
      uVar2 = local_18[5];
      local_18[6] = *local_18 ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) & 0xff000000 ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + 0x5558)
                    & 0xff0000 ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 & 0xff) + 0x400) * 4 + 0x5558) &
                    0xff00 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                      ((uVar2 >> 0x18) + 0x400) * 4 + 0x5558) & 0xff ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 + local_14 * 4 + 0x5530);
      local_18[7] = local_18[1] ^ local_18[6];
      local_18[8] = local_18[2] ^ local_18[7];
      local_18[9] = local_18[3] ^ local_18[8];
      local_14 = local_14 + 1;
      if (local_14 == 8) break;
      local_18[10] = local_18[4] ^ local_18[9];
      local_18[0xb] = local_18[5] ^ local_18[10];
      local_18 = local_18 + 6;
    }
  }
  else if (param_3 == 0x20) {
    while( true ) {
      uVar2 = local_18[7];
      local_18[8] = *local_18 ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) & 0xff000000 ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + 0x5558)
                    & 0xff0000 ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 & 0xff) + 0x400) * 4 + 0x5558) &
                    0xff00 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                      ((uVar2 >> 0x18) + 0x400) * 4 + 0x5558) & 0xff ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 + local_14 * 4 + 0x5530);
      local_18[9] = local_18[1] ^ local_18[8];
      local_18[10] = local_18[2] ^ local_18[9];
      local_18[0xb] = local_18[3] ^ local_18[10];
      local_14 = local_14 + 1;
      if (local_14 == 7) break;
      uVar2 = local_18[0xb];
      local_18[0xc] =
           local_18[4] ^
           *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 0x18) + 0x400) * 4 + 0x5558) & 0xff000000
           ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) &
             0xff0000 ^
           *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + 0x5558) & 0xff00
           ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 & 0xff) + 0x400) * 4 + 0x5558) & 0xff;
      local_18[0xd] = local_18[5] ^ local_18[0xc];
      local_18[0xe] = local_18[6] ^ local_18[0xd];
      local_18[0xf] = local_18[7] ^ local_18[0xe];
      local_18 = local_18 + 8;
    }
  }
  else {
    if (param_3 != 0x10) {
      return 0xffffff53;
    }
    while( true ) {
      uVar2 = local_18[3];
      local_18[4] = *local_18 ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) & 0xff000000 ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + 0x5558)
                    & 0xff0000 ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 + ((uVar2 & 0xff) + 0x400) * 4 + 0x5558) &
                    0xff00 ^ *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                      ((uVar2 >> 0x18) + 0x400) * 4 + 0x5558) & 0xff ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 + local_14 * 4 + 0x5530);
      local_18[5] = local_18[1] ^ local_18[4];
      local_18[6] = local_18[2] ^ local_18[5];
      local_18[7] = local_18[3] ^ local_18[6];
      local_14 = local_14 + 1;
      if (local_14 == 10) break;
      local_18 = local_18 + 4;
    }
  }
  if (param_5 == 1) {
    local_14 = 0;
    local_10 = param_1[0x3c] << 2;
    for (; local_14 < local_10; local_14 = local_14 + 4) {
      uVar2 = param_1[local_14];
      param_1[local_14] = param_1[local_10];
      param_1[local_10] = uVar2;
      uVar2 = param_1[local_14 + 1];
      param_1[local_14 + 1] = param_1[local_10 + 1];
      param_1[local_10 + 1] = uVar2;
      uVar2 = param_1[local_14 + 2];
      param_1[local_14 + 2] = param_1[local_10 + 2];
      param_1[local_10 + 2] = uVar2;
      uVar2 = param_1[local_14 + 3];
      param_1[local_14 + 3] = param_1[local_10 + 3];
      param_1[local_10 + 3] = uVar2;
      local_10 = local_10 - 4;
    }
    local_18 = param_1;
    for (local_14 = 1; local_14 < param_1[0x3c]; local_14 = local_14 + 1) {
      puVar3 = local_18 + 4;
      *puVar3 = *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                         (*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                   ((*puVar3 >> 0x18) + 0x400) * 4 + 0x5558) & 0xff) * 4 + 0x6958) ^
                *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                         ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                    ((*puVar3 >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) & 0xff) + 0x100
                         ) * 4 + 0x6958) ^
                *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                         ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                    ((*puVar3 >> 8 & 0xff) + 0x400) * 4 + 0x5558) & 0xff) + 0x200) *
                         4 + 0x6958) ^
                *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                         ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                    ((*puVar3 & 0xff) + 0x400) * 4 + 0x5558) & 0xff) + 0x300) * 4 +
                         0x6958);
      local_18[5] = *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             (*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                       ((local_18[5] >> 0x18) + 0x400) * 4 + 0x5558) & 0xff) * 4 +
                             0x6958) ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                        ((local_18[5] >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) & 0xff)
                             + 0x100) * 4 + 0x6958) ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                        ((local_18[5] >> 8 & 0xff) + 0x400) * 4 + 0x5558) & 0xff) +
                             0x200) * 4 + 0x6958) ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                        ((local_18[5] & 0xff) + 0x400) * 4 + 0x5558) & 0xff) + 0x300
                             ) * 4 + 0x6958);
      local_18[6] = *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             (*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                       ((local_18[6] >> 0x18) + 0x400) * 4 + 0x5558) & 0xff) * 4 +
                             0x6958) ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                        ((local_18[6] >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) & 0xff)
                             + 0x100) * 4 + 0x6958) ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                        ((local_18[6] >> 8 & 0xff) + 0x400) * 4 + 0x5558) & 0xff) +
                             0x200) * 4 + 0x6958) ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                        ((local_18[6] & 0xff) + 0x400) * 4 + 0x5558) & 0xff) + 0x300
                             ) * 4 + 0x6958);
      local_18[7] = *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             (*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                       ((local_18[7] >> 0x18) + 0x400) * 4 + 0x5558) & 0xff) * 4 +
                             0x6958) ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                        ((local_18[7] >> 0x10 & 0xff) + 0x400) * 4 + 0x5558) & 0xff)
                             + 0x100) * 4 + 0x6958) ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                        ((local_18[7] >> 8 & 0xff) + 0x400) * 4 + 0x5558) & 0xff) +
                             0x200) * 4 + 0x6958) ^
                    *(uint *)(PTR_Elf32_Ehdr_004180a4 +
                             ((*(uint *)(PTR_Elf32_Ehdr_004180a4 +
                                        ((local_18[7] & 0xff) + 0x400) * 4 + 0x5558) & 0xff) + 0x300
                             ) * 4 + 0x6958);
      local_18 = puVar3;
    }
  }
  uVar1 = (*(code *)PTR_AesSetIV_004180ac)(param_1,param_4);
  return uVar1;
}



// ==== FUN_00404410 @ 00404410 size=128

undefined4
FUN_00404410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x3460))(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}



// ==== FUN_00404554 @ 00404554 size=192

int FUN_00404554(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int local_128;
  undefined1 auStack_124 [284];
  
  local_128 = (*(code *)PTR_AesSetKey_004180b0)(auStack_124,param_4,param_5,param_6,1);
  if (local_128 == 0) {
    local_128 = (*(code *)PTR_AesCbcDecrypt_004180b4)(auStack_124,param_1,param_2,param_3);
  }
  return local_128;
}



// ==== FUN_00404614 @ 00404614 size=108

void FUN_00404614(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x1ad0))(param_1,param_3,param_2);
  return;
}



// ==== FUN_00404680 @ 00404680 size=108

void FUN_00404680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x2798))(param_1,param_3,param_2);
  return;
}



// ==== FUN_004046ec @ 004046ec size=280

undefined4 FUN_004046ec(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 4;
  while (local_10 != 0) {
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x19c4))(param_1 + 0xf4,local_res8,0x10);
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x1ad0))(param_1,param_1 + 0xf4,param_1 + 0xf4);
    (*DAT_004180dc)(local_res4,param_1 + 0xf4,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== FUN_00404944 @ 00404944 size=124

void FUN_00404944(int param_1)

{
  char *pcVar1;
  int local_10;
  
  local_10 = 0xf;
  while( true ) {
    if (local_10 < 0) {
      return;
    }
    pcVar1 = (char *)(param_1 + local_10);
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 != '\0') break;
    local_10 = local_10 + -1;
  }
  return;
}



// ==== FUN_004049c0 @ 004049c0 size=636

void FUN_004049c0(int param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte *local_res4;
  byte *local_res8;
  uint local_resc;
  byte *local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = (byte *)((param_1 + 0x114) - *(int *)(param_1 + 0x114));
  for (local_resc = param_4; (*(int *)(param_1 + 0x114) != 0 && (local_resc != 0));
      local_resc = local_resc - 1) {
    *local_res4 = *local_res8 ^ *local_10;
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
    local_res4 = local_res4 + 1;
    local_res8 = local_res8 + 1;
    local_10 = local_10 + 1;
  }
  while (0xf < local_resc) {
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x1ad0))(param_1,param_1 + 0xf4,local_res4);
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x4944))(param_1 + 0xf4);
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x19c4))(local_res4,local_res8,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_resc = local_resc - 0x10;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (local_resc != 0) {
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x1ad0))(param_1,param_1 + 0xf4,param_1 + 0x104);
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x4944))(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x114) = 0x10;
    local_10 = (byte *)(param_1 + 0x104);
    while (local_resc != 0) {
      *local_res4 = *local_res8 ^ *local_10;
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
      local_res4 = local_res4 + 1;
      local_res8 = local_res8 + 1;
      local_resc = local_resc - 1;
      local_10 = local_10 + 1;
    }
  }
  return;
}



// ==== FUN_00404c40 @ 00404c40 size=104

undefined4 FUN_00404c40(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  if (param_1 == 0) {
    local_10 = 0xffffff53;
  }
  else {
    *(int *)(DAT_004180b8 + -0x7ed0) = param_1;
  }
  return local_10;
}



// ==== FUN_00404ca8 @ 00404ca8 size=64

undefined4 FUN_00404ca8(void)

{
  *(undefined4 *)(DAT_004180b8 + -0x7ecc) = 1;
  return 0;
}



// ==== FUN_00404ce8 @ 00404ce8 size=52

void FUN_00404ce8(void)

{
  *(undefined4 *)(DAT_004180b8 + -0x7ecc) = 0;
  return;
}



// ==== FUN_00404d1c @ 00404d1c size=180

void FUN_00404d1c(undefined4 param_1,undefined4 param_2)

{
  if (*(int *)(DAT_004180b8 + -0x7ed0) == 0) {
    if (*(int *)(DAT_004180b8 + -0x7ecc) != 0) {
      (*(code *)PTR_fprintf_004180d8)(*DAT_004180c8,PTR_Elf32_Ehdr_004180a4 + 0x7dc0,param_2);
    }
  }
  else {
    (**(code **)(DAT_004180b8 + -0x7ed0))(param_1,param_2);
  }
  return;
}



// ==== FUN_00404e3c @ 00404e3c size=152

void FUN_00404e3c(undefined4 param_1)

{
  undefined1 auStack_58 [80];
  
  if (*(int *)(DAT_004180b8 + -0x7ecc) != 0) {
    (*DAT_004180cc)(auStack_58,PTR_Elf32_Ehdr_004180a4 + 0x7dc4,param_1);
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x4d1c))(2,auStack_58);
  }
  return;
}



// ==== FUN_00404ed4 @ 00404ed4 size=160

void FUN_00404ed4(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [80];
  
  if (*(int *)(DAT_004180b8 + -0x7ecc) != 0) {
    (*DAT_004180cc)(auStack_58,PTR_Elf32_Ehdr_004180a4 + 0x7dd8,param_1,param_2);
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x4d1c))(3,auStack_58);
  }
  return;
}



// ==== FUN_00404f74 @ 00404f74 size=152

void FUN_00404f74(undefined4 param_1)

{
  undefined1 auStack_58 [80];
  
  if (*(int *)(DAT_004180b8 + -0x7ecc) != 0) {
    (*DAT_004180cc)(auStack_58,PTR_Elf32_Ehdr_004180a4 + 0x7df8,param_1);
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x4d1c))(0,auStack_58);
  }
  return;
}



// ==== FUN_00405010 @ 00405010 size=72

void FUN_00405010(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00418004;
  pcVar2 = DAT_00418004;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



