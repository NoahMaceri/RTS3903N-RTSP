/* librtsmask — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsmask.h"

// ==== entry @ 00010ba0 size=72

void processEntry entry(void)

{
  if ((6 < (uint)((DAT_00022028 + 3) - (int)(PTR_Elf32_Ehdr_0002202c + 0x2020))) &&
     (DAT_0002205c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0002205c)();
    return;
  }
  return;
}



