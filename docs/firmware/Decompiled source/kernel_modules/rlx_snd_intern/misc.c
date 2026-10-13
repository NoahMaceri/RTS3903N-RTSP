/* rlx_snd_intern — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rlx_snd_intern.h"

// ==== init_module @ 00010100 size=220

int init_module(void)

{
  int iVar1;
  int iVar2;
  
  printk(&_LC0);
  rts_sys_force_reset(10);
  DAT_000107e0 = platform_device_alloc("soc-audio",0xfffffffe);
  if (DAT_000107e0 == 0) {
    printk(&_LC2);
    iVar2 = -0xc;
  }
  else {
    dev_set_drvdata(DAT_000107e0 + 0x10,&PTR_s_RLX_INTERN_CARD_00010490);
    iVar1 = platform_device_add(DAT_000107e0);
    iVar2 = 0;
    if (iVar1 != 0) {
      printk(&_LC3);
      platform_device_put(DAT_000107e0);
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



// ==== cleanup_module @ 000101dc size=24

void cleanup_module(void)

{
  platform_device_unregister(DAT_000107e0);
  return;
}



