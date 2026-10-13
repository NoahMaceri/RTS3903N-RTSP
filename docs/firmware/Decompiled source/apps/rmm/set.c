/* rmm — "set" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== set_light_switch @ 00405660 size=580

void set_light_switch(uint param_1)

{
  char cVar1;
  
  if ((*(char *)(DAT_004778ac + 0x219) != '2') && (*(char *)(DAT_004778ac + 0x218) != '3')) {
    return;
  }
  if (DAT_00436bd8 == param_1) {
    return;
  }
  cVar1 = *(char *)(DAT_004778ac + 0x9ed);
  if (cVar1 == '\x02') {
    if ((DAT_00477950 == 1) && (*(int *)(DAT_004778ac + 0x608) == 0)) {
      if (param_1 != 0) {
        printf(&DAT_004222c8,"set_light_switch",0x1fb,&DAT_00422308);
        FUN_00413f64("rmm.c","set_light_switch",0x1fc,"set_light_switch %s",&DAT_00422308);
        DAT_00436bd8 = (byte)param_1;
        DAT_00477950 = 0;
        media_venc_set_color2grey(0);
        FUN_004055bc(0);
        ioctl(DAT_00477968,0x20007023,0);
        return;
      }
      printf(&DAT_004222c8,"set_light_switch",0x1fb,&PTR_DAT_004222f0);
      FUN_00413f64("rmm.c","set_light_switch",0x1fc,"set_light_switch %s",&PTR_DAT_004222f0);
      DAT_00436bd8 = 0;
      ioctl(DAT_00477968,0x20007024,0);
      goto LAB_00405708;
    }
    if (*(int *)(DAT_004778ac + 0x608) == 1) goto LAB_00405760;
  }
  else if ((cVar1 == '\0') || (*(int *)(DAT_004778ac + 0x608) == 1)) {
LAB_00405760:
    ioctl(DAT_00477968,0x20007024,0);
    DAT_00436bd8 = 0;
  }
  else if (cVar1 == '\x01') {
    ioctl(DAT_00477968,0x20007023,0);
    DAT_00477950 = 0;
    media_venc_set_color2grey(0);
    FUN_004055bc(0);
    DAT_00436bd8 = 1;
  }
  if (param_1 != 0) {
    return;
  }
LAB_00405708:
  if (*(char *)(DAT_004778ac + 0x9ed) == '\x01') {
    return;
  }
  ioctl(DAT_00477968,0x20007024,0);
  DAT_00436bd8 = 0;
  return;
}



// ==== set_grey_attr @ 0040ab94 size=332

int set_grey_attr(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [32];
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_18;
  
  local_18 = rts_av_get_isp_ctrl(param_1,auStack_68);
  if (local_18 != 0) {
    rts_log(4,"<%s, %d>get isp attr fail, ret = %d\n","set_grey_attr",0x65f,local_18);
    return local_18;
  }
  iVar1 = local_40;
  if ((param_2 <= local_40) && (iVar1 = local_44, local_44 <= param_2)) {
    iVar1 = param_2;
  }
  iVar2 = (param_2 - local_44) % local_3c;
  if (local_3c == 0) {
    trap(0x1c00);
  }
  if (iVar2 != 0) {
    iVar1 = param_2 - iVar2;
  }
  rts_log(1,"%s min = %d, max = %d, step = %d, default = %d, cur = %d\n",auStack_64,local_44,
          local_40,local_3c,local_38,local_34);
  uVar3 = local_34;
  local_34 = iVar1;
  local_18 = rts_av_set_isp_ctrl(param_1,auStack_68);
  if (local_18 != 0) {
    rts_log(4,"<%s, %d>set isp attr fail, ret = %d\n","set_grey_attr",0x66c,local_18,local_3c,
            local_38,uVar3);
    return local_18;
  }
  return 0;
}



// ==== set_isp_attr @ 0040ad28 size=332

int set_isp_attr(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [32];
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_18;
  
  local_18 = rts_av_get_isp_ctrl(param_1,auStack_68);
  if (local_18 != 0) {
    rts_log(4,"<%s, %d>get isp attr fail, ret = %d\n","set_isp_attr",0x67b,local_18);
    return local_18;
  }
  iVar1 = local_40;
  if ((param_2 <= local_40) && (iVar1 = local_44, local_44 <= param_2)) {
    iVar1 = param_2;
  }
  iVar2 = (param_2 - local_44) % local_3c;
  if (local_3c == 0) {
    trap(0x1c00);
  }
  if (iVar2 != 0) {
    iVar1 = param_2 - iVar2;
  }
  rts_log(1,"%s min = %d, max = %d, step = %d, default = %d, cur = %d\n",auStack_64,local_44,
          local_40,local_3c,local_38,local_34);
  uVar3 = local_34;
  local_34 = iVar1;
  local_18 = rts_av_set_isp_ctrl(param_1,auStack_68);
  if (local_18 != 0) {
    rts_log(4,"<%s, %d>set isp attr fail, ret = %d\n","set_isp_attr",0x688,local_18,local_3c,
            local_38,uVar3);
    return local_18;
  }
  return 0;
}



