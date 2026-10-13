/* librtsutils — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsutils.h"

// ==== entry @ 000109d0 size=72

void processEntry entry(void)

{
  if ((6 < (uint)((DAT_00021b48 + 3) - (int)(PTR_Elf32_Ehdr_00021b4c + 0x1b40))) &&
     (DAT_00021b90 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00021b90)();
    return;
  }
  return;
}



