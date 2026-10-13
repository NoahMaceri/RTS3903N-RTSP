/* rlx_i2s — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rlx_i2s.h"

// ==== init_module @ 00011430 size=24

void init_module(void)

{
  platform_driver_register(&PTR_FUN_000117e0);
  return;
}



// ==== cleanup_module @ 00011448 size=24

void cleanup_module(void)

{
  platform_driver_unregister(&PTR_FUN_000117e0);
  return;
}



