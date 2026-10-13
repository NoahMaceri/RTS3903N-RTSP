/* librtsgeom — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsgeom.h"

// ==== entry @ 00010a30 size=72

void processEntry entry(void)

{
  if ((6 < (uint)((DAT_00023758 + 3) - (int)(PTR_Elf32_Ehdr_0002375c + 0x3750))) &&
     (DAT_000237a0 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_000237a0)();
    return;
  }
  return;
}



