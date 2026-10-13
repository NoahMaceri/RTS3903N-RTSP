/* oss — "initssl" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== InitSSL_Method @ 004c09bc size=80

void InitSSL_Method(undefined1 *param_1,undefined2 param_2)

{
  undefined1 local_res4;
  undefined1 uStackX_5;
  
  local_res4 = (undefined1)param_2;
  *param_1 = local_res4;
  uStackX_5 = (undefined1)((ushort)param_2 >> 8);
  param_1[1] = uStackX_5;
  param_1[2] = 1;
  param_1[3] = 0;
  return;
}



// ==== InitSSL_Ctx @ 004c0a0c size=644

undefined4 InitSSL_Ctx(undefined4 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[7] = 1;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)((int)param_1 + 0x14b) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((int)param_1 + 0x14d) = 0;
  *(undefined1 *)((int)param_1 + 0x14e) = 0;
  param_1[0x50] = param_1;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x58] = 500;
  param_1[0x55] = PTR_EmbedReceive_005613e0;
  param_1[0x56] = PTR_EmbedSend_005613e4;
  *(undefined1 *)((int)param_1 + 0x14f) = 0;
  param_1[0x57] = 0;
  uVar1 = (*(code *)PTR_CyaSSL_CertManagerNew_005611d8)();
  param_1[0x12] = uVar1;
  param_1[0x13] = 0;
  (*(code *)PTR_InitSuites_00561020)
            (param_1 + 0x13,*param_2,1,0,1,*(undefined1 *)(param_1 + 0x53),
             *(undefined1 *)((int)param_1 + 0x14d),*(undefined1 *)((int)param_1 + 0x14e),
             *(undefined1 *)(param_2 + 1));
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)((int)param_1 + 0x145) = 0;
  *(undefined1 *)((int)param_1 + 0x146) = 0;
  *(undefined1 *)((int)param_1 + 0x147) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)((int)param_1 + 0x149) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)((int)param_1 + 0x151) = 0;
  iVar2 = (*(code *)PTR_InitMutex_00560fe4)(param_1 + 1);
  if (iVar2 < 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2f88);
    uVar1 = 0xffffff96;
  }
  else if (param_1[0x12] == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2fa0);
    uVar1 = 0xfffffe99;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ==== InitSSL @ 004c1bc4 size=2860

int InitSSL(undefined4 *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_1 = param_2;
  puVar1 = (undefined1 *)*param_2;
  *(undefined1 *)(param_1 + 2) = *puVar1;
  *(undefined1 *)((int)param_1 + 9) = puVar1[1];
  param_1[3] = 0;
  param_1[0x111] = 0;
  param_1[0x113] = 0;
  param_1[0x115] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = param_1 + 0x124;
  param_1[0x123] = 5;
  *(undefined1 *)((int)param_1 + 0x495) = 0;
  *(undefined1 *)((int)param_1 + 0x496) = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = param_1 + 0x12a;
  param_1[0x129] = 5;
  *(undefined1 *)((int)param_1 + 0x4ad) = 0;
  *(undefined1 *)((int)param_1 + 0x4ae) = 0;
  param_1[0x11f] = 0;
  param_1[0x117] = 0;
  param_1[0x119] = 0;
  param_1[0x11b] = 0;
  param_1[0x11d] = 0;
  param_1[0x12d] = 0;
  param_1[300] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  (*(code *)PTR_InitX509_005611c4)(param_1 + 0x164,0);
  param_1[0x162] = param_2[0x58];
  param_1[0x4e] = 0xffffffff;
  param_1[0x4f] = 0xffffffff;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = param_1 + 0x4e;
  param_1[0x55] = param_1 + 0x4f;
  (*(code *)PTR_memset_00561588)(param_1 + 0x4d,0,2);
  param_1[0x15c] = 0;
  *(undefined1 *)(param_1 + 0x15d) = 0;
  param_1[0x15a] = param_2[0x57];
  param_1[0x15b] = 0;
  *(undefined1 *)(param_1 + 0x133) = *(undefined1 *)(*param_2 + 2);
  *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(*param_2 + 3);
  *(undefined1 *)((int)param_1 + 0x4d1) = 1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x136) = 0;
  *(undefined1 *)((int)param_1 + 0x4d9) = 0;
  *(undefined1 *)((int)param_1 + 0x4da) = 0;
  *(undefined1 *)((int)param_1 + 0x4db) = 0;
  *(undefined1 *)((int)param_1 + 0x4de) = 0;
  if (*(char *)(param_1 + 0x133) == '\0') {
    *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)((int)param_2 + 0x14b);
  }
  else {
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  *(char *)((int)param_1 + 0x4e1) = (char)param_2[0x53];
  *(undefined1 *)((int)param_1 + 0x4e2) = *(undefined1 *)((int)param_2 + 0x14d);
  *(undefined1 *)((int)param_1 + 0x4e3) = *(undefined1 *)((int)param_2 + 0x14e);
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined1 *)((int)param_1 + 0x4e5) = 0;
  *(undefined1 *)((int)param_1 + 0x4e6) = 0;
  *(undefined1 *)((int)param_1 + 0x4e7) = 0;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(undefined1 *)((int)param_1 + 0x4c9) = 0;
  *(undefined1 *)(param_1 + 0x137) = 0;
  *(undefined1 *)((int)param_1 + 0x4dd) = 0;
  *(undefined1 *)((int)param_1 + 0x4ca) = 0;
  *(undefined1 *)((int)param_1 + 0x4cb) = 0;
  *(undefined1 *)((int)param_1 + 0x4e9) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)((int)param_1 + 0x131) = 0;
  *(undefined1 *)(param_1 + 0x131) = *(undefined1 *)((int)param_2 + 0x147);
  *(char *)((int)param_1 + 0x4c5) = (char)param_2[0x52];
  *(char *)((int)param_1 + 0x4cd) = (char)param_2[0x51];
  *(undefined1 *)((int)param_1 + 0x4ce) = *(undefined1 *)((int)param_2 + 0x145);
  *(undefined1 *)((int)param_1 + 0x4cf) = *(undefined1 *)((int)param_2 + 0x146);
  *(undefined1 *)((int)param_1 + 0x4d2) = *(undefined1 *)((int)param_2 + 0x149);
  *(undefined1 *)((int)param_1 + 0x4d3) = 0;
  *(undefined1 *)(param_1 + 0x135) = 0;
  param_1[0x15e] = PTR_LAB_005613f4 + -0x561c;
  param_1[0x15f] = param_2[0x50];
  *(undefined1 *)((int)param_1 + 0x4d5) = 0;
  *(undefined1 *)((int)param_1 + 0x4d6) = 0;
  *(bool *)((int)param_1 + 0x4d7) = *(char *)(param_1 + 2) == -2;
  *(undefined1 *)((int)param_1 + 0x4ea) = *(undefined1 *)((int)param_2 + 0x14f);
  *(char *)((int)param_1 + 0x4eb) = (char)param_2[0x54];
  *(undefined1 *)(param_1 + 0x13b) = 0;
  *(undefined1 *)((int)param_1 + 0x4ed) = *(undefined1 *)((int)param_2 + 0x151);
  *(undefined1 *)((int)param_1 + 0x4ee) = 0;
  *(undefined1 *)((int)param_1 + 0x4ef) = 0;
  iVar2 = param_2[9];
  param_1[0x110] = param_2[8];
  param_1[0x111] = iVar2;
  iVar2 = param_2[0xb];
  param_1[0x114] = param_2[10];
  param_1[0x115] = iVar2;
  iVar2 = param_2[0xd];
  param_1[0x112] = param_2[0xc];
  param_1[0x113] = iVar2;
  if (*(char *)(param_1 + 0x133) == '\0') {
    iVar2 = param_2[0xf];
    param_1[0x116] = param_2[0xe];
    param_1[0x117] = iVar2;
    iVar2 = param_2[0x11];
    param_1[0x118] = param_2[0x10];
    param_1[0x119] = iVar2;
  }
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined1 *)((int)param_1 + 0x4c1) = 0;
  *(undefined1 *)((int)param_1 + 0x4c2) = 0;
  *(undefined1 *)((int)param_1 + 0x4c3) = 0;
  param_1[0x1a7] = 0;
  param_1[0x201] = 0;
  *(undefined2 *)(param_1 + 0x159) = 0;
  param_1[0x163] = param_1;
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  param_1[0x56] = 0;
  param_1[0x13c] = 0;
  param_1[0x28c] = 0xffffffff;
  param_1[0x28d] = 0xffffffff;
  param_1[0x28e] = 0xffffffff;
  param_1[0x28f] = 0xffffffff;
  (*(code *)PTR_FUN_005613f8)(param_1);
  (*(code *)PTR_FUN_005613fc)(param_1 + 0xc);
  (*(code *)PTR_InitMd5_00561108)(param_1 + 0x6f);
  iVar2 = (*(code *)PTR_InitSha_00561114)(param_1 + 0x57);
  if (((iVar2 == 0) && (iVar2 = (*(code *)PTR_InitSha256_00560f6c)(param_1 + 0x86), iVar2 == 0)) &&
     (iVar2 = (*(code *)PTR_InitSha384_0056112c)(param_1 + 0xa2), iVar2 == 0)) {
    iVar2 = (*(code *)PTR_LockMutex_00560ff4)(param_2 + 1);
    if (iVar2 == 0) {
      param_2[7] = param_2[7] + 1;
      (*(code *)PTR_UnLockMutex_00560ff8)(param_2 + 1);
      uVar3 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0x298);
      param_1[0x13c] = uVar3;
      if (param_1[0x13c] == 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x3060);
        iVar2 = -0x7d;
      }
      else {
        (*(code *)PTR_memset_00561588)(param_1[0x13c],0,0x298);
        uVar3 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0xc);
        param_1[0x56] = uVar3;
        if (param_1[0x56] == 0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x3074);
          iVar2 = -0x7d;
        }
        else {
          iVar2 = (*(code *)PTR_InitRng_005611e8)(param_1[0x56]);
          if (iVar2 == 0) {
            uVar3 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0xf4);
            param_1[3] = uVar3;
            if (param_1[3] == 0) {
              (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x3098);
              iVar2 = -0x7d;
            }
            else {
              (*(code *)PTR_memcpy_005615a4)(param_1[3],param_2 + 0x13,0xf4);
              uVar3 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0x88);
              param_1[0x15c] = uVar3;
              if (param_1[0x15c] == 0) {
                (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x30ac);
                iVar2 = -0x7d;
              }
              else {
                iVar2 = (*(code *)PTR_InitRsaKey_00561068)(param_1[0x15c],param_2[0x50]);
                if (iVar2 == 0) {
                  if ((*(char *)(param_1 + 0x133) == '\0') &&
                     ((param_1[0x111] == 0 || (param_1[0x113] == 0)))) {
                    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x30c4);
                    iVar2 = -0x13d;
                  }
                  else {
                    if (*(char *)(param_1 + 0x133) == '\0') {
                      (*(code *)PTR_InitSuites_00561020)
                                (param_1[3],param_1[2],1,0,*(undefined1 *)(param_1 + 0x138),
                                 *(undefined1 *)((int)param_1 + 0x4e1),
                                 *(undefined1 *)((int)param_1 + 0x4e2),
                                 *(undefined1 *)((int)param_1 + 0x4e3),
                                 *(undefined1 *)(param_1 + 0x133));
                    }
                    else {
                      (*(code *)PTR_InitSuites_00561020)
                                (param_1[3],param_1[2],1,0,1,*(undefined1 *)((int)param_1 + 0x4e1),
                                 *(undefined1 *)((int)param_1 + 0x4e2),
                                 *(undefined1 *)((int)param_1 + 0x4e3),
                                 *(undefined1 *)(param_1 + 0x133));
                    }
                    iVar2 = 0;
                  }
                }
              }
            }
          }
          else {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x3088);
          }
        }
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x3040);
      iVar2 = -0x6a;
    }
  }
  return iVar2;
}



