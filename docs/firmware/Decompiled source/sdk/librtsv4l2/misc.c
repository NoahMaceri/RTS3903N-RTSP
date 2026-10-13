/* librtsv4l2 — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsv4l2.h"

// ==== entry @ 00010ba0 size=72

void processEntry entry(void)

{
  if ((6 < (uint)((DAT_00022b78 + 3) - (int)(PTR_Elf32_Ehdr_00022b7c + 0x2b70))) &&
     (DAT_00022bc4 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00022bc4)();
    return;
  }
  return;
}



