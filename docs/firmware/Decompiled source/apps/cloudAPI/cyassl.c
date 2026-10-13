/* cloudAPI — "cyassl" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloudAPI.h"

// ==== CYASSL_MSG @ 00431d20 size=108

void CYASSL_MSG(undefined4 param_1)

{
  if (*(int *)(PTR_clock_gettime_004be64c + -0x137c) != 0) {
    (*(code *)(PTR_LAB_004be624 + 0x1c6c))(1,param_1);
  }
  return;
}



// ==== CyaSSL_Malloc @ 00432020 size=160

undefined4 CyaSSL_Malloc(undefined4 param_1)

{
  undefined4 local_10;
  
  if (*(int *)(PTR_clock_gettime_004be64c + -0x1370) == 0) {
    local_10 = (*(code *)PTR_malloc_004bebd4)(param_1);
  }
  else {
    local_10 = (**(code **)(PTR_clock_gettime_004be64c + -0x1370))(param_1);
  }
  return local_10;
}



// ==== CyaSSL_Free @ 004320c0 size=136

void CyaSSL_Free(undefined4 param_1)

{
  if (*(int *)(PTR_clock_gettime_004be64c + -0x136c) == 0) {
    (*(code *)PTR_free_004beb44)(param_1);
  }
  else {
    (**(code **)(PTR_clock_gettime_004be64c + -0x136c))(param_1);
  }
  return;
}



// ==== CyaSSL_Realloc @ 00432148 size=168

undefined4 CyaSSL_Realloc(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  
  if (*(int *)(PTR_clock_gettime_004be64c + -0x1368) == 0) {
    local_10 = (*(code *)PTR_realloc_004bebb0)(param_1,param_2);
  }
  else {
    local_10 = (**(code **)(PTR_clock_gettime_004be64c + -0x1368))(param_1,param_2);
  }
  return local_10;
}



// ==== CyaSSL_CTX_new @ 00432344 size=408

int CyaSSL_CTX_new(int param_1)

{
  int iVar1;
  int local_10;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x128);
  if (*(int *)(PTR_clock_gettime_004be64c + -0x1360) == 0) {
    (*(code *)PTR_CyaSSL_Init_004be654)();
  }
  if (param_1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = (*(code *)PTR_CyaSSL_Malloc_004be634)(0x16c);
    if (local_10 == 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x148);
      if (param_1 != 0) {
        (*(code *)PTR_CyaSSL_Free_004be640)(param_1);
      }
    }
    else {
      iVar1 = (*(code *)PTR_InitSSL_Ctx_004be658)(local_10,param_1);
      if (iVar1 < 0) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x138);
        (*(code *)PTR_CyaSSL_CTX_free_004be65c)(local_10);
        local_10 = 0;
      }
    }
    (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x128,0);
  }
  return local_10;
}



// ==== CyaSSL_CTX_free @ 004324dc size=156

void CyaSSL_CTX_free(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x168);
  if (param_1 != 0) {
    (*(code *)PTR_FreeSSL_Ctx_004be664)(param_1);
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x168,0);
  return;
}



// ==== CyaSSL_free @ 00432688 size=156

void CyaSSL_free(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x180);
  if (param_1 != 0) {
    (*(code *)PTR_FreeSSL_004be66c)(param_1);
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x180,0);
  return;
}



// ==== CyaSSL_get_using_nonblock @ 00432a88 size=140

undefined1 CyaSSL_get_using_nonblock(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1a4);
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1a4,*(undefined1 *)(param_1 + 0x4ee));
  return *(undefined1 *)(param_1 + 0x4ee);
}



// ==== CyaSSL_dtls @ 00432b14 size=48

undefined1 CyaSSL_dtls(int param_1)

{
  return *(undefined1 *)(param_1 + 0x4d7);
}



// ==== CyaSSL_set_using_nonblock @ 00432b44 size=116

void CyaSSL_set_using_nonblock(int param_1,int param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1c0);
  *(bool *)(param_1 + 0x4ee) = param_2 != 0;
  return;
}



// ==== CyaSSL_negotiate @ 00432c20 size=228

undefined4 CyaSSL_negotiate(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1dc);
  if (*(char *)(param_1 + 0x4cc) == '\0') {
    local_10 = (*(code *)PTR_CyaSSL_accept_004be678)(param_1);
  }
  if (*(char *)(param_1 + 0x4cc) == '\x01') {
    local_10 = (*(code *)PTR_CyaSSL_connect_004be67c)(param_1);
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1dc,local_10);
  return local_10;
}



// ==== CyaSSL_write @ 00432d2c size=272

int CyaSSL_write(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1f0);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 < 0)) {
    iVar2 = -0xad;
  }
  else {
    puVar1 = (undefined4 *)(*(code *)PTR___errno_location_004beb68)();
    *puVar1 = 0;
    iVar2 = (*(code *)PTR_SendData_004be680)(param_1,param_2,param_3);
    (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1f0,iVar2);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}



// ==== CyaSSL_read @ 0043300c size=144

undefined4 CyaSSL_read(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x224);
  uVar1 = (*(code *)(PTR_LAB_004be624 + 0x2e3c))(param_1,param_2,param_3,0);
  return uVar1;
}



// ==== CyaSSL_get_error @ 00433428 size=288

undefined4 CyaSSL_get_error(int param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x28c);
  if (param_2 < 1) {
    if (param_1 == 0) {
      uVar1 = 0xffffff53;
    }
    else {
      (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x28c,*(undefined4 *)(param_1 + 4));
      if (*(int *)(param_1 + 4) == -0x143) {
        uVar1 = 2;
      }
      else if (*(int *)(param_1 + 4) == -0x147) {
        uVar1 = 3;
      }
      else if (*(int *)(param_1 + 4) == -0x157) {
        uVar1 = 6;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 4);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ==== CyaSSL_ERR_error_string @ 004336b8 size=160

int CyaSSL_ERR_error_string(undefined4 param_1,int param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 700);
  if (param_2 == 0) {
    param_2 = *(int *)(PTR_clock_gettime_004be64c + -0x1aa8);
  }
  else {
    (*(code *)PTR_SetErrorString_004be698)(param_1,param_2);
  }
  return param_2;
}



// ==== CyaSSL_ERR_error_string_n @ 00433758 size=284

void CyaSSL_ERR_error_string_n(undefined4 param_1,int param_2,uint param_3)

{
  undefined1 auStack_58 [80];
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x2d0);
  if (param_3 < 0x50) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2ec);
    if (param_3 != 0) {
      (*(code *)PTR_CyaSSL_ERR_error_string_004be69c)(param_1,auStack_58);
      (*(code *)PTR_memcpy_004bebdc)(param_2,auStack_58,param_3 - 1);
      *(undefined1 *)(param_2 + (param_3 - 1)) = 0;
    }
  }
  else {
    (*(code *)PTR_CyaSSL_ERR_error_string_004be69c)(param_1,param_2);
  }
  return;
}



// ==== CyaSSL_GetMacSecret @ 00433930 size=152

int CyaSSL_GetMacSecret(int param_1,int param_2)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if (((*(char *)(param_1 + 0x4cc) == '\x01') && (param_2 == 0)) ||
          ((*(char *)(param_1 + 0x4cc) == '\0' && (param_2 != 0)))) {
    param_1 = param_1 + 0x40;
  }
  else {
    param_1 = param_1 + 0x80;
  }
  return param_1;
}



// ==== CyaSSL_CertManagerNew @ 004339c8 size=276

int CyaSSL_CertManagerNew(void)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x310);
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(0x70);
  if (iVar1 != 0) {
    (*(code *)PTR_memset_004beb98)(iVar1,0,0x70);
    iVar2 = (*(code *)PTR_InitMutex_004be6a4)(iVar1 + 0x2c);
    if (iVar2 != 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x328);
      (*(code *)PTR_CyaSSL_CertManagerFree_004be6a8)(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== CyaSSL_CertManagerFree @ 00433adc size=212

void CyaSSL_CertManagerFree(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x338);
  if (param_1 != 0) {
    (*(code *)PTR_FreeSignerTable_004be6ac)(param_1,0xb,0);
    (*(code *)PTR_FreeMutex_004be6b0)(param_1 + 0x2c);
    if (param_1 != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(param_1);
    }
  }
  return;
}



// ==== CyaSSL_CertManagerUnloadCAs @ 00433bb0 size=244

undefined4 CyaSSL_CertManagerUnloadCAs(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x350);
  if (param_1 == 0) {
    uVar2 = 0xffffff53;
  }
  else {
    iVar1 = (*(code *)PTR_LockMutex_004be6b4)(param_1 + 0x2c);
    if (iVar1 == 0) {
      (*(code *)PTR_FreeSignerTable_004be6ac)(param_1,0xb,0);
      (*(code *)PTR_UnLockMutex_004be6b8)(param_1 + 0x2c);
      uVar2 = 1;
    }
    else {
      uVar2 = 0xffffff96;
    }
  }
  return uVar2;
}



// ==== CyaSSL_CertPemToDer @ 00433ca4 size=556

uint CyaSSL_CertPemToDer(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  uint local_a0;
  undefined4 local_98;
  uint local_94;
  int local_90;
  undefined1 auStack_8c [116];
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  
  local_98 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x36c);
  if (((param_1 == 0) || (param_3 == 0)) || ((int)param_4 < 1)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x380);
    local_a0 = 0xffffff53;
  }
  else if (((param_5 == 0) || (param_5 == 4)) || (param_5 == 6)) {
    local_14 = 0;
    local_10 = 0;
    local_18 = 0;
    local_90 = 0;
    local_a0 = (*(code *)PTR_FUN_004be6bc)(param_1,param_2,param_5,&local_94,0,auStack_8c,&local_98)
    ;
    if ((int)local_a0 < 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3a4);
    }
    else if (param_4 < local_94) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3b4);
      local_a0 = 0xffffff53;
    }
    else {
      (*(code *)PTR_memcpy_004bebdc)(param_3,local_90,local_94);
      local_a0 = local_94;
    }
    if (local_90 != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(local_90);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x394);
    local_a0 = 0xffffff53;
  }
  return local_a0;
}



// ==== CyaSSL_KeyPemToDer @ 00433fa4 size=672

uint CyaSSL_KeyPemToDer(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  uint local_a0;
  undefined4 local_98;
  uint local_94;
  int local_90;
  undefined1 auStack_8c [116];
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  
  local_98 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x3c4);
  if (((param_1 == 0) || (param_3 == 0)) || ((int)param_4 < 1)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x380);
    local_a0 = 0xffffff53;
  }
  else {
    local_14 = 0;
    local_10 = 0;
    local_18 = 0;
    local_90 = 0;
    if (param_5 != 0) {
      uVar1 = (*(code *)PTR_CyaSSLv23_client_method_004be6c0)();
      local_10 = (*(code *)PTR_CyaSSL_CTX_new_004be6c4)(uVar1);
      if (local_10 == 0) {
        return 0xffffff83;
      }
      (*(code *)PTR_CyaSSL_CTX_set_default_passwd_cb_004be6c8)(local_10,PTR_LAB_004be624 + 0x3ed0);
      (*(code *)PTR_CyaSSL_CTX_set_default_passwd_cb_userdata_004be6cc)(local_10,param_5);
    }
    local_a0 = (*(code *)PTR_FUN_004be6bc)(param_1,param_2,1,&local_94,0,auStack_8c,&local_98);
    if (local_10 != 0) {
      (*(code *)PTR_CyaSSL_CTX_free_004be65c)(local_10);
    }
    if ((int)local_a0 < 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3a4);
    }
    else if (param_4 < local_94) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3b4);
      local_a0 = 0xffffff53;
    }
    else {
      (*(code *)PTR_memcpy_004bebdc)(param_3,local_90,local_94);
      local_a0 = local_94;
    }
    if (local_90 != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(local_90);
    }
  }
  return local_a0;
}



// ==== CyaSSL_ERR_print_errors_fp @ 00434244 size=156

void CyaSSL_ERR_print_errors_fp(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_60 [88];
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x3d8);
  (*(code *)PTR_SetErrorString_004be698)(param_2,auStack_60);
  (*(code *)PTR_fputs_004beb50)(auStack_60,param_1);
  return;
}



// ==== CyaSSL_SetMinVersion @ 00434470 size=344

undefined4 CyaSSL_SetMinVersion(int param_1,int param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x400);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x418);
    return 0xffffff53;
  }
  if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x4d1) = 1;
  }
  else if (param_2 < 2) {
    if (param_2 != 0) {
LAB_00434580:
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x418);
      return 0xffffff53;
    }
    *(undefined1 *)(param_1 + 0x4d1) = 0;
  }
  else if (param_2 == 2) {
    *(undefined1 *)(param_1 + 0x4d1) = 2;
  }
  else {
    if (param_2 != 3) goto LAB_00434580;
    *(undefined1 *)(param_1 + 0x4d1) = 3;
  }
  return 1;
}



// ==== CyaSSL_SetVersion @ 004345c8 size=644

undefined4 CyaSSL_SetVersion(int param_1,int param_2)

{
  undefined1 local_18;
  undefined1 local_17;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x430);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x418);
    return 0xffffff53;
  }
  if (param_2 == 1) {
    (*(code *)PTR_MakeTLSv1_004be6d4)(&local_18);
    *(undefined1 *)(param_1 + 8) = local_18;
    *(undefined1 *)(param_1 + 9) = local_17;
  }
  else if (param_2 < 2) {
    if (param_2 != 0) {
LAB_0043477c:
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x418);
      return 0xffffff53;
    }
    (*(code *)PTR_MakeSSLv3_004be6d0)(&local_18);
    *(undefined1 *)(param_1 + 8) = local_18;
    *(undefined1 *)(param_1 + 9) = local_17;
  }
  else if (param_2 == 2) {
    (*(code *)PTR_MakeTLSv1_1_004be6d8)(&local_18);
    *(undefined1 *)(param_1 + 8) = local_18;
    *(undefined1 *)(param_1 + 9) = local_17;
  }
  else {
    if (param_2 != 3) goto LAB_0043477c;
    (*(code *)PTR_MakeTLSv1_2_004be6dc)(&local_18);
    *(undefined1 *)(param_1 + 8) = local_18;
    *(undefined1 *)(param_1 + 9) = local_17;
  }
  (*(code *)PTR_InitSuites_004be6e0)
            (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),1,0,
             *(undefined1 *)(param_1 + 0x4e0),*(undefined1 *)(param_1 + 0x4e1),
             *(undefined1 *)(param_1 + 0x4e2),*(undefined1 *)(param_1 + 0x4e3),
             *(undefined1 *)(param_1 + 0x4cc));
  return 1;
}



// ==== CyaSSL_Init @ 004352d0 size=356

int CyaSSL_Init(void)

{
  int iVar1;
  int local_10;
  
  local_10 = 1;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x554);
  if (*(int *)(PTR_clock_gettime_004be64c + -0x1360) == 0) {
    iVar1 = (*(code *)PTR_InitMutex_004be6a4)(PTR_clock_gettime_004be64c + -0x3f8);
    if (iVar1 != 0) {
      local_10 = -0x6a;
    }
    iVar1 = (*(code *)PTR_InitMutex_004be6a4)(PTR_clock_gettime_004be64c + -0x135c);
    if (iVar1 != 0) {
      local_10 = -0x6a;
    }
  }
  if (local_10 == 1) {
    iVar1 = (*(code *)PTR_LockMutex_004be6b4)(PTR_clock_gettime_004be64c + -0x135c);
    if (iVar1 == 0) {
      *(int *)(PTR_clock_gettime_004be64c + -0x1360) =
           *(int *)(PTR_clock_gettime_004be64c + -0x1360) + 1;
      (*(code *)PTR_UnLockMutex_004be6b8)(PTR_clock_gettime_004be64c + -0x135c);
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x560);
      local_10 = -0x6a;
    }
  }
  return local_10;
}



// ==== CyaSSL_CertManagerVerifyBuffer @ 0043710c size=508

int CyaSSL_CertManagerVerifyBuffer(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_490;
  undefined4 local_488;
  int local_484;
  undefined1 auStack_480 [1012];
  undefined4 local_8c;
  undefined1 auStack_88 [116];
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  
  local_490 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xa04);
  local_484 = 0;
  local_488 = 0;
  if (param_4 == 1) {
    local_8c = 0;
    local_10 = 0;
    local_c = 0;
    local_14 = 0;
    local_490 = (*(code *)PTR_FUN_004be6bc)
                          (param_2,param_3,0,&local_488,*(undefined4 *)(param_1 + 0x48),auStack_88,
                           &local_8c);
    if (local_490 == 0) {
      (*(code *)PTR_InitDecodedCert_004be6e4)
                (auStack_480,local_484,local_488,*(undefined4 *)(param_1 + 0x48));
    }
  }
  else {
    (*(code *)PTR_InitDecodedCert_004be6e4)
              (auStack_480,param_2,param_3,*(undefined4 *)(param_1 + 0x48));
  }
  if (local_490 == 0) {
    local_490 = (*(code *)PTR_ParseCertRelative_004be738)(auStack_480,0,1,param_1);
  }
  (*(code *)PTR_FreeDecodedCert_004be6f8)(auStack_480);
  if (local_484 != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(local_484);
  }
  if (local_490 == 0) {
    local_490 = 1;
  }
  return local_490;
}



// ==== CyaSSL_CertManagerEnableOCSP @ 00437308 size=140

undefined4 CyaSSL_CertManagerEnableOCSP(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xa24);
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    uVar1 = 0xffffff52;
  }
  return uVar1;
}



// ==== CyaSSL_CertManagerDisableOCSP @ 00437394 size=128

undefined4 CyaSSL_CertManagerDisableOCSP(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xa44);
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    *(undefined1 *)(param_1 + 0x5c) = 0;
    uVar1 = 1;
  }
  return uVar1;
}



// ==== CyaSSL_CTX_load_verify_locations @ 00437744 size=752

int CyaSSL_CTX_load_verify_locations(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1b0;
  undefined1 auStack_1a4 [260];
  undefined1 auStack_a0 [20];
  uint local_8c;
  
  local_1b0 = 1;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xa80);
  if ((param_1 == 0) || ((param_2 == 0 && (param_3 == 0)))) {
    local_1b0 = 0;
  }
  else {
    if (param_2 != 0) {
      local_1b0 = (*(code *)PTR_FUN_004be73c)(param_1,param_2,1,4,0,0,0);
    }
    if ((local_1b0 == 1) && (param_3 != 0)) {
      iVar1 = (*(code *)PTR_opendir_004beb88)(param_3);
      if (iVar1 == 0) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0xaa4);
        local_1b0 = -0x166;
      }
      else {
        while ((local_1b0 == 1 && (iVar3 = (*(code *)PTR_readdir_004bebd0)(iVar1), iVar3 != 0))) {
          (*(code *)PTR_memset_004beb98)(auStack_1a4,0,0x100);
          (*(code *)PTR_strncpy_004bebb4)(auStack_1a4,param_3,0x7e);
          iVar2 = (*(code *)PTR_strlen_004beb5c)(auStack_1a4);
          auStack_1a4[iVar2] = 0x2f;
          auStack_1a4[iVar2 + 1] = 0;
          (*(code *)PTR_strncat_004beba8)(auStack_1a4,iVar3 + 0xb,0x80);
          iVar3 = (*(code *)PTR_stat_004beb78)(auStack_1a4,auStack_a0);
          if (iVar3 == 0) {
            if ((local_8c & 0x8000) != 0) {
              local_1b0 = (*(code *)PTR_FUN_004be73c)(param_1,auStack_1a4,1,4,0,0,0);
            }
          }
          else {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0xacc);
            local_1b0 = -0x166;
          }
        }
        (*(code *)PTR_closedir_004beb4c)(iVar1);
      }
    }
  }
  return local_1b0;
}



// ==== CyaSSL_CertManagerVerify @ 00437a34 size=700

undefined4 CyaSSL_CertManagerVerify(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_420;
  undefined1 *local_41c;
  undefined1 auStack_408 [1024];
  
  local_41c = auStack_408;
  bVar1 = false;
  iVar2 = (*(code *)PTR_fopen_004beb9c)(param_2,PTR_DAT_004be644 + 0xa64);
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xae0);
  if (iVar2 == 0) {
    local_420 = 0xfffffffc;
  }
  else {
    (*(code *)PTR_fseek_004bebc4)(iVar2,0,2);
    iVar3 = (*(code *)PTR_ftell_004beb94)(iVar2);
    (*(code *)PTR_rewind_004beb70)(iVar2);
    if ((iVar3 < 0x400001) && (-1 < iVar3)) {
      if (0x400 < iVar3) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0xa68);
        local_41c = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_004be634)(iVar3);
        if (local_41c == (undefined1 *)0x0) {
          (*(code *)PTR_fclose_004beb90)(iVar2);
          return 0xfffffffc;
        }
        bVar1 = true;
      }
      iVar4 = (*(code *)PTR_fread_004beba4)(local_41c,iVar3,1,iVar2);
      if (iVar4 < 0) {
        local_420 = 0xfffffffc;
      }
      else {
        local_420 = (*(code *)PTR_CyaSSL_CertManagerVerifyBuffer_004be740)
                              (param_1,local_41c,iVar3,param_3);
      }
      (*(code *)PTR_fclose_004beb90)(iVar2);
      if ((bVar1) && (local_41c != (undefined1 *)0x0)) {
        (*(code *)PTR_CyaSSL_Free_004be640)(local_41c);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0xafc);
      (*(code *)PTR_fclose_004beb90)(iVar2);
      local_420 = 0xfffffffc;
    }
  }
  return local_420;
}



// ==== CyaSSL_CertManagerLoadCA @ 00437d44 size=384

undefined4 CyaSSL_CertManagerLoadCA(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xb1c);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0xb38);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (*(code *)(PTR_LAB_004be624 + 0x7cf0))();
    iVar1 = (*(code *)PTR_CyaSSL_CTX_new_004be6c4)(uVar2);
    if (iVar1 == 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0xb50);
      uVar2 = 0xffffffff;
    }
    else {
      (*(code *)PTR_CyaSSL_CertManagerFree_004be6a8)(*(undefined4 *)(iVar1 + 0x48));
      *(int *)(iVar1 + 0x48) = param_1;
      uVar2 = (*(code *)PTR_CyaSSL_CTX_load_verify_locations_004be748)(iVar1,param_2,param_3);
      *(undefined4 *)(iVar1 + 0x48) = 0;
      (*(code *)PTR_CyaSSL_CTX_free_004be65c)(iVar1);
    }
  }
  return uVar2;
}



// ==== CyaSSL_CertManagerEnableCRL @ 00437ec4 size=140

undefined4 CyaSSL_CertManagerEnableCRL(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xb60);
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    uVar1 = 0xffffff52;
  }
  return uVar1;
}



// ==== CyaSSL_CertManagerDisableCRL @ 00437f50 size=128

undefined4 CyaSSL_CertManagerDisableCRL(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xb7c);
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
    uVar1 = 1;
  }
  return uVar1;
}



// ==== CyaSSL_CTX_der_load_verify_locations @ 00438030 size=212

undefined4 CyaSSL_CTX_der_load_verify_locations(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 3000);
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_004be73c)(param_1,param_2,param_3,4,0,0,0);
    if (iVar1 == 1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== CyaSSL_CTX_use_certificate_file @ 00438104 size=176

bool CyaSSL_CTX_use_certificate_file(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xbe0);
  iVar1 = (*(code *)PTR_FUN_004be73c)(param_1,param_2,param_3,0,0,0,0);
  return iVar1 == 1;
}



// ==== CyaSSL_CTX_use_PrivateKey_file @ 004381b4 size=176

bool CyaSSL_CTX_use_PrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xc00);
  iVar1 = (*(code *)PTR_FUN_004be73c)(param_1,param_2,param_3,1,0,0,0);
  return iVar1 == 1;
}



// ==== CyaSSL_CTX_use_certificate_chain_file @ 00438264 size=176

bool CyaSSL_CTX_use_certificate_chain_file(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xc20);
  iVar1 = (*(code *)PTR_FUN_004be73c)(param_1,param_2,1,0,0,1,0);
  return iVar1 == 1;
}



// ==== CyaSSL_use_certificate_file @ 00438314 size=188

bool CyaSSL_use_certificate_file(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xc48);
  iVar1 = (*(code *)PTR_FUN_004be73c)(*param_1,param_2,param_3,0,param_1,0,0);
  return iVar1 == 1;
}



// ==== CyaSSL_use_PrivateKey_file @ 004383d0 size=188

bool CyaSSL_use_PrivateKey_file(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xc64);
  iVar1 = (*(code *)PTR_FUN_004be73c)(*param_1,param_2,param_3,1,param_1,0,0);
  return iVar1 == 1;
}



// ==== CyaSSL_use_certificate_chain_file @ 0043848c size=188

bool CyaSSL_use_certificate_chain_file(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xc80);
  iVar1 = (*(code *)PTR_FUN_004be73c)(*param_1,param_2,1,0,param_1,1,0);
  return iVar1 == 1;
}



// ==== CyaSSL_use_RSAPrivateKey_file @ 004385d0 size=136

undefined4 CyaSSL_use_RSAPrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xcc4);
  uVar1 = (*(code *)PTR_CyaSSL_use_PrivateKey_file_004be750)(param_1,param_2,param_3);
  return uVar1;
}



// ==== CyaSSL_CTX_set_verify @ 00438658 size=204

void CyaSSL_CTX_set_verify(int param_1,uint param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xce4);
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x144) = 1;
    *(undefined1 *)(param_1 + 0x145) = 0;
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x145) = 1;
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  if ((param_2 & 2) != 0) {
    *(undefined1 *)(param_1 + 0x146) = 1;
  }
  *(undefined4 *)(param_1 + 0x15c) = param_3;
  return;
}



// ==== CyaSSL_set_verify @ 00438724 size=204

void CyaSSL_set_verify(int param_1,uint param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xcfc);
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x4cd) = 1;
    *(undefined1 *)(param_1 + 0x4ce) = 0;
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x4ce) = 1;
    *(undefined1 *)(param_1 + 0x4cd) = 0;
  }
  if ((param_2 & 2) != 0) {
    *(undefined1 *)(param_1 + 0x4cf) = 1;
  }
  *(undefined4 *)(param_1 + 0x568) = param_3;
  return;
}



// ==== CyaSSL_SetCertCbCtx @ 004387f0 size=116

void CyaSSL_SetCertCbCtx(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xd10);
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x56c) = param_2;
  }
  return;
}



// ==== CyaSSL_SetServerID @ 004389e4 size=432

undefined4 CyaSSL_SetServerID(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xd44);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 < 1)) {
    uVar3 = 0xffffff53;
  }
  else {
    if (param_4 == 0) {
      local_10 = (*(code *)PTR_GetSessionClient_004be75c)(param_1,param_2,param_3);
      if (local_10 != 0) {
        iVar2 = (*(code *)PTR_FUN_004be758)(param_1,local_10);
        if (iVar2 != 1) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0xd58);
          local_10 = 0;
        }
      }
    }
    if (local_10 == 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0xd6c);
      uVar1 = (*(code *)(PTR_LAB_004be624 + 0x21f0))(0x14,param_3);
      *(undefined2 *)(param_1 + 0x564) = uVar1;
      (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x550,param_2,*(undefined2 *)(param_1 + 0x564));
    }
    uVar3 = 1;
  }
  return uVar3;
}



// ==== CyaSSL_CTX_set_cipher_list @ 00438cd8 size=144

bool CyaSSL_CTX_set_cipher_list(int param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xdc4);
  iVar1 = (*(code *)PTR_SetCipherList_004be760)(param_1 + 0x4c,param_2);
  return iVar1 != 0;
}



// ==== CyaSSL_set_cipher_list @ 00438d68 size=144

bool CyaSSL_set_cipher_list(int param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xde0);
  iVar1 = (*(code *)PTR_SetCipherList_004be760)(*(undefined4 *)(param_1 + 0xc),param_2);
  return iVar1 != 0;
}



// ==== CyaSSL_connect @ 00438eb4 size=2044

undefined4 CyaSSL_connect(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xe0c);
  puVar1 = (undefined4 *)(*(code *)PTR___errno_location_004beb68)();
  *puVar1 = 0;
  if (*(char *)(param_1 + 0x4cc) == '\x01') {
    if (*(int *)(param_1 + 0x498) != 0) {
      uVar2 = (*(code *)PTR_SendBuffered_004be768)(param_1);
      *(undefined4 *)(param_1 + 4) = uVar2;
      if (*(int *)(param_1 + 4) != 0) {
        (*(code *)PTR_FUN_004be694)(*(undefined4 *)(param_1 + 4));
        return 0xffffffff;
      }
      *(char *)(param_1 + 0x4dc) = *(char *)(param_1 + 0x4dc) + '\x01';
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0xe1c);
    }
    if (*(byte *)(param_1 + 0x4dc) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x00439024 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 +
                                          (uint)*(byte *)(param_1 + 0x4dc) * 4 + 0x1034)))();
      return uVar2;
    }
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1018);
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0xfffffea8;
    (*(code *)PTR_FUN_004be694)(*(undefined4 *)(param_1 + 4));
  }
  return 0xffffffff;
}



// ==== CyaSSL_accept @ 00439774 size=2252

undefined4 CyaSSL_accept(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1074);
  puVar1 = (undefined4 *)(*(code *)PTR___errno_location_004beb68)();
  *puVar1 = 0;
  if (*(char *)(param_1 + 0x4cc) == '\0') {
    if ((*(int *)(param_1 + 0x444) == 0) || (*(int *)(param_1 + 0x44c) == 0)) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1084);
      *(undefined4 *)(param_1 + 4) = 0xfffffec3;
      (*(code *)PTR_FUN_004be694)(*(undefined4 *)(param_1 + 4));
    }
    else {
      if (*(int *)(param_1 + 0x498) != 0) {
        uVar2 = (*(code *)PTR_SendBuffered_004be768)(param_1);
        *(undefined4 *)(param_1 + 4) = uVar2;
        if (*(int *)(param_1 + 4) != 0) {
          (*(code *)PTR_FUN_004be694)(*(undefined4 *)(param_1 + 4));
          return 0xffffffff;
        }
        *(char *)(param_1 + 0x4dd) = *(char *)(param_1 + 0x4dd) + '\x01';
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x10b4);
      }
      if (*(byte *)(param_1 + 0x4dd) < 0xd) {
                    /* WARNING: Could not emulate address calculation at 0x00439974 */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 +
                                            (uint)*(byte *)(param_1 + 0x4dd) * 4 + 0x1298)))();
        return uVar2;
      }
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x127c);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0xfffffea8;
    (*(code *)PTR_FUN_004be694)(*(undefined4 *)(param_1 + 4));
  }
  return 0xffffffff;
}



// ==== CyaSSL_Cleanup @ 0043a040 size=420

undefined4 CyaSSL_Cleanup(void)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 1;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x12cc);
  if (*(int *)(PTR_clock_gettime_004be64c + -0x1360) == 0) {
    local_10 = 1;
  }
  else {
    iVar1 = (*(code *)PTR_LockMutex_004be6b4)(PTR_clock_gettime_004be64c + -0x135c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(PTR_clock_gettime_004be64c + -0x1360);
      *(int *)(PTR_clock_gettime_004be64c + -0x1360) = iVar1 + -1;
      if (*(int *)(PTR_clock_gettime_004be64c + -0x1360) < 0) {
        *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1360) = 0;
      }
      (*(code *)PTR_UnLockMutex_004be6b8)(PTR_clock_gettime_004be64c + -0x135c);
      if (iVar1 == 1) {
        iVar1 = (*(code *)PTR_FreeMutex_004be6b0)(PTR_clock_gettime_004be64c + -0x3f8);
        if (iVar1 != 0) {
          local_10 = 0xffffff96;
        }
        iVar1 = (*(code *)PTR_FreeMutex_004be6b0)(PTR_clock_gettime_004be64c + -0x135c);
        if (iVar1 != 0) {
          local_10 = 0xffffff96;
        }
      }
      else {
        local_10 = 1;
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x560);
      local_10 = 0xffffff96;
    }
  }
  return local_10;
}



// ==== CyaSSL_check_domain_name @ 0043b400 size=332

bool CyaSSL_check_domain_name(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x13f0);
  if ((*(int *)(param_1 + 0x47c) != 0) && (*(int *)(param_1 + 0x47c) != 0)) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x47c));
  }
  iVar2 = (*(code *)PTR_strlen_004beb5c)(param_2);
  *(int *)(param_1 + 0x478) = iVar2 + 1;
  uVar3 = (*(code *)PTR_CyaSSL_Malloc_004be634)(*(undefined4 *)(param_1 + 0x478));
  *(undefined4 *)(param_1 + 0x47c) = uVar3;
  bVar1 = *(int *)(param_1 + 0x47c) == 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 4) = 0xfffffed1;
  }
  else {
    (*(code *)PTR_strncpy_004bebb4)
              (*(undefined4 *)(param_1 + 0x47c),param_2,*(undefined4 *)(param_1 + 0x478));
  }
  return !bVar1;
}



// ==== CyaSSL_set_compression @ 0043b54c size=96

undefined4 CyaSSL_set_compression(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x140c);
  return 0xffffff52;
}



// ==== CyaSSL_writev @ 0043b5ac size=532

undefined4 CyaSSL_writev(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 *local_428;
  int local_420;
  int local_41c;
  int local_418;
  undefined1 auStack_40c [1028];
  
  local_428 = auStack_40c;
  bVar1 = false;
  local_420 = 0;
  local_41c = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1424);
  for (local_418 = 0; local_418 < param_3; local_418 = local_418 + 1) {
    local_420 = local_420 + *(int *)(param_2 + local_418 * 8 + 4);
  }
  if (0x400 < local_420) {
    local_428 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_004be634)(local_420);
    if (local_428 == (undefined1 *)0x0) {
      return 0xfffffed1;
    }
    bVar1 = true;
  }
  for (local_418 = 0; local_418 < param_3; local_418 = local_418 + 1) {
    (*(code *)PTR_memcpy_004bebdc)
              (local_428 + local_41c,*(undefined4 *)(param_2 + local_418 * 8),
               *(undefined4 *)(param_2 + local_418 * 8 + 4));
    local_41c = local_41c + *(int *)(param_2 + local_418 * 8 + 4);
  }
  uVar2 = (*(code *)PTR_CyaSSL_write_004be688)(param_1,local_428,local_420);
  if ((bVar1) && (local_428 != (undefined1 *)0x0)) {
    (*(code *)PTR_CyaSSL_Free_004be640)(local_428);
  }
  return uVar2;
}



// ==== CyaSSL_CTX_load_verify_buffer @ 0043b7c0 size=248

undefined4
CyaSSL_CTX_load_verify_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1434);
  if (param_4 == 1) {
    uVar1 = (*(code *)(PTR_LAB_004be624 + 0x6f80))(param_1,param_2,param_3,1,4,0);
  }
  else {
    uVar1 = (*(code *)(PTR_LAB_004be624 + 0x5df8))(param_1,param_2,param_3,param_4,4,0,0,0);
  }
  return uVar1;
}



// ==== CyaSSL_CTX_use_certificate_buffer @ 0043b8b8 size=164

undefined4
CyaSSL_CTX_use_certificate_buffer
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1454);
  uVar1 = (*(code *)(PTR_LAB_004be624 + 0x5df8))(param_1,param_2,param_3,param_4,0,0,0,0);
  return uVar1;
}



// ==== CyaSSL_CTX_use_PrivateKey_buffer @ 0043b95c size=168

undefined4
CyaSSL_CTX_use_PrivateKey_buffer
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1478);
  uVar1 = (*(code *)(PTR_LAB_004be624 + 0x5df8))(param_1,param_2,param_3,param_4,1,0,0,0);
  return uVar1;
}



// ==== CyaSSL_CTX_use_certificate_chain_buffer @ 0043ba04 size=164

undefined4
CyaSSL_CTX_use_certificate_chain_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x149c);
  uVar1 = (*(code *)(PTR_LAB_004be624 + 0x5df8))(param_1,param_2,param_3,1,0,0,0,1);
  return uVar1;
}



// ==== CyaSSL_use_certificate_buffer @ 0043baa8 size=176

undefined4
CyaSSL_use_certificate_buffer
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x14c4);
  uVar1 = (*(code *)(PTR_LAB_004be624 + 0x5df8))(*param_1,param_2,param_3,param_4,0,param_1,0,0);
  return uVar1;
}



// ==== CyaSSL_use_PrivateKey_buffer @ 0043bb58 size=180

undefined4
CyaSSL_use_PrivateKey_buffer
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x14e4);
  uVar1 = (*(code *)(PTR_LAB_004be624 + 0x5df8))(*param_1,param_2,param_3,param_4,1,param_1,0,0);
  return uVar1;
}



// ==== CyaSSL_use_certificate_chain_buffer @ 0043bc0c size=176

undefined4
CyaSSL_use_certificate_chain_buffer(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1504);
  uVar1 = (*(code *)(PTR_LAB_004be624 + 0x5df8))(*param_1,param_2,param_3,1,0,param_1,0,1);
  return uVar1;
}



// ==== CyaSSL_CTX_UnloadCAs @ 0043be90 size=152

undefined4 CyaSSL_CTX_UnloadCAs(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1574);
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    uVar1 = (*(code *)PTR_CyaSSL_CertManagerUnloadCAs_004be7a8)(*(undefined4 *)(param_1 + 0x48));
  }
  return uVar1;
}



// ==== CyaSSL_add_all_algorithms @ 0043bf28 size=112

undefined4 CyaSSL_add_all_algorithms(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x158c);
  (*(code *)PTR_CyaSSL_Init_004be654)();
  return 1;
}



// ==== CyaSSL_set_rfd @ 0043c520 size=128

undefined4 CyaSSL_set_rfd(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1600);
  *(undefined4 *)(param_1 + 0x138) = param_2;
  *(int *)(param_1 + 0x150) = param_1 + 0x138;
  return 1;
}



// ==== CyaSSL_set_wfd @ 0043c5a0 size=128

undefined4 CyaSSL_set_wfd(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x160c);
  *(undefined4 *)(param_1 + 0x13c) = param_2;
  *(int *)(param_1 + 0x154) = param_1 + 0x13c;
  return 1;
}



// ==== CyaSSL_BIO_new @ 0043ca4c size=216

undefined1 * CyaSSL_BIO_new(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_004be634)(0x1c);
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1688);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
  }
  return puVar1;
}



// ==== CyaSSL_BIO_free @ 0043cce0 size=328

undefined4 CyaSSL_BIO_free(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1690);
  if (param_1 != 0) {
    if (*(char *)(param_1 + 1) != '\0') {
      if (*(int *)(param_1 + 4) != 0) {
        (*(code *)PTR_CyaSSL_free_004be7bc)(*(undefined4 *)(param_1 + 4));
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        (*(code *)PTR_close_004beb48)(*(undefined4 *)(param_1 + 0x10));
      }
    }
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 8) != 0)) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 8));
    }
    if (param_1 != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(param_1);
    }
  }
  return 0;
}



// ==== CyaSSL_CTX_set_default_passwd_cb_userdata @ 0043d29c size=104

void CyaSSL_CTX_set_default_passwd_cb_userdata(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x16dc);
  *(undefined4 *)(param_1 + 0x168) = param_2;
  return;
}



// ==== CyaSSL_CTX_set_default_passwd_cb @ 0043d304 size=104

void CyaSSL_CTX_set_default_passwd_cb(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1704);
  *(undefined4 *)(param_1 + 0x164) = param_2;
  return;
}



// ==== CyaSSL_EVP_BytesToKey @ 0043d404 size=1320

int CyaSSL_EVP_BytesToKey
              (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
              undefined4 param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [92];
  
  local_84 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1724);
  (*(code *)PTR_InitMd5_004be7c8)(auStack_64);
  iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x8e4,3);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_1,PTR_DAT_004be644 + 0x8e8,7);
    if (iVar1 == 0) {
      local_98 = 8;
      local_94 = 8;
    }
    else {
      iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_1,PTR_DAT_004be644 + 0x8f0,0xc);
      if (iVar1 == 0) {
        local_98 = 0x18;
        local_94 = 8;
      }
      else {
        iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_1,PTR_DAT_004be644 + 0x900,0xb);
        if (iVar1 == 0) {
          local_98 = 0x10;
          local_94 = 0x10;
        }
        else {
          iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_1,PTR_DAT_004be644 + 0x90c,0xb);
          if (iVar1 == 0) {
            local_98 = 0x18;
            local_94 = 0x10;
          }
          else {
            iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_1,PTR_DAT_004be644 + 0x918,0xb);
            if (iVar1 != 0) {
              return 0;
            }
            local_98 = 0x20;
            local_94 = 0x10;
          }
        }
      }
    }
    local_8c = local_98;
    local_88 = local_94;
    while (local_84 < local_98 + local_94) {
      local_80 = 0x10;
      if (local_84 != 0) {
        (*(code *)PTR_Md5Update_004be7cc)(auStack_64,auStack_74,0x10);
      }
      (*(code *)PTR_Md5Update_004be7cc)(auStack_64,param_4,param_5);
      if (param_3 != 0) {
        (*(code *)PTR_Md5Update_004be7cc)(auStack_64,param_3,8);
      }
      (*(code *)PTR_Md5Final_004be7d0)(auStack_64,auStack_74);
      for (local_90 = 1; local_90 < param_6; local_90 = local_90 + 1) {
        (*(code *)PTR_Md5Update_004be7cc)(auStack_64,auStack_74,0x10);
        (*(code *)PTR_Md5Final_004be7d0)(auStack_64,auStack_74);
      }
      if (local_8c != 0) {
        local_80 = (*(code *)(PTR_LAB_004be624 + 0x21f0))(local_8c,0x10);
        (*(code *)PTR_memcpy_004bebdc)(param_7 + (local_98 - local_8c),auStack_74,local_80);
        local_84 = local_84 + local_80;
        local_8c = local_8c - local_80;
        local_80 = 0x10 - local_80;
      }
      if ((local_88 != 0) && (local_80 != 0)) {
        iVar1 = (*(code *)(PTR_LAB_004be624 + 0x21f0))(local_88,local_80);
        (*(code *)PTR_memcpy_004bebdc)(param_8 + (local_94 - local_88),auStack_64 + -local_80,iVar1)
        ;
        local_84 = local_84 + iVar1;
        local_88 = local_88 - iVar1;
      }
    }
    if (local_98 + local_94 != local_84) {
      local_84 = 0;
    }
  }
  else {
    local_84 = 0;
  }
  return local_84;
}



// ==== CyaSSL_MD5_Init @ 0043d994 size=112

void CyaSSL_MD5_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1734);
  (*(code *)PTR_InitMd5_004be7c8)(param_1);
  return;
}



// ==== CyaSSL_MD5_Update @ 0043da04 size=128

void CyaSSL_MD5_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1740);
  (*(code *)PTR_Md5Update_004be7cc)(param_1,param_2,param_3);
  return;
}



// ==== CyaSSL_MD5_Final @ 0043da84 size=120

void CyaSSL_MD5_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1754);
  (*(code *)PTR_Md5Final_004be7d0)(param_2,param_1);
  return;
}



// ==== CyaSSL_SHA_Init @ 0043dafc size=112

void CyaSSL_SHA_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1760);
  (*(code *)PTR_InitSha_004be7d4)(param_1);
  return;
}



// ==== CyaSSL_SHA_Update @ 0043db6c size=128

void CyaSSL_SHA_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x176c);
  (*(code *)PTR_ShaUpdate_004be7d8)(param_1,param_2,param_3);
  return;
}



// ==== CyaSSL_SHA_Final @ 0043dbec size=120

void CyaSSL_SHA_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1778);
  (*(code *)PTR_ShaFinal_004be7dc)(param_2,param_1);
  return;
}



// ==== CyaSSL_SHA256_Init @ 0043ddcc size=112

void CyaSSL_SHA256_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x17a8);
  (*(code *)PTR_InitSha256_004be628)(param_1);
  return;
}



// ==== CyaSSL_SHA256_Update @ 0043de3c size=128

void CyaSSL_SHA256_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x17b4);
  (*(code *)PTR_Sha256Update_004be62c)(param_1,param_2,param_3);
  return;
}



// ==== CyaSSL_SHA256_Final @ 0043debc size=120

void CyaSSL_SHA256_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x17c4);
  (*(code *)PTR_Sha256Final_004be630)(param_2,param_1);
  return;
}



// ==== CyaSSL_SHA384_Init @ 0043df34 size=112

void CyaSSL_SHA384_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x17d4);
  (*(code *)PTR_InitSha384_004be7ec)(param_1);
  return;
}



// ==== CyaSSL_SHA384_Update @ 0043dfa4 size=128

void CyaSSL_SHA384_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x17e0);
  (*(code *)PTR_Sha384Update_004be7f0)(param_1,param_2,param_3);
  return;
}



// ==== CyaSSL_SHA384_Final @ 0043e024 size=120

void CyaSSL_SHA384_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x17f0);
  (*(code *)PTR_Sha384Final_004be7f4)(param_2,param_1);
  return;
}



// ==== CyaSSL_SHA512_Init @ 0043e09c size=112

void CyaSSL_SHA512_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1800);
  (*(code *)PTR_InitSha512_004be7f8)(param_1);
  return;
}



// ==== CyaSSL_SHA512_Update @ 0043e10c size=128

void CyaSSL_SHA512_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x180c);
  (*(code *)PTR_Sha512Update_004be7fc)(param_1,param_2,param_3);
  return;
}



// ==== CyaSSL_SHA512_Final @ 0043e18c size=120

void CyaSSL_SHA512_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x181c);
  (*(code *)PTR_Sha512Final_004be800)(param_2,param_1);
  return;
}



// ==== CyaSSL_EVP_md5 @ 0043e204 size=96

undefined4 CyaSSL_EVP_md5(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x182c);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1aa0);
}



// ==== CyaSSL_EVP_sha1 @ 0043e264 size=96

undefined4 CyaSSL_EVP_sha1(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1834);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a9c);
}



// ==== CyaSSL_EVP_aes_128_cbc @ 0043e43c size=96

undefined4 CyaSSL_EVP_aes_128_cbc(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x187c);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a8c);
}



// ==== CyaSSL_EVP_aes_192_cbc @ 0043e49c size=96

undefined4 CyaSSL_EVP_aes_192_cbc(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1894);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a88);
}



// ==== CyaSSL_EVP_aes_256_cbc @ 0043e4fc size=96

undefined4 CyaSSL_EVP_aes_256_cbc(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x18ac);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a84);
}



// ==== CyaSSL_EVP_aes_128_ctr @ 0043e55c size=96

undefined4 CyaSSL_EVP_aes_128_ctr(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x18c4);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a80);
}



// ==== CyaSSL_EVP_aes_192_ctr @ 0043e5bc size=96

undefined4 CyaSSL_EVP_aes_192_ctr(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x18dc);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a7c);
}



// ==== CyaSSL_EVP_aes_256_ctr @ 0043e61c size=96

undefined4 CyaSSL_EVP_aes_256_ctr(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x18f4);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a78);
}



// ==== CyaSSL_EVP_des_cbc @ 0043e67c size=96

undefined4 CyaSSL_EVP_des_cbc(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x190c);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a74);
}



// ==== CyaSSL_EVP_des_ede3_cbc @ 0043e6dc size=96

undefined4 CyaSSL_EVP_des_ede3_cbc(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1920);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a70);
}



// ==== CyaSSL_EVP_rc4 @ 0043e73c size=96

undefined4 CyaSSL_EVP_rc4(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1938);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a6c);
}



// ==== CyaSSL_EVP_enc_null @ 0043e79c size=96

undefined4 CyaSSL_EVP_enc_null(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1948);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a68);
}



// ==== CyaSSL_EVP_CipherInit @ 0043e960 size=3652

int CyaSSL_EVP_CipherInit(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x199c);
  if (param_1 == (int *)0x0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x19b4);
    return 0;
  }
  if ((param_2 == 0) && (*(char *)((int)param_1 + 5) == -1)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x19bc);
    return 0;
  }
  if ((*(char *)((int)param_1 + 5) == '\x01') ||
     ((param_2 != 0 &&
      (iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x19c8,10), iVar1 == 0))))
  {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x900);
    *(undefined1 *)((int)param_1 + 5) = 1;
    *param_1 = 0x10;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_004be804)
                          (param_1 + 6,param_3,*param_1,param_4,(char)param_1[1] == '\0'),
       iVar1 != 0)) {
      return iVar1;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = (*(code *)PTR_AesSetIV_004be808)(param_1 + 6,param_4);
  }
  else if ((*(char *)((int)param_1 + 5) == '\x02') ||
          ((param_2 != 0 &&
           (iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x19d4,10),
           iVar1 == 0)))) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x90c);
    *(undefined1 *)((int)param_1 + 5) = 2;
    *param_1 = 0x18;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_004be804)
                          (param_1 + 6,param_3,*param_1,param_4,(char)param_1[1] == '\0'),
       iVar1 != 0)) {
      return iVar1;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = (*(code *)PTR_AesSetIV_004be808)(param_1 + 6,param_4);
  }
  else if ((*(char *)((int)param_1 + 5) == '\x03') ||
          ((param_2 != 0 &&
           (iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x19e0,10),
           iVar1 == 0)))) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x918);
    *(undefined1 *)((int)param_1 + 5) = 3;
    *param_1 = 0x20;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_004be804)
                          (param_1 + 6,param_3,*param_1,param_4,(char)param_1[1] == '\0'),
       iVar1 != 0)) {
      return iVar1;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = (*(code *)PTR_AesSetIV_004be808)(param_1 + 6,param_4);
  }
  else if ((*(char *)((int)param_1 + 5) == '\x04') ||
          ((param_2 != 0 &&
           (iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x19ec,10),
           iVar1 == 0)))) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x19f8);
    *(undefined1 *)((int)param_1 + 5) = 4;
    *param_1 = 0x10;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_004be804)(param_1 + 6,param_3,*param_1,param_4,0),
       iVar1 != 0)) {
      return iVar1;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = (*(code *)PTR_AesSetIV_004be808)(param_1 + 6,param_4);
  }
  else if ((*(char *)((int)param_1 + 5) == '\x05') ||
          ((param_2 != 0 &&
           (iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x1a04,10),
           iVar1 == 0)))) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1a10);
    *(undefined1 *)((int)param_1 + 5) = 5;
    *param_1 = 0x18;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_004be804)(param_1 + 6,param_3,*param_1,param_4,0),
       iVar1 != 0)) {
      return iVar1;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = (*(code *)PTR_AesSetIV_004be808)(param_1 + 6,param_4);
  }
  else if ((*(char *)((int)param_1 + 5) == '\x06') ||
          ((param_2 != 0 &&
           (iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x1a1c,10),
           iVar1 == 0)))) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1a28);
    *(undefined1 *)((int)param_1 + 5) = 6;
    *param_1 = 0x20;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_004be804)(param_1 + 6,param_3,*param_1,param_4,0),
       iVar1 != 0)) {
      return iVar1;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = (*(code *)PTR_AesSetIV_004be808)(param_1 + 6,param_4);
  }
  else {
    if ((*(char *)((int)param_1 + 5) == '\a') ||
       ((param_2 != 0 &&
        (iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x8e8,7), iVar1 == 0))))
    {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x8e8);
      *(undefined1 *)((int)param_1 + 5) = 7;
      *param_1 = 8;
      if ((param_5 == 0) || (param_5 == 1)) {
        *(bool *)(param_1 + 1) = param_5 != 0;
      }
      if ((param_3 != 0) &&
         (iVar1 = (*(code *)PTR_Des_SetKey_004be80c)
                            (param_1 + 6,param_3,param_4,(char)param_1[1] == '\0'), iVar1 != 0)) {
        return iVar1;
      }
      if (param_4 == 0) {
        return 1;
      }
      if (param_3 != 0) {
        return 1;
      }
      (*(code *)PTR_Des_SetIV_004be810)(param_1 + 6,param_4);
      return 1;
    }
    if ((*(char *)((int)param_1 + 5) != '\b') &&
       ((param_2 == 0 ||
        (iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x8f0,0xb), iVar1 != 0))
       )) {
      if ((*(char *)((int)param_1 + 5) != '\t') &&
         ((param_2 == 0 ||
          (iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x1a34,4), iVar1 != 0)
          ))) {
        if ((*(char *)((int)param_1 + 5) != '\n') &&
           ((param_2 == 0 ||
            (iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x1a3c,4),
            iVar1 != 0)))) {
          return 0;
        }
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1a44);
        *(undefined1 *)((int)param_1 + 5) = 10;
        *param_1 = 0;
        return 1;
      }
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1a34);
      *(undefined1 *)((int)param_1 + 5) = 9;
      if (*param_1 == 0) {
        *param_1 = 0x10;
      }
      if (param_3 == 0) {
        return 1;
      }
      (*(code *)PTR_Arc4SetKey_004be81c)(param_1 + 6,param_3,*param_1);
      return 1;
    }
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x8f0);
    *(undefined1 *)((int)param_1 + 5) = 8;
    *param_1 = 0x18;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_Des3_SetKey_004be814)
                          (param_1 + 6,param_3,param_4,(char)param_1[1] == '\0'), iVar1 != 0)) {
      return iVar1;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = (*(code *)PTR_Des3_SetIV_004be818)(param_1 + 6,param_4);
  }
  if (iVar1 == 0) {
    return 1;
  }
  return iVar1;
}



// ==== CyaSSL_EVP_CIPHER_CTX_key_length @ 0043f7a4 size=124

undefined4 CyaSSL_EVP_CIPHER_CTX_key_length(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1a50);
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}



// ==== CyaSSL_EVP_CIPHER_CTX_set_key_length @ 0043f820 size=136

bool CyaSSL_EVP_CIPHER_CTX_set_key_length(undefined4 *param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1a74);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return param_1 != (undefined4 *)0x0;
}



// ==== CyaSSL_EVP_Cipher @ 0043f8a8 size=996

undefined4 CyaSSL_EVP_Cipher(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1a9c);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x418);
  }
  else if (*(char *)(param_1 + 5) == -1) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1ab0);
  }
  else {
    if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0043f9a0 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 +
                                          (uint)*(byte *)(param_1 + 5) * 4 + 0x1b0c)))();
      return uVar1;
    }
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1ac8);
  }
  return 0;
}



// ==== CyaSSL_StoreExternalIV @ 0043fc8c size=648

undefined4 CyaSSL_StoreExternalIV(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1b38);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x418);
  }
  else {
    if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0043fd20 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 +
                                          (uint)*(byte *)(param_1 + 5) * 4 + 0x1b68)))();
      return uVar1;
    }
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1ac8);
  }
  return 0xffffffff;
}



// ==== CyaSSL_SetInternalIV @ 0043ff14 size=648

undefined4 CyaSSL_SetInternalIV(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1b94);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x418);
  }
  else {
    if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0043ffa8 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 +
                                          (uint)*(byte *)(param_1 + 5) * 4 + 0x1bac)))();
      return uVar1;
    }
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1ac8);
  }
  return 0xffffffff;
}



// ==== CyaSSL_EVP_DigestFinal @ 004405c0 size=552

undefined4 CyaSSL_EVP_DigestFinal(char *param_1,undefined4 param_2,undefined4 *param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1c18);
  if (*param_1 == '\0') {
    (*(code *)PTR_CyaSSL_MD5_Final_004be860)(param_2,param_1 + 8);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x10;
    }
  }
  else if (*param_1 == '\x01') {
    (*(code *)PTR_CyaSSL_SHA_Final_004be7e8)(param_2,param_1 + 8);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x14;
    }
  }
  else if (*param_1 == '\x02') {
    (*(code *)PTR_CyaSSL_SHA256_Final_004be864)(param_2,param_1 + 8);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x20;
    }
  }
  else if (*param_1 == '\x05') {
    (*(code *)PTR_CyaSSL_SHA384_Final_004be868)(param_2,param_1 + 8);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x30;
    }
  }
  else {
    if (*param_1 != '\x04') {
      return 0xffffff53;
    }
    (*(code *)PTR_CyaSSL_SHA512_Final_004be86c)(param_2,param_1 + 8);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x40;
    }
  }
  return 1;
}



// ==== CyaSSL_FreeX509 @ 00440ff4 size=112

void CyaSSL_FreeX509(undefined4 param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1ca8);
  (*(code *)PTR_FreeX509_004be880)(param_1);
  return;
}



// ==== CyaSSL_X509_get_next_altname @ 00441064 size=204

undefined4 CyaSSL_X509_get_next_altname(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1cb8);
  if ((param_1 == 0) || (*(int *)(param_1 + 0x460) == 0)) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x464) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x464) + 4);
    *(undefined4 *)(param_1 + 0x464) = **(undefined4 **)(param_1 + 0x464);
  }
  return uVar1;
}



// ==== CyaSSL_X509_get_isCA @ 004411f8 size=156

undefined1 CyaSSL_X509_get_isCA(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1d08);
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x469);
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1d08,uVar1);
  return uVar1;
}



// ==== CyaSSL_X509_ext_isSet_by_NID @ 00441294 size=296

undefined4 CyaSSL_X509_ext_isSet_by_NID(int param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1d20);
  if ((param_1 != 0) && (param_2 - 0x80U < 0x16)) {
                    /* WARNING: Could not emulate address calculation at 0x00441308 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 + (param_2 - 0x80U) * 4 + 0x1d40)))();
    return uVar1;
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1d20,0);
  return 0;
}



// ==== CyaSSL_X509_ext_get_critical_by_NID @ 004413bc size=296

undefined4 CyaSSL_X509_ext_get_critical_by_NID(int param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1d98);
  if ((param_1 != 0) && (param_2 - 0x80U < 0x16)) {
                    /* WARNING: Could not emulate address calculation at 0x00441430 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 + (param_2 - 0x80U) * 4 + 0x1dbc)))();
    return uVar1;
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1d98,0);
  return 0;
}



// ==== CyaSSL_X509_get_isSet_pathLength @ 004414e4 size=156

undefined1 CyaSSL_X509_get_isSet_pathLength(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1e14);
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x474);
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1e14,uVar1);
  return uVar1;
}



// ==== CyaSSL_X509_get_pathLength @ 00441580 size=160

undefined4 CyaSSL_X509_get_pathLength(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1e38);
  if (param_1 != 0) {
    local_10 = *(undefined4 *)(param_1 + 0x46c);
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1e38,local_10);
  return local_10;
}



// ==== CyaSSL_X509_get_keyUsage @ 00441620 size=160

undefined2 CyaSSL_X509_get_keyUsage(int param_1)

{
  undefined2 local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1e54);
  if (param_1 != 0) {
    local_10 = *(undefined2 *)(param_1 + 0x470);
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1e54,local_10);
  return local_10;
}



// ==== CyaSSL_X509_get_authorityKeyID @ 004416c0 size=368

int CyaSSL_X509_get_authorityKeyID(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1e70);
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x477) != '\0') {
      if (param_3 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *param_3;
      }
      local_c = (*(code *)(PTR_LAB_004be624 + 0x21f0))(iVar1,*(undefined4 *)(param_1 + 0x480));
      local_10 = *(int *)(param_1 + 0x47c);
    }
    if ((((param_2 != 0) && (param_3 != (int *)0x0)) && (local_10 != 0)) && (0 < local_c)) {
      (*(code *)PTR_memcpy_004bebdc)(param_2,local_10,local_c);
      *param_3 = local_c;
      local_10 = param_2;
    }
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1e70,local_c);
  return local_10;
}



// ==== CyaSSL_X509_get_subjectKeyID @ 00441830 size=368

int CyaSSL_X509_get_subjectKeyID(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1e90);
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x484) != '\0') {
      if (param_3 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *param_3;
      }
      local_c = (*(code *)(PTR_LAB_004be624 + 0x21f0))(iVar1,*(undefined4 *)(param_1 + 0x48c));
      local_10 = *(int *)(param_1 + 0x488);
    }
    if ((((param_2 != 0) && (param_3 != (int *)0x0)) && (local_10 != 0)) && (0 < local_c)) {
      (*(code *)PTR_memcpy_004bebdc)(param_2,local_10,local_c);
      *param_3 = local_c;
      local_10 = param_2;
    }
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1e90,local_c);
  return local_10;
}



// ==== CyaSSL_X509_NAME_entry_count @ 004419a0 size=156

undefined4 CyaSSL_X509_NAME_entry_count(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1eb0);
  if (param_1 != 0) {
    local_10 = *(undefined4 *)(param_1 + 0x114);
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1eb0,local_10);
  return local_10;
}



// ==== CyaSSL_X509_NAME_get_text_by_NID @ 00441a3c size=680

/* WARNING: Removing unreachable block (ram,0x00441c40) */

undefined4 CyaSSL_X509_NAME_get_text_by_NID(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1ed0);
  if (8 < param_2 - 3U) {
    (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x1ed0,0);
    return 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x00441ab0 */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 + (param_2 - 3U) * 4 + 0x1ef4)))();
  return uVar1;
}



// ==== CyaSSL_X509_NAME_oneline @ 00441ce4 size=360

int CyaSSL_X509_NAME_oneline(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int local_res4;
  int local_10;
  
  local_10 = (*(code *)(PTR_LAB_004be624 + 0x21f0))(param_3,param_1[0x42]);
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1f18);
  local_res4 = param_2;
  if (param_1[0x42] != 0) {
    if (param_2 == 0) {
      local_res4 = (*(code *)PTR_CyaSSL_Malloc_004be634)(param_1[0x42]);
      if (local_res4 == 0) {
        return 0;
      }
      local_10 = param_1[0x42];
    }
    if (local_10 != 0) {
      (*(code *)PTR_memcpy_004bebdc)(local_res4,*param_1,local_10 + -1);
      *(undefined1 *)(local_res4 + local_10 + -1) = 0;
    }
  }
  return local_res4;
}



// ==== CyaSSL_X509_get_signature_type @ 00441e4c size=124

undefined4 CyaSSL_X509_get_signature_type(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1f34);
  if (param_1 != 0) {
    local_10 = *(undefined4 *)(param_1 + 0x440);
  }
  return local_10;
}



// ==== CyaSSL_X509_get_signature @ 00441ec8 size=248

undefined4 CyaSSL_X509_get_signature(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1f54);
  if (((param_1 == 0) || (param_3 == (int *)0x0)) || (*param_3 < *(int *)(param_1 + 0x444))) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != 0) {
      (*(code *)PTR_memcpy_004bebdc)
                (param_2,*(undefined4 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x444));
    }
    *param_3 = *(int *)(param_1 + 0x444);
    uVar1 = 1;
  }
  return uVar1;
}



// ==== CyaSSL_X509_get_serial_number @ 00441fc0 size=244

undefined4 CyaSSL_X509_get_serial_number(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1f70);
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) ||
     (*param_3 < *(int *)(param_1 + 0x2d4))) {
    uVar1 = 0xffffff53;
  }
  else {
    (*(code *)PTR_memcpy_004bebdc)(param_2,param_1 + 0x2d8,*(undefined4 *)(param_1 + 0x2d4));
    *param_3 = *(int *)(param_1 + 0x2d4);
    uVar1 = 1;
  }
  return uVar1;
}



// ==== CyaSSL_X509_get_der @ 004420b4 size=160

undefined4 CyaSSL_X509_get_der(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1f90);
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x458);
    uVar1 = *(undefined4 *)(param_1 + 0x45c);
  }
  return uVar1;
}



// ==== CyaSSL_X509_version @ 00442154 size=124

undefined4 CyaSSL_X509_version(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1fa4);
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}



// ==== CyaSSL_X509_notBefore @ 004421d0 size=124

int CyaSSL_X509_notBefore(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1fb8);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x3fc;
  }
  return param_1;
}



// ==== CyaSSL_X509_notAfter @ 0044224c size=124

int CyaSSL_X509_notAfter(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1fd0);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x420;
  }
  return param_1;
}



// ==== CyaSSL_X509_d2i @ 004422c8 size=440

int CyaSSL_X509_d2i(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_408;
  undefined1 auStack_400 [1016];
  
  local_408 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1fe8);
  if ((param_2 != 0) && (param_3 != 0)) {
    (*(code *)PTR_InitDecodedCert_004be6e4)(auStack_400,param_2,param_3,0);
    iVar1 = (*(code *)PTR_ParseCertRelative_004be738)(auStack_400,0,0,0);
    if (iVar1 == 0) {
      local_408 = (*(code *)PTR_CyaSSL_Malloc_004be634)(0x494);
      if (local_408 != 0) {
        (*(code *)PTR_InitX509_004be884)(local_408,1);
        iVar1 = (*(code *)PTR_CopyDecodedToX509_004be888)(local_408,auStack_400);
        if (iVar1 != 0) {
          if (local_408 != 0) {
            (*(code *)PTR_CyaSSL_Free_004be640)(local_408);
          }
          local_408 = 0;
        }
      }
    }
    (*(code *)PTR_FreeDecodedCert_004be6f8)(auStack_400);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = local_408;
  }
  return local_408;
}



// ==== CyaSSL_X509_d2i_fp @ 00442480 size=468

undefined4 CyaSSL_X509_d2i_fp(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  
  local_20 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1ff8);
  if (param_2 != 0) {
    (*(code *)PTR_fseek_004bebc4)(param_2,0,2);
    iVar1 = (*(code *)PTR_ftell_004beb94)(param_2);
    (*(code *)PTR_rewind_004beb70)(param_2);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x200c);
      return 0;
    }
    iVar2 = (*(code *)PTR_CyaSSL_Malloc_004be634)(iVar1);
    if (iVar2 != 0) {
      iVar3 = (*(code *)PTR_fread_004beba4)(iVar2,iVar1,1,param_2);
      if (0 < iVar3) {
        local_20 = (*(code *)PTR_CyaSSL_X509_d2i_004be88c)(0,iVar2,iVar1);
      }
      if (iVar2 != 0) {
        (*(code *)PTR_CyaSSL_Free_004be640)(iVar2);
      }
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_20;
  }
  return local_20;
}



// ==== CyaSSL_X509_load_certificate @ 00442654 size=1340

int CyaSSL_X509_load_certificate(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *local_838;
  int local_830;
  undefined1 auStack_80c [1024];
  int local_40c;
  int local_408;
  undefined4 local_404;
  undefined1 auStack_400 [116];
  undefined4 local_38c;
  undefined1 local_388;
  undefined4 local_384;
  
  local_838 = auStack_80c;
  bVar1 = false;
  local_830 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x2020);
  if ((param_1 == 0) || ((param_2 != 2 && (param_2 != 1)))) {
    local_830 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_fopen_004beb9c)(param_1,PTR_DAT_004be644 + 0xa64);
    if (iVar2 == 0) {
      local_830 = 0;
    }
    else {
      (*(code *)PTR_fseek_004bebc4)(iVar2,0,2);
      iVar3 = (*(code *)PTR_ftell_004beb94)(iVar2);
      (*(code *)PTR_rewind_004beb70)(iVar2);
      if (iVar3 < 0x401) {
        if (iVar3 < 0) {
          (*(code *)PTR_fclose_004beb90)(iVar2);
          return 0;
        }
      }
      else {
        local_838 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_004be634)(iVar3);
        if (local_838 == (undefined1 *)0x0) {
          (*(code *)PTR_fclose_004beb90)(iVar2);
          return 0;
        }
        bVar1 = true;
      }
      iVar4 = (*(code *)PTR_fread_004beba4)(local_838,iVar3,1,iVar2);
      if (iVar4 < 0) {
        (*(code *)PTR_fclose_004beb90)(iVar2);
        if ((bVar1) && (local_838 != (undefined1 *)0x0)) {
          (*(code *)PTR_CyaSSL_Free_004be640)(local_838);
        }
        local_830 = 0;
      }
      else {
        (*(code *)PTR_fclose_004beb90)(iVar2);
        local_408 = 0;
        local_40c = 0;
        if (param_2 == 1) {
          local_404 = 0;
          local_388 = 0;
          local_384 = 0;
          local_38c = 0;
          iVar2 = (*(code *)PTR_FUN_004be6bc)(local_838,iVar3,0,&local_40c,0,auStack_400,&local_404)
          ;
          if ((iVar2 != 0) && (local_408 != 0)) {
            if (local_408 != 0) {
              (*(code *)PTR_CyaSSL_Free_004be640)(local_408);
            }
            local_408 = 0;
          }
        }
        else {
          local_408 = (*(code *)PTR_CyaSSL_Malloc_004be634)(iVar3);
          if (local_408 != 0) {
            (*(code *)PTR_memcpy_004bebdc)(local_408,local_838,iVar3);
            local_40c = iVar3;
          }
        }
        if ((bVar1) && (local_838 != (undefined1 *)0x0)) {
          (*(code *)PTR_CyaSSL_Free_004be640)(local_838);
        }
        if (local_408 != 0) {
          (*(code *)PTR_InitDecodedCert_004be6e4)(auStack_400,local_408,local_40c,0);
          iVar2 = (*(code *)PTR_ParseCertRelative_004be738)(auStack_400,0,0,0);
          if ((iVar2 == 0) &&
             (local_830 = (*(code *)PTR_CyaSSL_Malloc_004be634)(0x494), local_830 != 0)) {
            (*(code *)PTR_InitX509_004be884)(local_830,1);
            iVar2 = (*(code *)PTR_CopyDecodedToX509_004be888)(local_830,auStack_400);
            if (iVar2 != 0) {
              if (local_830 != 0) {
                (*(code *)PTR_CyaSSL_Free_004be640)(local_830);
              }
              local_830 = 0;
            }
          }
          (*(code *)PTR_FreeDecodedCert_004be6f8)(auStack_400);
          if (local_408 != 0) {
            (*(code *)PTR_CyaSSL_Free_004be640)(local_408);
          }
        }
      }
    }
  }
  return local_830;
}



// ==== CyaSSL_get_current_cipher @ 00442f24 size=124

int CyaSSL_get_current_cipher(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x20ac);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x58c;
  }
  return param_1;
}



// ==== CyaSSL_CIPHER_get_name @ 00442fa0 size=632

undefined * CyaSSL_CIPHER_get_name(int *param_1)

{
  undefined *puVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x20c4);
  if ((((param_1 != (int *)0x0) && (*(char *)(*param_1 + 0x4c6) != -0x40)) &&
      (*(char *)(*param_1 + 0x4c6) != -0x34)) && (*(byte *)(*param_1 + 0x4c7) < 0xc5)) {
                    /* WARNING: Could not emulate address calculation at 0x00443040 */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)
             (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 +
                                         (uint)*(byte *)(*param_1 + 0x4c7) * 4 + 0x2444)))();
    return puVar1;
  }
  return PTR_DAT_004be644 + 0x243c;
}



// ==== CyaSSL_get_cipher @ 00443218 size=148

undefined4 CyaSSL_get_cipher(undefined4 param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x2758);
  uVar1 = (*(code *)PTR_CyaSSL_get_current_cipher_004be890)(param_1);
  uVar1 = (*(code *)PTR_CyaSSL_CIPHER_get_name_004be894)(uVar1);
  return uVar1;
}



// ==== CyaSSL_BIO_s_mem @ 00443410 size=108

undefined * CyaSSL_BIO_s_mem(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x276c);
  PTR_clock_gettime_004be64c[-0x2ec] = 4;
  return PTR_clock_gettime_004be64c + -0x2ec;
}



// ==== CyaSSL_X509_STORE_add_cert @ 004437f8 size=376

int CyaSSL_X509_STORE_add_cert(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  
  local_18 = -1;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x2778);
  if (((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) && (param_2 != 0)) {
    iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(*(undefined4 *)(param_2 + 0x458));
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x458);
      (*(code *)PTR_memcpy_004bebdc)
                (iVar1,*(undefined4 *)(param_2 + 0x45c),*(undefined4 *)(param_2 + 0x458));
      local_18 = (*(code *)PTR_AddCA_004be724)(*(undefined4 *)(param_1 + 4),uVar2,iVar1,1,1);
      if (local_18 != 1) {
        local_18 = -1;
      }
    }
  }
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x2778,local_18);
  return local_18;
}



// ==== CyaSSL_X509_STORE_free @ 00443a38 size=164

void CyaSSL_X509_STORE_free(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)PTR_CyaSSL_CertManagerFree_004be6a8)(*(undefined4 *)(param_1 + 4));
    }
    if (param_1 != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(param_1);
    }
  }
  return;
}



// ==== CyaSSL_X509_STORE_CTX_init @ 00443bcc size=152

undefined4 CyaSSL_X509_STORE_CTX_init(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uVar1 = 1;
  }
  return uVar1;
}



// ==== CyaSSL_SESSION_get_timeout @ 00444948 size=100

undefined4 CyaSSL_SESSION_get_timeout(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x2794);
  return *(undefined4 *)(param_1 + 0x58);
}



// ==== CyaSSL_SESSION_get_time @ 004449ac size=100

undefined4 CyaSSL_SESSION_get_time(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x27b0);
  return *(undefined4 *)(param_1 + 0x54);
}



// ==== CyaSSL_cmp_peer_cert_to_file @ 00444a90 size=804

undefined4 CyaSSL_cmp_peer_cert_to_file(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_4b8;
  undefined1 *local_4b4;
  undefined4 local_494;
  int local_490;
  int local_48c;
  undefined1 auStack_488 [1024];
  undefined1 auStack_88 [116];
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  
  local_4b8 = 0xffffffff;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x27c8);
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    local_4b4 = auStack_488;
    local_494 = 0;
    iVar4 = *param_1;
    iVar1 = (*(code *)PTR_fopen_004beb9c)(param_2,PTR_DAT_004be644 + 0xa64);
    if (iVar1 == 0) {
      local_4b8 = 0xfffffffc;
    }
    else {
      (*(code *)PTR_fseek_004bebc4)(iVar1,0,2);
      iVar2 = (*(code *)PTR_ftell_004beb94)(iVar1);
      (*(code *)PTR_rewind_004beb70)(iVar1);
      if (0x400 < iVar2) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0xa68);
        local_4b4 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_004be634)(iVar2);
      }
      local_10 = 0;
      local_14 = 0;
      local_48c = 0;
      local_c = iVar4;
      if (((((local_4b4 != (undefined1 *)0x0) && (0 < iVar2)) &&
           (iVar3 = (*(code *)PTR_fread_004beba4)(local_4b4,iVar2,1,iVar1), iVar3 != 0)) &&
          ((iVar4 = (*(code *)PTR_FUN_004be6bc)
                              (local_4b4,iVar2,0,&local_490,*(undefined4 *)(iVar4 + 0x140),
                               auStack_88,&local_494), iVar4 == 0 && (local_490 != 0)))) &&
         ((local_490 == param_1[0x27a] &&
          (iVar4 = (*(code *)PTR_memcmp_004bebac)(param_1[0x27b],local_48c,local_490), iVar4 == 0)))
         ) {
        local_4b8 = 0;
      }
      if (local_48c != 0) {
        (*(code *)PTR_CyaSSL_Free_004be640)(local_48c);
      }
      if ((0x400 < iVar2) && (local_4b4 != (undefined1 *)0x0)) {
        (*(code *)PTR_CyaSSL_Free_004be640)(local_4b4);
      }
      (*(code *)PTR_fclose_004beb90)(iVar1);
    }
  }
  return local_4b8;
}



// ==== CyaSSL_RAND_seed @ 00444db4 size=208

undefined4 CyaSSL_RAND_seed(void)

{
  int iVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x27e8);
  if (*(int *)(PTR_clock_gettime_004be64c + -0x2f8) == 0) {
    iVar1 = (*(code *)PTR_InitRng_004be8a8)(PTR_clock_gettime_004be64c + -0x304);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x27fc);
      return 0;
    }
    *(undefined4 *)(PTR_clock_gettime_004be64c + -0x2f8) = 1;
  }
  return 1;
}



// ==== CyaSSL_BN_CTX_new @ 00444fe0 size=96

undefined * CyaSSL_BN_CTX_new(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2840);
  return PTR_clock_gettime_004be64c + -0x2e8;
}



// ==== CyaSSL_BN_CTX_init @ 00445040 size=88

void CyaSSL_BN_CTX_init(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2854);
  return;
}



// ==== CyaSSL_BN_CTX_free @ 00445098 size=88

void CyaSSL_BN_CTX_free(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2868);
  return;
}



// ==== CyaSSL_BN_new @ 00445164 size=408

int CyaSSL_BN_new(void)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2890);
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(0x10);
  if (iVar1 == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x28a0);
    iVar2 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_CyaSSL_Malloc_004be634)(8);
    if (iVar2 == 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x28c4);
      if (iVar1 != 0) {
        (*(code *)PTR_CyaSSL_Free_004be640)(iVar1);
      }
      iVar2 = 0;
    }
    else {
      (*(code *)(PTR_LAB_004be7a0 + 0x50f0))(iVar2);
      *(int *)(iVar2 + 4) = iVar1;
      iVar1 = (*(code *)PTR_mp_init_004be8b0)(iVar1);
      if (iVar1 != 0) {
        (*(code *)PTR_CyaSSL_BN_free_004be8b4)(iVar2);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



// ==== CyaSSL_BN_free @ 004452fc size=248

void CyaSSL_BN_free(int param_1)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x28f0);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)PTR_mp_clear_004be8b8)(*(undefined4 *)(param_1 + 4));
      if (*(int *)(param_1 + 4) != 0) {
        (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 4));
      }
      *(undefined4 *)(param_1 + 4) = 0;
    }
    if (param_1 != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(param_1);
    }
  }
  return;
}



// ==== CyaSSL_BN_clear_free @ 004453f4 size=112

void CyaSSL_BN_clear_free(undefined4 param_1)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2900);
  (*(code *)PTR_CyaSSL_BN_free_004be8b4)(param_1);
  return;
}



// ==== CyaSSL_BN_sub @ 00445464 size=260

undefined4 CyaSSL_BN_sub(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2918);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_mp_sub_004be8bc)
                      (*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),
                       *(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2928);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== CyaSSL_BN_mod @ 00445568 size=264

undefined4 CyaSSL_BN_mod(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2944);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_mp_mod_004be8c0)
                      (*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),
                       *(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2954);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== CyaSSL_BN_value_one @ 00445670 size=196

undefined4 CyaSSL_BN_value_one(void)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2970);
  if (*(int *)(PTR_clock_gettime_004be64c + -0x2e4) == 0) {
    uVar1 = (*(code *)PTR_CyaSSL_BN_new_004be8c4)();
    *(undefined4 *)(PTR_clock_gettime_004be64c + -0x2e4) = uVar1;
    if (*(int *)(PTR_clock_gettime_004be64c + -0x2e4) != 0) {
      (*(code *)PTR_mp_set_int_004be8c8)
                (*(undefined4 *)(*(int *)(PTR_clock_gettime_004be64c + -0x2e4) + 4),1);
    }
  }
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x2e4);
}



// ==== CyaSSL_BN_num_bytes @ 00445734 size=168

undefined4 CyaSSL_BN_num_bytes(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2984);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_mp_unsigned_bin_size_004be8cc)(*(undefined4 *)(param_1 + 4));
  }
  return uVar1;
}



// ==== CyaSSL_BN_num_bits @ 004457dc size=168

undefined4 CyaSSL_BN_num_bits(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2998);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_mp_count_bits_004be8d0)(*(undefined4 *)(param_1 + 4));
  }
  return uVar1;
}



// ==== CyaSSL_BN_is_zero @ 00445884 size=152

bool CyaSSL_BN_is_zero(int param_1)

{
  bool bVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x29ac);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = **(int **)(param_1 + 4) == 0;
  }
  return bVar1;
}



// ==== CyaSSL_BN_is_one @ 0044591c size=196

undefined4 CyaSSL_BN_is_one(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x29c0);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_mp_cmp_d_004be8d4)(*(undefined4 *)(param_1 + 4),1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== CyaSSL_BN_is_odd @ 004459e0 size=196

undefined4 CyaSSL_BN_is_odd(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x29d4);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0;
  }
  else if ((**(int **)(param_1 + 4) < 1) || ((**(uint **)(*(int *)(param_1 + 4) + 0xc) & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// ==== CyaSSL_BN_cmp @ 00445aa4 size=212

undefined4 CyaSSL_BN_cmp(int param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x29e8);
  if ((((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) || (param_2 == 0)) ||
     (*(int *)(param_2 + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_mp_cmp_004be8d8)
                      (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
  }
  return uVar1;
}



// ==== CyaSSL_BN_bn2bin @ 00445b78 size=344

undefined4 CyaSSL_BN_bn2bin(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x29f8);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2a0c);
    uVar2 = 0xffffffff;
  }
  else if (param_2 == 0) {
    uVar2 = (*(code *)PTR_mp_unsigned_bin_size_004be8cc)(*(undefined4 *)(param_1 + 4));
  }
  else {
    iVar1 = (*(code *)PTR_mp_to_unsigned_bin_004be8dc)(*(undefined4 *)(param_1 + 4),param_2);
    if (iVar1 == 0) {
      uVar2 = (*(code *)PTR_mp_unsigned_bin_size_004be8cc)(*(undefined4 *)(param_1 + 4));
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2a1c);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// ==== CyaSSL_BN_bin2bn @ 00445cd0 size=260

int CyaSSL_BN_bin2bn(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2a38);
  if ((param_3 == 0) || (*(int *)(param_3 + 4) == 0)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2a6c);
  }
  else {
    iVar1 = (*(code *)PTR_mp_read_unsigned_bin_004be8e0)
                      (*(undefined4 *)(param_3 + 4),param_1,param_2);
    if (iVar1 != 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2a4c);
      param_3 = 0;
    }
  }
  return param_3;
}



// ==== CyaSSL_BN_mask_bits @ 00445dd4 size=100

undefined4 CyaSSL_BN_mask_bits(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2a94);
  return 0xffffffff;
}



// ==== CyaSSL_BN_rand @ 00445e38 size=584

undefined4 CyaSSL_BN_rand(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_420;
  int local_41c;
  undefined *local_418;
  undefined1 auStack_414 [11];
  byte abStack_409 [1025];
  
  local_420 = 0;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = param_2 + 7;
  }
  local_41c = (int)uVar2 >> 3;
  local_418 = (undefined *)0x0;
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2aa8);
  if ((param_2 & 7) != 0) {
    local_41c = local_41c + 1;
  }
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2ab8);
  }
  else {
    iVar1 = (*(code *)PTR_InitRng_004be8a8)(auStack_414);
    if (iVar1 == 0) {
      local_418 = auStack_414;
    }
    else if (*(int *)(PTR_clock_gettime_004be64c + -0x2f8) != 0) {
      local_418 = PTR_clock_gettime_004be64c + -0x304;
    }
  }
  if (local_418 != (undefined *)0x0) {
    iVar1 = (*(code *)PTR_RNG_GenerateBlock_004be63c)(local_418,abStack_409 + 1,local_41c);
    if (iVar1 == 0) {
      abStack_409[1] = abStack_409[1] | 0xc0;
      abStack_409[local_41c] = abStack_409[local_41c] | 1;
      iVar1 = (*(code *)PTR_mp_read_unsigned_bin_004be8e0)
                        (*(undefined4 *)(param_1 + 4),abStack_409 + 1,local_41c);
      if (iVar1 == 0) {
        local_420 = 1;
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2ad0);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2828);
    }
  }
  return local_420;
}



// ==== CyaSSL_BN_is_bit_set @ 00446080 size=100

undefined4 CyaSSL_BN_is_bit_set(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2ae4);
  return 0;
}



// ==== CyaSSL_BN_hex2bn @ 004460e4 size=512

undefined4 CyaSSL_BN_hex2bn(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_410;
  undefined4 local_40c;
  undefined1 auStack_408 [1024];
  
  local_410 = 0;
  local_40c = 0x400;
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2afc);
  if (param_2 == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x418);
  }
  else {
    uVar1 = (*(code *)PTR_strlen_004beb5c)(param_2);
    iVar2 = (*(code *)PTR_Base16_Decode_004be710)(param_2,uVar1,auStack_408,&local_40c);
    if (iVar2 < 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2b10);
    }
    else if (param_1 == (int *)0x0) {
      local_410 = local_40c;
    }
    else {
      if (*param_1 == 0) {
        iVar2 = (*(code *)PTR_CyaSSL_BN_new_004be8c4)();
        *param_1 = iVar2;
      }
      if (*param_1 == 0) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2b28);
      }
      else {
        iVar2 = (*(code *)PTR_CyaSSL_BN_bin2bn_004be8e4)(auStack_408,local_40c,*param_1);
        if (iVar2 == 0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2b38);
        }
        else {
          local_410 = 1;
        }
      }
    }
  }
  return local_410;
}



// ==== CyaSSL_BN_dup @ 004462e4 size=360

int CyaSSL_BN_dup(int param_1)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2b4c);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2b5c);
    iVar2 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_CyaSSL_BN_new_004be8c4)();
    if (iVar2 == 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2b6c);
      iVar2 = 0;
    }
    else {
      iVar1 = (*(code *)PTR_mp_copy_004be8e8)
                        (*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar2 + 4));
      if (iVar1 != 0) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2b7c);
        (*(code *)PTR_CyaSSL_BN_free_004be8b4)(iVar2);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



// ==== CyaSSL_BN_copy @ 0044644c size=100

undefined4 CyaSSL_BN_copy(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2b8c);
  return 0;
}



// ==== CyaSSL_BN_set_word @ 004464b0 size=100

undefined4 CyaSSL_BN_set_word(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2b9c);
  return 0xffffffff;
}



// ==== CyaSSL_BN_dec2bn @ 00446514 size=100

undefined4 CyaSSL_BN_dec2bn(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2bb0);
  return 0xffffffff;
}



// ==== CyaSSL_BN_bn2dec @ 00446578 size=96

undefined4 CyaSSL_BN_bn2dec(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2bc4);
  return 0;
}



// ==== CyaSSL_RSA_new @ 00446660 size=504

int CyaSSL_RSA_new(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2bd8);
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(0x88);
  if (iVar1 == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2be8);
    iVar3 = 0;
  }
  else {
    iVar3 = (*(code *)PTR_CyaSSL_Malloc_004be634)(0x28);
    if (iVar3 == 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2c10);
      if (iVar1 != 0) {
        (*(code *)PTR_CyaSSL_Free_004be640)(iVar1);
      }
      iVar3 = 0;
    }
    else {
      (*(code *)(PTR_LAB_004be7a0 + 0x65d8))(iVar3);
      iVar2 = (*(code *)PTR_InitRsaKey_004be728)(iVar1,0);
      if (iVar2 == 0) {
        *(int *)(iVar3 + 0x20) = iVar1;
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2c3c);
        if (iVar3 != 0) {
          (*(code *)PTR_CyaSSL_Free_004be640)(iVar3);
        }
        if (iVar1 != 0) {
          (*(code *)PTR_CyaSSL_Free_004be640)(iVar1);
        }
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}



// ==== CyaSSL_RSA_free @ 00446858 size=532

void CyaSSL_RSA_free(undefined4 *param_1)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2c5c);
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[8] != 0) {
      (*(code *)PTR_FreeRsaKey_004be730)(param_1[8]);
      if (param_1[8] != 0) {
        (*(code *)PTR_CyaSSL_Free_004be640)(param_1[8]);
      }
      param_1[8] = 0;
    }
    (*(code *)PTR_CyaSSL_BN_free_004be8b4)(param_1[7]);
    (*(code *)PTR_CyaSSL_BN_free_004be8b4)(param_1[6]);
    (*(code *)PTR_CyaSSL_BN_free_004be8b4)(param_1[5]);
    (*(code *)PTR_CyaSSL_BN_free_004be8b4)(param_1[4]);
    (*(code *)PTR_CyaSSL_BN_free_004be8b4)(param_1[3]);
    (*(code *)PTR_CyaSSL_BN_free_004be8b4)(param_1[2]);
    (*(code *)PTR_CyaSSL_BN_free_004be8b4)(param_1[1]);
    (*(code *)PTR_CyaSSL_BN_free_004be8b4)(*param_1);
    (*(code *)(PTR_LAB_004be7a0 + 0x65d8))(param_1);
    if (param_1 != (undefined4 *)0x0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(param_1);
    }
  }
  return;
}



// ==== CyaSSL_RSA_generate_key_ex @ 00446f98 size=388

undefined4 CyaSSL_RSA_generate_key_ex(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined1 auStack_14 [12];
  
  local_18 = 0xffffffff;
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2d74);
  iVar1 = (*(code *)PTR_InitRng_004be8a8)(auStack_14);
  if (iVar1 < 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2d90);
  }
  else {
    iVar1 = (*(code *)PTR_MakeRsaKey_004be8ec)
                      (*(undefined4 *)(param_1 + 0x20),param_2,0x10001,auStack_14);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2da0);
    }
    else {
      iVar1 = (*(code *)(PTR_LAB_004be7a0 + 0x6bc4))(param_1);
      if (iVar1 < 0) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2db4);
      }
      else {
        *(undefined1 *)(param_1 + 0x24) = 1;
        local_18 = 1;
      }
    }
  }
  return local_18;
}



// ==== CyaSSL_RSA_blinding_on @ 0044711c size=100

undefined4 CyaSSL_RSA_blinding_on(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2dcc);
  return 1;
}



// ==== CyaSSL_RSA_public_encrypt @ 00447180 size=108

undefined4 CyaSSL_RSA_public_encrypt(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2de4);
  return 0xffffffff;
}



// ==== CyaSSL_RSA_private_decrypt @ 004471ec size=108

undefined4 CyaSSL_RSA_private_decrypt(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2e00);
  return 0xffffffff;
}



// ==== CyaSSL_RSA_size @ 00447258 size=152

undefined4 CyaSSL_RSA_size(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2e1c);
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_CyaSSL_BN_num_bytes_004be8f0)(*param_1);
  }
  return uVar1;
}



// ==== CyaSSL_RSA_sign @ 004472f0 size=860

undefined4
CyaSSL_RSA_sign(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5,
               undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int local_228;
  undefined *local_224;
  undefined4 local_220;
  undefined1 auStack_218 [12];
  undefined1 auStack_20c [516];
  
  local_224 = (undefined *)0x0;
  local_220 = 0;
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2e2c);
  if ((((param_2 == 0) || (param_4 == 0)) || (param_5 == (int *)0x0)) ||
     (param_6 == (undefined4 *)0x0)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2ab8);
  }
  else if (*(char *)(param_6 + 9) == '\0') {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2e3c);
  }
  else if ((param_1 == 4) || (param_1 == 0x40)) {
    local_228 = (*(code *)PTR_CyaSSL_BN_num_bytes_004be8f0)(*param_6);
    if (local_228 == 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2e5c);
    }
    else {
      iVar1 = (*(code *)PTR_InitRng_004be8a8)(auStack_218);
      if (iVar1 == 0) {
        local_224 = auStack_218;
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2e6c);
        if (*(int *)(PTR_clock_gettime_004be64c + -0x2f8) == 0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2e88);
        }
        else {
          local_224 = PTR_clock_gettime_004be64c + -0x304;
        }
      }
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2e50);
  }
  if (local_224 != (undefined *)0x0) {
    if (param_1 == 4) {
      uVar2 = 0x289;
    }
    else {
      uVar2 = 0x58;
    }
    iVar1 = (*(code *)PTR_EncodeSignature_004be8f4)(auStack_20c,param_2,param_3,uVar2);
    if (iVar1 == 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2e9c);
    }
    else {
      iVar1 = (*(code *)PTR_RsaSSL_Sign_004be8f8)
                        (auStack_20c,iVar1,param_4,local_228,param_6[8],local_224);
      *param_5 = iVar1;
      if (*param_5 == 0) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2eb4);
      }
      else {
        local_220 = 1;
      }
    }
  }
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2ec4);
  return local_220;
}



// ==== CyaSSL_RSA_public_decrypt @ 0044764c size=108

undefined4 CyaSSL_RSA_public_decrypt(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2edc);
  return 0xffffffff;
}



// ==== CyaSSL_RsaGenAdd @ 004476b8 size=736

undefined4 CyaSSL_RsaGenAdd(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  undefined1 auStack_1c [20];
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2ef8);
  if ((((param_1 == 0) || (*(int *)(param_1 + 0xc) == 0)) || (*(int *)(param_1 + 0x10) == 0)) ||
     (((*(int *)(param_1 + 8) == 0 || (*(int *)(param_1 + 0x14) == 0)) ||
      (*(int *)(param_1 + 0x18) == 0)))) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2f0c);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = (*(code *)PTR_mp_init_004be8b0)(auStack_1c);
    if (iVar1 == 0) {
      local_20 = (*(code *)PTR_mp_sub_d_004be8fc)
                           (*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),1,auStack_1c);
      if (local_20 == 0) {
        local_20 = (*(code *)PTR_mp_mod_004be8c0)
                             (*(undefined4 *)(*(int *)(param_1 + 8) + 4),auStack_1c,
                              *(undefined4 *)(*(int *)(param_1 + 0x14) + 4));
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2f30);
      }
      if (local_20 == 0) {
        local_20 = (*(code *)PTR_mp_sub_d_004be8fc)
                             (*(undefined4 *)(*(int *)(param_1 + 0x10) + 4),1,auStack_1c);
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2f40);
      }
      if (local_20 == 0) {
        local_20 = (*(code *)PTR_mp_mod_004be8c0)
                             (*(undefined4 *)(*(int *)(param_1 + 8) + 4),auStack_1c,
                              *(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2f30);
      }
      (*(code *)PTR_mp_clear_004be8b8)(auStack_1c);
      if (local_20 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2f20);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// ==== CyaSSL_HMAC_Init @ 00447998 size=604

void CyaSSL_HMAC_Init(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2f50);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2f64);
  }
  else {
    if (param_4 != 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2f74);
      iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_4,PTR_DAT_004be644 + 0x8e4,3);
      if (iVar1 == 0) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2f84);
        *(undefined4 *)(param_1 + 0x218) = 0;
      }
      else {
        iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_4,PTR_DAT_004be644 + 0x1be8,6);
        if (iVar1 == 0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2f90);
          *(undefined4 *)(param_1 + 0x218) = 2;
        }
        else {
          iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_4,PTR_DAT_004be644 + 0x1c00,3);
          if (iVar1 == 0) {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2f9c);
            *(undefined4 *)(param_1 + 0x218) = 1;
          }
          else {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2fa8);
          }
        }
      }
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2fb8);
      (*(code *)PTR_HmacSetKey_004be874)(param_1,*(undefined4 *)(param_1 + 0x218),param_2,param_3);
    }
  }
  return;
}



// ==== CyaSSL_HMAC_Update @ 00447bf4 size=188

void CyaSSL_HMAC_Update(int param_1,int param_2,undefined4 param_3)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2fc4);
  if ((param_1 != 0) && (param_2 != 0)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2fd8);
    (*(code *)PTR_HmacUpdate_004be878)(param_1,param_2,param_3);
  }
  return;
}



// ==== CyaSSL_HMAC_Final @ 00447cb0 size=348

void CyaSSL_HMAC_Final(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2fe8);
  if ((param_1 != 0) && (param_2 != 0)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2ffc);
    (*(code *)PTR_HmacFinal_004be87c)(param_1,param_2);
    if (param_3 != (undefined4 *)0x0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3008);
      iVar1 = *(int *)(param_1 + 0x218);
      if (iVar1 == 1) {
        *param_3 = 0x14;
      }
      else if (iVar1 == 2) {
        *param_3 = 0x20;
      }
      else if (iVar1 == 0) {
        *param_3 = 0x10;
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x301c);
      }
    }
  }
  return;
}



// ==== CyaSSL_HMAC_cleanup @ 00447e0c size=88

void CyaSSL_HMAC_cleanup(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x302c);
  return;
}



// ==== CyaSSL_get_digestbynid @ 00447e64 size=224

undefined4 CyaSSL_get_digestbynid(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3040);
  if (param_1 == 4) {
    uVar1 = (*(code *)PTR_CyaSSL_EVP_md5_004be900)();
  }
  else if (param_1 == 0x40) {
    uVar1 = (*(code *)PTR_CyaSSL_EVP_sha1_004be904)();
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3058);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== CyaSSL_EVP_PKEY_get1_RSA @ 00447f44 size=96

undefined4 CyaSSL_EVP_PKEY_get1_RSA(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x306c);
  return 0;
}



// ==== CyaSSL_EVP_PKEY_get1_DSA @ 00447fa4 size=96

undefined4 CyaSSL_EVP_PKEY_get1_DSA(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3088);
  return 0;
}



// ==== CyaSSL_EVP_X_STATE @ 00448004 size=216

int CyaSSL_EVP_X_STATE(int param_1)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x30a4);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if (*(char *)(param_1 + 5) == '\t') {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x30b8);
    param_1 = param_1 + 0x18;
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x30d0);
    param_1 = 0;
  }
  return param_1;
}



// ==== CyaSSL_EVP_X_STATE_LEN @ 004480dc size=212

undefined4 CyaSSL_EVP_X_STATE_LEN(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x30e4);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (*(char *)(param_1 + 5) == '\t') {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x30fc);
    uVar1 = 0x102;
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x30d0);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== CyaSSL_3des_iv @ 004481b0 size=256

void CyaSSL_3des_iv(int param_1,int param_2,int param_3)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3118);
  if ((param_1 == 0) || (param_3 == 0)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x418);
  }
  else if (param_2 == 0) {
    (*(code *)PTR_memcpy_004bebdc)(param_3,param_1 + 0x198,8);
  }
  else {
    (*(code *)PTR_Des3_SetIV_004be818)(param_1 + 0x18,param_3);
  }
  return;
}



// ==== CyaSSL_aes_ctr_iv @ 004482b0 size=256

void CyaSSL_aes_ctr_iv(int param_1,int param_2,int param_3)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3128);
  if ((param_1 == 0) || (param_3 == 0)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x418);
  }
  else if (param_2 == 0) {
    (*(code *)PTR_memcpy_004bebdc)(param_3,param_1 + 0x10c,0x10);
  }
  else {
    (*(code *)PTR_AesSetIV_004be808)(param_1 + 0x18,param_3);
  }
  return;
}



// ==== CyaSSL_ripemd160 @ 004483b0 size=92

undefined4 CyaSSL_ripemd160(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x313c);
  return 0;
}



// ==== CyaSSL_EVP_MD_size @ 0044840c size=448

undefined4 CyaSSL_EVP_MD_size(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3150);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3164);
    uVar2 = 0xffffff53;
  }
  else {
    iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_1,PTR_DAT_004be644 + 0x8e4,3);
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    else {
      iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_1,PTR_DAT_004be644 + 0x1be8,6);
      if (iVar1 == 0) {
        uVar2 = 0x20;
      }
      else {
        iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_1,PTR_DAT_004be644 + 0x1bf0,6);
        if (iVar1 == 0) {
          uVar2 = 0x30;
        }
        else {
          iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_1,PTR_DAT_004be644 + 0x1bf8,6);
          if (iVar1 == 0) {
            uVar2 = 0x40;
          }
          else {
            iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_1,PTR_DAT_004be644 + 0x1c00,3);
            if (iVar1 == 0) {
              uVar2 = 0x14;
            }
            else {
              uVar2 = 0xffffff53;
            }
          }
        }
      }
    }
  }
  return uVar2;
}



// ==== CyaSSL_EVP_CIPHER_CTX_iv_length @ 004485cc size=416

undefined4 CyaSSL_EVP_CIPHER_CTX_iv_length(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3174);
  if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0044862c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 +
                                        (uint)*(byte *)(param_1 + 5) * 4 + 0x3194)))();
    return uVar1;
  }
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1ac8);
  return 0;
}



// ==== CyaSSL_OPENSSL_free @ 0044876c size=132

void CyaSSL_OPENSSL_free(int param_1)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x31c0);
  if (param_1 != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(param_1);
  }
  return;
}



// ==== CyaSSL_PEM_write_bio_RSAPrivateKey @ 004487f0 size=108

undefined4 CyaSSL_PEM_write_bio_RSAPrivateKey(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x31d4);
  return 0xffffffff;
}



// ==== CyaSSL_PEM_write_bio_DSAPrivateKey @ 0044885c size=108

undefined4 CyaSSL_PEM_write_bio_DSAPrivateKey(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x31f8);
  return 0xffffffff;
}



// ==== CyaSSL_PEM_read_bio_PrivateKey @ 004488c8 size=108

undefined4 CyaSSL_PEM_read_bio_PrivateKey(void)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x321c);
  return 0;
}



// ==== CyaSSL_RSA_LoadDer @ 00448934 size=400

int CyaSSL_RSA_LoadDer(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x323c);
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (param_2 == 0)) || (param_3 < 1)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2ab8);
    iVar1 = -0xad;
  }
  else {
    iVar1 = (*(code *)PTR_RsaPrivateKeyDecode_004be72c)
                      (param_2,&local_c,*(undefined4 *)(param_1 + 0x20),param_3);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x3250);
    }
    else {
      iVar1 = (*(code *)(PTR_LAB_004be7a0 + 0x6bc4))(param_1);
      if (iVar1 < 0) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2db4);
        iVar1 = -1;
      }
      else {
        *(undefined1 *)(param_1 + 0x24) = 1;
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}



// ==== CyaSSL_DeriveTlsKeys @ 00449788 size=244

undefined4
CyaSSL_DeriveTlsKeys
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  (*(code *)PTR_memcpy_004bebdc)(auStack_48,param_5,0x20);
  (*(code *)PTR_memcpy_004bebdc)(auStack_28,param_6,0x20);
  uVar1 = (*(code *)(PTR_LAB_004be908 + -0x6d48))
                    (param_1,param_2,param_3,param_4,PTR_DAT_004be644 + 0x32e8,0xd,auStack_48,0x40,
                     param_7,param_8);
  return uVar1;
}



// ==== CyaSSL_MakeTlsMasterSecret @ 004499c8 size=244

undefined4
CyaSSL_MakeTlsMasterSecret
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  (*(code *)PTR_memcpy_004bebdc)(auStack_48,param_5,0x20);
  (*(code *)PTR_memcpy_004bebdc)(auStack_28,param_6,0x20);
  uVar1 = (*(code *)(PTR_LAB_004be908 + -0x6d48))
                    (param_1,param_2,param_3,param_4,PTR_DAT_004be644 + 0x32d8,0xd,auStack_48,0x40,
                     param_7,param_8);
  return uVar1;
}



// ==== CyaSSL_GetHmacType @ 00449e80 size=200

undefined4 CyaSSL_GetHmacType(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffff53;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x32);
    if (bVar1 == 2) {
      uVar2 = 1;
    }
    else {
      if (bVar1 < 3) {
        if (bVar1 == 1) {
          return 0;
        }
      }
      else {
        if (bVar1 == 4) {
          return 2;
        }
        if (bVar1 == 5) {
          return 5;
        }
      }
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// ==== CyaSSL_SetTlsHmacInner @ 00449f48 size=332

undefined4
CyaSSL_SetTlsHmacInner
          (int param_1,int param_2,undefined2 param_3,undefined1 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0xffffff53;
  }
  else {
    (*(code *)PTR_memset_004beb98)(param_2,0,0xd);
    uVar1 = (*(code *)(PTR_LAB_004be908 + -0x61ec))(param_1,param_5);
    (*(code *)(PTR_LAB_004be908 + -0x626c))(uVar1,param_2 + 4);
    *(undefined1 *)(param_2 + 8) = param_4;
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 8);
    *(undefined1 *)(param_2 + 10) = *(undefined1 *)(param_1 + 9);
    (*(code *)(PTR_LAB_004be908 + -0x62c4))(param_3,param_2 + 0xb);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== CyaSSL_ERR_reason_error_string @ 0048e720 size=200

undefined * CyaSSL_ERR_reason_error_string(int param_1)

{
  undefined *puVar1;
  
  if ((param_1 < -100) && (-300 < param_1)) {
    puVar1 = (undefined *)(*(code *)PTR_CTaoCryptGetErrorString_004beaf8)(param_1);
  }
  else {
    if (param_1 + 0x1f5U < 0x1fc) {
                    /* WARNING: Could not recover jumptable at 0x0048e7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (undefined *)
               (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004bead8 + (param_1 + 0x1f5U) * 4 + -0x63bc)))()
      ;
      return puVar1;
    }
    puVar1 = PTR_DAT_004bead8 + -0x63d4;
  }
  return puVar1;
}



