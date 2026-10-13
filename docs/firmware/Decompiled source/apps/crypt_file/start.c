/* crypt_file — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "crypt_file.h"

// ==== _init @ 004008e0 size=72

void _init(void)

{
  FUN_00400d5c();
  FUN_00405010();
  return;
}



// ==== _ftext @ 00400930 size=12

void _ftext(void)

{
  FUN_00404614();
  return;
}



// ==== main @ 00400960 size=608

int main(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 auStack_90 [132];
  
  memset(auStack_90,0,0x80);
  if (param_1 == 5) {
    strcpy(auStack_90,param_2[4]);
    uVar3 = param_2[1];
    iVar1 = strcmp(uVar3,&DAT_004051d0);
    if (iVar1 == 0) {
      iVar1 = crypt_file(param_2[2],param_2[3],auStack_90,0,0);
      if (iVar1 == 0) {
        pcVar4 = "success";
      }
      else {
        pcVar4 = "fail";
      }
      FUN_00401560("crypt_file.c",&DAT_00405270,0x11b,"encrypt file %s!\n",pcVar4);
    }
    else {
      iVar1 = strcmp(uVar3,&DAT_00405218);
      if (iVar1 == 0) {
        iVar1 = crypt_file(param_2[2],param_2[3],auStack_90,1,0);
        if (iVar1 == 0) {
          pcVar4 = "success";
        }
        else {
          pcVar4 = "fail";
        }
        FUN_00401560("crypt_file.c",&DAT_00405270,0x120,"decrypt file %s!\n",pcVar4);
      }
      else {
        iVar1 = strcmp(uVar3,&DAT_00405230);
        if (iVar1 == 0) {
          iVar1 = crypt_file(param_2[2],param_2[3],auStack_90,0,1);
          if (iVar1 == 0) {
            pcVar4 = "success";
          }
          else {
            pcVar4 = "fail";
          }
          FUN_00401560("crypt_file.c",&DAT_00405270,0x125,"encrypt_ext file %s!\n",pcVar4);
        }
        else {
          iVar2 = strcmp(uVar3,&DAT_0040524c);
          iVar1 = 0;
          if (iVar2 == 0) {
            iVar1 = crypt_file(param_2[2],param_2[3],auStack_90,1,1);
            if (iVar1 == 0) {
              pcVar4 = "success";
            }
            else {
              pcVar4 = "fail";
            }
            FUN_00401560("crypt_file.c",&DAT_00405270,0x12a,"decrypt_ext file %s!\n",pcVar4);
          }
        }
      }
    }
  }
  else {
    FUN_00401560("crypt_file.c",&DAT_00405270,0x114,"Usage:%s [-e/-d] [src_file] [dst_file] [key]\n"
                 ,*param_2);
    iVar1 = -1;
  }
  return iVar1;
}



// ==== __uClibc_main @ 00405070 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00400cac();
  return;
}



// ==== _fini @ 00405090 size=56

void _fini(void)

{
  FUN_00400cac();
  return;
}



