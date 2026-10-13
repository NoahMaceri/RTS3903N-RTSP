/* cloudAPI — "bio" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloudAPI.h"

// ==== BIO_f_buffer @ 0043c72c size=108

undefined * BIO_f_buffer(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x162c);
  PTR_clock_gettime_004be64c[-0x2f4] = 1;
  return PTR_clock_gettime_004be64c + -0x2f4;
}



// ==== BIO_set_write_buffer_size @ 0043c798 size=100

undefined4 BIO_set_write_buffer_size(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x163c);
  return param_2;
}



// ==== BIO_f_ssl @ 0043c7fc size=108

undefined * BIO_f_ssl(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1658);
  PTR_clock_gettime_004be64c[-0x2f0] = 3;
  return PTR_clock_gettime_004be64c + -0x2f0;
}



// ==== BIO_new_socket @ 0043c868 size=228

undefined1 * BIO_new_socket(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_004be634)(0x1c);
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1664);
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



// ==== BIO_eof @ 0043c94c size=124

bool BIO_eof(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1674);
  return *(char *)(param_1 + 2) != '\0';
}



// ==== BIO_set_ssl @ 0043c9c8 size=132

undefined4 BIO_set_ssl(int param_1,undefined4 param_2,undefined1 param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x167c);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return 0;
}



// ==== BIO_free_all @ 0043ce28 size=160

undefined4 BIO_free_all(int param_1)

{
  int iVar1;
  int local_res0;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x169c);
  local_res0 = param_1;
  while (local_res0 != 0) {
    iVar1 = *(int *)(local_res0 + 0x18);
    (*(code *)PTR_CyaSSL_BIO_free_004be7c0)(local_res0);
    local_res0 = iVar1;
  }
  return 0;
}



// ==== BIO_read @ 0043cec8 size=380

int BIO_read(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_res0;
  int local_18;
  
  local_18 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x16ac);
  local_res0 = param_1;
  if (*(char *)(param_1 + 2) == '\0') {
    for (; (local_res0 != 0 && (local_18 = *(int *)(local_res0 + 4), local_18 == 0));
        local_res0 = *(int *)(local_res0 + 0x18)) {
    }
    if (local_18 == 0) {
      iVar2 = -0xad;
    }
    else {
      iVar2 = (*(code *)PTR_CyaSSL_read_004be68c)(local_18,param_2,param_3);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      else if (((iVar2 < 0) &&
               (iVar1 = (*(code *)PTR_CyaSSL_get_error_004be7c4)(local_18,0), iVar1 != 2)) &&
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



// ==== BIO_write @ 0043d044 size=380

int BIO_write(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_res0;
  int local_18;
  
  local_18 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x16b8);
  local_res0 = param_1;
  if (*(char *)(param_1 + 2) == '\0') {
    for (; (local_res0 != 0 && (local_18 = *(int *)(local_res0 + 4), local_18 == 0));
        local_res0 = *(int *)(local_res0 + 0x18)) {
    }
    if (local_18 == 0) {
      iVar2 = -0xad;
    }
    else {
      iVar2 = (*(code *)PTR_CyaSSL_write_004be688)(local_18,param_2,param_3);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      else if (((iVar2 < 0) &&
               (iVar1 = (*(code *)PTR_CyaSSL_get_error_004be7c4)(local_18,0), iVar1 != 2)) &&
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



// ==== BIO_push @ 0043d1c0 size=124

int BIO_push(int param_1,int param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x16c4);
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_2 + 0x14) = param_1;
  return param_1;
}



// ==== BIO_flush @ 0043d23c size=96

undefined4 BIO_flush(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x16d0);
  return 1;
}



