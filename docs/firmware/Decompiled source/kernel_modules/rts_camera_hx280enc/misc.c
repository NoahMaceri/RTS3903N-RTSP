/* rts_camera_hx280enc — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_camera_hx280enc.h"

// ==== rtscam_hx280_probe @ 000104dc size=1196

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rtscam_hx280_probe(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  
  if ((_rtscam_debug & 0x100) != 0) {
    printk(&_LC8,"rtscam_hx280_probe");
  }
  pcVar13 = *(char **)(param_1 + 0xd0);
  if (pcVar13 == (char *)0x0) {
    uVar11 = 0xffffffea;
    if ((_rtscam_debug & 1) == 0) {
      return 0xffffffea;
    }
    puVar10 = &_LC9;
  }
  else {
    piVar12 = *(int **)(param_1 + 0x58);
    if ((piVar12 == (int *)0x0) || (*piVar12 == 0)) {
      uVar11 = 0xffffffea;
      if ((_rtscam_debug & 1) == 0) {
        return 0xffffffea;
      }
      puVar10 = &_LC10;
    }
    else {
      piVar2 = (int *)platform_get_resource(param_1,0x200,0);
      iVar3 = platform_get_irq(param_1,0);
      if ((piVar2 == (int *)0x0) || (param_1 = param_1 + 0x10, iVar3 < 0)) {
        uVar11 = 0xffffffed;
        if ((_rtscam_debug & 1) == 0) {
          return 0xffffffed;
        }
        puVar10 = &_LC11;
      }
      else {
        puVar4 = (undefined4 *)devm_kzalloc(param_1,0x50,0xd0);
        if (puVar4 == (undefined4 *)0x0) {
          uVar11 = 0xfffffff4;
          if ((_rtscam_debug & 1) == 0) {
            return 0xfffffff4;
          }
          puVar10 = &_LC12;
        }
        else {
          uVar5 = get_device(param_1);
          *puVar4 = uVar5;
          puVar4[5] = 0;
          puVar4[6] = 0;
          __mutex_init(puVar4 + 7,"&rh264enc->lock",0x10000);
          __init_waitqueue_head(puVar4 + 0x12,"&rh264enc->alarm_wq",0x10000);
          pcVar14 = (char *)(puVar4 + 10);
          iVar9 = 0x14;
          pcVar6 = pcVar13;
          do {
            cVar1 = *pcVar6;
            iVar9 = iVar9 + -1;
            *pcVar14 = cVar1;
            pcVar14 = pcVar14 + 1;
            if (cVar1 == '\0') break;
            pcVar6 = pcVar6 + 1;
          } while (iVar9 != 0);
          uVar5 = *(undefined4 *)(pcVar13 + 0x14);
          puVar4[0x10] = piVar12;
          puVar4[0xf] = uVar5;
          uVar11 = devm_ioremap_resource(param_1,piVar2);
          if (uVar11 < 0xfffff001) {
            puVar4[1] = uVar11;
            puVar4[2] = *piVar2;
            puVar4[3] = (piVar2[1] + 1) - *piVar2;
            uVar11 = devm_request_threaded_irq
                               (*puVar4,iVar3,&LAB_000102d4,0,0x80,"rts_h264_hx280enc",puVar4);
            if (uVar11 == 0) {
              FUN_000103fc(puVar4,1);
              uVar7 = ioread32(puVar4[1]);
              uVar15 = uVar7 >> 0x10;
              if (((((uVar15 & 0xefff) == 0x6280) || (uVar15 == 0x8270)) || (uVar15 == 0x8290)) ||
                 (uVar15 == 0x4831)) {
                if ((_rtscam_debug & 1) != 0) {
                  printk(&_LC19,puVar4[2],uVar7);
                }
                iowrite32(0,puVar4[1] + 0x38);
                uVar15 = puVar4[3];
                for (uVar7 = 4; uVar7 < uVar15; uVar7 = uVar7 + 4) {
                  iowrite32(0,puVar4[1] + uVar7);
                  uVar15 = puVar4[3];
                }
              }
              else if ((_rtscam_debug & 1) == 0) {
                uVar11 = 0xfffffff0;
              }
              else {
                printk(&_LC18,puVar4[2]);
                uVar11 = 0xfffffff0;
              }
              FUN_000103fc(puVar4,0);
              if (uVar11 == 0) {
                if ((puVar4[4] == 0) &&
                   (puVar8 = (undefined4 *)rtscam_ge_device_alloc(), puVar8 != (undefined4 *)0x0)) {
                  strlcpy(puVar8 + 0x42,"rtshx280enc",0x20);
                  uVar5 = get_device(*puVar4);
                  *puVar8 = &PTR___this_module_000110bc;
                  puVar8[0x3f] = uVar5;
                  puVar8[0x4b] = rtscam_ge_device_release;
                  dev_set_drvdata(puVar8 + 2,puVar4);
                  iVar3 = rtscam_ge_register_device(puVar8);
                  if (iVar3 == 0) {
                    puVar4[4] = puVar8;
                  }
                  else {
                    rtscam_ge_device_release(puVar8);
                  }
                }
                dev_set_drvdata(param_1,puVar4);
                device_create_file(*puVar4,&PTR_s_clock_000110ac);
                return 0;
              }
              if ((_rtscam_debug & 1) == 0) {
                return uVar11;
              }
              puVar10 = &_LC20;
            }
            else {
              if ((_rtscam_debug & 1) == 0) {
                return uVar11;
              }
              puVar10 = &_LC17;
            }
          }
          else {
            if ((_rtscam_debug & 1) == 0) {
              return uVar11;
            }
            puVar10 = &_LC15;
          }
        }
      }
    }
  }
  printk(puVar10);
  return uVar11;
}



// ==== rtscam_hx280_remove @ 00010ad0 size=148

undefined4 rtscam_hx280_remove(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)dev_get_drvdata(param_1 + 0x10);
  device_remove_file(*puVar1,&PTR_s_clock_000110ac);
  iVar2 = puVar1[4];
  if (iVar2 != 0) {
    put_device(*(undefined4 *)(iVar2 + 0xfc));
    rtscam_ge_unregister_device(iVar2);
    puVar1[4] = 0;
  }
  put_device(*puVar1);
  *puVar1 = 0;
  return 0;
}



// ==== init_module @ 00010b70 size=24

void init_module(void)

{
  platform_driver_register(&PTR_rtscam_hx280_probe_00010fb0);
  return;
}



// ==== cleanup_module @ 00010b88 size=24

void cleanup_module(void)

{
  platform_driver_unregister(&PTR_rtscam_hx280_probe_00010fb0);
  return;
}



