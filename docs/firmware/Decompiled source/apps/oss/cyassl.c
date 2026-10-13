/* oss — "cyassl" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== CYASSL_MSG @ 00470430 size=108

void CYASSL_MSG(undefined4 param_1)

{
  if (*(int *)(PTR_DAT_00560988 + -0x601c) != 0) {
    (*(code *)(PTR_LAB_00560f68 + 0x37c))(1,param_1);
  }
  return;
}



// ==== CyaSSL_Malloc @ 00470730 size=160

undefined4 CyaSSL_Malloc(undefined4 param_1)

{
  undefined4 local_10;
  
  if (*(int *)(PTR_DAT_00560988 + -0x6010) == 0) {
    local_10 = (*(code *)PTR_malloc_005614ec)(param_1);
  }
  else {
    local_10 = (**(code **)(PTR_DAT_00560988 + -0x6010))(param_1);
  }
  return local_10;
}



// ==== CyaSSL_Free @ 004707d0 size=136

void CyaSSL_Free(undefined4 param_1)

{
  if (*(int *)(PTR_DAT_00560988 + -0x600c) == 0) {
    (*(code *)PTR_free_005615c0)(param_1);
  }
  else {
    (**(code **)(PTR_DAT_00560988 + -0x600c))(param_1);
  }
  return;
}



// ==== CyaSSL_Realloc @ 00470858 size=168

undefined4 CyaSSL_Realloc(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  
  if (*(int *)(PTR_DAT_00560988 + -0x6008) == 0) {
    local_10 = (*(code *)PTR_realloc_00561604)(param_1,param_2);
  }
  else {
    local_10 = (**(code **)(PTR_DAT_00560988 + -0x6008))(param_1,param_2);
  }
  return local_10;
}



// ==== CyaSSL_CTX_new @ 00470a54 size=408

int CyaSSL_CTX_new(int param_1)

{
  int iVar1;
  int local_10;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4798);
  if (*(int *)(PTR_DAT_00560988 + -0x6000) == 0) {
    (*(code *)PTR_CyaSSL_Init_00560f94)();
  }
  if (param_1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0x16c);
    if (local_10 == 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4778);
      if (param_1 != 0) {
        (*(code *)PTR_CyaSSL_Free_00560f84)(param_1);
      }
    }
    else {
      iVar1 = (*(code *)PTR_InitSSL_Ctx_00560f98)(local_10,param_1);
      if (iVar1 < 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4788);
        (*(code *)PTR_CyaSSL_CTX_free_00560f9c)(local_10);
        local_10 = 0;
      }
    }
    (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x4798,0);
  }
  return local_10;
}



// ==== CyaSSL_CTX_free @ 00470bec size=156

void CyaSSL_CTX_free(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4758);
  if (param_1 != 0) {
    (*(code *)PTR_FreeSSL_Ctx_00560fa4)(param_1);
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x4758,0);
  return;
}



// ==== CyaSSL_free @ 00470d98 size=156

void CyaSSL_free(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4740);
  if (param_1 != 0) {
    (*(code *)PTR_FreeSSL_00560fac)(param_1);
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x4740,0);
  return;
}



// ==== CyaSSL_get_using_nonblock @ 00471198 size=140

undefined1 CyaSSL_get_using_nonblock(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x471c);
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x471c,*(undefined1 *)(param_1 + 0x4ee));
  return *(undefined1 *)(param_1 + 0x4ee);
}



// ==== CyaSSL_dtls @ 00471224 size=48

undefined1 CyaSSL_dtls(int param_1)

{
  return *(undefined1 *)(param_1 + 0x4d7);
}



// ==== CyaSSL_set_using_nonblock @ 00471254 size=116

void CyaSSL_set_using_nonblock(int param_1,int param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4700);
  *(bool *)(param_1 + 0x4ee) = param_2 != 0;
  return;
}



// ==== CyaSSL_negotiate @ 00471330 size=228

undefined4 CyaSSL_negotiate(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x46e4);
  if (*(char *)(param_1 + 0x4cc) == '\0') {
    local_10 = (*(code *)PTR_CyaSSL_accept_00560fb8)(param_1);
  }
  if (*(char *)(param_1 + 0x4cc) == '\x01') {
    local_10 = (*(code *)PTR_CyaSSL_connect_00560fbc)(param_1);
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x46e4,local_10);
  return local_10;
}



// ==== CyaSSL_write @ 0047143c size=272

int CyaSSL_write(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x46d0);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 < 0)) {
    iVar2 = -0xad;
  }
  else {
    puVar1 = (undefined4 *)(*(code *)PTR___errno_location_005614f0)();
    *puVar1 = 0;
    iVar2 = (*(code *)PTR_SendData_00560fc0)(param_1,param_2,param_3);
    (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x46d0,iVar2);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}



// ==== CyaSSL_read @ 0047171c size=144

undefined4 CyaSSL_read(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x469c);
  uVar1 = (*(code *)(PTR_LAB_00560f68 + 0x154c))(param_1,param_2,param_3,0);
  return uVar1;
}



// ==== CyaSSL_get_error @ 00471b38 size=288

undefined4 CyaSSL_get_error(int param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4634);
  if (param_2 < 1) {
    if (param_1 == 0) {
      uVar1 = 0xffffff53;
    }
    else {
      (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x4634,*(undefined4 *)(param_1 + 4));
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



// ==== CyaSSL_ERR_error_string @ 00471dc8 size=160

int CyaSSL_ERR_error_string(undefined4 param_1,int param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4604);
  if (param_2 == 0) {
    param_2 = *(int *)(PTR_DAT_0056098c + 0x648);
  }
  else {
    (*(code *)PTR_SetErrorString_00560fd8)(param_1,param_2);
  }
  return param_2;
}



// ==== CyaSSL_ERR_error_string_n @ 00471e68 size=284

void CyaSSL_ERR_error_string_n(undefined4 param_1,int param_2,uint param_3)

{
  undefined1 auStack_58 [80];
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x45f0);
  if (param_3 < 0x50) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x45d4);
    if (param_3 != 0) {
      (*(code *)PTR_CyaSSL_ERR_error_string_00560fdc)(param_1,auStack_58);
      (*(code *)PTR_memcpy_005615a4)(param_2,auStack_58,param_3 - 1);
      *(undefined1 *)(param_2 + (param_3 - 1)) = 0;
    }
  }
  else {
    (*(code *)PTR_CyaSSL_ERR_error_string_00560fdc)(param_1,param_2);
  }
  return;
}



// ==== CyaSSL_GetMacSecret @ 00472040 size=152

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



// ==== CyaSSL_CertManagerNew @ 004720d8 size=276

int CyaSSL_CertManagerNew(void)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x45b0);
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0x70);
  if (iVar1 != 0) {
    (*(code *)PTR_memset_00561588)(iVar1,0,0x70);
    iVar2 = (*(code *)PTR_InitMutex_00560fe4)(iVar1 + 0x2c);
    if (iVar2 != 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4598);
      (*(code *)PTR_CyaSSL_CertManagerFree_00560fe8)(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== CyaSSL_CertManagerFree @ 004721ec size=212

void CyaSSL_CertManagerFree(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4588);
  if (param_1 != 0) {
    (*(code *)PTR_FreeSignerTable_00560fec)(param_1,0xb,0);
    (*(code *)PTR_FreeMutex_00560ff0)(param_1 + 0x2c);
    if (param_1 != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(param_1);
    }
  }
  return;
}



// ==== CyaSSL_CertManagerUnloadCAs @ 004722c0 size=244

undefined4 CyaSSL_CertManagerUnloadCAs(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4570);
  if (param_1 == 0) {
    uVar2 = 0xffffff53;
  }
  else {
    iVar1 = (*(code *)PTR_LockMutex_00560ff4)(param_1 + 0x2c);
    if (iVar1 == 0) {
      (*(code *)PTR_FreeSignerTable_00560fec)(param_1,0xb,0);
      (*(code *)PTR_UnLockMutex_00560ff8)(param_1 + 0x2c);
      uVar2 = 1;
    }
    else {
      uVar2 = 0xffffff96;
    }
  }
  return uVar2;
}



// ==== CyaSSL_CertPemToDer @ 004723b4 size=556

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
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4554);
  if (((param_1 == 0) || (param_3 == 0)) || ((int)param_4 < 1)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4540);
    local_a0 = 0xffffff53;
  }
  else if (((param_5 == 0) || (param_5 == 4)) || (param_5 == 6)) {
    local_14 = 0;
    local_10 = 0;
    local_18 = 0;
    local_90 = 0;
    local_a0 = (*(code *)PTR_FUN_00560ffc)(param_1,param_2,param_5,&local_94,0,auStack_8c,&local_98)
    ;
    if ((int)local_a0 < 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x451c);
    }
    else if (param_4 < local_94) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x450c);
      local_a0 = 0xffffff53;
    }
    else {
      (*(code *)PTR_memcpy_005615a4)(param_3,local_90,local_94);
      local_a0 = local_94;
    }
    if (local_90 != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(local_90);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x452c);
    local_a0 = 0xffffff53;
  }
  return local_a0;
}



// ==== CyaSSL_KeyPemToDer @ 004726b4 size=672

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
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x44fc);
  if (((param_1 == 0) || (param_3 == 0)) || ((int)param_4 < 1)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4540);
    local_a0 = 0xffffff53;
  }
  else {
    local_14 = 0;
    local_10 = 0;
    local_18 = 0;
    local_90 = 0;
    if (param_5 != 0) {
      uVar1 = (*(code *)PTR_CyaSSLv23_client_method_00561000)();
      local_10 = (*(code *)PTR_CyaSSL_CTX_new_00561004)(uVar1);
      if (local_10 == 0) {
        return 0xffffff83;
      }
      (*(code *)PTR_CyaSSL_CTX_set_default_passwd_cb_00561008)(local_10,PTR_LAB_00560f68 + 0x25e0);
      (*(code *)PTR_CyaSSL_CTX_set_default_passwd_cb_userdata_0056100c)(local_10,param_5);
    }
    local_a0 = (*(code *)PTR_FUN_00560ffc)(param_1,param_2,1,&local_94,0,auStack_8c,&local_98);
    if (local_10 != 0) {
      (*(code *)PTR_CyaSSL_CTX_free_00560f9c)(local_10);
    }
    if ((int)local_a0 < 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x451c);
    }
    else if (param_4 < local_94) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x450c);
      local_a0 = 0xffffff53;
    }
    else {
      (*(code *)PTR_memcpy_005615a4)(param_3,local_90,local_94);
      local_a0 = local_94;
    }
    if (local_90 != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(local_90);
    }
  }
  return local_a0;
}



// ==== CyaSSL_ERR_print_errors_fp @ 00472954 size=156

void CyaSSL_ERR_print_errors_fp(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_60 [88];
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x44e8);
  (*(code *)PTR_SetErrorString_00560fd8)(param_2,auStack_60);
  (*(code *)PTR_fputs_005615bc)(auStack_60,param_1);
  return;
}



// ==== CyaSSL_SetMinVersion @ 00472b80 size=344

undefined4 CyaSSL_SetMinVersion(int param_1,int param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x44c0);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x44a8);
    return 0xffffff53;
  }
  if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x4d1) = 1;
  }
  else if (param_2 < 2) {
    if (param_2 != 0) {
LAB_00472c90:
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x44a8);
      return 0xffffff53;
    }
    *(undefined1 *)(param_1 + 0x4d1) = 0;
  }
  else if (param_2 == 2) {
    *(undefined1 *)(param_1 + 0x4d1) = 2;
  }
  else {
    if (param_2 != 3) goto LAB_00472c90;
    *(undefined1 *)(param_1 + 0x4d1) = 3;
  }
  return 1;
}



// ==== CyaSSL_SetVersion @ 00472cd8 size=644

undefined4 CyaSSL_SetVersion(int param_1,int param_2)

{
  undefined1 local_18;
  undefined1 local_17;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4490);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x44a8);
    return 0xffffff53;
  }
  if (param_2 == 1) {
    (*(code *)PTR_MakeTLSv1_00561014)(&local_18);
    *(undefined1 *)(param_1 + 8) = local_18;
    *(undefined1 *)(param_1 + 9) = local_17;
  }
  else if (param_2 < 2) {
    if (param_2 != 0) {
LAB_00472e8c:
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x44a8);
      return 0xffffff53;
    }
    (*(code *)PTR_MakeSSLv3_00561010)(&local_18);
    *(undefined1 *)(param_1 + 8) = local_18;
    *(undefined1 *)(param_1 + 9) = local_17;
  }
  else if (param_2 == 2) {
    (*(code *)PTR_MakeTLSv1_1_00561018)(&local_18);
    *(undefined1 *)(param_1 + 8) = local_18;
    *(undefined1 *)(param_1 + 9) = local_17;
  }
  else {
    if (param_2 != 3) goto LAB_00472e8c;
    (*(code *)PTR_MakeTLSv1_2_0056101c)(&local_18);
    *(undefined1 *)(param_1 + 8) = local_18;
    *(undefined1 *)(param_1 + 9) = local_17;
  }
  (*(code *)PTR_InitSuites_00561020)
            (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),1,0,
             *(undefined1 *)(param_1 + 0x4e0),*(undefined1 *)(param_1 + 0x4e1),
             *(undefined1 *)(param_1 + 0x4e2),*(undefined1 *)(param_1 + 0x4e3),
             *(undefined1 *)(param_1 + 0x4cc));
  return 1;
}



// ==== CyaSSL_Init @ 004739e0 size=356

int CyaSSL_Init(void)

{
  int iVar1;
  int local_10;
  
  local_10 = 1;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x436c);
  if (*(int *)(PTR_DAT_00560988 + -0x6000) == 0) {
    iVar1 = (*(code *)PTR_InitMutex_00560fe4)(PTR_DAT_00560988 + -0x5098);
    if (iVar1 != 0) {
      local_10 = -0x6a;
    }
    iVar1 = (*(code *)PTR_InitMutex_00560fe4)(PTR_DAT_00560988 + -0x5ffc);
    if (iVar1 != 0) {
      local_10 = -0x6a;
    }
  }
  if (local_10 == 1) {
    iVar1 = (*(code *)PTR_LockMutex_00560ff4)(PTR_DAT_00560988 + -0x5ffc);
    if (iVar1 == 0) {
      *(int *)(PTR_DAT_00560988 + -0x6000) = *(int *)(PTR_DAT_00560988 + -0x6000) + 1;
      (*(code *)PTR_UnLockMutex_00560ff8)(PTR_DAT_00560988 + -0x5ffc);
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4360);
      local_10 = -0x6a;
    }
  }
  return local_10;
}



// ==== CyaSSL_CertManagerVerifyBuffer @ 0047581c size=508

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
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3ebc);
  local_484 = 0;
  local_488 = 0;
  if (param_4 == 1) {
    local_8c = 0;
    local_10 = 0;
    local_c = 0;
    local_14 = 0;
    local_490 = (*(code *)PTR_FUN_00560ffc)
                          (param_2,param_3,0,&local_488,*(undefined4 *)(param_1 + 0x48),auStack_88,
                           &local_8c);
    if (local_490 == 0) {
      (*(code *)PTR_InitDecodedCert_00561024)
                (auStack_480,local_484,local_488,*(undefined4 *)(param_1 + 0x48));
    }
  }
  else {
    (*(code *)PTR_InitDecodedCert_00561024)
              (auStack_480,param_2,param_3,*(undefined4 *)(param_1 + 0x48));
  }
  if (local_490 == 0) {
    local_490 = (*(code *)PTR_ParseCertRelative_00561078)(auStack_480,0,1,param_1);
  }
  (*(code *)PTR_FreeDecodedCert_00561038)(auStack_480);
  if (local_484 != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(local_484);
  }
  if (local_490 == 0) {
    local_490 = 1;
  }
  return local_490;
}



// ==== CyaSSL_CertManagerEnableOCSP @ 00475a18 size=140

undefined4 CyaSSL_CertManagerEnableOCSP(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3e9c);
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    uVar1 = 0xffffff52;
  }
  return uVar1;
}



// ==== CyaSSL_CertManagerDisableOCSP @ 00475aa4 size=128

undefined4 CyaSSL_CertManagerDisableOCSP(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3e7c);
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    *(undefined1 *)(param_1 + 0x5c) = 0;
    uVar1 = 1;
  }
  return uVar1;
}



// ==== CyaSSL_CTX_load_verify_locations @ 00475e54 size=752

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
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3e40);
  if ((param_1 == 0) || ((param_2 == 0 && (param_3 == 0)))) {
    local_1b0 = 0;
  }
  else {
    if (param_2 != 0) {
      local_1b0 = (*(code *)PTR_FUN_0056107c)(param_1,param_2,1,4,0,0,0);
    }
    if ((local_1b0 == 1) && (param_3 != 0)) {
      iVar1 = (*(code *)PTR_opendir_00561558)(param_3);
      if (iVar1 == 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3e1c);
        local_1b0 = -0x166;
      }
      else {
        while ((local_1b0 == 1 && (iVar3 = (*(code *)PTR_readdir_005614dc)(iVar1), iVar3 != 0))) {
          (*(code *)PTR_memset_00561588)(auStack_1a4,0,0x100);
          (*(code *)PTR_strncpy_00561528)(auStack_1a4,param_3,0x7e);
          iVar2 = (*(code *)PTR_strlen_00561504)(auStack_1a4);
          auStack_1a4[iVar2] = 0x2f;
          auStack_1a4[iVar2 + 1] = 0;
          (*(code *)PTR_strncat_005614f4)(auStack_1a4,iVar3 + 0xb,0x80);
          iVar3 = (*(code *)PTR_stat_005615c8)(auStack_1a4,auStack_a0);
          if (iVar3 == 0) {
            if ((local_8c & 0x8000) != 0) {
              local_1b0 = (*(code *)PTR_FUN_0056107c)(param_1,auStack_1a4,1,4,0,0,0);
            }
          }
          else {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3df4);
            local_1b0 = -0x166;
          }
        }
        (*(code *)PTR_closedir_0056158c)(iVar1);
      }
    }
  }
  return local_1b0;
}



// ==== CyaSSL_CertManagerVerify @ 00476144 size=700

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
  iVar2 = (*(code *)PTR_fopen_00561548)(param_2,PTR_DAT_00560f88 + -0x3e5c);
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3de0);
  if (iVar2 == 0) {
    local_420 = 0xfffffffc;
  }
  else {
    (*(code *)PTR_fseek_0056152c)(iVar2,0,2);
    iVar3 = (*(code *)PTR_ftell_005614e0)(iVar2);
    (*(code *)PTR_rewind_00561608)(iVar2);
    if ((iVar3 < 0x400001) && (-1 < iVar3)) {
      if (0x400 < iVar3) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3e58);
        local_41c = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_00560f78)(iVar3);
        if (local_41c == (undefined1 *)0x0) {
          (*(code *)PTR_fclose_00561520)(iVar2);
          return 0xfffffffc;
        }
        bVar1 = true;
      }
      iVar4 = (*(code *)PTR_fread_005615e8)(local_41c,iVar3,1,iVar2);
      if (iVar4 < 0) {
        local_420 = 0xfffffffc;
      }
      else {
        local_420 = (*(code *)PTR_CyaSSL_CertManagerVerifyBuffer_00561080)
                              (param_1,local_41c,iVar3,param_3);
      }
      (*(code *)PTR_fclose_00561520)(iVar2);
      if ((bVar1) && (local_41c != (undefined1 *)0x0)) {
        (*(code *)PTR_CyaSSL_Free_00560f84)(local_41c);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3dc4);
      (*(code *)PTR_fclose_00561520)(iVar2);
      local_420 = 0xfffffffc;
    }
  }
  return local_420;
}



// ==== CyaSSL_CertManagerLoadCA @ 00476454 size=384

undefined4 CyaSSL_CertManagerLoadCA(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3da4);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3d88);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (*(code *)(PTR_LAB_00560f68 + 0x6400))();
    iVar1 = (*(code *)PTR_CyaSSL_CTX_new_00561004)(uVar2);
    if (iVar1 == 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3d70);
      uVar2 = 0xffffffff;
    }
    else {
      (*(code *)PTR_CyaSSL_CertManagerFree_00560fe8)(*(undefined4 *)(iVar1 + 0x48));
      *(int *)(iVar1 + 0x48) = param_1;
      uVar2 = (*(code *)PTR_CyaSSL_CTX_load_verify_locations_00561088)(iVar1,param_2,param_3);
      *(undefined4 *)(iVar1 + 0x48) = 0;
      (*(code *)PTR_CyaSSL_CTX_free_00560f9c)(iVar1);
    }
  }
  return uVar2;
}



// ==== CyaSSL_CertManagerEnableCRL @ 004765d4 size=140

undefined4 CyaSSL_CertManagerEnableCRL(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3d60);
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    uVar1 = 0xffffff52;
  }
  return uVar1;
}



// ==== CyaSSL_CertManagerDisableCRL @ 00476660 size=128

undefined4 CyaSSL_CertManagerDisableCRL(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3d44);
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
    uVar1 = 1;
  }
  return uVar1;
}



// ==== CyaSSL_CTX_der_load_verify_locations @ 00476740 size=212

undefined4 CyaSSL_CTX_der_load_verify_locations(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3d08);
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_0056107c)(param_1,param_2,param_3,4,0,0,0);
    if (iVar1 == 1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== CyaSSL_CTX_use_certificate_file @ 00476814 size=176

bool CyaSSL_CTX_use_certificate_file(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3ce0);
  iVar1 = (*(code *)PTR_FUN_0056107c)(param_1,param_2,param_3,0,0,0,0);
  return iVar1 == 1;
}



// ==== CyaSSL_CTX_use_PrivateKey_file @ 004768c4 size=176

bool CyaSSL_CTX_use_PrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3cc0);
  iVar1 = (*(code *)PTR_FUN_0056107c)(param_1,param_2,param_3,1,0,0,0);
  return iVar1 == 1;
}



// ==== CyaSSL_CTX_use_certificate_chain_file @ 00476974 size=176

bool CyaSSL_CTX_use_certificate_chain_file(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3ca0);
  iVar1 = (*(code *)PTR_FUN_0056107c)(param_1,param_2,1,0,0,1,0);
  return iVar1 == 1;
}



// ==== CyaSSL_use_certificate_file @ 00476a24 size=188

bool CyaSSL_use_certificate_file(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3c78);
  iVar1 = (*(code *)PTR_FUN_0056107c)(*param_1,param_2,param_3,0,param_1,0,0);
  return iVar1 == 1;
}



// ==== CyaSSL_use_PrivateKey_file @ 00476ae0 size=188

bool CyaSSL_use_PrivateKey_file(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3c5c);
  iVar1 = (*(code *)PTR_FUN_0056107c)(*param_1,param_2,param_3,1,param_1,0,0);
  return iVar1 == 1;
}



// ==== CyaSSL_use_certificate_chain_file @ 00476b9c size=188

bool CyaSSL_use_certificate_chain_file(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3c40);
  iVar1 = (*(code *)PTR_FUN_0056107c)(*param_1,param_2,1,0,param_1,1,0);
  return iVar1 == 1;
}



// ==== CyaSSL_use_RSAPrivateKey_file @ 00476ce0 size=136

undefined4 CyaSSL_use_RSAPrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3bfc);
  uVar1 = (*(code *)PTR_CyaSSL_use_PrivateKey_file_00561090)(param_1,param_2,param_3);
  return uVar1;
}



// ==== CyaSSL_CTX_set_verify @ 00476d68 size=204

void CyaSSL_CTX_set_verify(int param_1,uint param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3bdc);
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



// ==== CyaSSL_set_verify @ 00476e34 size=204

void CyaSSL_set_verify(int param_1,uint param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3bc4);
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



// ==== CyaSSL_SetCertCbCtx @ 00476f00 size=116

void CyaSSL_SetCertCbCtx(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3bb0);
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x56c) = param_2;
  }
  return;
}



// ==== CyaSSL_SetServerID @ 004770f4 size=432

undefined4 CyaSSL_SetServerID(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3b7c);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 < 1)) {
    uVar3 = 0xffffff53;
  }
  else {
    if (param_4 == 0) {
      local_10 = (*(code *)PTR_GetSessionClient_0056109c)(param_1,param_2,param_3);
      if (local_10 != 0) {
        iVar2 = (*(code *)PTR_FUN_00561098)(param_1,local_10);
        if (iVar2 != 1) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3b68);
          local_10 = 0;
        }
      }
    }
    if (local_10 == 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3b54);
      uVar1 = (*(code *)(PTR_LAB_00560f68 + 0x900))(0x14,param_3);
      *(undefined2 *)(param_1 + 0x564) = uVar1;
      (*(code *)PTR_memcpy_005615a4)(param_1 + 0x550,param_2,*(undefined2 *)(param_1 + 0x564));
    }
    uVar3 = 1;
  }
  return uVar3;
}



// ==== CyaSSL_CTX_set_cipher_list @ 004773e8 size=144

bool CyaSSL_CTX_set_cipher_list(int param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3afc);
  iVar1 = (*(code *)PTR_SetCipherList_005610a0)(param_1 + 0x4c,param_2);
  return iVar1 != 0;
}



// ==== CyaSSL_set_cipher_list @ 00477478 size=144

bool CyaSSL_set_cipher_list(int param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3ae0);
  iVar1 = (*(code *)PTR_SetCipherList_005610a0)(*(undefined4 *)(param_1 + 0xc),param_2);
  return iVar1 != 0;
}



// ==== CyaSSL_connect @ 004775c4 size=2044

undefined4 CyaSSL_connect(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3ab4);
  puVar1 = (undefined4 *)(*(code *)PTR___errno_location_005614f0)();
  *puVar1 = 0;
  if (*(char *)(param_1 + 0x4cc) == '\x01') {
    if (*(int *)(param_1 + 0x498) != 0) {
      uVar2 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
      *(undefined4 *)(param_1 + 4) = uVar2;
      if (*(int *)(param_1 + 4) != 0) {
        (*(code *)PTR_FUN_00560fd4)(*(undefined4 *)(param_1 + 4));
        return 0xffffffff;
      }
      *(char *)(param_1 + 0x4dc) = *(char *)(param_1 + 0x4dc) + '\x01';
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3aa4);
    }
    if (*(byte *)(param_1 + 0x4dc) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x00477734 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 +
                                          (uint)*(byte *)(param_1 + 0x4dc) * 4 + -0x388c)))();
      return uVar2;
    }
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x38a8);
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0xfffffea8;
    (*(code *)PTR_FUN_00560fd4)(*(undefined4 *)(param_1 + 4));
  }
  return 0xffffffff;
}



// ==== CyaSSL_accept @ 00477e84 size=2252

undefined4 CyaSSL_accept(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x384c);
  puVar1 = (undefined4 *)(*(code *)PTR___errno_location_005614f0)();
  *puVar1 = 0;
  if (*(char *)(param_1 + 0x4cc) == '\0') {
    if ((*(int *)(param_1 + 0x444) == 0) || (*(int *)(param_1 + 0x44c) == 0)) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x383c);
      *(undefined4 *)(param_1 + 4) = 0xfffffec3;
      (*(code *)PTR_FUN_00560fd4)(*(undefined4 *)(param_1 + 4));
    }
    else {
      if (*(int *)(param_1 + 0x498) != 0) {
        uVar2 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
        *(undefined4 *)(param_1 + 4) = uVar2;
        if (*(int *)(param_1 + 4) != 0) {
          (*(code *)PTR_FUN_00560fd4)(*(undefined4 *)(param_1 + 4));
          return 0xffffffff;
        }
        *(char *)(param_1 + 0x4dd) = *(char *)(param_1 + 0x4dd) + '\x01';
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x380c);
      }
      if (*(byte *)(param_1 + 0x4dd) < 0xd) {
                    /* WARNING: Could not emulate address calculation at 0x00478084 */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 +
                                            (uint)*(byte *)(param_1 + 0x4dd) * 4 + -0x3628)))();
        return uVar2;
      }
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3644);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0xfffffea8;
    (*(code *)PTR_FUN_00560fd4)(*(undefined4 *)(param_1 + 4));
  }
  return 0xffffffff;
}



// ==== CyaSSL_Cleanup @ 00478750 size=420

undefined4 CyaSSL_Cleanup(void)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 1;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x35f4);
  if (*(int *)(PTR_DAT_00560988 + -0x6000) == 0) {
    local_10 = 1;
  }
  else {
    iVar1 = (*(code *)PTR_LockMutex_00560ff4)(PTR_DAT_00560988 + -0x5ffc);
    if (iVar1 == 0) {
      iVar1 = *(int *)(PTR_DAT_00560988 + -0x6000);
      *(int *)(PTR_DAT_00560988 + -0x6000) = iVar1 + -1;
      if (*(int *)(PTR_DAT_00560988 + -0x6000) < 0) {
        *(undefined4 *)(PTR_DAT_00560988 + -0x6000) = 0;
      }
      (*(code *)PTR_UnLockMutex_00560ff8)(PTR_DAT_00560988 + -0x5ffc);
      if (iVar1 == 1) {
        iVar1 = (*(code *)PTR_FreeMutex_00560ff0)(PTR_DAT_00560988 + -0x5098);
        if (iVar1 != 0) {
          local_10 = 0xffffff96;
        }
        iVar1 = (*(code *)PTR_FreeMutex_00560ff0)(PTR_DAT_00560988 + -0x5ffc);
        if (iVar1 != 0) {
          local_10 = 0xffffff96;
        }
      }
      else {
        local_10 = 1;
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4360);
      local_10 = 0xffffff96;
    }
  }
  return local_10;
}



// ==== CyaSSL_check_domain_name @ 00479b10 size=332

bool CyaSSL_check_domain_name(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x34d0);
  if ((*(int *)(param_1 + 0x47c) != 0) && (*(int *)(param_1 + 0x47c) != 0)) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x47c));
  }
  iVar2 = (*(code *)PTR_strlen_00561504)(param_2);
  *(int *)(param_1 + 0x478) = iVar2 + 1;
  uVar3 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(*(undefined4 *)(param_1 + 0x478));
  *(undefined4 *)(param_1 + 0x47c) = uVar3;
  bVar1 = *(int *)(param_1 + 0x47c) == 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 4) = 0xfffffed1;
  }
  else {
    (*(code *)PTR_strncpy_00561528)
              (*(undefined4 *)(param_1 + 0x47c),param_2,*(undefined4 *)(param_1 + 0x478));
  }
  return !bVar1;
}



// ==== CyaSSL_set_compression @ 00479c5c size=96

undefined4 CyaSSL_set_compression(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x34b4);
  return 0xffffff52;
}



// ==== CyaSSL_writev @ 00479cbc size=532

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
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x349c);
  for (local_418 = 0; local_418 < param_3; local_418 = local_418 + 1) {
    local_420 = local_420 + *(int *)(param_2 + local_418 * 8 + 4);
  }
  if (0x400 < local_420) {
    local_428 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_00560f78)(local_420);
    if (local_428 == (undefined1 *)0x0) {
      return 0xfffffed1;
    }
    bVar1 = true;
  }
  for (local_418 = 0; local_418 < param_3; local_418 = local_418 + 1) {
    (*(code *)PTR_memcpy_005615a4)
              (local_428 + local_41c,*(undefined4 *)(param_2 + local_418 * 8),
               *(undefined4 *)(param_2 + local_418 * 8 + 4));
    local_41c = local_41c + *(int *)(param_2 + local_418 * 8 + 4);
  }
  uVar2 = (*(code *)PTR_CyaSSL_write_00560fc8)(param_1,local_428,local_420);
  if ((bVar1) && (local_428 != (undefined1 *)0x0)) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(local_428);
  }
  return uVar2;
}



// ==== CyaSSL_CTX_load_verify_buffer @ 00479ed0 size=248

undefined4
CyaSSL_CTX_load_verify_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x348c);
  if (param_4 == 1) {
    uVar1 = (*(code *)(PTR_LAB_00560f68 + 0x5690))(param_1,param_2,param_3,1,4,0);
  }
  else {
    uVar1 = (*(code *)(PTR_LAB_00560f68 + 0x4508))(param_1,param_2,param_3,param_4,4,0,0,0);
  }
  return uVar1;
}



// ==== CyaSSL_CTX_use_certificate_buffer @ 00479fc8 size=164

undefined4
CyaSSL_CTX_use_certificate_buffer
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x346c);
  uVar1 = (*(code *)(PTR_LAB_00560f68 + 0x4508))(param_1,param_2,param_3,param_4,0,0,0,0);
  return uVar1;
}



// ==== CyaSSL_CTX_use_PrivateKey_buffer @ 0047a06c size=168

undefined4
CyaSSL_CTX_use_PrivateKey_buffer
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3448);
  uVar1 = (*(code *)(PTR_LAB_00560f68 + 0x4508))(param_1,param_2,param_3,param_4,1,0,0,0);
  return uVar1;
}



// ==== CyaSSL_CTX_use_certificate_chain_buffer @ 0047a114 size=164

undefined4
CyaSSL_CTX_use_certificate_chain_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3424);
  uVar1 = (*(code *)(PTR_LAB_00560f68 + 0x4508))(param_1,param_2,param_3,1,0,0,0,1);
  return uVar1;
}



// ==== CyaSSL_use_certificate_buffer @ 0047a1b8 size=176

undefined4
CyaSSL_use_certificate_buffer
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x33fc);
  uVar1 = (*(code *)(PTR_LAB_00560f68 + 0x4508))(*param_1,param_2,param_3,param_4,0,param_1,0,0);
  return uVar1;
}



// ==== CyaSSL_use_PrivateKey_buffer @ 0047a268 size=180

undefined4
CyaSSL_use_PrivateKey_buffer
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x33dc);
  uVar1 = (*(code *)(PTR_LAB_00560f68 + 0x4508))(*param_1,param_2,param_3,param_4,1,param_1,0,0);
  return uVar1;
}



// ==== CyaSSL_use_certificate_chain_buffer @ 0047a31c size=176

undefined4
CyaSSL_use_certificate_chain_buffer(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x33bc);
  uVar1 = (*(code *)(PTR_LAB_00560f68 + 0x4508))(*param_1,param_2,param_3,1,0,param_1,0,1);
  return uVar1;
}



// ==== CyaSSL_CTX_UnloadCAs @ 0047a5a0 size=152

undefined4 CyaSSL_CTX_UnloadCAs(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x334c);
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    uVar1 = (*(code *)PTR_CyaSSL_CertManagerUnloadCAs_005610e8)(*(undefined4 *)(param_1 + 0x48));
  }
  return uVar1;
}



// ==== CyaSSL_add_all_algorithms @ 0047a638 size=112

undefined4 CyaSSL_add_all_algorithms(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3334);
  (*(code *)PTR_CyaSSL_Init_00560f94)();
  return 1;
}



// ==== CyaSSL_set_rfd @ 0047ac30 size=128

undefined4 CyaSSL_set_rfd(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x32c0);
  *(undefined4 *)(param_1 + 0x138) = param_2;
  *(int *)(param_1 + 0x150) = param_1 + 0x138;
  return 1;
}



// ==== CyaSSL_set_wfd @ 0047acb0 size=128

undefined4 CyaSSL_set_wfd(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x32b4);
  *(undefined4 *)(param_1 + 0x13c) = param_2;
  *(int *)(param_1 + 0x154) = param_1 + 0x13c;
  return 1;
}



// ==== CyaSSL_BIO_new @ 0047b15c size=216

undefined1 * CyaSSL_BIO_new(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_00560f78)(0x1c);
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3238);
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



// ==== CyaSSL_BIO_free @ 0047b3f0 size=328

undefined4 CyaSSL_BIO_free(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3230);
  if (param_1 != 0) {
    if (*(char *)(param_1 + 1) != '\0') {
      if (*(int *)(param_1 + 4) != 0) {
        (*(code *)PTR_CyaSSL_free_005610fc)(*(undefined4 *)(param_1 + 4));
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        (*(code *)PTR_close_005615e0)(*(undefined4 *)(param_1 + 0x10));
      }
    }
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 8) != 0)) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 8));
    }
    if (param_1 != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(param_1);
    }
  }
  return 0;
}



// ==== CyaSSL_CTX_set_default_passwd_cb_userdata @ 0047b9ac size=104

void CyaSSL_CTX_set_default_passwd_cb_userdata(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x31e4);
  *(undefined4 *)(param_1 + 0x168) = param_2;
  return;
}



// ==== CyaSSL_CTX_set_default_passwd_cb @ 0047ba14 size=104

void CyaSSL_CTX_set_default_passwd_cb(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x31bc);
  *(undefined4 *)(param_1 + 0x164) = param_2;
  return;
}



// ==== CyaSSL_EVP_BytesToKey @ 0047bb14 size=1320

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
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x319c);
  (*(code *)PTR_InitMd5_00561108)(auStack_64);
  iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x3fdc,3);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_strncmp_005615d4)(param_1,PTR_DAT_00560f88 + -0x3fd8,7);
    if (iVar1 == 0) {
      local_98 = 8;
      local_94 = 8;
    }
    else {
      iVar1 = (*(code *)PTR_strncmp_005615d4)(param_1,PTR_DAT_00560f88 + -0x3fd0,0xc);
      if (iVar1 == 0) {
        local_98 = 0x18;
        local_94 = 8;
      }
      else {
        iVar1 = (*(code *)PTR_strncmp_005615d4)(param_1,PTR_DAT_00560f88 + -0x3fc0,0xb);
        if (iVar1 == 0) {
          local_98 = 0x10;
          local_94 = 0x10;
        }
        else {
          iVar1 = (*(code *)PTR_strncmp_005615d4)(param_1,PTR_DAT_00560f88 + -0x3fb4,0xb);
          if (iVar1 == 0) {
            local_98 = 0x18;
            local_94 = 0x10;
          }
          else {
            iVar1 = (*(code *)PTR_strncmp_005615d4)(param_1,PTR_DAT_00560f88 + -0x3fa8,0xb);
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
        (*(code *)PTR_Md5Update_0056110c)(auStack_64,auStack_74,0x10);
      }
      (*(code *)PTR_Md5Update_0056110c)(auStack_64,param_4,param_5);
      if (param_3 != 0) {
        (*(code *)PTR_Md5Update_0056110c)(auStack_64,param_3,8);
      }
      (*(code *)PTR_Md5Final_00561110)(auStack_64,auStack_74);
      for (local_90 = 1; local_90 < param_6; local_90 = local_90 + 1) {
        (*(code *)PTR_Md5Update_0056110c)(auStack_64,auStack_74,0x10);
        (*(code *)PTR_Md5Final_00561110)(auStack_64,auStack_74);
      }
      if (local_8c != 0) {
        local_80 = (*(code *)(PTR_LAB_00560f68 + 0x900))(local_8c,0x10);
        (*(code *)PTR_memcpy_005615a4)(param_7 + (local_98 - local_8c),auStack_74,local_80);
        local_84 = local_84 + local_80;
        local_8c = local_8c - local_80;
        local_80 = 0x10 - local_80;
      }
      if ((local_88 != 0) && (local_80 != 0)) {
        iVar1 = (*(code *)(PTR_LAB_00560f68 + 0x900))(local_88,local_80);
        (*(code *)PTR_memcpy_005615a4)(param_8 + (local_94 - local_88),auStack_64 + -local_80,iVar1)
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



// ==== CyaSSL_MD5_Init @ 0047c0a4 size=112

void CyaSSL_MD5_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x318c);
  (*(code *)PTR_InitMd5_00561108)(param_1);
  return;
}



// ==== CyaSSL_MD5_Update @ 0047c114 size=128

void CyaSSL_MD5_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3180);
  (*(code *)PTR_Md5Update_0056110c)(param_1,param_2,param_3);
  return;
}



// ==== CyaSSL_MD5_Final @ 0047c194 size=120

void CyaSSL_MD5_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x316c);
  (*(code *)PTR_Md5Final_00561110)(param_2,param_1);
  return;
}



// ==== CyaSSL_SHA_Init @ 0047c20c size=112

void CyaSSL_SHA_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3160);
  (*(code *)PTR_InitSha_00561114)(param_1);
  return;
}



// ==== CyaSSL_SHA_Update @ 0047c27c size=128

void CyaSSL_SHA_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3154);
  (*(code *)PTR_ShaUpdate_00561118)(param_1,param_2,param_3);
  return;
}



// ==== CyaSSL_SHA_Final @ 0047c2fc size=120

void CyaSSL_SHA_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3148);
  (*(code *)PTR_ShaFinal_0056111c)(param_2,param_1);
  return;
}



// ==== CyaSSL_SHA256_Init @ 0047c4dc size=112

void CyaSSL_SHA256_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3118);
  (*(code *)PTR_InitSha256_00560f6c)(param_1);
  return;
}



// ==== CyaSSL_SHA256_Update @ 0047c54c size=128

void CyaSSL_SHA256_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x310c);
  (*(code *)PTR_Sha256Update_00560f70)(param_1,param_2,param_3);
  return;
}



// ==== CyaSSL_SHA256_Final @ 0047c5cc size=120

void CyaSSL_SHA256_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x30fc);
  (*(code *)PTR_Sha256Final_00560f74)(param_2,param_1);
  return;
}



// ==== CyaSSL_SHA384_Init @ 0047c644 size=112

void CyaSSL_SHA384_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x30ec);
  (*(code *)PTR_InitSha384_0056112c)(param_1);
  return;
}



// ==== CyaSSL_SHA384_Update @ 0047c6b4 size=128

void CyaSSL_SHA384_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x30e0);
  (*(code *)PTR_Sha384Update_00561130)(param_1,param_2,param_3);
  return;
}



// ==== CyaSSL_SHA384_Final @ 0047c734 size=120

void CyaSSL_SHA384_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x30d0);
  (*(code *)PTR_Sha384Final_00561134)(param_2,param_1);
  return;
}



// ==== CyaSSL_SHA512_Init @ 0047c7ac size=112

void CyaSSL_SHA512_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x30c0);
  (*(code *)PTR_InitSha512_00561138)(param_1);
  return;
}



// ==== CyaSSL_SHA512_Update @ 0047c81c size=128

void CyaSSL_SHA512_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x30b4);
  (*(code *)PTR_Sha512Update_0056113c)(param_1,param_2,param_3);
  return;
}



// ==== CyaSSL_SHA512_Final @ 0047c89c size=120

void CyaSSL_SHA512_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x30a4);
  (*(code *)PTR_Sha512Final_00561140)(param_2,param_1);
  return;
}



// ==== CyaSSL_EVP_md5 @ 0047c914 size=96

undefined4 CyaSSL_EVP_md5(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3094);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x650);
}



// ==== CyaSSL_EVP_sha1 @ 0047c974 size=96

undefined4 CyaSSL_EVP_sha1(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x308c);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x654);
}



// ==== CyaSSL_EVP_aes_128_cbc @ 0047cb4c size=96

undefined4 CyaSSL_EVP_aes_128_cbc(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3044);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x664);
}



// ==== CyaSSL_EVP_aes_192_cbc @ 0047cbac size=96

undefined4 CyaSSL_EVP_aes_192_cbc(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x302c);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x668);
}



// ==== CyaSSL_EVP_aes_256_cbc @ 0047cc0c size=96

undefined4 CyaSSL_EVP_aes_256_cbc(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3014);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x66c);
}



// ==== CyaSSL_EVP_aes_128_ctr @ 0047cc6c size=96

undefined4 CyaSSL_EVP_aes_128_ctr(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2ffc);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x670);
}



// ==== CyaSSL_EVP_aes_192_ctr @ 0047cccc size=96

undefined4 CyaSSL_EVP_aes_192_ctr(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2fe4);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x674);
}



// ==== CyaSSL_EVP_aes_256_ctr @ 0047cd2c size=96

undefined4 CyaSSL_EVP_aes_256_ctr(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2fcc);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x678);
}



// ==== CyaSSL_EVP_des_cbc @ 0047cd8c size=96

undefined4 CyaSSL_EVP_des_cbc(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2fb4);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x67c);
}



// ==== CyaSSL_EVP_des_ede3_cbc @ 0047cdec size=96

undefined4 CyaSSL_EVP_des_ede3_cbc(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2fa0);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x680);
}



// ==== CyaSSL_EVP_rc4 @ 0047ce4c size=96

undefined4 CyaSSL_EVP_rc4(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2f88);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x684);
}



// ==== CyaSSL_EVP_enc_null @ 0047ceac size=96

undefined4 CyaSSL_EVP_enc_null(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2f78);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x688);
}



// ==== CyaSSL_EVP_CipherInit @ 0047d070 size=3652

int CyaSSL_EVP_CipherInit(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2f24);
  if (param_1 == (int *)0x0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2f0c);
    return 0;
  }
  if ((param_2 == 0) && (*(char *)((int)param_1 + 5) == -1)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2f04);
    return 0;
  }
  if ((*(char *)((int)param_1 + 5) == '\x01') ||
     ((param_2 != 0 &&
      (iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x2ef8,10), iVar1 == 0)))
     ) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3fc0);
    *(undefined1 *)((int)param_1 + 5) = 1;
    *param_1 = 0x10;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_00561144)
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
    iVar1 = (*(code *)PTR_AesSetIV_00561148)(param_1 + 6,param_4);
  }
  else if ((*(char *)((int)param_1 + 5) == '\x02') ||
          ((param_2 != 0 &&
           (iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x2eec,10),
           iVar1 == 0)))) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3fb4);
    *(undefined1 *)((int)param_1 + 5) = 2;
    *param_1 = 0x18;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_00561144)
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
    iVar1 = (*(code *)PTR_AesSetIV_00561148)(param_1 + 6,param_4);
  }
  else if ((*(char *)((int)param_1 + 5) == '\x03') ||
          ((param_2 != 0 &&
           (iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -12000,10),
           iVar1 == 0)))) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3fa8);
    *(undefined1 *)((int)param_1 + 5) = 3;
    *param_1 = 0x20;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_00561144)
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
    iVar1 = (*(code *)PTR_AesSetIV_00561148)(param_1 + 6,param_4);
  }
  else if ((*(char *)((int)param_1 + 5) == '\x04') ||
          ((param_2 != 0 &&
           (iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x2ed4,10),
           iVar1 == 0)))) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2ec8);
    *(undefined1 *)((int)param_1 + 5) = 4;
    *param_1 = 0x10;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_00561144)(param_1 + 6,param_3,*param_1,param_4,0),
       iVar1 != 0)) {
      return iVar1;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = (*(code *)PTR_AesSetIV_00561148)(param_1 + 6,param_4);
  }
  else if ((*(char *)((int)param_1 + 5) == '\x05') ||
          ((param_2 != 0 &&
           (iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x2ebc,10),
           iVar1 == 0)))) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2eb0);
    *(undefined1 *)((int)param_1 + 5) = 5;
    *param_1 = 0x18;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_00561144)(param_1 + 6,param_3,*param_1,param_4,0),
       iVar1 != 0)) {
      return iVar1;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = (*(code *)PTR_AesSetIV_00561148)(param_1 + 6,param_4);
  }
  else if ((*(char *)((int)param_1 + 5) == '\x06') ||
          ((param_2 != 0 &&
           (iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x2ea4,10),
           iVar1 == 0)))) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2e98);
    *(undefined1 *)((int)param_1 + 5) = 6;
    *param_1 = 0x20;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_AesSetKey_00561144)(param_1 + 6,param_3,*param_1,param_4,0),
       iVar1 != 0)) {
      return iVar1;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = (*(code *)PTR_AesSetIV_00561148)(param_1 + 6,param_4);
  }
  else {
    if ((*(char *)((int)param_1 + 5) == '\a') ||
       ((param_2 != 0 &&
        (iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x3fd8,7), iVar1 == 0))
       )) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3fd8);
      *(undefined1 *)((int)param_1 + 5) = 7;
      *param_1 = 8;
      if ((param_5 == 0) || (param_5 == 1)) {
        *(bool *)(param_1 + 1) = param_5 != 0;
      }
      if ((param_3 != 0) &&
         (iVar1 = (*(code *)PTR_Des_SetKey_0056114c)
                            (param_1 + 6,param_3,param_4,(char)param_1[1] == '\0'), iVar1 != 0)) {
        return iVar1;
      }
      if (param_4 == 0) {
        return 1;
      }
      if (param_3 != 0) {
        return 1;
      }
      (*(code *)PTR_Des_SetIV_00561150)(param_1 + 6,param_4);
      return 1;
    }
    if ((*(char *)((int)param_1 + 5) != '\b') &&
       ((param_2 == 0 ||
        (iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x3fd0,0xb), iVar1 != 0
        )))) {
      if ((*(char *)((int)param_1 + 5) != '\t') &&
         ((param_2 == 0 ||
          (iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x2e8c,4), iVar1 != 0
          )))) {
        if ((*(char *)((int)param_1 + 5) != '\n') &&
           ((param_2 == 0 ||
            (iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x2e84,4),
            iVar1 != 0)))) {
          return 0;
        }
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2e7c);
        *(undefined1 *)((int)param_1 + 5) = 10;
        *param_1 = 0;
        return 1;
      }
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2e8c);
      *(undefined1 *)((int)param_1 + 5) = 9;
      if (*param_1 == 0) {
        *param_1 = 0x10;
      }
      if (param_3 == 0) {
        return 1;
      }
      (*(code *)PTR_Arc4SetKey_0056115c)(param_1 + 6,param_3,*param_1);
      return 1;
    }
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3fd0);
    *(undefined1 *)((int)param_1 + 5) = 8;
    *param_1 = 0x18;
    if ((param_5 == 0) || (param_5 == 1)) {
      *(bool *)(param_1 + 1) = param_5 != 0;
    }
    if ((param_3 != 0) &&
       (iVar1 = (*(code *)PTR_Des3_SetKey_00561154)
                          (param_1 + 6,param_3,param_4,(char)param_1[1] == '\0'), iVar1 != 0)) {
      return iVar1;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = (*(code *)PTR_Des3_SetIV_00561158)(param_1 + 6,param_4);
  }
  if (iVar1 == 0) {
    return 1;
  }
  return iVar1;
}



// ==== CyaSSL_EVP_CIPHER_CTX_key_length @ 0047deb4 size=124

undefined4 CyaSSL_EVP_CIPHER_CTX_key_length(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2e70);
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}



// ==== CyaSSL_EVP_CIPHER_CTX_set_key_length @ 0047df30 size=136

bool CyaSSL_EVP_CIPHER_CTX_set_key_length(undefined4 *param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2e4c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return param_1 != (undefined4 *)0x0;
}



// ==== CyaSSL_EVP_Cipher @ 0047dfb8 size=996

undefined4 CyaSSL_EVP_Cipher(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2e24);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x44a8);
  }
  else if (*(char *)(param_1 + 5) == -1) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2e10);
  }
  else {
    if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0047e0b0 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 +
                                          (uint)*(byte *)(param_1 + 5) * 4 + -0x2db4)))();
      return uVar1;
    }
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2df8);
  }
  return 0;
}



// ==== CyaSSL_StoreExternalIV @ 0047e39c size=648

undefined4 CyaSSL_StoreExternalIV(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2d88);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x44a8);
  }
  else {
    if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0047e430 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 +
                                          (uint)*(byte *)(param_1 + 5) * 4 + -0x2d58)))();
      return uVar1;
    }
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2df8);
  }
  return 0xffffffff;
}



// ==== CyaSSL_SetInternalIV @ 0047e624 size=648

undefined4 CyaSSL_SetInternalIV(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2d2c);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x44a8);
  }
  else {
    if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0047e6b8 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 +
                                          (uint)*(byte *)(param_1 + 5) * 4 + -0x2d14)))();
      return uVar1;
    }
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2df8);
  }
  return 0xffffffff;
}



// ==== CyaSSL_EVP_DigestFinal @ 0047ecd0 size=552

undefined4 CyaSSL_EVP_DigestFinal(char *param_1,undefined4 param_2,undefined4 *param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2ca8);
  if (*param_1 == '\0') {
    (*(code *)PTR_CyaSSL_MD5_Final_005611a0)(param_2,param_1 + 8);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x10;
    }
  }
  else if (*param_1 == '\x01') {
    (*(code *)PTR_CyaSSL_SHA_Final_00561128)(param_2,param_1 + 8);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x14;
    }
  }
  else if (*param_1 == '\x02') {
    (*(code *)PTR_CyaSSL_SHA256_Final_005611a4)(param_2,param_1 + 8);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x20;
    }
  }
  else if (*param_1 == '\x05') {
    (*(code *)PTR_CyaSSL_SHA384_Final_005611a8)(param_2,param_1 + 8);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x30;
    }
  }
  else {
    if (*param_1 != '\x04') {
      return 0xffffff53;
    }
    (*(code *)PTR_CyaSSL_SHA512_Final_005611ac)(param_2,param_1 + 8);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x40;
    }
  }
  return 1;
}



// ==== CyaSSL_FreeX509 @ 0047f704 size=112

void CyaSSL_FreeX509(undefined4 param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2c18);
  (*(code *)PTR_FreeX509_005611c0)(param_1);
  return;
}



// ==== CyaSSL_X509_get_next_altname @ 0047f774 size=204

undefined4 CyaSSL_X509_get_next_altname(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2c08);
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



// ==== CyaSSL_X509_get_isCA @ 0047f908 size=156

undefined1 CyaSSL_X509_get_isCA(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2bb8);
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x469);
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x2bb8,uVar1);
  return uVar1;
}



// ==== CyaSSL_X509_ext_isSet_by_NID @ 0047f9a4 size=296

undefined4 CyaSSL_X509_ext_isSet_by_NID(int param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2ba0);
  if ((param_1 != 0) && (param_2 - 0x80U < 0x16)) {
                    /* WARNING: Could not emulate address calculation at 0x0047fa18 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 + (param_2 - 0x80U) * 4 + -0x2b80)))();
    return uVar1;
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x2ba0,0);
  return 0;
}



// ==== CyaSSL_X509_ext_get_critical_by_NID @ 0047facc size=296

undefined4 CyaSSL_X509_ext_get_critical_by_NID(int param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2b28);
  if ((param_1 != 0) && (param_2 - 0x80U < 0x16)) {
                    /* WARNING: Could not emulate address calculation at 0x0047fb40 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 + (param_2 - 0x80U) * 4 + -0x2b04)))();
    return uVar1;
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x2b28,0);
  return 0;
}



// ==== CyaSSL_X509_get_isSet_pathLength @ 0047fbf4 size=156

undefined1 CyaSSL_X509_get_isSet_pathLength(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2aac);
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x474);
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x2aac,uVar1);
  return uVar1;
}



// ==== CyaSSL_X509_get_pathLength @ 0047fc90 size=160

undefined4 CyaSSL_X509_get_pathLength(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2a88);
  if (param_1 != 0) {
    local_10 = *(undefined4 *)(param_1 + 0x46c);
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x2a88,local_10);
  return local_10;
}



// ==== CyaSSL_X509_get_keyUsage @ 0047fd30 size=160

undefined2 CyaSSL_X509_get_keyUsage(int param_1)

{
  undefined2 local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2a6c);
  if (param_1 != 0) {
    local_10 = *(undefined2 *)(param_1 + 0x470);
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x2a6c,local_10);
  return local_10;
}



// ==== CyaSSL_X509_get_authorityKeyID @ 0047fdd0 size=368

int CyaSSL_X509_get_authorityKeyID(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2a50);
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x477) != '\0') {
      if (param_3 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *param_3;
      }
      local_c = (*(code *)(PTR_LAB_00560f68 + 0x900))(iVar1,*(undefined4 *)(param_1 + 0x480));
      local_10 = *(int *)(param_1 + 0x47c);
    }
    if ((((param_2 != 0) && (param_3 != (int *)0x0)) && (local_10 != 0)) && (0 < local_c)) {
      (*(code *)PTR_memcpy_005615a4)(param_2,local_10,local_c);
      *param_3 = local_c;
      local_10 = param_2;
    }
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x2a50,local_c);
  return local_10;
}



// ==== CyaSSL_X509_get_subjectKeyID @ 0047ff40 size=368

int CyaSSL_X509_get_subjectKeyID(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2a30);
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x484) != '\0') {
      if (param_3 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *param_3;
      }
      local_c = (*(code *)(PTR_LAB_00560f68 + 0x900))(iVar1,*(undefined4 *)(param_1 + 0x48c));
      local_10 = *(int *)(param_1 + 0x488);
    }
    if ((((param_2 != 0) && (param_3 != (int *)0x0)) && (local_10 != 0)) && (0 < local_c)) {
      (*(code *)PTR_memcpy_005615a4)(param_2,local_10,local_c);
      *param_3 = local_c;
      local_10 = param_2;
    }
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x2a30,local_c);
  return local_10;
}



// ==== CyaSSL_X509_NAME_entry_count @ 004800b0 size=156

undefined4 CyaSSL_X509_NAME_entry_count(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2a10);
  if (param_1 != 0) {
    local_10 = *(undefined4 *)(param_1 + 0x114);
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x2a10,local_10);
  return local_10;
}



// ==== CyaSSL_X509_NAME_get_text_by_NID @ 0048014c size=680

/* WARNING: Removing unreachable block (ram,0x00480350) */

undefined4 CyaSSL_X509_NAME_get_text_by_NID(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x29f0);
  if (8 < param_2 - 3U) {
    (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x29f0,0);
    return 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x004801c0 */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 + (param_2 - 3U) * 4 + -0x29cc)))();
  return uVar1;
}



// ==== CyaSSL_X509_NAME_oneline @ 004803f4 size=360

int CyaSSL_X509_NAME_oneline(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int local_res4;
  int local_10;
  
  local_10 = (*(code *)(PTR_LAB_00560f68 + 0x900))(param_3,param_1[0x42]);
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x29a8);
  local_res4 = param_2;
  if (param_1[0x42] != 0) {
    if (param_2 == 0) {
      local_res4 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(param_1[0x42]);
      if (local_res4 == 0) {
        return 0;
      }
      local_10 = param_1[0x42];
    }
    if (local_10 != 0) {
      (*(code *)PTR_memcpy_005615a4)(local_res4,*param_1,local_10 + -1);
      *(undefined1 *)(local_res4 + local_10 + -1) = 0;
    }
  }
  return local_res4;
}



// ==== CyaSSL_X509_get_signature_type @ 0048055c size=124

undefined4 CyaSSL_X509_get_signature_type(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x298c);
  if (param_1 != 0) {
    local_10 = *(undefined4 *)(param_1 + 0x440);
  }
  return local_10;
}



// ==== CyaSSL_X509_get_signature @ 004805d8 size=248

undefined4 CyaSSL_X509_get_signature(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x296c);
  if (((param_1 == 0) || (param_3 == (int *)0x0)) || (*param_3 < *(int *)(param_1 + 0x444))) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != 0) {
      (*(code *)PTR_memcpy_005615a4)
                (param_2,*(undefined4 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x444));
    }
    *param_3 = *(int *)(param_1 + 0x444);
    uVar1 = 1;
  }
  return uVar1;
}



// ==== CyaSSL_X509_get_serial_number @ 004806d0 size=244

undefined4 CyaSSL_X509_get_serial_number(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2950);
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) ||
     (*param_3 < *(int *)(param_1 + 0x2d4))) {
    uVar1 = 0xffffff53;
  }
  else {
    (*(code *)PTR_memcpy_005615a4)(param_2,param_1 + 0x2d8,*(undefined4 *)(param_1 + 0x2d4));
    *param_3 = *(int *)(param_1 + 0x2d4);
    uVar1 = 1;
  }
  return uVar1;
}



// ==== CyaSSL_X509_get_der @ 004807c4 size=160

undefined4 CyaSSL_X509_get_der(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2930);
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x458);
    uVar1 = *(undefined4 *)(param_1 + 0x45c);
  }
  return uVar1;
}



// ==== CyaSSL_X509_version @ 00480864 size=124

undefined4 CyaSSL_X509_version(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x291c);
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}



// ==== CyaSSL_X509_notBefore @ 004808e0 size=124

int CyaSSL_X509_notBefore(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2908);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x3fc;
  }
  return param_1;
}



// ==== CyaSSL_X509_notAfter @ 0048095c size=124

int CyaSSL_X509_notAfter(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x28f0);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x420;
  }
  return param_1;
}



// ==== CyaSSL_X509_d2i @ 004809d8 size=440

int CyaSSL_X509_d2i(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_408;
  undefined1 auStack_400 [1016];
  
  local_408 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x28d8);
  if ((param_2 != 0) && (param_3 != 0)) {
    (*(code *)PTR_InitDecodedCert_00561024)(auStack_400,param_2,param_3,0);
    iVar1 = (*(code *)PTR_ParseCertRelative_00561078)(auStack_400,0,0,0);
    if (iVar1 == 0) {
      local_408 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0x494);
      if (local_408 != 0) {
        (*(code *)PTR_InitX509_005611c4)(local_408,1);
        iVar1 = (*(code *)PTR_CopyDecodedToX509_005611c8)(local_408,auStack_400);
        if (iVar1 != 0) {
          if (local_408 != 0) {
            (*(code *)PTR_CyaSSL_Free_00560f84)(local_408);
          }
          local_408 = 0;
        }
      }
    }
    (*(code *)PTR_FreeDecodedCert_00561038)(auStack_400);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = local_408;
  }
  return local_408;
}



// ==== CyaSSL_X509_d2i_fp @ 00480b90 size=468

undefined4 CyaSSL_X509_d2i_fp(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  
  local_20 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x28c8);
  if (param_2 != 0) {
    (*(code *)PTR_fseek_0056152c)(param_2,0,2);
    iVar1 = (*(code *)PTR_ftell_005614e0)(param_2);
    (*(code *)PTR_rewind_00561608)(param_2);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x28b4);
      return 0;
    }
    iVar2 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(iVar1);
    if (iVar2 != 0) {
      iVar3 = (*(code *)PTR_fread_005615e8)(iVar2,iVar1,1,param_2);
      if (0 < iVar3) {
        local_20 = (*(code *)PTR_CyaSSL_X509_d2i_005611cc)(0,iVar2,iVar1);
      }
      if (iVar2 != 0) {
        (*(code *)PTR_CyaSSL_Free_00560f84)(iVar2);
      }
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_20;
  }
  return local_20;
}



// ==== CyaSSL_X509_load_certificate @ 00480d64 size=1340

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
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x28a0);
  if ((param_1 == 0) || ((param_2 != 2 && (param_2 != 1)))) {
    local_830 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_fopen_00561548)(param_1,PTR_DAT_00560f88 + -0x3e5c);
    if (iVar2 == 0) {
      local_830 = 0;
    }
    else {
      (*(code *)PTR_fseek_0056152c)(iVar2,0,2);
      iVar3 = (*(code *)PTR_ftell_005614e0)(iVar2);
      (*(code *)PTR_rewind_00561608)(iVar2);
      if (iVar3 < 0x401) {
        if (iVar3 < 0) {
          (*(code *)PTR_fclose_00561520)(iVar2);
          return 0;
        }
      }
      else {
        local_838 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_00560f78)(iVar3);
        if (local_838 == (undefined1 *)0x0) {
          (*(code *)PTR_fclose_00561520)(iVar2);
          return 0;
        }
        bVar1 = true;
      }
      iVar4 = (*(code *)PTR_fread_005615e8)(local_838,iVar3,1,iVar2);
      if (iVar4 < 0) {
        (*(code *)PTR_fclose_00561520)(iVar2);
        if ((bVar1) && (local_838 != (undefined1 *)0x0)) {
          (*(code *)PTR_CyaSSL_Free_00560f84)(local_838);
        }
        local_830 = 0;
      }
      else {
        (*(code *)PTR_fclose_00561520)(iVar2);
        local_408 = 0;
        local_40c = 0;
        if (param_2 == 1) {
          local_404 = 0;
          local_388 = 0;
          local_384 = 0;
          local_38c = 0;
          iVar2 = (*(code *)PTR_FUN_00560ffc)(local_838,iVar3,0,&local_40c,0,auStack_400,&local_404)
          ;
          if ((iVar2 != 0) && (local_408 != 0)) {
            if (local_408 != 0) {
              (*(code *)PTR_CyaSSL_Free_00560f84)(local_408);
            }
            local_408 = 0;
          }
        }
        else {
          local_408 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(iVar3);
          if (local_408 != 0) {
            (*(code *)PTR_memcpy_005615a4)(local_408,local_838,iVar3);
            local_40c = iVar3;
          }
        }
        if ((bVar1) && (local_838 != (undefined1 *)0x0)) {
          (*(code *)PTR_CyaSSL_Free_00560f84)(local_838);
        }
        if (local_408 != 0) {
          (*(code *)PTR_InitDecodedCert_00561024)(auStack_400,local_408,local_40c,0);
          iVar2 = (*(code *)PTR_ParseCertRelative_00561078)(auStack_400,0,0,0);
          if ((iVar2 == 0) &&
             (local_830 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0x494), local_830 != 0)) {
            (*(code *)PTR_InitX509_005611c4)(local_830,1);
            iVar2 = (*(code *)PTR_CopyDecodedToX509_005611c8)(local_830,auStack_400);
            if (iVar2 != 0) {
              if (local_830 != 0) {
                (*(code *)PTR_CyaSSL_Free_00560f84)(local_830);
              }
              local_830 = 0;
            }
          }
          (*(code *)PTR_FreeDecodedCert_00561038)(auStack_400);
          if (local_408 != 0) {
            (*(code *)PTR_CyaSSL_Free_00560f84)(local_408);
          }
        }
      }
    }
  }
  return local_830;
}



// ==== CyaSSL_get_current_cipher @ 00481634 size=124

int CyaSSL_get_current_cipher(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2814);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x58c;
  }
  return param_1;
}



// ==== CyaSSL_CIPHER_get_name @ 004816b0 size=632

undefined * CyaSSL_CIPHER_get_name(int *param_1)

{
  undefined *puVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x27fc);
  if ((((param_1 != (int *)0x0) && (*(char *)(*param_1 + 0x4c6) != -0x40)) &&
      (*(char *)(*param_1 + 0x4c6) != -0x34)) && (*(byte *)(*param_1 + 0x4c7) < 0xc5)) {
                    /* WARNING: Could not emulate address calculation at 0x00481750 */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)
             (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 +
                                         (uint)*(byte *)(*param_1 + 0x4c7) * 4 + -0x247c)))();
    return puVar1;
  }
  return PTR_DAT_00560f88 + -0x2484;
}



// ==== CyaSSL_get_cipher @ 00481928 size=148

undefined4 CyaSSL_get_cipher(undefined4 param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2168);
  uVar1 = (*(code *)PTR_CyaSSL_get_current_cipher_005611d0)(param_1);
  uVar1 = (*(code *)PTR_CyaSSL_CIPHER_get_name_005611d4)(uVar1);
  return uVar1;
}



// ==== CyaSSL_BIO_s_mem @ 00481b20 size=108

undefined * CyaSSL_BIO_s_mem(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2154);
  PTR_DAT_00560988[-0x4f8c] = 4;
  return PTR_DAT_00560988 + -0x4f8c;
}



// ==== CyaSSL_X509_STORE_add_cert @ 00481f08 size=376

int CyaSSL_X509_STORE_add_cert(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  
  local_18 = -1;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2148);
  if (((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) && (param_2 != 0)) {
    iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(*(undefined4 *)(param_2 + 0x458));
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x458);
      (*(code *)PTR_memcpy_005615a4)
                (iVar1,*(undefined4 *)(param_2 + 0x45c),*(undefined4 *)(param_2 + 0x458));
      local_18 = (*(code *)PTR_AddCA_00561064)(*(undefined4 *)(param_1 + 4),uVar2,iVar1,1,1);
      if (local_18 != 1) {
        local_18 = -1;
      }
    }
  }
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x2148,local_18);
  return local_18;
}



// ==== CyaSSL_X509_STORE_free @ 00482148 size=164

void CyaSSL_X509_STORE_free(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)PTR_CyaSSL_CertManagerFree_00560fe8)(*(undefined4 *)(param_1 + 4));
    }
    if (param_1 != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(param_1);
    }
  }
  return;
}



// ==== CyaSSL_X509_STORE_CTX_init @ 004822dc size=152

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



// ==== CyaSSL_SESSION_get_timeout @ 00483058 size=100

undefined4 CyaSSL_SESSION_get_timeout(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x212c);
  return *(undefined4 *)(param_1 + 0x58);
}



// ==== CyaSSL_SESSION_get_time @ 004830bc size=100

undefined4 CyaSSL_SESSION_get_time(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2110);
  return *(undefined4 *)(param_1 + 0x54);
}



// ==== CyaSSL_cmp_peer_cert_to_file @ 004831a0 size=804

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
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x20f8);
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    local_4b4 = auStack_488;
    local_494 = 0;
    iVar4 = *param_1;
    iVar1 = (*(code *)PTR_fopen_00561548)(param_2,PTR_DAT_00560f88 + -0x3e5c);
    if (iVar1 == 0) {
      local_4b8 = 0xfffffffc;
    }
    else {
      (*(code *)PTR_fseek_0056152c)(iVar1,0,2);
      iVar2 = (*(code *)PTR_ftell_005614e0)(iVar1);
      (*(code *)PTR_rewind_00561608)(iVar1);
      if (0x400 < iVar2) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3e58);
        local_4b4 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_00560f78)(iVar2);
      }
      local_10 = 0;
      local_14 = 0;
      local_48c = 0;
      local_c = iVar4;
      if (((((local_4b4 != (undefined1 *)0x0) && (0 < iVar2)) &&
           (iVar3 = (*(code *)PTR_fread_005615e8)(local_4b4,iVar2,1,iVar1), iVar3 != 0)) &&
          ((iVar4 = (*(code *)PTR_FUN_00560ffc)
                              (local_4b4,iVar2,0,&local_490,*(undefined4 *)(iVar4 + 0x140),
                               auStack_88,&local_494), iVar4 == 0 && (local_490 != 0)))) &&
         ((local_490 == param_1[0x27a] &&
          (iVar4 = (*(code *)PTR_memcmp_00561524)(param_1[0x27b],local_48c,local_490), iVar4 == 0)))
         ) {
        local_4b8 = 0;
      }
      if (local_48c != 0) {
        (*(code *)PTR_CyaSSL_Free_00560f84)(local_48c);
      }
      if ((0x400 < iVar2) && (local_4b4 != (undefined1 *)0x0)) {
        (*(code *)PTR_CyaSSL_Free_00560f84)(local_4b4);
      }
      (*(code *)PTR_fclose_00561520)(iVar1);
    }
  }
  return local_4b8;
}



// ==== CyaSSL_RAND_seed @ 004834c4 size=208

undefined4 CyaSSL_RAND_seed(void)

{
  int iVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x20d8);
  if (*(int *)(PTR_DAT_00560988 + -0x4f98) == 0) {
    iVar1 = (*(code *)PTR_InitRng_005611e8)(PTR_DAT_00560988 + -0x4fa4);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x20c4);
      return 0;
    }
    *(undefined4 *)(PTR_DAT_00560988 + -0x4f98) = 1;
  }
  return 1;
}



// ==== CyaSSL_BN_CTX_new @ 004836f0 size=96

undefined * CyaSSL_BN_CTX_new(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2080);
  return PTR_DAT_00560988 + -0x4f88;
}



// ==== CyaSSL_BN_CTX_init @ 00483750 size=88

void CyaSSL_BN_CTX_init(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x206c);
  return;
}



// ==== CyaSSL_BN_CTX_free @ 004837a8 size=88

void CyaSSL_BN_CTX_free(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2058);
  return;
}



// ==== CyaSSL_BN_new @ 00483874 size=408

int CyaSSL_BN_new(void)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2030);
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0x10);
  if (iVar1 == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2020);
    iVar2 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(8);
    if (iVar2 == 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1ffc);
      if (iVar1 != 0) {
        (*(code *)PTR_CyaSSL_Free_00560f84)(iVar1);
      }
      iVar2 = 0;
    }
    else {
      (*(code *)(PTR_LAB_005610e0 + 0x3800))(iVar2);
      *(int *)(iVar2 + 4) = iVar1;
      iVar1 = (*(code *)PTR_mp_init_005611f0)(iVar1);
      if (iVar1 != 0) {
        (*(code *)PTR_CyaSSL_BN_free_005611f4)(iVar2);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



// ==== CyaSSL_BN_free @ 00483a0c size=248

void CyaSSL_BN_free(int param_1)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1fd0);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)PTR_mp_clear_005611f8)(*(undefined4 *)(param_1 + 4));
      if (*(int *)(param_1 + 4) != 0) {
        (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 4));
      }
      *(undefined4 *)(param_1 + 4) = 0;
    }
    if (param_1 != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(param_1);
    }
  }
  return;
}



// ==== CyaSSL_BN_clear_free @ 00483b04 size=112

void CyaSSL_BN_clear_free(undefined4 param_1)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1fc0);
  (*(code *)PTR_CyaSSL_BN_free_005611f4)(param_1);
  return;
}



// ==== CyaSSL_BN_sub @ 00483b74 size=260

undefined4 CyaSSL_BN_sub(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1fa8);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_mp_sub_005611fc)
                      (*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),
                       *(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1f98);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== CyaSSL_BN_mod @ 00483c78 size=264

undefined4 CyaSSL_BN_mod(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1f7c);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_mp_mod_00561200)
                      (*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),
                       *(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1f6c);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== CyaSSL_BN_value_one @ 00483d80 size=196

undefined4 CyaSSL_BN_value_one(void)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1f50);
  if (*(int *)(PTR_DAT_00560988 + -0x4f84) == 0) {
    uVar1 = (*(code *)PTR_CyaSSL_BN_new_00561204)();
    *(undefined4 *)(PTR_DAT_00560988 + -0x4f84) = uVar1;
    if (*(int *)(PTR_DAT_00560988 + -0x4f84) != 0) {
      (*(code *)PTR_mp_set_int_00561208)
                (*(undefined4 *)(*(int *)(PTR_DAT_00560988 + -0x4f84) + 4),1);
    }
  }
  return *(undefined4 *)(PTR_DAT_00560988 + -0x4f84);
}



// ==== CyaSSL_BN_num_bytes @ 00483e44 size=168

undefined4 CyaSSL_BN_num_bytes(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1f3c);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_mp_unsigned_bin_size_0056120c)(*(undefined4 *)(param_1 + 4));
  }
  return uVar1;
}



// ==== CyaSSL_BN_num_bits @ 00483eec size=168

undefined4 CyaSSL_BN_num_bits(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1f28);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_mp_count_bits_00561210)(*(undefined4 *)(param_1 + 4));
  }
  return uVar1;
}



// ==== CyaSSL_BN_is_zero @ 00483f94 size=152

bool CyaSSL_BN_is_zero(int param_1)

{
  bool bVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1f14);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = **(int **)(param_1 + 4) == 0;
  }
  return bVar1;
}



// ==== CyaSSL_BN_is_one @ 0048402c size=196

undefined4 CyaSSL_BN_is_one(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1f00);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_mp_cmp_d_00561214)(*(undefined4 *)(param_1 + 4),1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== CyaSSL_BN_is_odd @ 004840f0 size=196

undefined4 CyaSSL_BN_is_odd(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1eec);
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



// ==== CyaSSL_BN_cmp @ 004841b4 size=212

undefined4 CyaSSL_BN_cmp(int param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1ed8);
  if ((((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) || (param_2 == 0)) ||
     (*(int *)(param_2 + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_mp_cmp_00561218)
                      (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
  }
  return uVar1;
}



// ==== CyaSSL_BN_bn2bin @ 00484288 size=344

undefined4 CyaSSL_BN_bn2bin(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1ec8);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1eb4);
    uVar2 = 0xffffffff;
  }
  else if (param_2 == 0) {
    uVar2 = (*(code *)PTR_mp_unsigned_bin_size_0056120c)(*(undefined4 *)(param_1 + 4));
  }
  else {
    iVar1 = (*(code *)PTR_mp_to_unsigned_bin_0056121c)(*(undefined4 *)(param_1 + 4),param_2);
    if (iVar1 == 0) {
      uVar2 = (*(code *)PTR_mp_unsigned_bin_size_0056120c)(*(undefined4 *)(param_1 + 4));
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1ea4);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// ==== CyaSSL_BN_bin2bn @ 004843e0 size=260

int CyaSSL_BN_bin2bn(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1e88);
  if ((param_3 == 0) || (*(int *)(param_3 + 4) == 0)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1e54);
  }
  else {
    iVar1 = (*(code *)PTR_mp_read_unsigned_bin_00561220)
                      (*(undefined4 *)(param_3 + 4),param_1,param_2);
    if (iVar1 != 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1e74);
      param_3 = 0;
    }
  }
  return param_3;
}



// ==== CyaSSL_BN_mask_bits @ 004844e4 size=100

undefined4 CyaSSL_BN_mask_bits(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1e2c);
  return 0xffffffff;
}



// ==== CyaSSL_BN_rand @ 00484548 size=584

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
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1e18);
  if ((param_2 & 7) != 0) {
    local_41c = local_41c + 1;
  }
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1e08);
  }
  else {
    iVar1 = (*(code *)PTR_InitRng_005611e8)(auStack_414);
    if (iVar1 == 0) {
      local_418 = auStack_414;
    }
    else if (*(int *)(PTR_DAT_00560988 + -0x4f98) != 0) {
      local_418 = PTR_DAT_00560988 + -0x4fa4;
    }
  }
  if (local_418 != (undefined *)0x0) {
    iVar1 = (*(code *)PTR_RNG_GenerateBlock_00560f80)(local_418,abStack_409 + 1,local_41c);
    if (iVar1 == 0) {
      abStack_409[1] = abStack_409[1] | 0xc0;
      abStack_409[local_41c] = abStack_409[local_41c] | 1;
      iVar1 = (*(code *)PTR_mp_read_unsigned_bin_00561220)
                        (*(undefined4 *)(param_1 + 4),abStack_409 + 1,local_41c);
      if (iVar1 == 0) {
        local_420 = 1;
      }
      else {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1df0);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2098);
    }
  }
  return local_420;
}



// ==== CyaSSL_BN_is_bit_set @ 00484790 size=100

undefined4 CyaSSL_BN_is_bit_set(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1ddc);
  return 0;
}



// ==== CyaSSL_BN_hex2bn @ 004847f4 size=512

undefined4 CyaSSL_BN_hex2bn(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_410;
  undefined4 local_40c;
  undefined1 auStack_408 [1024];
  
  local_410 = 0;
  local_40c = 0x400;
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1dc4);
  if (param_2 == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x44a8);
  }
  else {
    uVar1 = (*(code *)PTR_strlen_00561504)(param_2);
    iVar2 = (*(code *)PTR_Base16_Decode_00561050)(param_2,uVar1,auStack_408,&local_40c);
    if (iVar2 < 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1db0);
    }
    else if (param_1 == (int *)0x0) {
      local_410 = local_40c;
    }
    else {
      if (*param_1 == 0) {
        iVar2 = (*(code *)PTR_CyaSSL_BN_new_00561204)();
        *param_1 = iVar2;
      }
      if (*param_1 == 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1d98);
      }
      else {
        iVar2 = (*(code *)PTR_CyaSSL_BN_bin2bn_00561224)(auStack_408,local_40c,*param_1);
        if (iVar2 == 0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1d88);
        }
        else {
          local_410 = 1;
        }
      }
    }
  }
  return local_410;
}



// ==== CyaSSL_BN_dup @ 004849f4 size=360

int CyaSSL_BN_dup(int param_1)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1d74);
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1d64);
    iVar2 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_CyaSSL_BN_new_00561204)();
    if (iVar2 == 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1d54);
      iVar2 = 0;
    }
    else {
      iVar1 = (*(code *)PTR_mp_copy_00561228)
                        (*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar2 + 4));
      if (iVar1 != 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1d44);
        (*(code *)PTR_CyaSSL_BN_free_005611f4)(iVar2);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



// ==== CyaSSL_BN_copy @ 00484b5c size=100

undefined4 CyaSSL_BN_copy(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1d34);
  return 0;
}



// ==== CyaSSL_BN_set_word @ 00484bc0 size=100

undefined4 CyaSSL_BN_set_word(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1d24);
  return 0xffffffff;
}



// ==== CyaSSL_BN_dec2bn @ 00484c24 size=100

undefined4 CyaSSL_BN_dec2bn(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1d10);
  return 0xffffffff;
}



// ==== CyaSSL_BN_bn2dec @ 00484c88 size=96

undefined4 CyaSSL_BN_bn2dec(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1cfc);
  return 0;
}



// ==== CyaSSL_RSA_new @ 00484d70 size=504

int CyaSSL_RSA_new(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1ce8);
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0x88);
  if (iVar1 == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1cd8);
    iVar3 = 0;
  }
  else {
    iVar3 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0x28);
    if (iVar3 == 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1cb0);
      if (iVar1 != 0) {
        (*(code *)PTR_CyaSSL_Free_00560f84)(iVar1);
      }
      iVar3 = 0;
    }
    else {
      (*(code *)(PTR_LAB_005610e0 + 0x4ce8))(iVar3);
      iVar2 = (*(code *)PTR_InitRsaKey_00561068)(iVar1,0);
      if (iVar2 == 0) {
        *(int *)(iVar3 + 0x20) = iVar1;
      }
      else {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1c84);
        if (iVar3 != 0) {
          (*(code *)PTR_CyaSSL_Free_00560f84)(iVar3);
        }
        if (iVar1 != 0) {
          (*(code *)PTR_CyaSSL_Free_00560f84)(iVar1);
        }
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}



// ==== CyaSSL_RSA_free @ 00484f68 size=532

void CyaSSL_RSA_free(undefined4 *param_1)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1c64);
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[8] != 0) {
      (*(code *)PTR_FreeRsaKey_00561070)(param_1[8]);
      if (param_1[8] != 0) {
        (*(code *)PTR_CyaSSL_Free_00560f84)(param_1[8]);
      }
      param_1[8] = 0;
    }
    (*(code *)PTR_CyaSSL_BN_free_005611f4)(param_1[7]);
    (*(code *)PTR_CyaSSL_BN_free_005611f4)(param_1[6]);
    (*(code *)PTR_CyaSSL_BN_free_005611f4)(param_1[5]);
    (*(code *)PTR_CyaSSL_BN_free_005611f4)(param_1[4]);
    (*(code *)PTR_CyaSSL_BN_free_005611f4)(param_1[3]);
    (*(code *)PTR_CyaSSL_BN_free_005611f4)(param_1[2]);
    (*(code *)PTR_CyaSSL_BN_free_005611f4)(param_1[1]);
    (*(code *)PTR_CyaSSL_BN_free_005611f4)(*param_1);
    (*(code *)(PTR_LAB_005610e0 + 0x4ce8))(param_1);
    if (param_1 != (undefined4 *)0x0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(param_1);
    }
  }
  return;
}



// ==== CyaSSL_RSA_generate_key_ex @ 004856a8 size=388

undefined4 CyaSSL_RSA_generate_key_ex(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined1 auStack_14 [12];
  
  local_18 = 0xffffffff;
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1b4c);
  iVar1 = (*(code *)PTR_InitRng_005611e8)(auStack_14);
  if (iVar1 < 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1b30);
  }
  else {
    iVar1 = (*(code *)PTR_MakeRsaKey_0056122c)
                      (*(undefined4 *)(param_1 + 0x20),param_2,0x10001,auStack_14);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1b20);
    }
    else {
      iVar1 = (*(code *)(PTR_LAB_005610e0 + 0x52d4))(param_1);
      if (iVar1 < 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1b0c);
      }
      else {
        *(undefined1 *)(param_1 + 0x24) = 1;
        local_18 = 1;
      }
    }
  }
  return local_18;
}



// ==== CyaSSL_RSA_blinding_on @ 0048582c size=100

undefined4 CyaSSL_RSA_blinding_on(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1af4);
  return 1;
}



// ==== CyaSSL_RSA_public_encrypt @ 00485890 size=108

undefined4 CyaSSL_RSA_public_encrypt(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1adc);
  return 0xffffffff;
}



// ==== CyaSSL_RSA_private_decrypt @ 004858fc size=108

undefined4 CyaSSL_RSA_private_decrypt(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1ac0);
  return 0xffffffff;
}



// ==== CyaSSL_RSA_size @ 00485968 size=152

undefined4 CyaSSL_RSA_size(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1aa4);
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_CyaSSL_BN_num_bytes_00561230)(*param_1);
  }
  return uVar1;
}



// ==== CyaSSL_RSA_sign @ 00485a00 size=860

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
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1a94);
  if ((((param_2 == 0) || (param_4 == 0)) || (param_5 == (int *)0x0)) ||
     (param_6 == (undefined4 *)0x0)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1e08);
  }
  else if (*(char *)(param_6 + 9) == '\0') {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1a84);
  }
  else if ((param_1 == 4) || (param_1 == 0x40)) {
    local_228 = (*(code *)PTR_CyaSSL_BN_num_bytes_00561230)(*param_6);
    if (local_228 == 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1a64);
    }
    else {
      iVar1 = (*(code *)PTR_InitRng_005611e8)(auStack_218);
      if (iVar1 == 0) {
        local_224 = auStack_218;
      }
      else {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1a54);
        if (*(int *)(PTR_DAT_00560988 + -0x4f98) == 0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1a38);
        }
        else {
          local_224 = PTR_DAT_00560988 + -0x4fa4;
        }
      }
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1a70);
  }
  if (local_224 != (undefined *)0x0) {
    if (param_1 == 4) {
      uVar2 = 0x289;
    }
    else {
      uVar2 = 0x58;
    }
    iVar1 = (*(code *)PTR_EncodeSignature_00561234)(auStack_20c,param_2,param_3,uVar2);
    if (iVar1 == 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1a24);
    }
    else {
      iVar1 = (*(code *)PTR_RsaSSL_Sign_00561238)
                        (auStack_20c,iVar1,param_4,local_228,param_6[8],local_224);
      *param_5 = iVar1;
      if (*param_5 == 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1a0c);
      }
      else {
        local_220 = 1;
      }
    }
  }
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x19fc);
  return local_220;
}



// ==== CyaSSL_RSA_public_decrypt @ 00485d5c size=108

undefined4 CyaSSL_RSA_public_decrypt(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x19e4);
  return 0xffffffff;
}



// ==== CyaSSL_RsaGenAdd @ 00485dc8 size=736

undefined4 CyaSSL_RsaGenAdd(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  undefined1 auStack_1c [20];
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x19c8);
  if ((((param_1 == 0) || (*(int *)(param_1 + 0xc) == 0)) || (*(int *)(param_1 + 0x10) == 0)) ||
     (((*(int *)(param_1 + 8) == 0 || (*(int *)(param_1 + 0x14) == 0)) ||
      (*(int *)(param_1 + 0x18) == 0)))) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x19b4);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = (*(code *)PTR_mp_init_005611f0)(auStack_1c);
    if (iVar1 == 0) {
      local_20 = (*(code *)PTR_mp_sub_d_0056123c)
                           (*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),1,auStack_1c);
      if (local_20 == 0) {
        local_20 = (*(code *)PTR_mp_mod_00561200)
                             (*(undefined4 *)(*(int *)(param_1 + 8) + 4),auStack_1c,
                              *(undefined4 *)(*(int *)(param_1 + 0x14) + 4));
      }
      else {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1990);
      }
      if (local_20 == 0) {
        local_20 = (*(code *)PTR_mp_sub_d_0056123c)
                             (*(undefined4 *)(*(int *)(param_1 + 0x10) + 4),1,auStack_1c);
      }
      else {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1980);
      }
      if (local_20 == 0) {
        local_20 = (*(code *)PTR_mp_mod_00561200)
                             (*(undefined4 *)(*(int *)(param_1 + 8) + 4),auStack_1c,
                              *(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
      }
      else {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1990);
      }
      (*(code *)PTR_mp_clear_005611f8)(auStack_1c);
      if (local_20 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x19a0);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// ==== CyaSSL_HMAC_Init @ 004860a8 size=604

void CyaSSL_HMAC_Init(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1970);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x195c);
  }
  else {
    if (param_4 != 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x194c);
      iVar1 = (*(code *)PTR_strncmp_005615d4)(param_4,PTR_DAT_00560f88 + -0x3fdc,3);
      if (iVar1 == 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x193c);
        *(undefined4 *)(param_1 + 0x218) = 0;
      }
      else {
        iVar1 = (*(code *)PTR_strncmp_005615d4)(param_4,PTR_DAT_00560f88 + -0x2cd8,6);
        if (iVar1 == 0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1930);
          *(undefined4 *)(param_1 + 0x218) = 2;
        }
        else {
          iVar1 = (*(code *)PTR_strncmp_005615d4)(param_4,PTR_DAT_00560f88 + -0x2cc0,3);
          if (iVar1 == 0) {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1924);
            *(undefined4 *)(param_1 + 0x218) = 1;
          }
          else {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1918);
          }
        }
      }
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1908);
      (*(code *)PTR_HmacSetKey_005611b4)(param_1,*(undefined4 *)(param_1 + 0x218),param_2,param_3);
    }
  }
  return;
}



// ==== CyaSSL_HMAC_Update @ 00486304 size=188

void CyaSSL_HMAC_Update(int param_1,int param_2,undefined4 param_3)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x18fc);
  if ((param_1 != 0) && (param_2 != 0)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x18e8);
    (*(code *)PTR_HmacUpdate_005611b8)(param_1,param_2,param_3);
  }
  return;
}



// ==== CyaSSL_HMAC_Final @ 004863c0 size=348

void CyaSSL_HMAC_Final(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x18d8);
  if ((param_1 != 0) && (param_2 != 0)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x18c4);
    (*(code *)PTR_HmacFinal_005611bc)(param_1,param_2);
    if (param_3 != (undefined4 *)0x0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x18b8);
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
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x18a4);
      }
    }
  }
  return;
}



// ==== CyaSSL_HMAC_cleanup @ 0048651c size=88

void CyaSSL_HMAC_cleanup(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1894);
  return;
}



// ==== CyaSSL_get_digestbynid @ 00486574 size=224

undefined4 CyaSSL_get_digestbynid(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1880);
  if (param_1 == 4) {
    uVar1 = (*(code *)PTR_CyaSSL_EVP_md5_00561240)();
  }
  else if (param_1 == 0x40) {
    uVar1 = (*(code *)PTR_CyaSSL_EVP_sha1_00561244)();
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1868);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== CyaSSL_EVP_PKEY_get1_RSA @ 00486654 size=96

undefined4 CyaSSL_EVP_PKEY_get1_RSA(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1854);
  return 0;
}



// ==== CyaSSL_EVP_PKEY_get1_DSA @ 004866b4 size=96

undefined4 CyaSSL_EVP_PKEY_get1_DSA(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1838);
  return 0;
}



// ==== CyaSSL_EVP_X_STATE @ 00486714 size=216

int CyaSSL_EVP_X_STATE(int param_1)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x181c);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if (*(char *)(param_1 + 5) == '\t') {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1808);
    param_1 = param_1 + 0x18;
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x17f0);
    param_1 = 0;
  }
  return param_1;
}



// ==== CyaSSL_EVP_X_STATE_LEN @ 004867ec size=212

undefined4 CyaSSL_EVP_X_STATE_LEN(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x17dc);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (*(char *)(param_1 + 5) == '\t') {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x17c4);
    uVar1 = 0x102;
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x17f0);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== CyaSSL_3des_iv @ 004868c0 size=256

void CyaSSL_3des_iv(int param_1,int param_2,int param_3)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x17a8);
  if ((param_1 == 0) || (param_3 == 0)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x44a8);
  }
  else if (param_2 == 0) {
    (*(code *)PTR_memcpy_005615a4)(param_3,param_1 + 0x198,8);
  }
  else {
    (*(code *)PTR_Des3_SetIV_00561158)(param_1 + 0x18,param_3);
  }
  return;
}



// ==== CyaSSL_aes_ctr_iv @ 004869c0 size=256

void CyaSSL_aes_ctr_iv(int param_1,int param_2,int param_3)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1798);
  if ((param_1 == 0) || (param_3 == 0)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x44a8);
  }
  else if (param_2 == 0) {
    (*(code *)PTR_memcpy_005615a4)(param_3,param_1 + 0x10c,0x10);
  }
  else {
    (*(code *)PTR_AesSetIV_00561148)(param_1 + 0x18,param_3);
  }
  return;
}



// ==== CyaSSL_ripemd160 @ 00486ac0 size=92

undefined4 CyaSSL_ripemd160(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1784);
  return 0;
}



// ==== CyaSSL_EVP_MD_size @ 00486b1c size=448

undefined4 CyaSSL_EVP_MD_size(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -6000);
  if (param_1 == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x175c);
    uVar2 = 0xffffff53;
  }
  else {
    iVar1 = (*(code *)PTR_strncmp_005615d4)(param_1,PTR_DAT_00560f88 + -0x3fdc,3);
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    else {
      iVar1 = (*(code *)PTR_strncmp_005615d4)(param_1,PTR_DAT_00560f88 + -0x2cd8,6);
      if (iVar1 == 0) {
        uVar2 = 0x20;
      }
      else {
        iVar1 = (*(code *)PTR_strncmp_005615d4)(param_1,PTR_DAT_00560f88 + -0x2cd0,6);
        if (iVar1 == 0) {
          uVar2 = 0x30;
        }
        else {
          iVar1 = (*(code *)PTR_strncmp_005615d4)(param_1,PTR_DAT_00560f88 + -0x2cc8,6);
          if (iVar1 == 0) {
            uVar2 = 0x40;
          }
          else {
            iVar1 = (*(code *)PTR_strncmp_005615d4)(param_1,PTR_DAT_00560f88 + -0x2cc0,3);
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



// ==== CyaSSL_EVP_CIPHER_CTX_iv_length @ 00486cdc size=416

undefined4 CyaSSL_EVP_CIPHER_CTX_iv_length(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x174c);
  if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x00486d3c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 +
                                        (uint)*(byte *)(param_1 + 5) * 4 + -0x172c)))();
    return uVar1;
  }
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2df8);
  return 0;
}



// ==== CyaSSL_OPENSSL_free @ 00486e7c size=132

void CyaSSL_OPENSSL_free(int param_1)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1700);
  if (param_1 != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(param_1);
  }
  return;
}



// ==== CyaSSL_PEM_write_bio_RSAPrivateKey @ 00486f00 size=108

undefined4 CyaSSL_PEM_write_bio_RSAPrivateKey(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x16ec);
  return 0xffffffff;
}



// ==== CyaSSL_PEM_write_bio_DSAPrivateKey @ 00486f6c size=108

undefined4 CyaSSL_PEM_write_bio_DSAPrivateKey(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x16c8);
  return 0xffffffff;
}



// ==== CyaSSL_PEM_read_bio_PrivateKey @ 00486fd8 size=108

undefined4 CyaSSL_PEM_read_bio_PrivateKey(void)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x16a4);
  return 0;
}



// ==== CyaSSL_RSA_LoadDer @ 00487044 size=400

int CyaSSL_RSA_LoadDer(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x1684);
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (param_2 == 0)) || (param_3 < 1)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1e08);
    iVar1 = -0xad;
  }
  else {
    iVar1 = (*(code *)PTR_RsaPrivateKeyDecode_0056106c)
                      (param_2,&local_c,*(undefined4 *)(param_1 + 0x20),param_3);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1670);
    }
    else {
      iVar1 = (*(code *)(PTR_LAB_005610e0 + 0x52d4))(param_1);
      if (iVar1 < 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x1b0c);
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



// ==== CyaSSL_DeriveTlsKeys @ 00487e98 size=244

undefined4
CyaSSL_DeriveTlsKeys
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  (*(code *)PTR_memcpy_005615a4)(auStack_48,param_5,0x20);
  (*(code *)PTR_memcpy_005615a4)(auStack_28,param_6,0x20);
  uVar1 = (*(code *)(PTR_LAB_005610e0 + 0x79c8))
                    (param_1,param_2,param_3,param_4,PTR_DAT_00560f88 + -0x15d8,0xd,auStack_48,0x40,
                     param_7,param_8);
  return uVar1;
}



// ==== CyaSSL_MakeTlsMasterSecret @ 004880d8 size=244

undefined4
CyaSSL_MakeTlsMasterSecret
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  (*(code *)PTR_memcpy_005615a4)(auStack_48,param_5,0x20);
  (*(code *)PTR_memcpy_005615a4)(auStack_28,param_6,0x20);
  uVar1 = (*(code *)(PTR_LAB_005610e0 + 0x79c8))
                    (param_1,param_2,param_3,param_4,PTR_DAT_00560f88 + -0x15e8,0xd,auStack_48,0x40,
                     param_7,param_8);
  return uVar1;
}



// ==== CyaSSL_GetHmacType @ 00488590 size=200

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



// ==== CyaSSL_SetTlsHmacInner @ 00488658 size=332

undefined4
CyaSSL_SetTlsHmacInner
          (int param_1,int param_2,undefined2 param_3,undefined1 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0xffffff53;
  }
  else {
    (*(code *)PTR_memset_00561588)(param_2,0,0xd);
    uVar1 = (*(code *)(PTR_LAB_0056125c + -0x7adc))(param_1,param_5);
    (*(code *)(PTR_LAB_0056125c + -0x7b5c))(uVar1,param_2 + 4);
    *(undefined1 *)(param_2 + 8) = param_4;
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 8);
    *(undefined1 *)(param_2 + 10) = *(undefined1 *)(param_1 + 9);
    (*(code *)(PTR_LAB_0056125c + -0x7bb4))(param_3,param_2 + 0xb);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== CyaSSL_ERR_reason_error_string @ 004cce30 size=1704

undefined * CyaSSL_ERR_reason_error_string(int param_1)

{
  undefined *puVar1;
  
  if ((param_1 < -100) && (-300 < param_1)) {
    puVar1 = (undefined *)(*(code *)PTR_CTaoCryptGetErrorString_00561430)(param_1);
  }
  else {
    if (param_1 + 0x1f5U < 0x1fc) {
                    /* WARNING: Could not emulate address calculation at 0x004ccec0 */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (undefined *)
               (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 + (param_1 + 0x1f5U) * 4 + 0x5384)))();
      return puVar1;
    }
    puVar1 = PTR_DAT_00560f88 + 0x536c;
  }
  return puVar1;
}



