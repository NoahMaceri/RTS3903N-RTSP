/* librtsmd — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsmd.h"

// ==== entry @ 000114f0 size=72

void processEntry entry(void)

{
  if ((6 < (uint)((DAT_000247a8 + 3) - (int)(PTR_Elf32_Ehdr_000247ac + 0x47a0))) &&
     (DAT_00024808 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00011528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00024808)();
    return;
  }
  return;
}



