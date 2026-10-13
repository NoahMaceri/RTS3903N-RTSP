/* rts_cam_mem — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_cam_mem.h"

// ==== init_module @ 00014500 size=24

void init_module(void)

{
  platform_driver_register(&PTR_rts_isp_mem_probe_000153c0);
  return;
}



// ==== cleanup_module @ 00014518 size=24

void cleanup_module(void)

{
  platform_driver_unregister(&PTR_rts_isp_mem_probe_000153c0);
  return;
}



