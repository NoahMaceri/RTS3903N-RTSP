/* librtsjpeg — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsjpeg.h"

// ==== _init @ 000112dc size=120

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_000114d0();
  iVar1 = FUN_00013e10();
  return iVar1;
}



// ==== start_asic_enc_frame @ 0001265c size=1360

undefined4 start_asic_enc_frame(undefined4 *param_1)

{
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,3,param_1[1]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,4,param_1[2]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,5,param_1[3]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,6,param_1[4]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,7,param_1[5]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,8,param_1[6]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,9,param_1[7]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,10,param_1[8]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0xb,param_1[9]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0xc,param_1[10]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0xd,param_1[0xb]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0xe,param_1[0xc]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0xf,param_1[0xd] & 1);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x10,(uint)param_1[0xd] >> 1 & 1);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x11,(uint)param_1[0xd] >> 2 & 3);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x12,(uint)param_1[0xd] >> 4 & 0xf);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x13,(uint)param_1[0xd] >> 8 & 0xf);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x14,(uint)param_1[0xd] >> 0xc & 0xf);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x15,*(ushort *)((int)param_1 + 0x36) & 1)
  ;
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x16,(uint)param_1[0xd] >> 0x11 & 1);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x17,(uint)param_1[0xd] >> 0x12 & 3);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x18,(uint)param_1[0xd] >> 0x14 & 0xf);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x19,*(byte *)((int)param_1 + 0x37) & 0xf)
  ;
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x1a,(uint)param_1[0xd] >> 0x1c);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x1b,param_1[0xe] & 1);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x1c,(uint)param_1[0xe] >> 1 & 1);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x1d,(uint)param_1[0xe] >> 2 & 3);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x1e,(uint)param_1[0xe] >> 4 & 0xf);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x1f,(uint)param_1[0xe] >> 8 & 0xf);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x20,(uint)param_1[0xe] >> 0xc & 0xf);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x21,*(ushort *)((int)param_1 + 0x3a) & 1)
  ;
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x22,(uint)param_1[0xe] >> 0x11 & 1);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x23,(uint)param_1[0xe] >> 0x12 & 3);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x24,(uint)param_1[0xe] >> 0x14 & 0xf);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x25,*(byte *)((int)param_1 + 0x3b) & 0xf)
  ;
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x26,(uint)param_1[0xe] >> 0x1c);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x2b,param_1[0xf]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x2c,param_1[0x10]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x2d,param_1[0x11]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x2e,param_1[0x12]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x2f,param_1[0x14]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x30,param_1[0x15]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x31,param_1[0x16]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x32,param_1[0x17]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x34,param_1[0x13]);
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(*param_1,0x35,param_1[0x1a]);
  if (param_1[0x1b] == 0) {
    (*(code *)PTR_init_jpeg_table_000256d8)(*param_1);
    param_1[0x1b] = 1;
  }
  (*(code *)PTR_ewl_start_hw_00025700)(*param_1);
  return 0;
}



// ==== _fini @ 000140c0 size=80

void _fini(void)

{
  FUN_000113f8();
  return;
}



