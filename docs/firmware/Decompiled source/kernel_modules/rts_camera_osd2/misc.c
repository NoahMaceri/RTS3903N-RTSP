/* rts_camera_osd2 — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_camera_osd2.h"

// ==== rtscam_osd2_probe @ 0001021c size=976

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rtscam_osd2_probe(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  
  if ((_rtscam_debug & 0x100) != 0) {
    printk(&_LC1,"rtscam_osd2_probe");
  }
  pcVar12 = *(char **)(param_1 + 0xd0);
  if (pcVar12 == (char *)0x0) {
    if ((_rtscam_debug & 1) == 0) {
      return 0xffffffea;
    }
    puVar9 = &_LC2;
  }
  else {
    if (*(int *)(param_1 + 0x58) != 0) {
      piVar2 = (int *)platform_get_resource(param_1,0x200,0);
      iVar3 = platform_get_irq(param_1,0);
      if (piVar2 == (int *)0x0) {
        uVar10 = 0xffffffed;
        if ((_rtscam_debug & 1) == 0) {
          return 0xffffffed;
        }
        puVar9 = &_LC5;
      }
      else {
        iVar11 = param_1 + 0x10;
        puVar4 = (undefined4 *)devm_kzalloc(iVar11,0x50,0xd0);
        if (puVar4 == (undefined4 *)0x0) {
          uVar10 = 0xfffffff4;
          if ((_rtscam_debug & 1) == 0) {
            return 0xfffffff4;
          }
          puVar9 = &_LC6;
        }
        else {
          uVar5 = get_device(iVar11);
          *puVar4 = uVar5;
          puVar4[6] = 0;
          __mutex_init(puVar4 + 7,"&rosd2->lock",0x10000);
          __init_waitqueue_head(puVar4 + 0x12,"&rosd2->alarm_wq",0x10000);
          pcVar13 = (char *)(puVar4 + 10);
          iVar6 = 0x14;
          pcVar8 = pcVar12;
          do {
            cVar1 = *pcVar8;
            iVar6 = iVar6 + -1;
            *pcVar13 = cVar1;
            pcVar13 = pcVar13 + 1;
            if (cVar1 == '\0') break;
            pcVar8 = pcVar8 + 1;
          } while (iVar6 != 0);
          puVar4[0xf] = *(undefined4 *)(pcVar12 + 0x14);
          puVar4[0x10] = *(undefined4 *)(param_1 + 0x58);
          uVar10 = devm_ioremap_resource(iVar11,piVar2);
          if (uVar10 < 0xfffff001) {
            puVar4[1] = uVar10;
            puVar4[2] = *piVar2;
            puVar4[3] = (piVar2[1] + 1) - *piVar2;
            if (0 < iVar3) {
              uVar10 = devm_request_threaded_irq
                                 (*puVar4,iVar3,FUN_000105ec,0,0x80,"rts_osd2",puVar4);
              if (uVar10 != 0) {
                if ((_rtscam_debug & 1) == 0) {
                  return uVar10;
                }
                puVar9 = &_LC11;
                goto LAB_0001037c;
              }
              puVar4[4] = 1;
              iowrite32(0xffffff03,puVar4[1] + 0x3c);
              iowrite32(0xffffffff,puVar4[1] + 0x40);
            }
            if ((puVar4[5] == 0) &&
               (puVar7 = (undefined4 *)rtscam_ge_device_alloc(), puVar7 != (undefined4 *)0x0)) {
              strlcpy(puVar7 + 0x42,"rtsosd2",0x20);
              uVar5 = get_device(*puVar4);
              *puVar7 = &PTR___this_module_00010bbc;
              puVar7[0x3f] = uVar5;
              puVar7[0x4b] = rtscam_ge_device_release;
              dev_set_drvdata(puVar7 + 2,puVar4);
              iVar3 = rtscam_ge_register_device(puVar7);
              if (iVar3 == 0) {
                puVar4[5] = puVar7;
              }
              else {
                rtscam_ge_device_release(puVar7);
              }
            }
            dev_set_drvdata(iVar11,puVar4);
            return 0;
          }
          if ((_rtscam_debug & 1) == 0) {
            return uVar10;
          }
          puVar9 = &_LC9;
        }
      }
LAB_0001037c:
      printk(puVar9);
      return uVar10;
    }
    if ((_rtscam_debug & 1) != 0) {
      printk(&_LC3);
    }
    if ((_rtscam_debug & 1) == 0) {
      return 0xffffffea;
    }
    puVar9 = &_LC4;
  }
  printk(puVar9);
  return 0xffffffea;
}



// ==== rtscam_osd2_remove @ 000106d0 size=120

undefined4 rtscam_osd2_remove(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)dev_get_drvdata(param_1 + 0x10);
  iVar2 = puVar1[5];
  if (iVar2 != 0) {
    put_device(*(undefined4 *)(iVar2 + 0xfc));
    rtscam_ge_unregister_device(iVar2);
  }
  put_device(*puVar1);
  *puVar1 = 0;
  return 0;
}



// ==== init_module @ 00010830 size=24

void init_module(void)

{
  platform_driver_register(&PTR_rtscam_osd2_probe_00010b20);
  return;
}



// ==== cleanup_module @ 00010848 size=24

void cleanup_module(void)

{
  platform_driver_unregister(&PTR_rtscam_osd2_probe_00010b20);
  return;
}



