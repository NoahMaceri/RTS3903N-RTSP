/* rts_camera_soc — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_camera_soc.h"

// ==== __enable_td @ 00014550 size=276

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __enable_td(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  byte local_20 [12];
  
  iVar1 = rtscam_soc_get_isp_func(param_1,local_20);
  if (iVar1 == 0) {
    FUN_000111d8(param_1,5,1);
    local_20[0] = local_20[0] | 1;
    iVar2 = rtscam_soc_set_isp_func(param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      if ((_rtscam_debug & 1) != 0) {
        printk(&_LC107,"__enable_td");
      }
      FUN_000111d8(param_1,5,0);
      iVar1 = iVar2;
    }
  }
  else if ((_rtscam_debug & 1) != 0) {
    printk(&_LC106,"__enable_td");
  }
  return iVar1;
}



// ==== __disable_td @ 00014664 size=212

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __disable_td(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  byte local_18 [12];
  
  iVar1 = rtscam_soc_get_isp_func(param_1,local_18);
  if (iVar1 == 0) {
    local_18[0] = local_18[0] & 0xfe;
    iVar1 = rtscam_soc_set_isp_func(param_1);
    if (iVar1 == 0) {
      FUN_000111d8(param_1,5,0);
      return 0;
    }
    if ((_rtscam_debug & 1) == 0) {
      return iVar1;
    }
    puVar2 = &_LC107;
  }
  else {
    if ((_rtscam_debug & 1) == 0) {
      return iVar1;
    }
    puVar2 = &_LC106;
  }
  printk(puVar2,"__disable_td");
  return iVar1;
}



// ==== __compare_api_version @ 000160f4 size=68

uint __compare_api_version(byte *param_1,byte param_2,byte param_3)

{
  uint uVar1;
  
  if (*param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
    if (*param_1 <= param_2) {
      uVar1 = 0xffffffff;
      if (param_3 <= param_1[1]) {
        uVar1 = (uint)(param_3 < param_1[1]);
      }
      return uVar1;
    }
  }
  return uVar1;
}



// ==== init_module @ 00017a00 size=24

void init_module(void)

{
  platform_driver_register(&PTR_rtscam_soc_probe_000190a0);
  return;
}



// ==== cleanup_module @ 00017a18 size=24

void cleanup_module(void)

{
  platform_driver_unregister(&PTR_rtscam_soc_probe_000190a0);
  return;
}



