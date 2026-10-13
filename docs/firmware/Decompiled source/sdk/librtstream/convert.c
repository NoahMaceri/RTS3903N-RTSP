/* librtstream — "convert" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== convert_rotation_coordinate @ 00027d30 size=92

undefined4
convert_rotation_coordinate(int *param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (param_5 < 3) {
      iVar1 = *param_1;
      iVar2 = *param_2;
      if (param_5 == 1) {
        param_4 = param_4 - iVar2;
      }
      else {
        param_3 = param_3 - iVar1;
        param_4 = iVar1;
        iVar1 = iVar2;
        if (param_5 == 2) {
          param_4 = iVar2;
          iVar1 = param_3;
        }
      }
      *param_1 = param_4;
      *param_2 = iVar1;
      return 0;
    }
    return 0xffffffeb;
  }
  return 0xfffffff6;
}



// ==== convert_rotation_rect @ 00027da0 size=252

undefined4
convert_rotation_rect(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else if (param_4 < 3) {
    uVar1 = 0;
    if (param_4 != 0) {
      (*(code *)PTR_memcpy_00063908)(&local_38,param_1,0x10);
      local_24[0] = local_38;
      local_28 = local_34;
      if (param_4 == 2) {
        local_24[0] = local_30;
      }
      else {
        local_28 = local_2c;
      }
      (*(code *)PTR_convert_rotation_coordinate_0006334c)
                (local_24,&local_28,param_2,param_3,param_4);
      *param_1 = local_24[0];
      param_1[1] = local_28;
      local_24[0] = local_30;
      local_28 = local_2c;
      if (param_4 != 2) {
        local_28 = local_34;
        uVar1 = rts_av_set_osd2_color_table();
        return uVar1;
      }
      local_24[0] = local_38;
      (*(code *)PTR_convert_rotation_coordinate_0006334c)(local_24,&local_28,param_2,param_3,2);
      uVar1 = 0;
      param_1[2] = local_24[0];
      param_1[3] = local_28;
    }
  }
  else {
    uVar1 = 0xffffffeb;
  }
  return uVar1;
}



// ==== convert_rotation_grid @ 00027f00 size=252

undefined4 convert_rotation_grid(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else if (param_4 < 3) {
    uVar1 = 0;
    if (param_4 != 0) {
      local_c = *param_1;
      local_10 = param_1[1];
      if (param_4 == 2) {
        local_c = param_1[5] * param_1[2] + local_c;
      }
      else {
        local_10 = param_1[4] * param_1[3] + local_10;
      }
      (*(code *)PTR_convert_rotation_coordinate_0006334c)
                (&local_c,&local_10,param_2,param_3,param_4);
      *param_1 = local_c;
      param_1[1] = local_10;
      iVar2 = param_1[2];
      param_1[2] = param_1[3];
      param_1[3] = iVar2;
      iVar2 = param_1[4];
      param_1[4] = param_1[5];
      uVar1 = 0;
      param_1[5] = iVar2;
    }
  }
  else {
    uVar1 = 0xffffffeb;
  }
  return uVar1;
}



