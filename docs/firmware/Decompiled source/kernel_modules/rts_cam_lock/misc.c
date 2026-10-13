/* rts_cam_lock — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_cam_lock.h"

// ==== init_module @ 00010c50 size=364

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 init_module(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  DAT_00011230 = &DAT_00011230;
  DAT_00011234 = &DAT_00011230;
  __mutex_init(&DAT_0001123c,"&m_rtslock.lock",0x10000);
  if ((DAT_00011238 == (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)rtscam_ge_device_alloc(), puVar1 != (undefined4 *)0x0)) {
    strlcpy(puVar1 + 0x42,"rtslock",0x20);
    *puVar1 = &PTR___this_module_000110e0;
    puVar3 = puVar1 + 2;
    puVar1[0x4b] = rtscam_ge_device_release;
    dev_set_drvdata(puVar3,&DAT_00011230);
    iVar2 = rtscam_ge_register_device(puVar1);
    if (iVar2 == 0) {
      DAT_00011238 = puVar1;
      device_create_file(puVar3,dev_attr_lockinfo);
      device_create_file(puVar3,dev_attr_wait);
      device_create_file(puVar3,dev_attr_post);
    }
    else {
      rtscam_ge_device_release(puVar1);
    }
  }
  if ((_rtscam_debug & 0x100) != 0) {
    printk(&_LC4,"rtscam_lock_init");
  }
  return 0;
}



// ==== cleanup_module @ 00010dbc size=284

void cleanup_module(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = DAT_00011238;
  if (DAT_00011238 != 0) {
    iVar4 = DAT_00011238 + 8;
    device_remove_file(iVar4,dev_attr_lockinfo);
    device_remove_file(iVar4,dev_attr_wait);
    device_remove_file(iVar4,dev_attr_post);
    rtscam_ge_unregister_device(iVar1);
    DAT_00011238 = 0;
  }
  mutex_lock(&DAT_0001123c);
  piVar2 = DAT_00011230;
  piVar3 = (int *)*DAT_00011230;
  while ((int **)piVar2 != &DAT_00011230) {
    piVar5 = (int *)piVar2[1];
    iVar1 = *piVar2;
    *(int **)(iVar1 + 4) = piVar5;
    *piVar5 = iVar1;
    *piVar2 = (int)piVar2;
    piVar2[1] = (int)piVar2;
    rtscam_release_wait_queue(piVar2[7]);
    piVar2[7] = 0;
    vfree(piVar2);
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  mutex_unlock(&DAT_0001123c);
  return;
}



