/* cloudAPI — "sha1" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloudAPI.h"

// ==== SHA1_Init @ 0043dc64 size=112

void SHA1_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1784);
  (*(code *)PTR_CyaSSL_SHA_Init_004be7e0)(param_1);
  return;
}



// ==== SHA1_Update @ 0043dcd4 size=128

void SHA1_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1790);
  (*(code *)PTR_CyaSSL_SHA_Update_004be7e4)(param_1,param_2,param_3);
  return;
}



// ==== SHA1_Final @ 0043dd54 size=120

void SHA1_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x179c);
  (*(code *)PTR_CyaSSL_SHA_Final_004be7e8)(param_1,param_2);
  return;
}



