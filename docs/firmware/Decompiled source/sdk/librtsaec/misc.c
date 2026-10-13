/* librtsaec — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsaec.h"

// ==== entry @ 000163f0 size=72

void processEntry entry(void)

{
  if (((undefined *)0x6 <
       PTR___DT_PLTGOT_00050be8 + (3 - (int)(PTR_IPCam_098_112__00050bec + 0xbe0))) &&
     (PTR__ITM_deregisterTMCloneTable_00051000 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_deregisterTMCloneTable_00051000)();
    return;
  }
  return;
}



