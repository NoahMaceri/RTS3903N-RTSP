/* rtstream — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rtstream.h"

// ==== init_module @ 00010920 size=292

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 init_module(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((_rtscam_debug & 0x100) != 0) {
    printk(&_LC5,"rtstream_init");
  }
  DAT_00010eb0 = &DAT_00010eb0;
  DAT_00010eb4 = &DAT_00010eb0;
  if ((DAT_00010eb8 == (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)rtscam_ge_device_alloc(), puVar1 != (undefined4 *)0x0)) {
    strlcpy(puVar1 + 0x42,"rtstream",0x20);
    *puVar1 = &PTR___this_module_00010d60;
    puVar1[0x4b] = rtscam_ge_device_release;
    dev_set_drvdata(puVar1 + 2,&DAT_00010eb0);
    iVar2 = rtscam_ge_register_device(puVar1);
    if (iVar2 == 0) {
      DAT_00010eb8 = puVar1;
      device_create_file(puVar1 + 2,dev_attr_streaminfo);
    }
    else {
      rtscam_ge_device_release(puVar1);
    }
  }
  return 0;
}



// ==== cleanup_module @ 00010a44 size=276

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cleanup_module(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if ((_rtscam_debug & 0x100) != 0) {
    printk(&_LC5,"rtstream_exit");
  }
  iVar1 = DAT_00010eb8;
  if (DAT_00010eb8 != 0) {
    device_remove_file(DAT_00010eb8 + 8,dev_attr_streaminfo);
    rtscam_ge_unregister_device(iVar1);
    DAT_00010eb8 = 0;
  }
  piVar2 = DAT_00010eb0;
  piVar3 = (int *)*DAT_00010eb0;
  while ((int **)piVar2 != &DAT_00010eb0) {
    iVar1 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *(int **)(iVar1 + 4) = piVar4;
    *piVar4 = iVar1;
    *piVar2 = (int)piVar2;
    piVar2[1] = (int)piVar2;
    FUN_000102d0(piVar2);
    FUN_00010344(piVar2);
    vfree(piVar2);
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  return;
}



