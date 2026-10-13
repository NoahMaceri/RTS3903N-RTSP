/* librtsjpeg — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsjpeg.h"

// ==== entry @ 00011360 size=72

void processEntry entry(void)

{
  if (((undefined *)0x6 < PTR___DT_PLTGOT_00025698 + (3 - (int)(PTR_DAT_0002569c + 0x5690))) &&
     (PTR__ITM_deregisterTMCloneTable_00025728 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_deregisterTMCloneTable_00025728)();
    return;
  }
  return;
}



// ==== clip_word @ 000120c0 size=56

ushort clip_word(ushort param_1,ushort param_2,ushort param_3)

{
  if ((param_1 <= param_3) && (param_3 = param_1, param_1 < param_2)) {
    param_3 = param_2;
  }
  return param_3;
}



// ==== calc_qtable_item @ 000120f8 size=104

uint calc_qtable_item(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  param_1 = param_1 & 0xff;
  if (param_1 < 2) {
    param_1 = 2;
  }
  iVar1 = 7;
  while( true ) {
    uVar3 = (uint)(1 << (iVar1 + 0xbU & 0x1f)) / param_1;
    if (param_1 == 0) {
      trap(0x1c00);
    }
    iVar2 = iVar1 + -1;
    if (uVar3 < 0x800) break;
    iVar1 = iVar2;
    if (iVar2 == -1) {
      return 0;
    }
  }
  return uVar3 << 8 | param_1 | iVar1 << 0x13;
}



// ==== write_jpeg_qtable @ 00012160 size=116

void write_jpeg_qtable(undefined4 param_1,undefined1 param_2)

{
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(param_1,0x29);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(param_1,0x2a,param_2);
                    /* WARNING: Could not recover jumptable at 0x000121cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(param_1,0x27,1);
  return;
}



// ==== read_jpeg_qtable @ 000121d4 size=104

void read_jpeg_qtable(undefined4 param_1,undefined1 param_2)

{
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(param_1,0x2a,param_2);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(param_1,0x28,1);
                    /* WARNING: Could not recover jumptable at 0x00012234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rtsjpgenc_get_register_0002574c)(param_1,0x29);
  return;
}



// ==== init_jpeg_table @ 0001223c size=180

void init_jpeg_table(undefined4 param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_000256a8;
  iVar4 = 0;
  do {
    uVar2 = (*(code *)PTR_clip_word_000256d0)
                      ((int)((uint)(byte)puVar1[iVar4 + 0x50dc] * 6) >> 5,1,0xfe);
    uVar3 = (*(code *)PTR_calc_qtable_item_00025768)(uVar2);
    iVar5 = iVar4 + 1;
    (*(code *)PTR_write_jpeg_qtable_0002575c)(param_1,iVar4,uVar3);
    iVar4 = iVar5;
  } while (iVar5 != 0x80);
  return;
}



// ==== set_jpgenc_component @ 000122f0 size=68

void set_jpgenc_component(int param_1)

{
  undefined2 uVar1;
  
  if (((*(int *)(param_1 + 0x18) != 0) || (uVar1 = 0x2230, *(int *)(param_1 + 0x20) != 0)) &&
     (uVar1 = 0x2110, 1 < *(uint *)(param_1 + 0x1c))) {
    uVar1 = 0x1210;
  }
  *(undefined2 *)(param_1 + 0x34) = uVar1;
  *(undefined2 *)(param_1 + 0x36) = 0x1107;
  *(undefined2 *)(param_1 + 0x38) = 0x1107;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  return;
}



// ==== init_dft_parameters @ 00012334 size=104

undefined4 init_dft_parameters(int param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *(undefined4 *)(param_1 + 0x3c) = 2;
  puVar1 = PTR_set_jpgenc_component_00025770;
  *(undefined4 *)(param_1 + 0x40) = 0x1ff;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  (*(code *)puVar1)();
  return 0;
}



// ==== check_asic_enc_regs @ 00012bac size=2808

void check_asic_enc_regs(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *param_1;
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,3);
  if (iVar1 != param_1[1]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4adc,param_1[1],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,4);
  if (iVar1 != param_1[2]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4ae8,param_1[2],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,5);
  if (iVar1 != param_1[3]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4af4,param_1[3],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,6);
  if (iVar1 != param_1[4]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4b00,param_1[4],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,7);
  if (iVar1 != param_1[5]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4b14,param_1[5],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,8);
  if (iVar1 != param_1[6]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4b20,param_1[6],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,9);
  if (iVar1 != param_1[7]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4b30,param_1[7],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,10);
  if (iVar1 != param_1[8]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4b40,param_1[8],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0xb);
  if (iVar1 != param_1[9]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4b54,param_1[9],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0xc);
  if (iVar1 != param_1[10]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4b64,param_1[10],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0xd);
  if (iVar1 != param_1[0xb]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4b74,param_1[0xb],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0xe);
  if (iVar1 != param_1[0xc]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4b80,param_1[0xc],iVar1);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0xf);
  if (uVar2 != (param_1[0xd] & 1)) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4b98,param_1[0xd] & 1,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x10);
  uVar3 = (uint)param_1[0xd] >> 1 & 1;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4ba4,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x11);
  uVar3 = (uint)param_1[0xd] >> 2 & 3;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4bb0,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x12);
  uVar3 = (uint)param_1[0xd] >> 4 & 0xf;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4bbc,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x13);
  uVar3 = (uint)param_1[0xd] >> 8 & 0xf;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4bcc,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x14);
  uVar3 = (uint)param_1[0xd] >> 0xc & 0xf;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4bd8,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x15);
  uVar3 = *(ushort *)((int)param_1 + 0x36) & 1;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4be4,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x16);
  uVar3 = (uint)param_1[0xd] >> 0x11 & 1;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4bf0,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x17);
  uVar3 = (uint)param_1[0xd] >> 0x12 & 3;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4bfc,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x18);
  uVar3 = (uint)param_1[0xd] >> 0x14 & 0xf;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c08,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x19);
  uVar3 = *(byte *)((int)param_1 + 0x37) & 0xf;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c18,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x1a);
  if (uVar2 != (uint)param_1[0xd] >> 0x1c) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c24,(uint)param_1[0xd] >> 0x1c,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x1b);
  if (uVar2 != (param_1[0xe] & 1)) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c30,param_1[0xe] & 1,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x1c);
  uVar3 = (uint)param_1[0xe] >> 1 & 1;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c3c,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x1d);
  uVar3 = (uint)param_1[0xe] >> 2 & 3;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c48,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x1e);
  uVar3 = (uint)param_1[0xe] >> 4 & 0xf;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c54,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x1f);
  uVar3 = (uint)param_1[0xe] >> 8 & 0xf;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c64,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x20);
  uVar3 = (uint)param_1[0xe] >> 0xc & 0xf;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c70,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x21);
  uVar3 = *(ushort *)((int)param_1 + 0x3a) & 1;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c7c,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x22);
  uVar3 = (uint)param_1[0xe] >> 0x11 & 1;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c88,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x23);
  uVar3 = (uint)param_1[0xe] >> 0x12 & 3;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4c94,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x24);
  uVar3 = (uint)param_1[0xe] >> 0x14 & 0xf;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4ca0,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x25);
  uVar3 = *(byte *)((int)param_1 + 0x3b) & 0xf;
  if (uVar2 != uVar3) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4cb0,uVar3,uVar2);
  }
  uVar2 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x26);
  if (uVar2 != (uint)param_1[0xe] >> 0x1c) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4cbc,(uint)param_1[0xe] >> 0x1c,uVar2);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x2b);
  if (iVar1 != param_1[0xf]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4cc8,param_1[0xf],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x2c);
  if (iVar1 != param_1[0x10]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4cd4,param_1[0x10],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x2d);
  if (iVar1 != param_1[0x11]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4ce0,param_1[0x11],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x2e);
  if (iVar1 != param_1[0x12]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4cf0,param_1[0x12],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x2f);
  if (iVar1 != param_1[0x14]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4d04,param_1[0x14],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x30);
  if (iVar1 != param_1[0x15]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4d18,param_1[0x15],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x31);
  if (iVar1 != param_1[0x16]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4d2c,param_1[0x16],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x32);
  if (iVar1 != param_1[0x17]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4d3c,param_1[0x17],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x34);
  if (iVar1 != param_1[0x13]) {
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4d50,param_1[0x13],iVar1);
  }
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(uVar4,0x35);
  if (iVar1 != param_1[0x1a]) {
                    /* WARNING: Could not recover jumptable at 0x00013688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_rts_log_0002572c)(1,PTR_000256a8 + 0x4d60,param_1[0x1a],iVar1);
    return;
  }
  return;
}



// ==== check_frame @ 000136a4 size=208

undefined4 check_frame(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 100);
  pcVar2 = *(char **)(param_1 + 0x60);
  if (uVar3 == 0) {
    uVar1 = 0xffffffee;
  }
  else if ((*(uint *)(param_1 + 0x5c) < uVar3) || (uVar3 < 4)) {
    uVar1 = 0xffffffdc;
  }
  else if ((((*pcVar2 != -1) || (pcVar2[1] != -0x28)) || (pcVar2[uVar3 - 2] != -1)) ||
          (uVar1 = 0, pcVar2[uVar3 - 1] != -0x27)) {
    (*(code *)PTR_rts_log_0002572c)
              (4,PTR_000256a8 + 0x4d74,PTR_000256a8 + 0x5094,0x22e,uVar3,*pcVar2,pcVar2[1],
               pcVar2[uVar3 - 2],pcVar2[uVar3 - 1]);
    uVar1 = 0xffffffcc;
  }
  return uVar1;
}



// ==== encode_frame @ 00013774 size=376

int encode_frame(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  (*(code *)PTR_start_asic_enc_frame_000257b8)();
  iVar2 = (*(code *)PTR_ewl_wait_hw_ready_00025740)(*param_1);
  uVar3 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(*param_1,0x33);
  param_1[0x19] = uVar3;
  puVar1 = PTR_000256a8;
  if (iVar2 == 0) {
    iVar4 = (*(code *)PTR_check_frame_000256e0)(param_1);
    iVar2 = 0;
    if (iVar4 != 0) {
      (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4e18,PTR_000256a8 + 0x5084,0x24d);
      (*(code *)PTR_ewl_reset_hw_000256f4)(*param_1);
      iVar2 = iVar4;
    }
  }
  else {
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4dac,PTR_000256a8 + 0x5084,0x243,iVar2,uVar3)
    ;
    uVar3 = (*(code *)PTR_check_frame_000256e0)(param_1);
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4de0,puVar1 + 0x5084,0x244,uVar3);
    uVar3 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(*param_1,2);
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4dfc,puVar1 + 0x5084,0x246,uVar3);
    (*(code *)PTR_ewl_reset_hw_000256f4)(*param_1);
  }
  return iVar2;
}



