/* xy_stream — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "xy_stream.h"

// ==== FUN_00401dd0 @ 00401dd0 size=64

/* WARNING: Removing unreachable block (ram,0x00401df0) */
/* WARNING: Removing unreachable block (ram,0x00401e00) */

void FUN_00401dd0(void)

{
  return;
}



// ==== FUN_00401e10 @ 00401e10 size=76

/* WARNING: Removing unreachable block (ram,0x00401e3c) */
/* WARNING: Removing unreachable block (ram,0x00401e4c) */

void FUN_00401e10(void)

{
  return;
}



// ==== FUN_00401e5c @ 00401e5c size=176

/* WARNING: Removing unreachable block (ram,0x00401ebc) */

void FUN_00401e5c(void)

{
  if (DAT_00414da0 == '\0') {
    FUN_00401dd0();
    DAT_00414da0 = '\x01';
  }
  return;
}



// ==== FUN_00401f0c @ 00401f0c size=60

/* WARNING: Removing unreachable block (ram,0x00401f28) */

void FUN_00401f0c(void)

{
  FUN_00401e10();
  return;
}



// ==== FUN_00401f50 @ 00401f50 size=320

int FUN_00401f50(int param_1,int param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  
  *param_3 = 0;
  pbVar4 = (byte *)(param_1 + param_2 + -1);
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  if (param_2 < 4) {
    return -1;
  }
  pbVar3 = (byte *)(param_1 + 3);
  pbVar1 = (byte *)0x0;
  bVar5 = 0;
  while( true ) {
    while (pbVar3 < pbVar4) {
      if (pbVar3[-1] < 2) {
        if (pbVar3[-2] == 0) {
          if (pbVar3[-1] == 1 && pbVar3[-3] == 0) {
            pbVar2 = pbVar3 + -5;
            if (bVar5 != 0) goto LAB_00402004;
            bVar5 = *pbVar3;
            pbVar1 = pbVar3;
            goto LAB_0040205c;
          }
          goto LAB_00401fe0;
        }
        pbVar3 = pbVar3 + 2;
      }
      else {
        pbVar3 = pbVar3 + 3;
      }
    }
    if (bVar5 == 0) break;
    pbVar3 = (byte *)0x0;
    pbVar2 = pbVar4;
LAB_00402004:
    if (bVar5 == 7) {
      *param_3 = pbVar1 + -4;
      param_3[3] = pbVar2 + (5 - (int)pbVar1);
    }
    else if (bVar5 == 8) {
      param_3[1] = pbVar1 + -4;
      param_3[4] = pbVar2 + (5 - (int)pbVar1);
    }
    else if (bVar5 == 5) {
      param_3[2] = pbVar1 + -4;
      param_3[5] = pbVar2 + (5 - (int)pbVar1);
    }
    if (pbVar3 == (byte *)0x0) break;
    bVar5 = *pbVar3;
    pbVar1 = pbVar3;
LAB_0040205c:
    bVar5 = bVar5 & 0x1f;
    pbVar3 = pbVar1;
LAB_00401fe0:
    pbVar3 = pbVar3 + 1;
  }
  if (param_3[3] == 0) {
    return -1;
  }
  if (param_3[4] == 0) {
    return -1;
  }
  return -(uint)(param_3[5] == 0);
}



// ==== FUN_004020b0 @ 004020b0 size=68

void FUN_004020b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar1 = rts_av_get_buffer(param_2);
  rts_queue_push_back(uVar2,uVar1);
  return;
}



// ==== FUN_004020f4 @ 004020f4 size=64

undefined4 FUN_004020f4(void)

{
  while (DAT_00414f10 != 0) {
    sleep(1);
  }
  return 0;
}



// ==== FUN_0040243c @ 0040243c size=308

int FUN_0040243c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [32];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar1 = rts_av_get_isp_ctrl(0x27,auStack_60);
  if (iVar1 == 0) {
    iVar1 = local_38;
    if ((param_1 <= local_38) && (iVar1 = local_3c, local_3c <= param_1)) {
      iVar1 = param_1;
    }
    iVar4 = (param_1 - local_3c) % local_34;
    if (local_34 == 0) {
      trap(0x1c00);
    }
    if (iVar4 != 0) {
      iVar1 = param_1 - iVar4;
    }
    rts_log(1,"%s min = %d, max = %d, step = %d, default = %d, cur = %d\n",auStack_5c,local_3c,
            local_38,local_34,local_30,local_2c);
    local_2c = iVar1;
    iVar1 = rts_av_set_isp_ctrl(0x27,auStack_60);
    if (iVar1 == 0) {
      return 0;
    }
    pcVar2 = "<%s, %d>set isp attr fail, ret = %d\n";
    uVar3 = 0x6cc;
  }
  else {
    pcVar2 = "<%s, %d>get isp attr fail, ret = %d\n";
    uVar3 = 0x6c0;
  }
  iVar4 = iVar1;
  rts_log(4,pcVar2,"set_grey_attr",uVar3,iVar1);
  if (iVar1 != 0) {
    rts_log(4,"<%s, %d>set grey attr fail.\n","venc_set_color2grey",0x6d9,iVar4);
  }
  return iVar1;
}



// ==== FUN_00402570 @ 00402570 size=160

undefined4 FUN_00402570(void)

{
  rts_av_set_buffer_callback(DAT_00414f04,0,0);
  rts_av_set_buffer_callback(DAT_00414f08,0,0);
  if (DAT_00414f14 != 0) {
    rts_queue_clear(DAT_00414f14,rts_av_put_buffer);
    if (DAT_00414f14 != 0) {
      rts_queue_destroy();
    }
    DAT_00414f14 = 0;
  }
  if (DAT_00414f04 != 0) {
    rts_av_delete_buffer();
  }
  DAT_00414f04 = 0;
  if (DAT_00414f08 != 0) {
    rts_av_delete_buffer();
  }
  DAT_00414f08 = 0;
  return 0;
}



// ==== FUN_00402808 @ 00402808 size=76

undefined4 FUN_00402808(int *param_1)

{
  if (*param_1 == 0) {
    main_stream_recv(&DAT_00414e08);
  }
  else if (*param_1 == 1) {
    sub_stream_recv(&DAT_00414de8);
  }
  return 0;
}



// ==== FUN_00403d20 @ 00403d20 size=72

void FUN_00403d20(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00414c14;
  pcVar2 = DAT_00414c14;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



