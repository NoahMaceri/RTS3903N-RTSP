/* librtsosd2 — "dump" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsosd2.h"

// ==== __dump_blk_cmd @ 00011c88 size=168

void __dump_blk_cmd(undefined *param_1,undefined *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 < (undefined *)0x6);
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_00027598 + 0x5d30;
    param_2 = PTR_00027598 + 0x5d38;
    (*(code *)PTR___assert_000275b8)(param_1,param_2,0x115,PTR_00027598 + 0x64c8);
  }
  if (uVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + (int)param_2 * 0x60 + 0x48);
    (*(code *)PTR_rts_log_00027630)
              (1,PTR_00027598 + 0x5dd0,*(undefined4 *)(param_1 + (int)param_2 * 0x60 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00011d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_rts_dump_blk_cmd_00027608)(uVar1);
    return;
  }
  return;
}



// ==== __dump_frame_cmd @ 000121dc size=88

void __dump_frame_cmd(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x254);
  (*(code *)PTR_rts_log_00027630)(1,PTR_00027598 + 0x5e10,*(undefined4 *)(param_1 + 0x25c));
                    /* WARNING: Could not recover jumptable at 0x0001222c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_dump_frame_cmd_000276a4)(uVar1);
  return;
}



// ==== __dump_color_table_reg @ 000137ac size=144

undefined4 __dump_color_table_reg(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = PTR_00027598 + 0x6028;
  iVar2 = 0;
  do {
    uVar1 = (*(code *)PTR_osd2_ewl_read_reg_00027650)(param_1,iVar2 + 0x100);
    iVar3 = iVar2 + 4;
    (*(code *)PTR_printf_000276d4)(puVar4,iVar2,uVar1);
    iVar2 = iVar3;
  } while (iVar3 != 0xcc);
  return 0;
}



