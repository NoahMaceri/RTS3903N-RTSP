/* crypt_file — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "crypt_file.h"

// ==== entry @ 00400bc0 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_004180a0;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004180d4)
            (PTR_main_00418098,param_2,&stack0x00000004,PTR__init_0041809c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== crypt_file @ 00400f94 size=1200

undefined4
crypt_file(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_ac8 [1024];
  undefined1 auStack_6c8 [1024];
  undefined1 auStack_2c8 [256];
  undefined1 auStack_1c8 [256];
  undefined1 auStack_c8 [52];
  uint local_94;
  uint local_30;
  uint local_2c;
  
  memset(auStack_1c8,0,0x100);
  memset(auStack_2c8,0,0x100);
  memset(auStack_6c8,0,0x400);
  memset(auStack_ac8,0,0x400);
  local_2c = 0;
  local_30 = 0;
  uVar2 = basename(param_1);
  sprintf(auStack_2c8,"/tmp/%s.crypt_tmp_file",uVar2);
  iVar3 = fopen(param_1,&DAT_004050e8);
  if (iVar3 == 0) {
    FUN_00401560("crypt_file.c","crypt_file",0x98,"fopen in file fail!\n");
  }
  else {
    iVar4 = fopen(auStack_2c8,&DAT_00405114);
    if (iVar4 == 0) {
      FUN_00401560("crypt_file.c","crypt_file",0x9f,"fopen out file fail!\n");
      fclose(iVar3);
    }
    else {
      memset(auStack_c8,0,0x98);
      stat(param_1,auStack_c8);
      uVar7 = local_94;
      FUN_00401560("crypt_file.c","crypt_file",0xa7,"crype_file got file len %d!\n",local_94);
      if (param_4 == 0) {
        local_2c = local_94;
        iVar6 = fwrite(&local_2c,1,4,iVar4);
        uVar8 = local_94;
        if (iVar6 == 4) {
          do {
            if ((int)uVar8 < 1) goto LAB_00401224;
            memset(auStack_6c8,0,0x400);
            memset(auStack_ac8,0,0x400);
            iVar6 = fread(auStack_6c8,1,0x400,iVar3);
            uVar8 = uVar8 - iVar6;
            if (iVar6 < 0) {
              FUN_00401560("crypt_file.c","crypt_file",0xba,"fread in fail!\n");
              goto LAB_004011d8;
            }
            FUN_00400da0(auStack_6c8,iVar6,auStack_ac8,&local_30,param_3,param_5);
            uVar7 = fwrite(auStack_ac8,1,local_30,iVar4);
          } while (uVar7 == local_30);
          FUN_00401560("crypt_file.c","crypt_file",0xc3,"fwrite out fail!\n");
        }
        else {
          FUN_00401560("crypt_file.c","crypt_file",0xaf,"fwrite data_len fail!\n",uVar7);
        }
      }
      else if (param_4 == 1) {
        if (local_94 < 4) {
          FUN_00401560("crypt_file.c","crypt_file",0xcd,"file too short!\n",uVar7);
        }
        else {
          fread(&local_2c,1,4,iVar3);
          uVar8 = local_94 - 4;
          if ((((int)uVar8 < (int)local_2c) || (0xf < (int)(uVar8 - local_2c))) ||
             (uVar1 = local_2c, (uVar8 & 0xf) != 0)) {
            FUN_00401560("crypt_file.c","crypt_file",0xd5,"wrong file len!\n",uVar7);
          }
          else {
            do {
              local_2c = uVar1;
              if (((int)uVar8 < 1) || ((int)local_2c < 1)) {
LAB_00401224:
                fclose(iVar3);
                fclose(iVar4);
                memset(auStack_1c8,0,0x100);
                sprintf(auStack_1c8,"mv %s %s",auStack_2c8,param_2);
                system(auStack_1c8);
                return 0;
              }
              memset(auStack_6c8,0,0x400);
              memset(auStack_ac8,0,0x400);
              iVar6 = fread(auStack_6c8,1,0x400,iVar3);
              uVar8 = uVar8 - iVar6;
              if (iVar6 < 0) {
                FUN_00401560("crypt_file.c","crypt_file",0xe0,"fread in fail!\n");
                goto LAB_004011d8;
              }
              FUN_00400ea8(auStack_6c8,iVar6,auStack_ac8,&local_30,param_3,param_5);
              uVar7 = local_30;
              if ((int)local_2c <= (int)local_30) {
                uVar7 = local_2c;
              }
              uVar5 = fwrite(auStack_ac8,1,uVar7,iVar4);
              uVar7 = local_2c;
              if ((int)local_30 < (int)local_2c) {
                uVar7 = local_30;
              }
              uVar1 = local_2c - iVar6;
            } while (uVar7 == uVar5);
            FUN_00401560("crypt_file.c","crypt_file",0xe9,"fwrite out fail!\n");
          }
        }
      }
LAB_004011d8:
      fclose(iVar3);
      fclose(iVar4);
    }
  }
  unlink(auStack_2c8);
  return 0xffffffff;
}



// ==== AesSetKey @ 00404354 size=188

undefined4
AesSetKey(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (((param_3 == 0x10) || (param_3 == 0x18)) || (param_3 == 0x20)) {
    uVar1 = (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x3460))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar1 = 0xffffff53;
  }
  return uVar1;
}



// ==== AesSetIV @ 00404490 size=196

undefined4 AesSetIV(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    if (param_2 == 0) {
      (*DAT_004180d0)(param_1 + 0xf4,0,0x10);
    }
    else {
      (*DAT_004180dc)(param_1 + 0xf4,param_2,0x10);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// ==== AesCbcDecrypt @ 00404804 size=320

undefined4 AesCbcDecrypt(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 4;
  while (local_10 != 0) {
    (*DAT_004180dc)(param_1 + 0x104,local_res8,0x10);
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x2798))(param_1,param_1 + 0x104,local_res4);
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x19c4))(local_res4,param_1 + 0xf4,0x10);
    (*DAT_004180dc)(param_1 + 0xf4,param_1 + 0x104,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== CYASSL_MSG @ 00404dd0 size=108

void CYASSL_MSG(undefined4 param_1)

{
  if (*(int *)(DAT_004180b8 + -0x7ecc) != 0) {
    (*(code *)(PTR_Elf32_Ehdr_004180a4 + 0x4d1c))(1,param_1);
  }
  return;
}



// ==== fprintf @ 00405060 size=16

void fprintf(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00400cac();
  return;
}



// ==== putchar @ 00407e60 size=16

void putchar(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418020)();
  return;
}



// ==== strcpy @ 00407e70 size=4

void strcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418024)();
  return;
}



// ==== printf @ 00407e80 size=16

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418028)();
  return;
}



// ==== snprintf @ 00407e90 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041802c)();
  return;
}



// ==== getpid @ 00407ea0 size=20

void getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418030)();
  return;
}



// ==== puts @ 00407ec0 size=16

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418038)();
  return;
}



// ==== system @ 00407ed0 size=4

void system(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041803c)();
  return;
}



// ==== vsnprintf @ 00407ee0 size=16

void vsnprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418040)();
  return;
}



// ==== socket @ 00407ef0 size=4

void socket(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418044)();
  return;
}



// ==== basename @ 00407f00 size=16

void basename(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418048)();
  return;
}



// ==== unlink @ 00407f10 size=4

void unlink(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041804c)();
  return;
}



// ==== sendto @ 00407f20 size=16

void sendto(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418050)();
  return;
}



// ==== fread @ 00407f30 size=4

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418054)();
  return;
}



// ==== gettimeofday @ 00407f40 size=16

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418058)();
  return;
}



// ==== fopen @ 00407f50 size=4

void fopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041805c)();
  return;
}



// ==== localtime @ 00407f60 size=16

void localtime(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418060)();
  return;
}



// ==== memset @ 00407f70 size=4

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418064)();
  return;
}



// ==== fclose @ 00407f80 size=16

void fclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418068)();
  return;
}



// ==== time @ 00407f90 size=4

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041806c)();
  return;
}



// ==== strcmp @ 00407fa0 size=16

void strcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418070)();
  return;
}



// ==== sprintf @ 00407fb0 size=4

void sprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418074)();
  return;
}



// ==== stat @ 00407fc0 size=16

void stat(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418078)();
  return;
}



// ==== fwrite @ 00407fd0 size=4

void fwrite(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041807c)();
  return;
}



// ==== strlen @ 00407fe0 size=16

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418080)();
  return;
}



// ==== vfprintf @ 00407ff0 size=4

void vfprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00418084)();
  return;
}



