/* oss — "bio" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== BIO_f_buffer @ 0047ae3c size=108

undefined * BIO_f_buffer(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3294);
  PTR_DAT_00560988[-0x4f94] = 1;
  return PTR_DAT_00560988 + -0x4f94;
}



// ==== BIO_set_write_buffer_size @ 0047aea8 size=100

undefined4 BIO_set_write_buffer_size(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3284);
  return param_2;
}



// ==== BIO_f_ssl @ 0047af0c size=108

undefined * BIO_f_ssl(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3268);
  PTR_DAT_00560988[-0x4f90] = 3;
  return PTR_DAT_00560988 + -0x4f90;
}



// ==== BIO_new_socket @ 0047af78 size=228

undefined1 * BIO_new_socket(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_00560f78)(0x1c);
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x325c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 2;
    puVar1[1] = param_2;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 0x10) = param_1;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  return puVar1;
}



// ==== BIO_eof @ 0047b05c size=124

bool BIO_eof(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x324c);
  return *(char *)(param_1 + 2) != '\0';
}



// ==== BIO_set_ssl @ 0047b0d8 size=132

undefined4 BIO_set_ssl(int param_1,undefined4 param_2,undefined1 param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3244);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return 0;
}



// ==== BIO_free_all @ 0047b538 size=160

undefined4 BIO_free_all(int param_1)

{
  int iVar1;
  int local_res0;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3224);
  local_res0 = param_1;
  while (local_res0 != 0) {
    iVar1 = *(int *)(local_res0 + 0x18);
    (*(code *)PTR_CyaSSL_BIO_free_00561100)(local_res0);
    local_res0 = iVar1;
  }
  return 0;
}



// ==== BIO_read @ 0047b5d8 size=380

int BIO_read(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_res0;
  int local_18;
  
  local_18 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3214);
  local_res0 = param_1;
  if (*(char *)(param_1 + 2) == '\0') {
    for (; (local_res0 != 0 && (local_18 = *(int *)(local_res0 + 4), local_18 == 0));
        local_res0 = *(int *)(local_res0 + 0x18)) {
    }
    if (local_18 == 0) {
      iVar2 = -0xad;
    }
    else {
      iVar2 = (*(code *)PTR_CyaSSL_read_00560fcc)(local_18,param_2,param_3);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      else if (((iVar2 < 0) &&
               (iVar1 = (*(code *)PTR_CyaSSL_get_error_00561104)(local_18,0), iVar1 != 2)) &&
              (iVar1 != 3)) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



// ==== BIO_write @ 0047b754 size=380

int BIO_write(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_res0;
  int local_18;
  
  local_18 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3208);
  local_res0 = param_1;
  if (*(char *)(param_1 + 2) == '\0') {
    for (; (local_res0 != 0 && (local_18 = *(int *)(local_res0 + 4), local_18 == 0));
        local_res0 = *(int *)(local_res0 + 0x18)) {
    }
    if (local_18 == 0) {
      iVar2 = -0xad;
    }
    else {
      iVar2 = (*(code *)PTR_CyaSSL_write_00560fc8)(local_18,param_2,param_3);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      else if (((iVar2 < 0) &&
               (iVar1 = (*(code *)PTR_CyaSSL_get_error_00561104)(local_18,0), iVar1 != 2)) &&
              (iVar1 != 3)) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



// ==== BIO_push @ 0047b8d0 size=124

int BIO_push(int param_1,int param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x31fc);
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_2 + 0x14) = param_1;
  return param_1;
}



// ==== BIO_flush @ 0047b94c size=96

undefined4 BIO_flush(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x31f0);
  return 1;
}



