/* rts_camera_jpgenc — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_camera_jpgenc.h"

// ==== rtscam_jpgenc_remove @ 00010478 size=148

undefined4 rtscam_jpgenc_remove(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)dev_get_drvdata(param_1 + 0x10);
  device_remove_file(*puVar1,&PTR_s_clock_00010f9c);
  iVar2 = puVar1[5];
  if (iVar2 != 0) {
    put_device(*(undefined4 *)(iVar2 + 0xfc));
    rtscam_ge_unregister_device(iVar2);
    puVar1[5] = 0;
  }
  put_device(*puVar1);
  *puVar1 = 0;
  return 0;
}



// ==== rtscam_jpgenc_probe @ 0001060c size=1072

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rtscam_jpgenc_probe(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  
  if ((_rtscam_debug & 0x100) != 0) {
    printk(&_LC6,"rtscam_jpgenc_probe");
  }
  pcVar11 = *(char **)(param_1 + 0xd0);
  if (pcVar11 == (char *)0x0) {
    uVar9 = 0xffffffea;
    if ((_rtscam_debug & 1) == 0) {
      return 0xffffffea;
    }
    puVar8 = &_LC7;
    goto LAB_000106b8;
  }
  piVar10 = *(int **)(param_1 + 0x58);
  if ((piVar10 == (int *)0x0) || (*piVar10 == 0)) {
    uVar9 = 0xffffffea;
    if ((_rtscam_debug & 1) == 0) {
      return 0xffffffea;
    }
    puVar8 = &_LC8;
    goto LAB_000106b8;
  }
  piVar2 = (int *)platform_get_resource(param_1,0x200,0);
  iVar3 = platform_get_irq(param_1,0);
  if (piVar2 == (int *)0x0) {
    uVar9 = 0xffffffed;
    if ((_rtscam_debug & 1) == 0) {
      return 0xffffffed;
    }
    puVar8 = &_LC9;
    goto LAB_000106b8;
  }
  param_1 = param_1 + 0x10;
  puVar4 = (undefined4 *)devm_kzalloc(param_1,0x50,0xd0);
  if (puVar4 == (undefined4 *)0x0) {
    uVar9 = 0xfffffff4;
    if ((_rtscam_debug & 1) == 0) {
      return 0xfffffff4;
    }
    puVar8 = &_LC10;
    goto LAB_000106b8;
  }
  uVar5 = get_device(param_1);
  *puVar4 = uVar5;
  puVar4[6] = 0;
  __mutex_init(puVar4 + 7,"&rjpgenc->lock",0x10000);
  __init_waitqueue_head(puVar4 + 0x12,"&rjpgenc->alarm_wq",0x10000);
  pcVar12 = (char *)(puVar4 + 10);
  iVar7 = 0x14;
  pcVar6 = pcVar11;
  do {
    cVar1 = *pcVar6;
    iVar7 = iVar7 + -1;
    *pcVar12 = cVar1;
    pcVar12 = pcVar12 + 1;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
  } while (iVar7 != 0);
  uVar5 = *(undefined4 *)(pcVar11 + 0x14);
  puVar4[0x10] = piVar10;
  puVar4[0xf] = uVar5;
  uVar9 = devm_ioremap_resource(param_1,piVar2);
  if (0xfffff000 < uVar9) {
    if ((_rtscam_debug & 1) == 0) {
      return uVar9;
    }
    puVar8 = &_LC13;
    goto LAB_000106b8;
  }
  puVar4[1] = uVar9;
  puVar4[2] = *piVar2;
  puVar4[3] = (piVar2[1] + 1) - *piVar2;
  if (0 < iVar3) {
    uVar9 = devm_request_threaded_irq(*puVar4,iVar3,&LAB_0001017c,0,0x80,"rts_jpgenc",puVar4);
    if (uVar9 != 0) {
      if ((_rtscam_debug & 1) == 0) {
        return uVar9;
      }
      puVar8 = &_LC15;
      goto LAB_000106b8;
    }
    puVar4[4] = 1;
  }
  FUN_00010428(puVar4 + 0x10);
  uVar9 = ioread32(puVar4[1] + 0x100);
  if ((uVar9 & 0xf) == 1) {
    uVar9 = 0;
LAB_00010914:
    puVar13 = (undefined4 *)puVar4[0x10];
  }
  else {
    uVar9 = 0xffffffea;
    if ((_rtscam_debug & 1) == 0) goto LAB_00010914;
    printk(&_LC16);
    puVar13 = (undefined4 *)puVar4[0x10];
  }
  (*(code *)*puVar13)(0,0);
  if (uVar9 == 0) {
    if ((puVar4[5] == 0) &&
       (puVar13 = (undefined4 *)rtscam_ge_device_alloc(), puVar13 != (undefined4 *)0x0)) {
      strlcpy(puVar13 + 0x42,"rtsjpgenc",0x20);
      uVar5 = get_device(*puVar4);
      *puVar13 = &PTR___this_module_00010fac;
      puVar13[0x3f] = uVar5;
      puVar13[0x4b] = rtscam_ge_device_release;
      dev_set_drvdata(puVar13 + 2,puVar4);
      iVar3 = rtscam_ge_register_device(puVar13);
      if (iVar3 == 0) {
        puVar4[5] = puVar13;
      }
      else {
        rtscam_ge_device_release(puVar13);
      }
    }
    dev_set_drvdata(param_1,puVar4);
    device_create_file(*puVar4,&PTR_s_clock_00010f9c);
    return 0;
  }
  if ((_rtscam_debug & 1) == 0) {
    return uVar9;
  }
  puVar8 = &_LC17;
LAB_000106b8:
  printk(puVar8);
  return uVar9;
}



// ==== init_module @ 00010ae0 size=24

void init_module(void)

{
  platform_driver_register(&PTR_rtscam_jpgenc_probe_00010ea0);
  return;
}



// ==== cleanup_module @ 00010af8 size=24

void cleanup_module(void)

{
  platform_driver_unregister(&PTR_rtscam_jpgenc_probe_00010ea0);
  return;
}



