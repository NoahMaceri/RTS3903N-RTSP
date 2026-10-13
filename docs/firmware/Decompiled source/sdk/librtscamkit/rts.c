/* librtscamkit — "rts" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtscamkit.h"

// ==== rts_log_destroy @ 00011c30 size=136

undefined4 processEntry rts_log_destroy(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_DAT_000283cc;
  if ((*(uint *)(PTR_DAT_000283cc + -0x7df0) & 2) != 0) {
    (*(code *)PTR_closelog_000284a4)();
  }
  if (*(int *)(puVar1 + -0x7d68) != 0) {
    (*(code *)PTR_fclose_00028474)();
  }
  puVar3 = PTR_pthread_mutex_destroy_00028440;
  puVar2 = PTR_DAT_000283cc;
  *(undefined4 *)(puVar1 + -0x7d68) = 0;
  (*(code *)puVar3)(puVar2 + -0x7c60);
  return 0;
}



// ==== rts_log_init @ 00011cb8 size=124

undefined4 rts_log_init(void)

{
  if ((*(uint *)(PTR_DAT_000283cc + -0x7df0) & 2) != 0) {
    (*(code *)PTR_openlog_000284a8)(PTR_DAT_000283cc + -0x7de8,1,0xa8);
  }
  (*(code *)PTR_setlogmask_00028458)(0xff);
  (*(code *)PTR_pthread_mutex_init_00028414)(PTR_DAT_000283cc + -0x7c60,0);
  return 0;
}



// ==== rts_is_integer @ 00011fa4 size=196

undefined4 rts_is_integer(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  
  bVar1 = false;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  pcVar2 = param_1;
  do {
    iVar3 = (int)*pcVar2;
    if (iVar3 == 0) {
      return 1;
    }
    if (iVar3 < 0x47) {
      if (iVar3 < 0x41) {
        if (9 < iVar3 - 0x30U) {
          return 0;
        }
      }
      else {
LAB_00012028:
        if (!bVar1) {
          return 0;
        }
      }
    }
    else {
      if (iVar3 < 0x67) {
        if (0x60 < iVar3) goto LAB_00012028;
        if (iVar3 != 0x58) {
          return 0;
        }
      }
      else if (iVar3 != 0x78) {
        return 0;
      }
      if (pcVar2 != param_1 + 1) {
        return 0;
      }
      bVar1 = true;
      if (*param_1 != '0') {
        return 0;
      }
    }
    pcVar2 = pcVar2 + 1;
  } while( true );
}



// ==== rts_get_file_size @ 00012068 size=168

undefined4 rts_get_file_size(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = (*(code *)PTR_fopen_00028480)(param_1,PTR_000283d8 + 0x7b44);
  if ((iVar1 != 0) && (iVar2 = (*(code *)PTR_fseek_000284b0)(iVar1,0,2), -1 < iVar2)) {
    uVar3 = (*(code *)PTR_ftell_00028478)(iVar1);
    (*(code *)PTR_fclose_00028474)(iVar1);
    return uVar3;
  }
  return 0;
}



// ==== rts_save_raw_data @ 00012110 size=320

undefined4 rts_save_raw_data(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int unaff_s2;
  
  if (param_1 == 0) {
    param_3 = 0x73;
    puVar4 = PTR_000283d8 + 0x73f0;
    puVar5 = PTR_000283d8 + 0x7398;
    param_2 = unaff_s2;
  }
  else {
    if (param_2 != 0) goto LAB_00012180;
    param_3 = 0x74;
    puVar4 = PTR_000283d8 + 0x73f8;
    puVar5 = PTR_000283d8 + 0x7398;
  }
  while( true ) {
    (*(code *)PTR___assert_0002840c)(puVar4,puVar5,param_3,PTR_000283d8 + 0x785c);
LAB_00012180:
    if (param_3 != 0) break;
    param_3 = 0x75;
    puVar4 = PTR_000283d8 + 0x79a0;
    puVar5 = PTR_000283d8 + 0x7398;
  }
  iVar1 = (*(code *)PTR_fopen_00028480)();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00028430)();
    uVar3 = (*(code *)PTR_strerror_0002851c)(*puVar2);
    (*(code *)PTR_rts_log_00028488)
              (4,PTR_000283d8 + 0x7404,PTR_000283d8 + 0x7848,0x78,param_1,uVar3);
    uVar3 = 0xffffffe8;
  }
  else {
    (*(code *)PTR_fwrite_00028444)(param_2,1,param_3,iVar1);
    (*(code *)PTR_fclose_00028474)(iVar1);
    uVar3 = 0;
  }
  return uVar3;
}



// ==== rts_save_yuv_image @ 00012250 size=552

undefined4 rts_save_yuv_image(int param_1,int param_2,int param_3,undefined *param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int unaff_s4;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  
  if (param_1 == 0) {
    param_3 = 0xa3;
    puVar4 = PTR_000283d8 + 0x73f0;
    puVar5 = PTR_000283d8 + 0x7398;
    param_2 = unaff_s4;
  }
  else {
    if (param_2 != 0) goto LAB_000122d0;
    param_3 = 0xa4;
    puVar4 = PTR_000283d8 + 0x73f8;
    puVar5 = PTR_000283d8 + 0x7398;
  }
  while( true ) {
    param_4 = PTR_000283d8 + 0x7834;
    (*(code *)PTR___assert_0002840c)(puVar4,puVar5);
LAB_000122d0:
    if (param_5 != 0) break;
    param_3 = 0xa5;
    puVar4 = PTR_000283d8 + 0x79a0;
    puVar5 = PTR_000283d8 + 0x7398;
  }
  (*(code *)PTR_memset_0002847c)(&local_a0,0,0x80);
  local_a0 = 0x59;
  iVar1 = (int)param_4 * 2 * param_3;
  local_9e = 0x59;
  local_9d = 0x32;
  local_9b = (undefined1)((uint)param_3 >> 8);
  local_9f = 0x55;
  local_9a = (undefined1)((uint)param_3 >> 0x10);
  local_97 = (undefined1)((uint)param_4 >> 8);
  local_96 = (undefined1)((uint)param_4 >> 0x10);
  local_92 = (undefined1)((uint)iVar1 >> 0x10);
  local_9c = (undefined1)param_3;
  local_98 = SUB41(param_4,0);
  local_94 = (undefined1)iVar1;
  local_99 = (undefined1)((uint)param_3 >> 0x18);
  local_95 = (undefined1)((uint)param_4 >> 0x18);
  local_93 = (undefined1)((uint)iVar1 >> 8);
  local_91 = (undefined1)((uint)iVar1 >> 0x18);
  iVar1 = (*(code *)PTR_fopen_00028480)(param_1,PTR_000283d8 + 0x7400);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00028430)();
    uVar3 = (*(code *)PTR_strerror_0002851c)(*puVar2);
    (*(code *)PTR_rts_log_00028488)
              (4,PTR_000283d8 + 0x7404,PTR_000283d8 + 0x7820,0xab,param_1,uVar3);
    uVar3 = 0xffffffe8;
  }
  else {
    (*(code *)PTR_fwrite_00028444)(&local_a0,1,0x80,iVar1);
    (*(code *)PTR_fwrite_00028444)(param_2,1,param_5,iVar1);
    (*(code *)PTR_fclose_00028474)(iVar1);
    uVar3 = 0;
  }
  return uVar3;
}



// ==== rts_dump_trace @ 00012478 size=308

void rts_dump_trace(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 auStack_58 [68];
  
  (*(code *)PTR_memset_0002847c)(auStack_58,0,0x40);
  iVar1 = (*(code *)PTR_backtrace_000284bc)(auStack_58,0x10);
  iVar2 = (*(code *)PTR_backtrace_symbols_000284f4)(auStack_58,iVar1);
  if (iVar2 == 0) {
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7420,PTR_000283d8 + 0x7810,0xc0);
  }
  else {
    (*(code *)PTR_rts_log_00028488)(1,PTR_000283d8 + 0x7458,iVar1);
    puVar4 = PTR_000283d8 + 0x746c;
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      (*(code *)PTR_rts_log_00028488)(1,puVar4,iVar3,*(undefined4 *)(iVar2 + iVar3 * 4));
    }
    (*(code *)PTR_rts_log_00028488)(1,PTR_000283d8 + 0x7478);
    (*(code *)PTR_free_000283e8)(iVar2);
  }
  return;
}



// ==== rts_test_bit @ 000125ac size=332

uint rts_test_bit(undefined *param_1,int param_2,undefined *param_3)

{
  undefined *puVar1;
  uint local_10;
  int local_c;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x748c;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7800,0xe7,param_1);
    param_3 = (undefined *)0xe7;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  else {
    puVar1 = (undefined *)(param_2 << 3);
    if (-1 < (int)param_3) goto LAB_0001266c;
    param_1 = PTR_000283d8 + 0x7390;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7800,0xe8,param_1);
    param_3 = (undefined *)0xe8;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  while( true ) {
    (*(code *)PTR___assert_0002840c)(param_1,puVar1,param_3,PTR_000283d8 + 0x77f0);
LAB_0001266c:
    if (param_3 < puVar1) break;
    param_1 = PTR_000283d8 + 0x7490;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7800,0xe9,param_1);
    param_3 = (undefined *)0xe9;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  (*(code *)(PTR_000283d8 + 0x1f00))(param_3,&local_c,&local_10);
  return (int)(uint)(byte)param_1[local_c] >> (local_10 & 0x1f) & 1;
}



// ==== rts_set_bit @ 000126f8 size=340

void rts_set_bit(undefined *param_1,int param_2,undefined *param_3)

{
  undefined *puVar1;
  uint local_10;
  int local_c;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x748c;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x77bc,0xf5,param_1);
    param_3 = (undefined *)0xf5;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  else {
    puVar1 = (undefined *)(param_2 << 3);
    if (-1 < (int)param_3) goto LAB_000127b8;
    param_1 = PTR_000283d8 + 0x7390;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x77bc,0xf6,param_1);
    param_3 = (undefined *)0xf6;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  while( true ) {
    (*(code *)PTR___assert_0002840c)(param_1,puVar1,param_3,PTR_000283d8 + 0x77b0);
LAB_000127b8:
    if (param_3 < puVar1) break;
    param_1 = PTR_000283d8 + 0x7490;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x77bc,0xf7,param_1);
    param_3 = (undefined *)0xf7;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  (*(code *)(PTR_000283d8 + 0x1f00))(param_3,&local_c,&local_10);
  param_1[local_c] = (byte)(1 << (local_10 & 0x1f)) | param_1[local_c];
  return;
}



// ==== rts_clear_bit @ 0001284c size=344

void rts_clear_bit(undefined *param_1,int param_2,undefined *param_3)

{
  undefined *puVar1;
  uint local_10;
  int local_c;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x748c;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x77a0,0x103,param_1);
    param_3 = (undefined *)0x103;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  else {
    puVar1 = (undefined *)(param_2 << 3);
    if (-1 < (int)param_3) goto LAB_0001290c;
    param_1 = PTR_000283d8 + 0x7390;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x77a0,0x104,param_1);
    param_3 = (undefined *)0x104;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  while( true ) {
    (*(code *)PTR___assert_0002840c)(param_1,puVar1,param_3,PTR_000283d8 + 0x7790);
LAB_0001290c:
    if (param_3 < puVar1) break;
    param_1 = PTR_000283d8 + 0x7490;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x77a0,0x105,param_1);
    param_3 = (undefined *)0x105;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  (*(code *)(PTR_000283d8 + 0x1f00))(param_3,&local_c,&local_10);
  param_1[local_c] = ~(byte)(1 << (local_10 & 0x1f)) & param_1[local_c];
  return;
}



// ==== rts_change_bit @ 000129a4 size=368

void rts_change_bit(undefined *param_1,int param_2,undefined *param_3)

{
  undefined *puVar1;
  byte bVar2;
  uint local_10;
  int local_c;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x748c;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7780,0x111,param_1);
    param_3 = (undefined *)0x111;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  else {
    puVar1 = (undefined *)(param_2 << 3);
    if (-1 < (int)param_3) goto LAB_00012a64;
    param_1 = PTR_000283d8 + 0x7390;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7780,0x112,param_1);
    param_3 = (undefined *)0x112;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  while( true ) {
    (*(code *)PTR___assert_0002840c)(param_1,puVar1,param_3,PTR_000283d8 + 0x7770);
LAB_00012a64:
    if (param_3 < puVar1) break;
    param_1 = PTR_000283d8 + 0x7490;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7780,0x113,param_1);
    param_3 = (undefined *)0x113;
    puVar1 = PTR_000283d8 + 0x7398;
  }
  (*(code *)(PTR_000283d8 + 0x1f00))(param_3,&local_c,&local_10);
  bVar2 = param_1[local_c];
  if (((int)(uint)bVar2 >> (local_10 & 0x1f) & 1U) == 0) {
    bVar2 = bVar2 | (byte)(1 << (local_10 & 0x1f));
  }
  else {
    bVar2 = bVar2 & ~(byte)(1 << (local_10 & 0x1f));
  }
  param_1[local_c] = bVar2;
  return;
}



// ==== rts_get_bits_val @ 00012b14 size=516

uint rts_get_bits_val(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  
  puVar2 = PTR_000283d8;
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar7 = PTR_000283d8 + 0x74a0;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x775c,0x122,puVar7);
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar2 = puVar2 + 0x74a0;
      uVar4 = 0x122;
      puVar3 = PTR_000283d8 + 0x7398;
      goto LAB_00012c00;
    }
  }
  puVar7 = (undefined *)(param_4 - 1);
  if (-1 < param_3) goto LAB_00012c10;
  puVar2 = PTR_000283d8 + 0x7390;
  (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x775c,0x123,puVar2);
  uVar4 = 0x123;
  puVar3 = PTR_000283d8 + 0x7398;
LAB_00012c00:
  while( true ) {
    while( true ) {
      (*(code *)PTR___assert_0002840c)(puVar2,puVar3,uVar4,PTR_000283d8 + 0x7748);
LAB_00012c10:
      puVar7 = (undefined *)(uint)(puVar7 < (undefined *)0x4);
      if (puVar7 != (undefined *)0x0) break;
      puVar2 = PTR_000283d8 + 0x74ac;
      (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x775c,0x124,puVar2);
      uVar4 = 0x124;
      puVar3 = PTR_000283d8 + 0x7398;
    }
    puVar7 = (undefined *)(uint)((uint)(param_2 << 3) < param_3 + param_4);
    uVar6 = 0;
    if (puVar7 == (undefined *)0x0) break;
    puVar2 = PTR_000283d8 + 0x74d4;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x775c,0x125,puVar2);
    uVar4 = 0x125;
    puVar3 = PTR_000283d8 + 0x7398;
  }
  uVar5 = 0;
  do {
    iVar1 = (*(code *)PTR_rts_test_bit_00028418)(param_1,param_2,uVar5 + param_3);
    if (iVar1 != 0) {
      uVar6 = uVar6 | 1 << (uVar5 & 0x1f);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != param_4);
  return uVar6;
}



// ==== rts_set_bits_val @ 00012d18 size=500

void rts_set_bits_val(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  code *pcVar7;
  
  puVar1 = PTR_000283d8;
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar6 = PTR_000283d8 + 0x74a0;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7734,0x134,puVar6);
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar1 = puVar1 + 0x74a0;
      uVar3 = 0x134;
      puVar2 = PTR_000283d8 + 0x7398;
      goto LAB_00012dfc;
    }
  }
  puVar6 = (undefined *)(param_4 - 1);
  if (-1 < (int)param_3) goto LAB_00012e0c;
  puVar1 = PTR_000283d8 + 0x7390;
  (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7734,0x135,puVar1);
  uVar3 = 0x135;
  puVar2 = PTR_000283d8 + 0x7398;
LAB_00012dfc:
  while( true ) {
    while( true ) {
      (*(code *)PTR___assert_0002840c)(puVar1,puVar2,uVar3,PTR_000283d8 + 0x7720);
LAB_00012e0c:
      puVar6 = (undefined *)(uint)(puVar6 < (undefined *)0x1f);
      if (puVar6 != (undefined *)0x0) break;
      puVar1 = PTR_000283d8 + 0x74f0;
      (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7734,0x136,puVar1);
      uVar3 = 0x136;
      puVar2 = PTR_000283d8 + 0x7398;
    }
    param_4 = param_3 + param_4;
    puVar6 = (undefined *)(uint)((uint)(param_2 << 3) < param_4);
    uVar4 = param_3;
    if (puVar6 == (undefined *)0x0) break;
    puVar1 = PTR_000283d8 + 0x74d4;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7734,0x137,puVar1);
    uVar3 = 0x137;
    puVar2 = PTR_000283d8 + 0x7398;
  }
  do {
    pcVar7 = (code *)PTR_rts_clear_bit_00028504;
    if ((param_5 >> (uVar4 - param_3 & 0x1f) & 1) != 0) {
      pcVar7 = (code *)PTR_rts_set_bit_000284d4;
    }
    uVar5 = uVar4 + 1;
    (*pcVar7)(param_1,param_2,uVar4);
    uVar4 = uVar5;
  } while (uVar5 != param_4);
  return;
}



// ==== rts_negate_bits @ 00012f0c size=152

void rts_negate_bits(byte *param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + param_2;
  if (param_1 == (byte *)0x0) {
    param_1 = PTR_000283d8 + 0x748c;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7710,0x145,param_1);
    pbVar1 = PTR_000283d8 + 0x7398;
    (*(code *)PTR___assert_0002840c)(param_1,pbVar1,0x145,PTR_000283d8 + 0x7700);
  }
  for (; param_1 != pbVar1; param_1 = param_1 + 1) {
    *param_1 = ~*param_1;
  }
  return;
}



// ==== rts_buffer_test_bit @ 00012fa4 size=148

void rts_buffer_test_bit(undefined4 *param_1,undefined *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(PTR_000283d8 + 0x7508);
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x76ec,0x14d,puVar1);
    param_2 = PTR_000283d8 + 0x7398;
    (*(code *)PTR___assert_0002840c)(puVar1,param_2,0x14d,PTR_000283d8 + 0x76d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00013030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_test_bit_00028418)(*puVar1,param_1[1],param_2);
  return;
}



// ==== rts_buffer_set_bit @ 00013038 size=148

void rts_buffer_set_bit(undefined4 *param_1,undefined *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(PTR_000283d8 + 0x7508);
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x76c4,0x154,puVar1);
    param_2 = PTR_000283d8 + 0x7398;
    (*(code *)PTR___assert_0002840c)(puVar1,param_2,0x154,PTR_000283d8 + 0x76b0);
  }
                    /* WARNING: Could not recover jumptable at 0x000130c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_set_bit_000284d4)(*puVar1,param_1[1],param_2);
  return;
}



// ==== rts_buffer_clear_bit @ 000130cc size=148

void rts_buffer_clear_bit(undefined4 *param_1,undefined *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(PTR_000283d8 + 0x7508);
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7698,0x15b,puVar1);
    param_2 = PTR_000283d8 + 0x7398;
    (*(code *)PTR___assert_0002840c)(puVar1,param_2,0x15b,PTR_000283d8 + 0x7680);
  }
                    /* WARNING: Could not recover jumptable at 0x00013158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_clear_bit_00028504)(*puVar1,param_1[1],param_2);
  return;
}



// ==== rts_buffer_change_bit @ 00013160 size=148

void rts_buffer_change_bit(undefined4 *param_1,undefined *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(PTR_000283d8 + 0x7508);
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7668,0x162,puVar1);
    param_2 = PTR_000283d8 + 0x7398;
    (*(code *)PTR___assert_0002840c)(puVar1,param_2,0x162,PTR_000283d8 + 0x7650);
  }
                    /* WARNING: Could not recover jumptable at 0x000131ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_change_bit_00028508)(*puVar1,param_1[1],param_2);
  return;
}



// ==== rts_buffer_get_bits_val @ 000131f4 size=156

void rts_buffer_get_bits_val(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(PTR_000283d8 + 0x7508);
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7638,0x169,puVar1);
    param_3 = 0x169;
    param_2 = PTR_000283d8 + 0x7398;
    (*(code *)PTR___assert_0002840c)(puVar1,param_2,0x169,PTR_000283d8 + 0x7620);
  }
                    /* WARNING: Could not recover jumptable at 0x00013288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_get_bits_val_000284fc)(*puVar1,param_1[1],param_2,param_3);
  return;
}



// ==== rts_buffer_set_bits_val @ 00013290 size=168

void rts_buffer_set_bits_val
               (undefined4 *param_1,undefined *param_2,undefined4 param_3,undefined *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(PTR_000283d8 + 0x7508);
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7608,0x171,puVar1);
    param_3 = 0x171;
    param_2 = PTR_000283d8 + 0x7398;
    param_4 = PTR_000283d8 + 0x75f0;
    (*(code *)PTR___assert_0002840c)(puVar1,param_2,0x171);
  }
  (*(code *)PTR_rts_set_bits_val_0002844c)(*puVar1,param_1[1],param_2,param_3,param_4);
  return;
}



// ==== rts_buffer_negate @ 00013338 size=144

void rts_buffer_negate(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(PTR_000283d8 + 0x7508);
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x75dc,0x178,puVar1);
    (*(code *)PTR___assert_0002840c)(puVar1,PTR_000283d8 + 0x7398,0x178,PTR_000283d8 + 0x75c8);
  }
                    /* WARNING: Could not recover jumptable at 0x000133c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_negate_bits_000283f0)(*puVar1,param_1[1]);
  return;
}



// ==== rts_get_realtime_time @ 000133c8 size=100

void rts_get_realtime_time(void)

{
  undefined1 local_10 [12];
  
  (*(code *)PTR_clock_gettime_00028530)(0,local_10);
  return;
}



// ==== rts_get_monotonic_time @ 0001342c size=100

void rts_get_monotonic_time(void)

{
  undefined1 local_10 [12];
  
  (*(code *)PTR_clock_gettime_00028530)(1,local_10);
  return;
}



// ==== rts_get_monotonic_raw_time @ 00013490 size=100

void rts_get_monotonic_raw_time(void)

{
  undefined1 local_10 [12];
  
  (*(code *)PTR_clock_gettime_00028530)(4,local_10);
  return;
}



// ==== rts_memweight @ 000134f4 size=324

int rts_memweight(uint *param_1,undefined *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = 0;
  if (param_1 != (uint *)0x0) {
    puVar3 = (undefined *)0x1;
    for (; param_2 != (undefined *)0x0; param_2 = param_2 + -iVar6) {
      if (param_2 < (undefined *)0x8) {
        if (param_2 < (undefined *)0x4) {
          if (param_2 == puVar3) {
            for (bVar4 = (byte)*param_1; bVar4 != 0; bVar4 = bVar4 - 1 & bVar4) {
              iVar1 = iVar1 + 1;
            }
            iVar6 = 1;
          }
          else {
            for (uVar5 = (ushort)*param_1; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
              iVar1 = iVar1 + 1;
            }
            iVar6 = 2;
          }
        }
        else {
          for (uVar2 = *param_1; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
            iVar1 = iVar1 + 1;
          }
          iVar6 = 4;
        }
      }
      else {
        uVar2 = param_1[1];
        for (uVar7 = *param_1; uVar7 != 0 || uVar2 != 0; uVar7 = uVar7 & uVar7 - 1) {
          iVar1 = iVar1 + 1;
          uVar2 = uVar2 & (uint)(uVar7 - 1 < uVar7) + (uVar2 - 1);
        }
LAB_00013570:
        iVar6 = 8;
      }
      param_1 = (uint *)((int)param_1 + iVar6);
    }
    return iVar1;
  }
  param_1 = (uint *)(PTR_000283d8 + 0x7510);
  (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x75b8,0x1a4,param_1);
  param_2 = PTR_000283d8 + 0x7398;
  puVar3 = PTR_000283d8 + 0x75a8;
  iVar1 = (*(code *)PTR___assert_0002840c)(param_1,param_2,0x1a4);
  goto LAB_00013570;
}



// ==== rts_memweight_v2 @ 00013638 size=244

int rts_memweight_v2(int param_1,undefined *param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  
  puVar2 = (undefined *)(param_3 >> 3);
  if (param_1 == 0) {
    puVar2 = PTR_000283d8 + 0x7510;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7594,0x1d1,puVar2);
    param_2 = PTR_000283d8 + 0x7398;
    (*(code *)PTR___assert_0002840c)(puVar2,param_2,0x1d1,PTR_000283d8 + 0x7580);
  }
  if (param_2 <= puVar2) {
                    /* WARNING: Could not recover jumptable at 0x000136d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)PTR_rts_memweight_0002849c)();
    return iVar1;
  }
  iVar1 = (*(code *)PTR_rts_memweight_0002849c)();
  for (uVar3 = 0; uVar3 < (param_3 & 7); uVar3 = uVar3 + 1) {
    iVar1 = iVar1 + ((int)(uint)(byte)puVar2[param_1] >> (uVar3 & 0x1f) & 1U);
  }
  return iVar1;
}



// ==== rts_alloc_buffer @ 0001372c size=232

undefined4 rts_alloc_buffer(int *param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_1 == (int *)0x0) {
    puVar2 = PTR_000283d8 + 0x7508;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7544,0x1fc,puVar2);
    param_2 = PTR_000283d8 + 0x7398;
    (*(code *)PTR___assert_0002840c)(puVar2,param_2,0x1fc,PTR_000283d8 + 30000);
  }
  (*(code *)PTR_memset_0002847c)();
  uVar3 = 0;
  if (param_2 != (undefined *)0x0) {
    iVar1 = (*(code *)PTR___rts_calloc_000284f8)(1,param_2,PTR_000283d8 + 0x7544,0x203);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      uVar3 = 0xfffffff5;
    }
    else {
      param_1[1] = (int)param_2;
    }
  }
  return uVar3;
}



// ==== rts_alloc_bitmap @ 00013814 size=284

undefined4 rts_alloc_bitmap(undefined4 *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *unaff_s1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(PTR_000283d8 + 0x7518);
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x756c,0x1e4,puVar3);
    uVar2 = 0x1e4;
  }
  else {
    puVar3 = param_1;
    unaff_s1 = param_2;
    if (param_2 != (undefined *)0x0) goto LAB_000138dc;
    puVar3 = (undefined4 *)(PTR_000283d8 + 0x7520);
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x756c,0x1e5,puVar3);
    uVar2 = 0x1e5;
  }
  param_2 = PTR_000283d8 + 0x7398;
  param_1 = puVar3;
  (*(code *)PTR___assert_0002840c)(puVar3,param_2,uVar2,PTR_000283d8 + 0x7558);
LAB_000138dc:
  uVar2 = (*(code *)PTR_rts_alloc_buffer_0002850c)(param_1 + 1,(uint)(param_2 + 7) >> 3);
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00028464)(uVar2);
  if (iVar1 == 0) {
    *puVar3 = unaff_s1;
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_free_buffer @ 00013930 size=80

void rts_free_buffer(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      (*(code *)PTR_rts_free_00028434)();
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// ==== rts_free_bitmap @ 00013980 size=68

void rts_free_bitmap(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (*(code *)PTR_rts_free_buffer_00028408)(param_1 + 1);
    *param_1 = 0;
  }
  return;
}



// ==== rts_pollin @ 000139c4 size=88

ushort rts_pollin(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10;
  undefined2 local_c;
  ushort local_a;
  
  local_c = 1;
  local_10 = param_1;
  iVar1 = (*(code *)PTR_poll_00028470)(&local_10,1,param_2);
  if (iVar1 < 1) {
    local_a = 0;
  }
  else {
    local_a = local_a & 1;
  }
  return local_a;
}



// ==== rts_delay @ 00013a1c size=156

void rts_delay(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = (*(code *)PTR___udivdi3_00028494)(param_1,param_2,1000000,0);
  local_14 = (*(code *)PTR___umoddi3_0002852c)(param_1,param_2,1000000,0);
  (*(code *)PTR_select_000284dc)(0,0,0,0,&local_18);
  return;
}



// ==== rts_strerrno @ 00013ac0 size=80

undefined * rts_strerrno(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = (((int)param_1 >> 0x1f ^ param_1) - ((int)param_1 >> 0x1f)) - 1;
  if (uVar2 < 0x4b) {
                    /* WARNING: Could not recover jumptable at 0x00013afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(*(code *)(&_gp_1 + *(int *)(PTR_000283d8 + uVar2 * 4 + 0x7bc0)))();
    return puVar1;
  }
  return PTR_000283d8 + 0x7ba8;
}



// ==== RTS_IS_ERR @ 00013e28 size=8

uint RTS_IS_ERR(uint param_1)

{
  return param_1 >> 0x1f;
}



// ==== rts_log @ 00013ec8 size=408

void rts_log(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  puVar1 = PTR_DAT_000283cc;
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  if ((*(uint *)(PTR_DAT_000283cc + -0x7dec) >> (param_1 & 0x1f) & 1) != 0) {
    local_res8 = param_3;
    local_resc = param_4;
    (*(code *)PTR_pthread_mutex_lock_0002843c)(PTR_DAT_000283cc + -0x7c60);
    if ((*(uint *)(puVar1 + -0x7df0) & 1) != 0) {
      puVar3 = (undefined4 *)PTR_stderr_00028460;
      if (param_1 != 4) {
        puVar3 = (undefined4 *)PTR_stdout_00028524;
      }
      (*(code *)(PTR_000283d8 + 0x3e30))(*puVar3,param_2);
    }
    uVar4 = *(uint *)(puVar1 + -0x7df0);
    if (((*(uint *)(puVar1 + -0x7df0) & 4) != 0) && (*(int *)(puVar1 + -0x7d68) != 0)) {
      (*(code *)(PTR_000283d8 + 0x3e30))(*(int *)(puVar1 + -0x7d68),param_2,&local_res8);
      uVar4 = *(uint *)(puVar1 + -0x7df0);
    }
    uVar5 = *(uint *)(puVar1 + -0x7df0);
    if ((uVar4 & 2) != 0) {
      iVar2 = 6;
      if (param_1 < 8) {
        iVar2 = (int)(char)PTR_000283d8[param_1 + 0x7d20];
      }
      (*(code *)PTR_vsyslog_00028420)(iVar2,param_2,&local_res8);
      uVar5 = *(uint *)(puVar1 + -0x7df0);
    }
    if (((uVar5 & 8) != 0) && (pcVar6 = *(code **)(puVar1 + -0x7c64), pcVar6 != (code *)0x0)) {
      if (puVar1[-0x7de8] != '\0') {
        (*pcVar6)(PTR_000283d8 + 0x7cf0,PTR_DAT_000283cc + -0x7de8);
        pcVar6 = *(code **)(puVar1 + -0x7c64);
      }
      (*pcVar6)(param_2,&local_res8);
    }
    (*(code *)PTR_pthread_mutex_unlock_0002846c)(puVar1 + -0x7c60);
  }
  return;
}



// ==== rts_set_log_ident @ 00014060 size=216

undefined4 rts_set_log_ident(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_000283cc;
  (*(code *)PTR_pthread_mutex_lock_0002843c)(PTR_DAT_000283cc + -0x7c60);
  puVar2 = PTR_DAT_000283cc;
  if (param_1 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    uVar3 = 0;
    (*(code *)PTR_snprintf_00028514)(PTR_DAT_000283cc + -0x7de8,0x80,PTR_000283d8 + 0x7cf8,param_1);
    if ((*(uint *)(PTR_DAT_000283cc + -0x7df0) & 2) != 0) {
      (*(code *)PTR_closelog_000284a4)();
      (*(code *)PTR_openlog_000284a8)(puVar2 + -0x7de8,1,0xa8);
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(puVar1 + -0x7c60);
  return uVar3;
}



// ==== rts_set_log_mask @ 00014138 size=304

undefined4 rts_set_log_mask(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  
  puVar1 = PTR_DAT_000283cc;
  (*(code *)PTR_pthread_mutex_lock_0002843c)(PTR_DAT_000283cc + -0x7c60);
  puVar2 = PTR_DAT_000283cc;
  uVar3 = 0;
  if (param_1 != 0) {
    puVar5 = PTR_DAT_000283cc + -0x7de8;
    uVar6 = *(uint *)(PTR_DAT_000283cc + -0x7df0);
    do {
      uVar6 = uVar6 >> (uVar3 & 0x1f) & 1;
      if ((param_1 >> (uVar3 & 0x1f) & 1) != uVar6) {
        if (uVar6 == 0) {
          uVar6 = *(uint *)(puVar2 + -0x7df0);
          if (uVar3 == 1) {
            (*(code *)PTR_openlog_000284a8)(puVar5,1,0xa8);
            uVar6 = *(uint *)(puVar2 + -0x7df0);
          }
          uVar6 = 1 << (uVar3 & 0x1f) | uVar6;
        }
        else {
          if (uVar3 == 1) {
            (*(code *)PTR_closelog_000284a4)();
          }
          uVar6 = ~(1 << (uVar3 & 0x1f)) & *(uint *)(puVar2 + -0x7df0);
        }
        *(uint *)(puVar2 + -0x7df0) = uVar6;
      }
      uVar3 = uVar3 + 1;
      uVar6 = *(uint *)(puVar2 + -0x7df0);
    } while (uVar3 != 4);
  }
  uVar4 = *(undefined4 *)(puVar2 + -0x7df0);
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(puVar1 + -0x7c60);
  return uVar4;
}



// ==== rts_get_log_mask @ 00014268 size=24

undefined4 rts_get_log_mask(void)

{
  return *(undefined4 *)(PTR_DAT_000283cc + -0x7df0);
}



// ==== rts_clr_log_mask @ 00014280 size=100

undefined4 rts_clr_log_mask(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_000283cc;
  (*(code *)PTR_pthread_mutex_lock_0002843c)(PTR_DAT_000283cc + -0x7c60);
  puVar2 = PTR_pthread_mutex_unlock_0002846c;
  uVar3 = *(undefined4 *)(PTR_DAT_000283cc + -0x7df0);
  *(undefined4 *)(PTR_DAT_000283cc + -0x7df0) = 0;
  (*(code *)puVar2)(puVar1 + -0x7c60);
  return uVar3;
}



// ==== rts_set_log_file @ 000142e4 size=316

undefined4 rts_set_log_file(char *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_000283cc;
  (*(code *)PTR_pthread_mutex_lock_0002843c)(PTR_DAT_000283cc + -0x7c60);
  puVar2 = PTR_DAT_000283cc;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    if (*(int *)(PTR_DAT_000283cc + -0x7d68) != 0) {
      (*(code *)PTR_fclose_00028474)();
    }
    *(undefined4 *)(puVar2 + -0x7d68) = 0;
    puVar2[-0x7d64] = 0;
  }
  else {
    iVar6 = (*(code *)PTR_strncmp_000284a0)(param_1,PTR_DAT_000283cc + -0x7d64,0x100);
    puVar3 = PTR_DAT_000283cc;
    uVar7 = 0;
    if (iVar6 == 0) goto LAB_000143f4;
    if (*(int *)(PTR_DAT_000283cc + -0x7d68) != 0) {
      (*(code *)PTR_fclose_00028474)();
    }
    puVar5 = PTR_fopen_00028480;
    puVar4 = PTR_000283d8;
    *(undefined4 *)(puVar3 + -0x7d68) = 0;
    iVar6 = (*(code *)puVar5)(param_1,puVar4 + 0x7cfc);
    *(int *)(puVar3 + -0x7d68) = iVar6;
    if (iVar6 == 0) {
      uVar7 = 0xffffffe8;
      goto LAB_000143f4;
    }
    (*(code *)PTR_snprintf_00028514)(puVar2 + -0x7d64,0x100,PTR_000283d8 + 0x7cf8,param_1);
  }
  uVar7 = 0;
LAB_000143f4:
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(puVar1 + -0x7c60);
  return uVar7;
}



// ==== rts_set_log_callback @ 00014420 size=100

undefined4 rts_set_log_callback(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_000283cc;
  (*(code *)PTR_pthread_mutex_lock_0002843c)(PTR_DAT_000283cc + -0x7c60);
  puVar2 = PTR_pthread_mutex_unlock_0002846c;
  *(undefined4 *)(PTR_DAT_000283cc + -0x7c64) = param_1;
  (*(code *)puVar2)(puVar1 + -0x7c60);
  return 0;
}



// ==== rts_set_log_level @ 00014484 size=184

uint rts_set_log_level(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = PTR_DAT_000283cc;
  (*(code *)PTR_pthread_mutex_lock_0002843c)(PTR_DAT_000283cc + -0x7c60);
  if (param_1 == 0) {
    uVar2 = *(uint *)(PTR_DAT_000283cc + -0x7dec);
  }
  else {
    uVar2 = *(uint *)(PTR_DAT_000283cc + -0x7dec);
    uVar5 = 0;
    uVar4 = param_1;
    do {
      uVar3 = 1 << (uVar5 & 0x1f);
      if ((uVar4 & 1) == 0) {
        uVar2 = ~uVar3 & uVar2;
      }
      else {
        uVar2 = uVar3 | uVar2;
      }
      uVar5 = uVar5 + 1;
      uVar4 = param_1 >> (uVar5 & 0x1f);
    } while (uVar5 != 0x20);
    *(uint *)(PTR_DAT_000283cc + -0x7dec) = uVar2;
  }
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(puVar1 + -0x7c60);
  return uVar2;
}



// ==== rts_get_log_level @ 0001453c size=24

undefined4 rts_get_log_level(void)

{
  return *(undefined4 *)(PTR_DAT_000283cc + -0x7dec);
}



// ==== rts_clr_log_level @ 00014554 size=104

undefined4 rts_clr_log_level(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_000283cc;
  (*(code *)PTR_pthread_mutex_lock_0002843c)(PTR_DAT_000283cc + -0x7c60);
  puVar2 = PTR_pthread_mutex_unlock_0002846c;
  uVar3 = *(undefined4 *)(PTR_DAT_000283cc + -0x7dec);
  *(undefined4 *)(PTR_DAT_000283cc + -0x7dec) = 0;
  (*(code *)puVar2)(puVar1 + -0x7c60);
  return uVar3;
}



// ==== rts_check_log_priority @ 000145bc size=16

undefined4 rts_check_log_priority(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffcf;
  if (param_1 < 0x21) {
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_set_log_enable @ 000145cc size=216

undefined4 rts_set_log_enable(uint param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = (*(code *)PTR_rts_check_log_priority_000284d0)();
  iVar4 = (*(code *)PTR_RTS_IS_ERR_00028464)(uVar3);
  puVar1 = PTR_DAT_000283cc;
  if (iVar4 == 0) {
    (*(code *)PTR_pthread_mutex_lock_0002843c)(PTR_DAT_000283cc + -0x7c60);
    puVar2 = PTR_pthread_mutex_unlock_0002846c;
    uVar5 = 1 << (param_1 & 0x1f);
    if (param_2 == 0) {
      uVar5 = ~uVar5 & *(uint *)(PTR_DAT_000283cc + -0x7dec);
    }
    else {
      uVar5 = uVar5 | *(uint *)(PTR_DAT_000283cc + -0x7dec);
    }
    *(uint *)(PTR_DAT_000283cc + -0x7dec) = uVar5;
    (*(code *)puVar2)(puVar1 + -0x7c60);
    uVar3 = 0;
  }
  return uVar3;
}



// ==== rts_get_log_enable @ 000146a4 size=104

uint rts_get_log_enable(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (*(code *)PTR_rts_check_log_priority_000284d0)();
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00028464)(uVar1);
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar3 = *(uint *)(PTR_DAT_000283cc + -0x7dec) >> (param_1 & 0x1f) & 1;
  }
  return uVar3;
}



// ==== rts_dump_data @ 0001470c size=404

void rts_dump_data(int param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  
  puVar1 = PTR_DAT_000283cc;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 == 0) {
      param_3 = 0x10;
    }
    (*(code *)PTR_pthread_mutex_lock_0002843c)(PTR_DAT_000283cc + -0x7c60);
    puVar6 = PTR_000283d8 + 32000;
    puVar8 = PTR_000283d8 + 0x7d0c;
    uVar4 = param_2;
    for (uVar5 = 0; uVar5 < param_2; uVar5 = uVar5 + param_3) {
      uVar7 = param_3;
      if (uVar4 <= param_3) {
        uVar7 = uVar4;
      }
      (*(code *)PTR_fprintf_000284b8)
                (*(undefined4 *)PTR_stdout_00028524,puVar6,uVar5,(uVar5 - 1) + uVar7);
      puVar2 = PTR_stdout_00028524;
      for (uVar3 = 0; uVar3 != uVar7; uVar3 = uVar3 + 1) {
        (*(code *)PTR_fprintf_000284b8)
                  (*(undefined4 *)puVar2,puVar8,*(undefined1 *)(param_1 + uVar5 + uVar3));
      }
      uVar4 = uVar4 - param_3;
      (*(code *)PTR_fputc_00028450)(10,*(undefined4 *)puVar2);
    }
    (*(code *)PTR_pthread_mutex_unlock_0002846c)(puVar1 + -0x7c60);
    return;
  }
  return;
}



// ==== rts_semaphore_deallocate @ 000148b8 size=32

void rts_semaphore_deallocate(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_semctl_000284e4)(param_1,0,0);
  return;
}



// ==== rts_semaphore_wait @ 000148d8 size=172

int rts_semaphore_wait(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  
  local_1e = 0xffff;
  local_1c = 0x1000;
  local_20 = param_2;
  do {
    iVar1 = (*(code *)PTR_semop_0002842c)(param_1,&local_20,1);
    if (iVar1 != -1) {
      return iVar1;
    }
    piVar2 = (int *)(*(code *)PTR___errno_location_00028430)();
  } while (*piVar2 == 4);
  return -1;
}



// ==== rts_semaphore_post @ 00014984 size=172

int rts_semaphore_post(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  
  local_1e = 1;
  local_1c = 0x1000;
  local_20 = param_2;
  do {
    iVar1 = (*(code *)PTR_semop_0002842c)(param_1,&local_20,1);
    if (iVar1 != -1) {
      return iVar1;
    }
    piVar2 = (int *)(*(code *)PTR___errno_location_00028430)();
  } while (*piVar2 == 4);
  return -1;
}



// ==== rts_semaphore_initialize @ 00014a30 size=52

void rts_semaphore_initialize(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_semctl_000284e4)(param_1,param_2,0x10,1);
  return;
}



// ==== rts_init_queue @ 00014cf4 size=176

undefined4 rts_init_queue(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_DAT_000283dc + -0x7fec,0x73,param_1)
    ;
    (*(code *)PTR___assert_0002840c)(param_1,PTR_000283d8 + 0x7d48,0x73,PTR_DAT_000283dc + -0x7ffc);
  }
  (*(code *)PTR_pthread_mutex_init_00028414)();
  *(undefined **)(param_1 + 0x18) = param_1 + 0x18;
  *(undefined **)(param_1 + 0x1c) = param_1 + 0x18;
  *(undefined **)(param_1 + 0x20) = param_1 + 0x20;
  *(undefined **)(param_1 + 0x24) = param_1 + 0x20;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}



// ==== rts_queue_init @ 00014da4 size=100

int rts_queue_init(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___rts_calloc_000284f8)(1,0x30,PTR_000283d8 + 0x7ff4,0x7f);
  if (iVar1 != 0) {
    (*(code *)PTR_rts_init_queue_0002845c)(iVar1);
  }
  return iVar1;
}



// ==== rts_queue_empty @ 00014e08 size=132

bool rts_queue_empty(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = param_1 + 0x18;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7fe4,0x88,param_1);
    (*(code *)PTR___assert_0002840c)(param_1,PTR_000283d8 + 0x7d48,0x88,PTR_000283d8 + 0x7fd4);
  }
  return *(undefined **)(param_1 + 0x18) == puVar1;
}



// ==== rts_queue_push_back @ 000150f8 size=220

undefined4 rts_queue_push_back(undefined *param_1,undefined *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7fc0,0x11a,param_1);
    param_2 = PTR_000283d8 + 0x7d48;
    (*(code *)PTR___assert_0002840c)(param_1,param_2,0x11a,PTR_000283d8 + 0x7fac);
  }
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  (*(code *)(PTR_000283d8 + 0x4a9c))(param_1);
  uVar1 = (*(code *)(PTR_000283d8 + 0x4c1c))(param_1,param_2);
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
  return uVar1;
}



// ==== rts_queue_pop @ 000151d4 size=244

undefined4 rts_queue_pop(undefined *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7f78,0x128,param_1);
    (*(code *)PTR___assert_0002840c)(param_1,PTR_000283d8 + 0x7d48,0x128,PTR_000283d8 + 0x7f68);
  }
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  uVar1 = (*(code *)(PTR_000283d8 + 0x4e8c))(param_1);
  iVar3 = *(int *)(param_1 + 0x28);
  if (0xc < iVar3) {
    iVar2 = (*(code *)(PTR_000283d8 + 0x4b64))(param_1);
    *(int *)(param_1 + 0x28) = iVar3 - iVar2;
  }
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
  return uVar1;
}



// ==== rts_queue_add @ 000152c8 size=168

void rts_queue_add(undefined *param_1,undefined *param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7f58,0x136,param_1);
    param_2 = PTR_000283d8 + 0x7d48;
    (*(code *)PTR___assert_0002840c)(param_1,param_2,0x136,PTR_000283d8 + 0x7f48);
  }
  (*(code *)(PTR_000283d8 + 0x4a9c))();
                    /* WARNING: Could not recover jumptable at 0x00015368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_000283d8 + 0x4c1c))(param_1,param_2);
  return;
}



// ==== rts_queue_rm @ 00015370 size=288

void rts_queue_rm(undefined *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7f38,0x140,param_1);
    (*(code *)PTR___assert_0002840c)(param_1,PTR_000283d8 + 0x7d48,0x140,PTR_000283d8 + 0x7f28);
  }
  puVar1 = (undefined4 *)(*(code *)PTR___find_node_000284c0)();
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1 + 1;
    (*(code *)(PTR_000283d8 + 0x4a80))(puVar4);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    puVar5 = *(undefined4 **)(param_1 + 0x24);
    *puVar1 = 0;
    *(undefined4 **)(param_1 + 0x24) = puVar4;
    puVar1[2] = puVar5;
    puVar1[1] = param_1 + 0x20;
    *puVar5 = puVar4;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (0xc < iVar3) {
    iVar2 = (*(code *)(PTR_000283d8 + 0x4b64))(param_1);
    *(int *)(param_1 + 0x28) = iVar3 - iVar2;
  }
  return;
}



// ==== rts_queue_del @ 00015490 size=176

void rts_queue_del(undefined *param_1,undefined *param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7f18,0x148,param_1);
    param_2 = PTR_000283d8 + 0x7d48;
    (*(code *)PTR___assert_0002840c)(param_1,param_2,0x148,PTR_000283d8 + 0x7f08);
  }
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  (*(code *)PTR_rts_queue_rm_00028500)(param_1,param_2);
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
  return;
}



// ==== rts_queue_insert @ 00015540 size=236

undefined4
rts_queue_insert(undefined *param_1,undefined *param_2,undefined4 param_3,undefined *param_4)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7ef4,0x153,param_1);
    param_3 = 0x153;
    param_2 = PTR_000283d8 + 0x7d48;
    param_4 = PTR_000283d8 + 0x7ee0;
    (*(code *)PTR___assert_0002840c)(param_1);
  }
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  (*(code *)(PTR_000283d8 + 0x4a9c))(param_1);
  uVar1 = (*(code *)(PTR_000283d8 + 0x5004))(param_1,param_2,param_3,param_4);
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
  return uVar1;
}



// ==== rts_queue_insert_at @ 0001562c size=312

undefined4 rts_queue_insert_at(undefined *param_1,undefined *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7ecc,0x161,param_1);
    param_3 = 0x161;
    param_2 = PTR_000283d8 + 0x7d48;
    (*(code *)PTR___assert_0002840c)(param_1,param_2,0x161,PTR_000283d8 + 0x7eb8);
  }
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  (*(code *)(PTR_000283d8 + 0x4a9c))(param_1);
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (param_3 < *(int *)(param_1 + 0x2c)) {
    uVar1 = (*(code *)(PTR_000283d8 + 0x4f28))(param_1,param_3);
    uVar1 = (*(code *)(PTR_000283d8 + 0x5004))(param_1,param_2,uVar1,1);
  }
  else {
    uVar1 = (*(code *)(PTR_000283d8 + 0x4c1c))(param_1,param_2);
  }
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
  return uVar1;
}



// ==== rts_queue_swap @ 00015764 size=264

undefined4 rts_queue_swap(undefined *param_1,undefined *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7ea8,0x176,param_1);
    param_3 = 0x176;
    param_2 = PTR_000283d8 + 0x7d48;
    (*(code *)PTR___assert_0002840c)(param_1,param_2,0x176,PTR_000283d8 + 0x7e98);
  }
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  puVar1 = (undefined4 *)(*(code *)PTR___find_node_000284c0)(param_1,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(*(code *)PTR___find_node_000284c0)(param_1,param_3);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar1 = param_3;
      *puVar2 = param_2;
      uVar3 = 0;
      goto LAB_00015840;
    }
  }
  uVar3 = 0xfffffff1;
LAB_00015840:
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
  return uVar3;
}



// ==== rts_queue_check @ 0001586c size=200

undefined4 rts_queue_check(undefined *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7e88,0x183,param_1);
    param_2 = PTR_000283d8 + 0x7d48;
    (*(code *)PTR___assert_0002840c)(param_1,param_2,0x183,PTR_000283d8 + 0x7e78);
  }
  uVar2 = 0xfffffff1;
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  iVar1 = (*(code *)PTR___find_node_000284c0)(param_1,param_2);
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
  return uVar2;
}



// ==== rts_queue_clear @ 00015934 size=236

void rts_queue_clear(undefined *param_1,code *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7e68,399,param_1);
    param_2 = (code *)(PTR_000283d8 + 0x7d48);
    (*(code *)PTR___assert_0002840c)(param_1,param_2,399,PTR_000283d8 + 0x7e58);
  }
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  puVar1 = PTR_000283d8;
  while( true ) {
    iVar2 = (*(code *)PTR_rts_queue_empty_000284d8)(param_1);
    if (iVar2 != 0) break;
    uVar3 = (*(code *)(puVar1 + 0x4e8c))();
    if (param_2 != (code *)0x0) {
      (*param_2)(uVar3);
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
  return;
}



// ==== rts_destroy_queue @ 00015a20 size=352

undefined4 rts_destroy_queue(undefined *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7e44,0x198,param_1);
    (*(code *)PTR___assert_0002840c)(param_1,PTR_000283d8 + 0x7d48,0x198,PTR_000283d8 + 0x7e30);
  }
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  puVar3 = PTR_000283d8;
  while( true ) {
    iVar6 = (*(code *)PTR_rts_queue_empty_000284d8)(param_1);
    puVar4 = PTR_000283d8;
    if (iVar6 != 0) break;
    (*(code *)(puVar3 + 0x4e8c))(param_1);
  }
  piVar5 = (int *)**(int **)(param_1 + 0x20);
  piVar2 = *(int **)(param_1 + 0x20);
  while( true ) {
    piVar1 = piVar5;
    if (piVar2 == (int *)(param_1 + 0x20)) break;
    (*(code *)(puVar4 + 0x4a80))();
    if (piVar2 + -1 != (int *)0x0) {
      (*(code *)PTR_rts_free_00028434)(piVar2 + -1);
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    piVar5 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
  (*(code *)PTR_pthread_mutex_destroy_00028440)(param_1);
  return 0;
}



// ==== rts_queue_destroy @ 00015b80 size=92

void rts_queue_destroy(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_destroy_queue_00028448)();
    (*(code *)PTR_rts_free_00028434)(param_1);
    return;
  }
  return;
}



// ==== rts_queue_lock @ 00015bdc size=132

void rts_queue_lock(int param_1)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_pthread_mutex_lock_0002843c;
  if (param_1 == 0) {
    puVar1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7e20,0x1b0,puVar1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_0002840c;
    (*(code *)PTR___assert_0002840c)(puVar1,PTR_000283d8 + 0x7d48,0x1b0,PTR_000283d8 + 0x7e10);
  }
                    /* WARNING: Could not recover jumptable at 0x00015c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ==== rts_queue_unlock @ 00015c60 size=132

void rts_queue_unlock(int param_1)

{
  undefined *puVar1;
  code *pcVar2;
  
  pcVar2 = (code *)PTR_pthread_mutex_unlock_0002846c;
  if (param_1 == 0) {
    puVar1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7dfc,0x1b7,puVar1);
    pcVar2 = (code *)PTR___assert_0002840c;
    (*(code *)PTR___assert_0002840c)(puVar1,PTR_000283d8 + 0x7d48,0x1b7,PTR_000283d8 + 0x7de8);
  }
  (*pcVar2)();
  return;
}



// ==== rts_queue_count @ 00015ce4 size=124

undefined4 rts_queue_count(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7dd8,0x1be,param_1);
    (*(code *)PTR___assert_0002840c)(param_1,PTR_000283d8 + 0x7d48,0x1be,PTR_000283d8 + 0x7dc8);
  }
  return *(undefined4 *)(param_1 + 0x2c);
}



// ==== rts_queue_enumerate @ 00015d60 size=136

void rts_queue_enumerate(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_000283d8;
  if (param_1 == 0) {
    puVar1 = PTR_000283d8 + 0x7d44;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_000283d8 + 0x7db4,0x1c5,puVar1);
    puVar2 = PTR___assert_0002840c;
    (*(code *)PTR___assert_0002840c)(puVar1,PTR_000283d8 + 0x7d48,0x1c5,PTR_000283d8 + 0x7da0);
  }
                    /* WARNING: Could not recover jumptable at 0x00015de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(puVar2 + 0x4f28))();
  return;
}



// ==== rts_pthreadpool_destroy @ 000160b0 size=444

void rts_pthreadpool_destroy(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x70) == 0)) {
    (*(code *)PTR_pthread_mutex_lock_0002843c)();
    puVar1 = PTR_pthread_cond_broadcast_000284b4;
    *(undefined4 *)(param_1 + 0x70) = 1;
    (*(code *)puVar1)(param_1 + 0x18);
    (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
    for (iVar3 = 0;
        (*(int *)(param_1 + 0x68) != 0 &&
        (iVar4 = (*(code *)PTR_rts_queue_count_00028468)(), iVar3 < iVar4)); iVar3 = iVar3 + 1) {
      uVar2 = (*(code *)PTR_rts_queue_enumerate_000284c8)(*(undefined4 *)(param_1 + 0x68),iVar3);
      (*(code *)PTR___join_thread_00028410)(uVar2);
    }
    iVar4 = 7;
    (*(code *)PTR_rts_queue_clear_000284cc)(*(undefined4 *)(param_1 + 0x68),0);
    (*(code *)PTR_rts_queue_destroy_000284ec)(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
    iVar3 = param_1;
    do {
      iVar4 = iVar4 + -1;
      (*(code *)PTR_rts_queue_clear_000284cc)
                (*(undefined4 *)(iVar3 + 0x48),PTR___delete_task_0002841c);
      (*(code *)PTR_rts_queue_destroy_000284ec)(*(undefined4 *)(iVar3 + 0x48));
      *(undefined4 *)(iVar3 + 0x48) = 0;
      iVar3 = iVar3 + 4;
    } while (iVar4 != 0);
    if (*(int *)(param_1 + 100) != 0) {
      (*(code *)PTR_rts_queue_clear_000284cc)(*(int *)(param_1 + 100),PTR___delete_task_0002841c);
      (*(code *)PTR_rts_queue_destroy_000284ec)(*(undefined4 *)(param_1 + 100));
      *(undefined4 *)(param_1 + 100) = 0;
    }
    (*(code *)PTR_pthread_cond_destroy_00028424)(param_1 + 0x18);
    (*(code *)PTR_pthread_mutex_destroy_00028440)(param_1);
    (*(code *)PTR_rts_free_00028434)(param_1);
    return;
  }
  return;
}



// ==== rts_pthreadpool_add_task_ex @ 0001626c size=416

undefined4
rts_pthreadpool_add_task_ex(int param_1,int param_2,int param_3,undefined *param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int unaff_s1;
  
  if (param_1 == 0) {
    param_3 = 0x131;
    puVar3 = PTR_DAT_000283dc + -0x7fd0;
    puVar5 = PTR_DAT_000283dc + -0x7fc8;
    param_2 = unaff_s1;
  }
  else {
    if (param_2 != 0) goto LAB_000162e8;
    param_3 = 0x132;
    puVar3 = PTR_DAT_000283dc + -0x7f6c;
    puVar5 = PTR_DAT_000283dc + -0x7fc8;
  }
  while( true ) {
    param_4 = PTR_DAT_000283dc + -0x7e80;
    (*(code *)PTR___assert_0002840c)(puVar3,puVar5);
LAB_000162e8:
    if (param_5 < 7) break;
    param_3 = 0x133;
    puVar3 = PTR_DAT_000283dc + -0x7f64;
    puVar5 = PTR_DAT_000283dc + -0x7fc8;
  }
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  if ((*(int *)(param_1 + 0x6c) < 1) ||
     (iVar1 = (*(code *)PTR_rts_queue_count_00028468)
                        (*(undefined4 *)(param_1 + (param_5 + 0x12) * 4)),
     iVar1 < *(int *)(param_1 + 0x6c))) {
    if ((*(int *)(param_1 + 100) == 0) ||
       (piVar2 = (int *)(*(code *)PTR_rts_queue_pop_000283ec)(), piVar2 == (int *)0x0)) {
      piVar2 = (int *)(*(code *)PTR___new_task_00028510)(param_2,param_3);
      if (piVar2 == (int *)0x0) goto LAB_000163e0;
    }
    else {
      *piVar2 = param_2;
      piVar2[1] = param_3;
      piVar2[2] = 1;
    }
    puVar3 = PTR_rts_queue_push_back_00028454;
    uVar4 = *(undefined4 *)(param_1 + (param_5 + 0x12) * 4);
    piVar2[3] = (int)param_4;
    (*(code *)puVar3)(uVar4,piVar2);
    (*(code *)PTR_pthread_cond_signal_00028528)(param_1 + 0x18);
  }
LAB_000163e0:
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
  return 0;
}



// ==== rts_pthreadpool_add_task @ 0001640c size=56

void rts_pthreadpool_add_task(void)

{
  (*(code *)PTR_rts_pthreadpool_add_task_ex_00028400)();
  return;
}



// ==== rts_thread_count @ 00016444 size=84

void rts_thread_count(undefined *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_rts_queue_count_00028468;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_000283dc + -0x7fd0;
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_0002840c;
    (*(code *)PTR___assert_0002840c)
              (param_1,PTR_DAT_000283dc + -0x7fc8,0x144,PTR_DAT_000283dc + -0x7e94);
  }
                    /* WARNING: Could not recover jumptable at 0x00016490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0x68));
  return;
}



// ==== rts_task_count @ 00016498 size=160

int rts_task_count(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (param_1 == 0) {
    (*(code *)PTR___assert_0002840c)
              (PTR_DAT_000283dc + -0x7fd0,PTR_DAT_000283dc + -0x7fc8,0x14e,
               PTR_DAT_000283dc + -0x7ea4);
  }
  do {
    iVar3 = param_1 + iVar1;
    iVar1 = iVar1 + 4;
    iVar3 = (*(code *)PTR_rts_queue_count_00028468)(*(undefined4 *)(iVar3 + 0x48));
    iVar2 = iVar2 + iVar3;
  } while (iVar1 != 0x1c);
  return iVar2;
}



// ==== rts_pthreadpool_set_limit @ 00016538 size=84

undefined4 rts_pthreadpool_set_limit(undefined *param_1,undefined *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(0 < (int)param_2);
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_000283dc + -0x7fd0;
    param_2 = PTR_DAT_000283dc + -0x7fc8;
    (*(code *)PTR___assert_0002840c)(param_1,param_2,0x159,PTR_DAT_000283dc + -0x7ec0);
  }
  if (uVar1 == 0) {
    param_2 = (undefined *)0x0;
  }
  *(undefined **)(param_1 + 0x6c) = param_2;
  return 0;
}



// ==== rts_pthreadpool_init @ 0001658c size=684

int rts_pthreadpool_init(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_28 [3];
  
  puVar1 = PTR_DAT_000283dc;
  if (param_1 < 1) {
    param_1 = 8;
  }
  else if (0x40 < param_1) {
    param_1 = 0x40;
  }
  iVar3 = (*(code *)PTR___rts_calloc_000284f8)(1,0x78,PTR_DAT_000283dc + -0x7e64,0xae);
  if (iVar3 != 0) {
    (*(code *)PTR_pthread_mutex_init_00028414)(iVar3,0);
    iVar6 = 0;
    (*(code *)PTR_pthread_cond_init_00028490)(iVar3 + 0x18,0);
    do {
      iVar4 = (*(code *)PTR_rts_queue_init_000283f8)();
      *(int *)(iVar3 + iVar6 + 0x48) = iVar4;
      if (iVar4 == 0) goto LAB_00016654;
      iVar6 = iVar6 + 4;
    } while (iVar6 != 0x1c);
    iVar6 = 8;
    iVar4 = (*(code *)PTR_rts_queue_init_000283f8)();
    *(int *)(iVar3 + 100) = iVar4;
    while (iVar4 != 0) {
      iVar4 = (*(code *)PTR___rts_calloc_000284f8)(1,0x10,puVar1 + -0x7e64,0xbd);
      puVar2 = PTR_rts_queue_push_back_00028454;
      if (iVar4 != 0) {
        uVar5 = *(undefined4 *)(iVar3 + 100);
        *(undefined4 *)(iVar4 + 8) = 1;
        (*(code *)puVar2)(uVar5,iVar4);
      }
      iVar6 = iVar6 + -1;
      iVar4 = iVar6;
    }
    iVar6 = (*(code *)PTR_rts_queue_init_000283f8)();
    *(int *)(iVar3 + 0x68) = iVar6;
    if (iVar6 != 0) {
      iVar6 = 0;
      do {
        iVar4 = (*(code *)PTR_pthread_create_00028520)(local_28,0,PTR_thread_run_0002848c,iVar3);
        if (iVar4 == 0) {
          (*(code *)PTR_rts_queue_push_back_00028454)(*(undefined4 *)(iVar3 + 0x68),local_28[0]);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1);
      iVar6 = (*(code *)PTR_rts_queue_empty_000284d8)(*(undefined4 *)(iVar3 + 0x68));
      if (iVar6 == 0) {
        (*(code *)PTR_rts_pthreadpool_set_limit_00028428)(iVar3,0);
        *(undefined4 *)(iVar3 + 0x70) = 0;
        return iVar3;
      }
    }
LAB_00016654:
    iVar6 = 0;
    do {
      if (*(int *)(iVar3 + iVar6 + 0x48) != 0) {
        (*(code *)PTR_rts_queue_destroy_000284ec)();
        *(undefined4 *)(iVar3 + iVar6 + 0x48) = 0;
      }
      iVar6 = iVar6 + 4;
    } while (iVar6 != 0x1c);
    if (*(int *)(iVar3 + 100) != 0) {
      (*(code *)PTR_rts_queue_clear_000284cc)(*(int *)(iVar3 + 100),PTR___delete_task_0002841c);
      (*(code *)PTR_rts_queue_destroy_000284ec)(*(undefined4 *)(iVar3 + 100));
      *(undefined4 *)(iVar3 + 100) = 0;
    }
    if (*(int *)(iVar3 + 0x68) != 0) {
      (*(code *)PTR_rts_queue_destroy_000284ec)();
      *(undefined4 *)(iVar3 + 0x68) = 0;
    }
    (*(code *)PTR_pthread_cond_destroy_00028424)(iVar3 + 0x18);
    (*(code *)PTR_pthread_mutex_destroy_00028440)(iVar3);
    (*(code *)PTR_rts_free_00028434)(iVar3);
  }
  return 0;
}



// ==== rts_pthreadpool_del_task @ 00016838 size=472

undefined4 rts_pthreadpool_del_task(int param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0) {
    puVar4 = PTR_DAT_000283dc + -0x7fd0;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_DAT_000283dc + -0x7edc,0x167,puVar4)
    ;
    param_3 = 0x167;
    param_2 = PTR_DAT_000283dc + -0x7fc8;
    (*(code *)PTR___assert_0002840c)(puVar4,param_2,0x167,PTR_DAT_000283dc + -0x7ef8);
  }
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  iVar6 = param_1;
  do {
    iVar5 = *(int *)(iVar6 + 0x48);
    if (iVar5 != 0) {
      iVar7 = 0;
      iVar1 = (*(code *)PTR_rts_queue_empty_000284d8)(iVar5);
      if (iVar1 == 0) {
        while (iVar1 = (*(code *)PTR_rts_queue_count_00028468)(iVar5), iVar7 < iVar1) {
          puVar2 = (undefined4 *)(*(code *)PTR_rts_queue_enumerate_000284c8)(iVar5,iVar7);
          if (((param_2 == (undefined *)0x0) || (param_2 == (undefined *)*puVar2)) &&
             ((param_3 == 0 || (param_3 == puVar2[1])))) {
            (*(code *)PTR_rts_queue_rm_00028500)(iVar5,puVar2);
            if (puVar2[1] != 0) {
              (*(code *)puVar2[3])();
            }
            puVar2[1] = 0;
            puVar2[3] = 0;
            puVar4 = PTR_rts_queue_push_back_00028454;
            if (puVar2[2] == 0) {
              (*(code *)PTR_rts_free_00028434)(puVar2);
            }
            else {
              uVar3 = *(undefined4 *)(param_1 + 100);
              *puVar2 = 0;
              (*(code *)puVar4)(uVar3,puVar2);
            }
          }
          else {
            iVar7 = iVar7 + 1;
          }
        }
      }
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != param_1 + 0x1c);
  (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
  return 0;
}



// ==== rts_pthreadpool_del_tasks @ 00016a10 size=524

undefined4
rts_pthreadpool_del_tasks
          (undefined *param_1,undefined *param_2,undefined4 param_3,code *param_4,code *param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  code *pcVar8;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_000283dc + -0x7fd0;
    (*(code *)PTR_rts_log_00028488)(4,PTR_000283d8 + 0x7370,PTR_DAT_000283dc + -0x7f14,400,param_1);
    param_3 = 400;
    param_2 = PTR_DAT_000283dc + -0x7fc8;
    param_4 = (code *)(PTR_DAT_000283dc + -0x7f30);
    (*(code *)PTR___assert_0002840c)(param_1,param_2,400);
  }
  (*(code *)PTR_pthread_mutex_lock_0002843c)();
  puVar6 = param_1;
  do {
    iVar5 = *(int *)(puVar6 + 0x48);
    if (iVar5 != 0) {
      iVar7 = 0;
      iVar2 = (*(code *)PTR_rts_queue_empty_000284d8)(iVar5);
      if (iVar2 == 0) {
        while (iVar2 = (*(code *)PTR_rts_queue_count_00028468)(iVar5), iVar7 < iVar2) {
          puVar3 = (undefined4 *)(*(code *)PTR_rts_queue_enumerate_000284c8)(iVar5,iVar7);
          if (((param_2 == (undefined *)0x0) || (param_2 == (undefined *)*puVar3)) &&
             (iVar2 = (*param_4)(puVar3[1],param_3), iVar2 != 0)) {
            (*(code *)PTR_rts_queue_rm_00028500)(iVar5,puVar3);
            if (param_5 == (code *)0x0) {
              if (puVar3[1] != 0) {
                pcVar8 = (code *)puVar3[3];
                goto LAB_00016bc8;
              }
LAB_00016bd4:
              iVar2 = puVar3[2];
            }
            else {
              pcVar8 = param_5;
              if (puVar3[1] != 0) {
LAB_00016bc8:
                (*pcVar8)();
                goto LAB_00016bd4;
              }
              iVar2 = puVar3[2];
            }
            puVar3[1] = 0;
            puVar3[3] = 0;
            puVar1 = PTR_rts_queue_push_back_00028454;
            if (iVar2 == 0) {
              (*(code *)PTR_rts_free_00028434)(puVar3);
            }
            else {
              uVar4 = *(undefined4 *)(param_1 + 100);
              *puVar3 = 0;
              puVar3[1] = 0;
              (*(code *)puVar1)(uVar4,puVar3);
            }
          }
          else {
            iVar7 = iVar7 + 1;
          }
        }
      }
    }
    puVar6 = puVar6 + 4;
    if (puVar6 == param_1 + 0x1c) {
      (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
      return 0;
    }
  } while( true );
}



// ==== __rts_malloc @ 00016c30 size=96

undefined4 __rts_malloc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_malloc_000284e0)();
  (*(code *)PTR_rts_log_00028488)(8,PTR_DAT_000283dc + -0x7e40,uVar1,param_1);
  return uVar1;
}



// ==== rts_free @ 00016c90 size=104

void rts_free(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_log_00028488)(8,PTR_DAT_000283dc + -0x7e2c,param_1);
                    /* WARNING: Could not recover jumptable at 0x00016ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_000283e8)(param_1);
    return;
  }
  return;
}



// ==== __rts_calloc @ 00016cf8 size=104

undefined4 __rts_calloc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_calloc_000284c4)(1,param_1 * param_2);
  (*(code *)PTR_rts_log_00028488)(8,PTR_DAT_000283dc + -0x7e40,uVar1,param_1 * param_2);
  return uVar1;
}



// ==== __rts_realloc @ 00016d60 size=152

int __rts_realloc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    (*(code *)PTR_rts_log_00028488)(8,PTR_DAT_000283dc + -0x7e2c,param_1);
  }
  iVar1 = (*(code *)PTR_realloc_00028498)(param_1,param_2);
  if (iVar1 != 0) {
    (*(code *)PTR_rts_log_00028488)(8,PTR_DAT_000283dc + -0x7e40,iVar1,param_2);
  }
  return iVar1;
}



// ==== rts_get_bit_per_pixel @ 00016e00 size=224

undefined4 rts_get_bit_per_pixel(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x103) {
    return 8;
  }
  if (param_1 < 0x104) {
    if (param_1 == 3) {
      return 0x10;
    }
    if (param_1 < 4) {
      if (param_1 == 1) {
        return 0xc;
      }
      uVar1 = 0x10;
      iVar2 = 2;
    }
    else {
      if (param_1 == 0x101) {
        return 2;
      }
      if (0x101 < param_1) {
        return 4;
      }
      uVar1 = 1;
      iVar2 = 0x100;
    }
  }
  else {
    if (param_1 == 0x241) {
      return 8;
    }
    if (param_1 < 0x242) {
      if (param_1 == 0x201) {
        return 0x20;
      }
      if (param_1 == 0x240) {
        return 4;
      }
      if (param_1 == 0x200) {
        return 0x18;
      }
      return 0xffffffe3;
    }
    if (param_1 == 0x243) {
      return 0x10;
    }
    if (param_1 < 0x243) {
      return 0x10;
    }
    uVar1 = 0x20;
    iVar2 = 0x244;
  }
  if (param_1 != iVar2) {
    return 0xffffffe3;
  }
  return uVar1;
}



// ==== rts_cvrt_pix_fmt_to_v4l2 @ 00016ee0 size=144

int rts_cvrt_pix_fmt_to_v4l2(uint param_1)

{
  int iVar1;
  
  if (param_1 == 3) {
    return 0x56595559;
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      iVar1 = 0x32310000;
    }
    else {
      iVar1 = 0x36310000;
      if (param_1 != 2) {
        return 0;
      }
    }
    return iVar1 + 0x564e;
  }
  if (param_1 == 0x300) {
    return 0x47504a4d;
  }
  if (param_1 != 0x301) {
    if (param_1 != 4) {
      return 0;
    }
    return 0x32314d59;
  }
  return 0x34363248;
}



// ==== rts_cvrt_pix_fmt_from_v4l2 @ 00016f70 size=128

undefined4 rts_cvrt_pix_fmt_from_v4l2(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == 0x34363248) {
    uVar1 = 0x301;
  }
  else {
    if (param_1 < 0x34363249) {
      if (param_1 == 0x32314d59) {
        return 4;
      }
      uVar2 = 0x3231564e;
      uVar1 = 1;
    }
    else {
      if (param_1 == 0x47504a4d) {
        return 0x300;
      }
      if (param_1 == 0x56595559) {
        return 3;
      }
      uVar1 = 2;
      uVar2 = 0x3631564e;
    }
    if (param_1 != uVar2) {
      return 0;
    }
  }
  return uVar1;
}



