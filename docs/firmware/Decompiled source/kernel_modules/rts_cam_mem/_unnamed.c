/* rts_cam_mem — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_cam_mem.h"

// ==== FUN_00010150 @ 00010150 size=32

void FUN_00010150(int param_1)

{
  int *unaff_gp;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x20) = *(undefined4 *)(*unaff_gp + 0xe4);
  }
  return;
}



// ==== FUN_00010188 @ 00010188 size=304

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00010188(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x70);
  iVar3 = param_2[0x13];
  param_2[0x13] = 0;
  uVar2 = iVar3 * 0x1000 + *(int *)(iVar1 + 0xc);
  iVar3 = rtscam_mem_mmap(iVar1 + 4,param_2,*(int *)(iVar1 + 8) + iVar3 * 0x1000,uVar2,
                          param_2[1] - *param_2);
  if (iVar3 == 0) {
    param_2[10] = param_2[10] | 0x4040000;
    for (puVar4 = *(undefined4 **)(iVar1 + 0x3c); puVar5 = puVar4 + -9,
        puVar4 != (undefined4 *)(iVar1 + 0x3c); puVar4 = (undefined4 *)*puVar4) {
      if (((uint)puVar4[-5] <= uVar2) && (uVar2 < (uint)(puVar4[-5] + puVar4[-4])))
      goto LAB_00010278;
    }
    puVar5 = (undefined4 *)0x0;
LAB_00010278:
    param_2[0x15] = (int)puVar5;
    param_2[0x12] = (int)rtscam_vm_ops;
    iVar3 = 0;
    FUN_00010150(param_2);
  }
  else if ((_rtscam_debug & 1) != 0) {
    printk(&_LC0,iVar3);
  }
  return iVar3;
}



// ==== FUN_000102b8 @ 000102b8 size=68

undefined4 FUN_000102b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = rtscam_devdata();
  uVar2 = dev_get_drvdata(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  return 0;
}



// ==== FUN_0001032c @ 0001032c size=756

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001032c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_gp;
  undefined4 local_48;
  int local_44;
  undefined *local_40;
  undefined4 ******local_3c;
  undefined4 ******local_38;
  undefined4 local_34;
  undefined4 ******local_30;
  undefined4 ******local_2c;
  undefined4 ******local_28;
  
  uVar1 = rtscam_get_sg_buf(param_1 + 4,param_3,param_4,0);
  if (0xfffff000 < uVar1) {
    if ((_rtscam_debug & 1) == 0) {
      return 1;
    }
    printk(&_LC1,param_3,param_4);
    return 1;
  }
  uVar2 = rtscam_get_sg_buf(param_1 + 4,param_2,param_4,1);
  if (0xfffff000 < uVar2) {
    if ((_rtscam_debug & 1) != 0) {
      printk(&_LC2,param_2,param_4);
    }
    rtscam_put_sg_buf(uVar1);
    return 1;
  }
  piVar6 = *(int **)(param_1 + 0x34);
  local_30 = &local_2c;
  local_34 = 0;
  local_2c = local_30;
  local_28 = local_30;
  iVar3 = (**(code **)(*piVar6 + 0x50))
                    (piVar6,**(undefined4 **)(uVar2 + 0x14),(*(undefined4 **)(uVar2 + 0x14))[2],
                     **(undefined4 **)(uVar1 + 0x14),(*(undefined4 **)(uVar1 + 0x14))[2],0xf);
  if (iVar3 == 0) {
    puVar5 = &_LC3;
  }
  else {
    *(undefined1 **)(iVar3 + 0x14) = &LAB_00010620;
    *(undefined4 **)(iVar3 + 0x18) = &local_34;
    iVar3 = (**(code **)(iVar3 + 0x10))();
    if (iVar3 < 0) {
      puVar5 = &_LC4;
    }
    else {
      (**(code **)(*piVar6 + 0x68))(piVar6);
      iVar4 = msecs_to_jiffies(10000);
      if ((char)local_34 == '\0') {
        local_48 = 0;
        local_44 = *unaff_gp;
        local_40 = &autoremove_wake_function;
        local_3c = &local_3c;
        local_38 = local_3c;
        do {
          prepare_to_wait(&local_2c,&local_48,1);
          if (((char)local_34 != '\0') || ((*(uint *)(*(int *)(*unaff_gp + 4) + 8) & 2) != 0))
          break;
          iVar4 = schedule_timeout(iVar4);
        } while (iVar4 != 0);
        finish_wait(&local_2c,&local_48);
        iVar4 = *piVar6;
      }
      else {
        iVar4 = *piVar6;
      }
      iVar3 = (**(code **)(iVar4 + 100))(piVar6,iVar3,&local_48);
      if ((char)local_34 == '\0') {
        puVar5 = &_LC5;
      }
      else {
        uVar7 = 0;
        if (iVar3 == 0) goto LAB_000105d8;
        puVar5 = &_LC6;
      }
    }
  }
  uVar7 = 0xfffffffb;
  printk(puVar5);
LAB_000105d8:
  rtscam_put_sg_buf(uVar1);
  rtscam_put_sg_buf(uVar2);
  return uVar7;
}



// ==== FUN_000107cc @ 000107cc size=296

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000107cc(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  
  iVar1 = rtscam_mem_find(param_1 + 1);
  if ((iVar1 != 0) && (iVar8 = *(int *)(iVar1 + 0x18), iVar8 != 0)) {
    uVar4 = *(uint *)(iVar1 + 0x14);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 1) {
      uVar7 = 2;
    }
    else {
      uVar7 = iVar8 == 2;
    }
    for (uVar2 = 0; uVar3 = uVar4 - uVar2, uVar2 < uVar4; uVar2 = uVar2 + uVar3) {
      iVar8 = *param_1;
      if (0x1000 < uVar3) {
        uVar3 = 0x1000;
      }
      if (param_3 == 0) {
        iVar6 = _mips_dma_map_ops;
        if ((iVar8 != 0) && (iVar6 = *(int *)(iVar8 + 0x80), *(int *)(iVar8 + 0x80) == 0)) {
          iVar6 = _mips_dma_map_ops;
        }
        pcVar5 = *(code **)(iVar6 + 0x24);
      }
      else {
        iVar6 = _mips_dma_map_ops;
        if ((iVar8 != 0) && (iVar6 = *(int *)(iVar8 + 0x80), *(int *)(iVar8 + 0x80) == 0)) {
          iVar6 = _mips_dma_map_ops;
        }
        pcVar5 = *(code **)(iVar6 + 0x20);
      }
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar8,uVar2 + iVar1,uVar3,uVar7);
      }
    }
  }
  return 0;
}



// ==== FUN_000108f4 @ 000108f4 size=396

int FUN_000108f4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = dev_get_drvdata();
  iVar2 = scnprintf(param_3,0x1000,&_LC9);
  iVar3 = scnprintf(param_3 + iVar2,0x1000,"   address\t");
  iVar4 = scnprintf(param_3 + iVar2 + iVar3,0x1000,"      size\t");
  iVar4 = iVar2 + iVar3 + iVar4;
  iVar2 = scnprintf(param_3 + iVar4,0x1000,"offset\t");
  iVar4 = iVar4 + iVar2;
  iVar2 = scnprintf(param_3 + iVar4,0x1000," count\t");
  iVar4 = iVar4 + iVar2;
  iVar2 = scnprintf(param_3 + iVar4,0x1000," pid\t");
  iVar4 = iVar4 + iVar2;
  iVar2 = scnprintf(param_3 + iVar4,0x1000,"info\n");
  iVar4 = iVar4 + iVar2;
  iVar2 = 0;
  for (puVar5 = *(undefined4 **)(iVar1 + 0x3c); puVar5 != (undefined4 *)(iVar1 + 0x3c);
      puVar5 = (undefined4 *)*puVar5) {
    iVar3 = scnprintf(param_3 + iVar4,0x1000,"%3d\t0x%08x\t%10d\t%6ld\t%6ld\t%4d\t%s\n",iVar2,
                      puVar5[-5],puVar5[-4],puVar5[-7],puVar5[-6],puVar5[-1],puVar5 + 2);
    iVar4 = iVar4 + iVar3;
    iVar2 = iVar2 + 1;
  }
  return iVar4;
}



// ==== FUN_00010a80 @ 00010a80 size=452

int FUN_00010a80(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = dev_get_drvdata();
  iVar8 = iVar1 + 4;
  uVar2 = rtscam_mem_get_total_size(iVar8);
  iVar3 = scnprintf(param_3,0x1000,"total : %12ld\n",uVar2);
  uVar2 = rtscam_mem_get_used_size(iVar8);
  iVar4 = scnprintf(param_3 + iVar3,0x1000,"used  : %12ld\n",uVar2);
  uVar2 = rtscam_mem_get_left_size(iVar8);
  iVar5 = scnprintf(param_3 + iVar3 + iVar4,0x1000,"left  : %12ld\n",uVar2);
  iVar5 = iVar3 + iVar4 + iVar5;
  iVar3 = rtscam_mem_get_bitmap(iVar8);
  if (iVar3 != 0) {
    for (uVar7 = 0; uVar7 < *(int *)(iVar1 + 0x14) + 0x1fU >> 5; uVar7 = uVar7 + 1) {
      if (0x1000 < iVar5 + 10U) break;
      iVar4 = scnprintf(param_3 + iVar5,0x1000,"%08lx",*(undefined4 *)(iVar3 + uVar7 * 4));
      puVar6 = &_LC21;
      if ((uVar7 & 7) != 7) {
        puVar6 = &_LC22;
      }
      iVar8 = scnprintf(param_3 + iVar5 + iVar4,0x1000,puVar6);
      iVar5 = iVar5 + iVar4 + iVar8;
    }
    rtscam_mem_put_bitmap(iVar3);
  }
  return iVar5;
}



// ==== FUN_00010c44 @ 00010c44 size=408

int FUN_00010c44(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = dev_get_drvdata();
  iVar2 = scnprintf(param_3,0x1000,&_LC9);
  iVar3 = scnprintf(param_3 + iVar2,0x1000,"   address\t");
  iVar4 = scnprintf(param_3 + iVar2 + iVar3,0x1000,"      size\t");
  iVar4 = iVar2 + iVar3 + iVar4;
  iVar2 = scnprintf(param_3 + iVar4,0x1000,"offset\t");
  iVar4 = iVar4 + iVar2;
  iVar2 = scnprintf(param_3 + iVar4,0x1000," count\t");
  iVar4 = iVar4 + iVar2;
  iVar2 = scnprintf(param_3 + iVar4,0x1000," pid\t");
  iVar4 = iVar4 + iVar2;
  iVar2 = scnprintf(param_3 + iVar4,0x1000,"info\n");
  iVar4 = iVar4 + iVar2;
  iVar2 = 0;
  while( true ) {
    iVar3 = rtscam_mem_enum(iVar1 + 4,iVar2);
    if (iVar3 == 0) break;
    iVar3 = scnprintf(param_3 + iVar4,0x1000,"%3d\t0x%08x\t%10d\t%6ld\t%6ld\t%4d\t%s\n",iVar2,
                      *(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14),
                      *(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                      *(undefined4 *)(iVar3 + 0x1c),iVar3 + 0x2c);
    iVar4 = iVar4 + iVar3;
    iVar2 = iVar2 + 1;
  }
  return iVar4;
}



// ==== FUN_00010ddc @ 00010ddc size=580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00010ddc(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *unaff_gp;
  
  iVar4 = *(int *)(param_1 + 0x70);
  if (param_2 == 0x800c7380) {
    iVar1 = -0x16;
    if (((((iVar4 != 0) && (iVar1 = -0x16, param_3 != (int *)0x0)) && (*(int *)(iVar4 + 0x34) != 0))
        && ((*param_3 != 0 && (param_3[1] != 0)))) && (param_3[2] != 0)) {
      iVar1 = rtscam_vaddr_is_io();
      if ((iVar1 != 0) && (iVar1 = rtscam_vaddr_is_io(*param_3), iVar1 != 0)) {
        iVar4 = FUN_0001032c(iVar4,*param_3,param_3[1],param_3[2]);
        return iVar4;
      }
      for (uVar2 = 0; uVar5 = param_3[2] - uVar2, uVar2 < (uint)param_3[2]; uVar2 = uVar2 + uVar5) {
        if (0xff000 < uVar5) {
          uVar5 = 0xff000;
        }
        iVar1 = FUN_0001032c(iVar4,uVar2 + *param_3,uVar2 + param_3[1],uVar5);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      iVar1 = 0;
    }
  }
  else if (param_2 == 0xc0047381) {
    iVar1 = -0x16;
    if (param_3 != (int *)0x0) {
      iVar3 = *param_3;
      iVar4 = find_vma(*(undefined4 *)(*unaff_gp + 0xbc),iVar3);
      if (iVar4 == 0) {
        iVar1 = -0xe;
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC23,iVar3);
          iVar1 = -0xe;
        }
      }
      else {
        iVar4 = rtscam_vma_is_io(iVar4);
        if (iVar4 == 0) {
          *param_3 = 0;
        }
        else {
          *param_3 = 1;
        }
        iVar1 = 0;
      }
    }
  }
  else {
    iVar1 = -0x19;
    if ((_rtscam_debug & 0x400) != 0) {
      printk(&_LC24,param_2,param_2 >> 8 & 0xff,param_2 & 0xff);
    }
  }
  return iVar1;
}



// ==== FUN_00011404 @ 00011404 size=144

undefined4 FUN_00011404(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x3c);
  do {
    if (piVar3 == (int *)(param_1 + 0x3c)) {
LAB_00011474:
      rtscam_mem_free_V2(param_1 + 4);
      return 0;
    }
    if (((uint)piVar3[-5] <= param_2) && (param_2 < (uint)(piVar3[-5] + piVar3[-4]))) {
      if (piVar3 != (int *)0x24) {
        piVar1 = (int *)piVar3[1];
        iVar2 = *piVar3;
        *(int **)(iVar2 + 4) = piVar1;
        *piVar1 = iVar2;
        *piVar3 = (int)piVar3;
        piVar3[1] = (int)piVar3;
      }
      goto LAB_00011474;
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}



// ==== FUN_00011494 @ 00011494 size=384

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00011494(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  int *piVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar4 = *(int *)(param_1 + 0x70);
  if (param_2 == 0xc0047360) {
    param_3 = (uint *)*param_3;
    uVar6 = 0;
  }
  else {
    if (param_2 < 0xc0047361) {
      if (param_2 == 0x800c7380) {
        return 0xffffffe7;
      }
      if (param_2 == 0x80247341) {
        if (iVar4 == 0) {
          return 0xffffffea;
        }
        if (param_3 != (uint *)0x0) {
          puVar7 = param_3 + 1;
          if ((iVar4 != -4) && (*param_3 != 0)) {
            if (puVar7 != (uint *)0x0) {
              iVar4 = rtscam_mem_find();
              pcVar2 = (char *)(iVar4 + 0x2c);
              if (iVar4 != 0) {
                iVar4 = 0x1f;
                do {
                  uVar1 = *puVar7;
                  iVar4 = iVar4 + -1;
                  *pcVar2 = (char)uVar1;
                  pcVar2 = pcVar2 + 1;
                  if ((char)uVar1 == '\0') {
                    return 0;
                  }
                  puVar7 = (uint *)((int)puVar7 + 1);
                } while (iVar4 != 0);
                return 0;
              }
            }
            return 0xffffffea;
          }
          return 0xffffffea;
        }
        return 0xffffffea;
      }
      if (param_2 == 0x80047339) {
        piVar8 = *(int **)(iVar4 + 0x3c);
        do {
          if (piVar8 == (int *)(iVar4 + 0x3c)) {
LAB_00011474:
            rtscam_mem_free_V2(iVar4 + 4);
            return 0;
          }
          if (((uint)piVar8[-5] <= *param_3) && (*param_3 < (uint)(piVar8[-5] + piVar8[-4]))) {
            if (piVar8 != (int *)0x24) {
              piVar3 = (int *)piVar8[1];
              iVar5 = *piVar8;
              *(int **)(iVar5 + 4) = piVar3;
              *piVar3 = iVar5;
              *piVar8 = (int)piVar8;
              piVar8[1] = (int)piVar8;
            }
            goto LAB_00011474;
          }
          piVar8 = (int *)*piVar8;
        } while( true );
      }
LAB_000115c0:
      if ((_rtscam_debug & 0x400) != 0) {
        printk(&_LC32,param_2,param_2 >> 8 & 0xff,param_2 & 0xff);
        return 0xffffffe7;
      }
      return 0xffffffe7;
    }
    if (param_2 == 0xc0047381) {
      return 0xffffffe7;
    }
    if (0xc0047381 < param_2) {
      if (param_2 == 0xc0147338) {
        uVar6 = 0;
      }
      else {
        if (param_2 != 0xc0147340) goto LAB_000115c0;
        uVar6 = 1;
      }
      UNRECOVERED_JUMPTABLE = (code *)&LAB_00010648;
      goto LAB_00011560;
    }
    if (param_2 != 0xc0047361) goto LAB_000115c0;
    param_3 = (uint *)*param_3;
    uVar6 = 1;
  }
  UNRECOVERED_JUMPTABLE = FUN_000107cc;
LAB_00011560:
                    /* WARNING: Could not recover jumptable at 0x00011568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*UNRECOVERED_JUMPTABLE)(iVar4,param_3,uVar6);
  return uVar6;
}



// ==== FUN_00011614 @ 00011614 size=244

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00011614(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_18;
  
  iVar2 = dev_get_drvdata();
  sscanf(param_3,"%d");
  iVar3 = 0;
  piVar4 = *(int **)(iVar2 + 0x3c);
  while( true ) {
    if (piVar4 == (int *)(iVar2 + 0x3c)) {
      return param_4;
    }
    bVar1 = iVar3 == local_18;
    iVar3 = iVar3 + 1;
    if (bVar1) break;
    piVar4 = (int *)*piVar4;
  }
  if (piVar4 == (int *)0x24) {
    return param_4;
  }
  if (piVar4[-1] == 0) {
    FUN_00011404(iVar2,piVar4[-5]);
    return param_4;
  }
  if ((_rtscam_debug & 0x100) == 0) {
    return param_4;
  }
  printk(&_LC34,piVar4[-5],piVar4[-4]);
  return param_4;
}



// ==== FUN_00011710 @ 00011710 size=60

void FUN_00011710(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)param_2[1];
    iVar1 = *param_2;
    *(int **)(iVar1 + 4) = piVar2;
    *piVar2 = iVar1;
    *param_2 = (int)param_2;
    param_2[1] = (int)param_2;
    puVar3 = *(undefined4 **)(param_1 + 0x24);
    *(int **)(param_1 + 0x24) = param_2;
    *param_2 = param_1 + 0x20;
    param_2[1] = (int)puVar3;
    *puVar3 = param_2;
  }
  return;
}



// ==== FUN_0001174c @ 0001174c size=72

int FUN_0001174c(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  while( true ) {
    if (piVar1 == (int *)(param_1 + 0x18)) {
      return 0;
    }
    if (((uint)piVar1[2] <= param_2) && (param_2 < (uint)(piVar1[2] + piVar1[3]))) break;
    piVar1 = (int *)*piVar1;
  }
  return (int)piVar1;
}



// ==== FUN_0001188c @ 0001188c size=216

void FUN_0001188c(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *unaff_gp;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 == (int *)(param_1 + 0x20)) {
    piVar1 = (int *)vzalloc(0x4c);
  }
  else {
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *(int **)(iVar3 + 4) = piVar2;
    *piVar2 = iVar3;
    *piVar1 = (int)piVar1;
    piVar1[1] = (int)piVar1;
  }
  if (piVar1 != (int *)0x0) {
    piVar1[2] = param_3;
    piVar1[3] = param_4;
    iVar3 = *(int *)(param_1 + 8);
    piVar1[5] = param_4 << 0xc;
    piVar1[4] = param_3 * 0x1000 + iVar3;
    piVar1[7] = *(int *)(*unaff_gp + 0xe4);
    iVar3 = *(int *)(*unaff_gp + 0xe4);
    piVar1[6] = 0;
    piVar1[8] = iVar3;
    iVar3 = *param_2;
    *(int **)(iVar3 + 4) = piVar1;
    *piVar1 = iVar3;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
  }
  return;
}



// ==== FUN_00011c00 @ 00011c00 size=212

void FUN_00011c00(int *param_1,code *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar2 = (uint *)*param_1;
  for (uVar4 = 0; uVar3 = 0, uVar4 < (uint)param_1[2]; uVar4 = uVar4 + 1) {
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = *puVar2;
    iVar1 = 0;
    while (uVar3 != uVar5 + uVar6 + 0xfff >> 0xc) {
      uVar3 = uVar3 + 1;
      (*param_2)(iVar1 + (uVar7 & 0xfffffffc));
      iVar1 = uVar3 * 0x20;
    }
    puVar2 = (uint *)sg_next(puVar2);
  }
  return;
}



// ==== FUN_000130e4 @ 000130e4 size=212

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000130e4(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    printk(&_LC0);
    iVar2 = -0x16;
  }
  else {
    *(undefined4 *)(param_2 + 0x4c) = 0;
    iVar2 = rtscam_mem_mmap(*param_1,param_2,param_1[2],param_1[4],param_1[3]);
    if (iVar2 == 0) {
      *(undefined4 **)(param_2 + 0x54) = param_1 + 7;
      *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 0x4040000;
      pcVar1 = _vb2_common_vm_ops;
      *(undefined **)(param_2 + 0x48) = &vb2_common_vm_ops;
      (*pcVar1)(param_2);
      iVar2 = 0;
    }
    else {
      printk(&_LC1,iVar2);
    }
  }
  return iVar2;
}



// ==== FUN_000131cc @ 000131cc size=164

void FUN_000131cc(int param_1)

{
  undefined *puVar1;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    warn_slowpath_null("/work/zzd/r10/users/drivers/video/rts-dma-contig.c",0x284);
    puVar1 = &_LC3;
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0) {
      dma_buf_unmap_attachment
                (*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
    warn_slowpath_null("/work/zzd/r10/users/drivers/video/rts-dma-contig.c",0x289);
    puVar1 = &_LC4;
  }
  printk(puVar1);
  return;
}



// ==== FUN_00013270 @ 00013270 size=144

int FUN_00013270(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *param_1;
  iVar2 = 0;
  uVar3 = 0;
  iVar4 = *(int *)(iVar1 + 0xc);
  while ((uVar3 < (uint)param_1[1] && (*(int *)(iVar1 + 0xc) == iVar4))) {
    uVar3 = uVar3 + 1;
    iVar4 = *(int *)(iVar1 + 8) + iVar4;
    iVar2 = iVar2 + *(int *)(iVar1 + 8);
    iVar1 = sg_next();
  }
  return iVar2;
}



// ==== FUN_00013300 @ 00013300 size=312

undefined4 FUN_00013300(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    warn_slowpath_null("/work/zzd/r10/users/drivers/video/rts-dma-contig.c",0x25f);
    puVar3 = &_LC5;
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0) {
      warn_slowpath_null("/work/zzd/r10/users/drivers/video/rts-dma-contig.c",0x264);
      printk(&_LC6);
      return 0;
    }
    piVar1 = (int *)dma_buf_map_attachment(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x14))
    ;
    if ((piVar1 != (int *)0x0) && (piVar1 < (int *)0xfffff001)) {
      uVar2 = FUN_00013270(piVar1);
      if (uVar2 < *(uint *)(param_1 + 0xc)) {
        printk(&_LC7,uVar2);
        dma_buf_unmap_attachment
                  (*(undefined4 *)(param_1 + 0x34),piVar1,*(undefined4 *)(param_1 + 0x14));
        return 0xfffffff2;
      }
      uVar4 = *(undefined4 *)(*piVar1 + 0xc);
      *(int **)(param_1 + 0x18) = piVar1;
      *(undefined4 *)(param_1 + 0x10) = uVar4;
      return 0;
    }
    puVar3 = &_LC8;
  }
  printk(puVar3);
  return 0xffffffea;
}



// ==== FUN_00013438 @ 00013438 size=212

void FUN_00013438(int *param_1,code *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar2 = (uint *)*param_1;
  for (uVar4 = 0; uVar3 = 0, uVar4 < (uint)param_1[2]; uVar4 = uVar4 + 1) {
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = *puVar2;
    iVar1 = 0;
    while (uVar3 != uVar5 + uVar6 + 0xfff >> 0xc) {
      uVar3 = uVar3 + 1;
      (*param_2)(iVar1 + (uVar7 & 0xfffffffc));
      iVar1 = uVar3 * 0x20;
    }
    puVar2 = (uint *)sg_next(puVar2);
  }
  return;
}



// ==== FUN_0001350c @ 0001350c size=112

void FUN_0001350c(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    warn_slowpath_null("/work/zzd/r10/users/drivers/video/rts-dma-contig.c",0x299);
    FUN_000131cc(param_1);
  }
  dma_buf_detach(**(undefined4 **)(param_1 + 0x34));
  kfree(param_1);
  return;
}



// ==== FUN_00013654 @ 00013654 size=172

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00013654(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  if (puVar3 != (undefined4 *)0x0) {
    uVar2 = puVar3[3];
    if (uVar2 != 3) {
      iVar1 = *(int *)(param_2 + 4);
      if ((iVar1 == 0) || (iVar4 = *(int *)(iVar1 + 0x80), *(int *)(iVar1 + 0x80) == 0)) {
        iVar4 = _mips_dma_map_ops;
      }
      if (2 < uVar2) {
        trap(0x3000);
      }
      if (*(code **)(iVar4 + 0x1c) != (code *)0x0) {
        (**(code **)(iVar4 + 0x1c))(iVar1,*puVar3,puVar3[2],uVar2,0);
      }
    }
    sg_free_table(puVar3);
    kfree(puVar3);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  return;
}



// ==== FUN_00013700 @ 00013700 size=228

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00013700(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar3 = *(int *)(iVar1 + 0x80), *(int *)(iVar1 + 0x80) == 0)) {
    iVar3 = _mips_dma_map_ops;
  }
  if (2 < *(uint *)(param_1 + 0x14)) {
    trap(0x3000);
  }
  if (*(code **)(iVar3 + 0x1c) != (code *)0x0) {
    (**(code **)(iVar3 + 0x1c))(iVar1,*puVar2,puVar2[2],*(uint *)(param_1 + 0x14),0);
  }
  iVar1 = rtscam_vma_is_io(*(undefined4 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    FUN_00013438(puVar2,&LAB_000137e4);
  }
  sg_free_table(puVar2);
  kfree(puVar2);
  vb2_put_vma(*(undefined4 *)(param_1 + 0x30));
  kfree(param_1);
  return;
}



// ==== FUN_000139cc @ 000139cc size=316

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000139cc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  
  iVar6 = *(int *)(param_1 + 0x34);
  puVar1 = (undefined4 *)kmem_cache_alloc(_DAT_000160fc,0x80d0);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xfffffff4;
  }
  else {
    iVar2 = sg_alloc_table(puVar1,*(undefined4 *)(*(int *)(iVar6 + 0x2c) + 8),0xd0);
    uVar9 = 0;
    if (iVar2 == 0) {
      puVar7 = (uint *)*puVar1;
      puVar8 = (uint *)**(undefined4 **)(iVar6 + 0x2c);
      for (; uVar9 < (uint)puVar1[2]; uVar9 = uVar9 + 1) {
        uVar5 = *puVar8;
        uVar4 = puVar8[1];
        puVar7[2] = puVar8[2];
        *puVar7 = *puVar7 & 3 | uVar5 & 0xfffffffc;
        puVar7[1] = uVar4;
        puVar8 = (uint *)sg_next(puVar8);
        puVar7 = (uint *)sg_next(puVar7);
      }
      uVar3 = 0;
      puVar1[3] = 3;
      *(undefined4 **)(param_3 + 0x10) = puVar1;
    }
    else {
      kfree(puVar1);
      uVar3 = 0xfffffff4;
    }
  }
  return uVar3;
}



// ==== FUN_00013b08 @ 00013b08 size=400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00013b08(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = kmem_cache_alloc(_DAT_000160fc,0xd0);
    iVar3 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      dev_err(iVar3,"failed to alloc sg table\n");
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      if (((iVar3 == 0) || (iVar4 = *(int *)(iVar3 + 0x80), *(int *)(iVar3 + 0x80) == 0)) &&
         (iVar4 = _mips_dma_map_ops, _mips_dma_map_ops == 0)) {
        trap(0x3000);
      }
      if (*(code **)(iVar4 + 0xc) == (code *)0x0) {
        iVar3 = dma_common_get_sgtable
                          (iVar3,iVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
                           *(undefined4 *)(param_1 + 0xc));
      }
      else {
        iVar3 = (**(code **)(iVar4 + 0xc))(iVar3,iVar1);
      }
      if (iVar3 < 0) {
        dev_err(*(undefined4 *)(param_1 + 4),"failed to get scatterlist from DMA API\n");
        kfree(iVar1);
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      else {
        *(int *)(param_1 + 0x2c) = iVar1;
      }
    }
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    warn_slowpath_null("/work/zzd/r10/users/drivers/video/rts-dma-contig.c",0x19a);
    uVar2 = 0;
  }
  else {
    uVar2 = dma_buf_export_named
                      (param_1,&PTR_FUN_00015470,*(undefined4 *)(param_1 + 0xc),0,
                       "/work/zzd/r10/users/drivers/video/rts-dma-contig.c");
    if (uVar2 < 0xfffff001) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== FUN_00013e70 @ 00013e70 size=240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00013e70(undefined4 *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = 0xfffffff2;
  if (param_3 <= *param_2) {
    uVar1 = kmem_cache_alloc(_DAT_00016100,0x80d0);
    if (uVar1 == 0) {
      uVar1 = 0xfffffff4;
    }
    else {
      *(undefined4 *)(uVar1 + 4) = *param_1;
      uVar2 = dma_buf_attach(param_2);
      if (uVar2 < 0xfffff001) {
        uVar3 = 2;
        if (param_4 == 0) {
          uVar3 = 1;
        }
        *(undefined4 *)(uVar1 + 0x14) = uVar3;
        *(uint *)(uVar1 + 0xc) = param_3;
        *(uint *)(uVar1 + 0x34) = uVar2;
      }
      else {
        printk(&_LC14);
        kfree(uVar1);
        uVar1 = uVar2;
      }
    }
  }
  return uVar1;
}



// ==== FUN_00013f60 @ 00013f60 size=1224

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00013f60(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *unaff_gp;
  uint uVar12;
  
  if (((param_2 | param_3) & 0x1f) != 0) {
    return -0x16;
  }
  if (param_3 == 0) {
    return -0x16;
  }
  iVar2 = kmem_cache_alloc(_DAT_00016100,0x80d0);
  if (iVar2 == 0) {
    return -0xc;
  }
  *(undefined4 *)(iVar2 + 4) = *param_1;
  uVar3 = 2;
  if (param_4 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)(iVar2 + 0x14) = uVar3;
  uVar8 = (param_2 + param_3 + 0xfff & 0xfffff000) - (param_2 & 0xfffff000) >> 0xc;
  iVar4 = __kmalloc(uVar8 << 2,0xd0);
  if (iVar4 == 0) {
    printk(&_LC15);
    iVar10 = -0xc;
    goto LAB_000143d4;
  }
  iVar10 = find_vma(*(undefined4 *)(*unaff_gp + 0xbc),param_2);
  if (iVar10 == 0) {
    printk(&_LC16,param_2);
    iVar10 = -0xe;
  }
  else if (*(uint *)(iVar10 + 4) < param_2 + param_3) {
    printk(&_LC17,param_2,param_3);
    iVar10 = -0xe;
  }
  else {
    iVar5 = vb2_get_vma(iVar10);
    *(int *)(iVar2 + 0x30) = iVar5;
    if (iVar5 == 0) {
      printk(&_LC18);
      iVar10 = -0xc;
    }
    else {
      iVar10 = rtscam_get_user_pages(param_2 & 0xfffff000,iVar4,uVar8,iVar10,param_4);
      if (iVar10 == 0) {
        piVar6 = (int *)kmem_cache_alloc(_DAT_000160fc,0x80d0);
        if (piVar6 == (int *)0x0) {
          printk(&_LC20);
          iVar10 = -0xc;
        }
        else {
          iVar10 = sg_alloc_table_from_pages(piVar6,iVar4,uVar8,param_2 & 0xfff,param_3,0xd0);
          if (iVar10 == 0) {
            kfree(iVar4);
            iVar5 = *(int *)(iVar2 + 4);
            iVar4 = *piVar6;
            iVar10 = piVar6[2];
            uVar12 = *(uint *)(iVar2 + 0x14);
            if ((iVar5 == 0) || (iVar9 = *(int *)(iVar5 + 0x80), *(int *)(iVar5 + 0x80) == 0)) {
              iVar9 = _mips_dma_map_ops;
            }
            iVar7 = iVar4;
            for (iVar11 = 0; iVar11 < iVar10; iVar11 = iVar11 + 1) {
              iVar7 = sg_next();
            }
            iVar11 = 0;
            if (uVar12 < 3) {
              iVar4 = (**(code **)(iVar9 + 0x18))(iVar5,iVar4,iVar10,uVar12,0);
              piVar6[1] = iVar4;
              if (iVar4 != 0) {
                uVar12 = FUN_00013270(piVar6);
                if (param_3 <= uVar12) {
                  uVar3 = *(undefined4 *)(*piVar6 + 0xc);
                  *(uint *)(iVar2 + 0xc) = param_3;
                  *(undefined4 *)(iVar2 + 0x10) = uVar3;
                  *(int **)(iVar2 + 0x18) = piVar6;
                  return iVar2;
                }
                printk(&_LC22,uVar12,param_3);
                iVar7 = *(int *)(iVar2 + 4);
                iVar4 = *piVar6;
                iVar10 = piVar6[2];
                if ((iVar7 == 0) || (iVar11 = *(int *)(iVar7 + 0x80), *(int *)(iVar7 + 0x80) == 0))
                {
                  iVar11 = _mips_dma_map_ops;
                }
                if (2 < *(uint *)(iVar2 + 0x14)) goto LAB_000142e0;
                goto LAB_000142e4;
              }
              printk(&_LC9);
              iVar10 = -5;
            }
            else {
LAB_000142e0:
              trap(0x3000);
LAB_000142e4:
              if (*(code **)(iVar11 + 0x1c) == (code *)0x0) {
                iVar10 = -0xe;
              }
              else {
                (**(code **)(iVar11 + 0x1c))(iVar7,iVar4,iVar10);
                iVar10 = -0xe;
              }
            }
            iVar4 = rtscam_vma_is_io(*(undefined4 *)(iVar2 + 0x30));
            if (iVar4 == 0) {
              FUN_00013438(piVar6,put_page);
            }
            iVar4 = 0;
            sg_free_table(piVar6);
          }
          else {
            printk(&_LC21);
          }
          kfree(piVar6);
          if (iVar4 == 0) goto LAB_000143b8;
        }
        iVar5 = rtscam_vma_is_io(*(undefined4 *)(iVar2 + 0x30));
        if (iVar5 == 0) {
          while (bVar1 = uVar8 != 0, uVar8 = uVar8 - 1, bVar1) {
            put_page(*(undefined4 *)(iVar4 + uVar8 * 4));
          }
        }
      }
      else {
        printk(&_LC19);
      }
LAB_000143b8:
      vb2_put_vma(*(undefined4 *)(iVar2 + 0x30));
    }
  }
  kfree(iVar4);
LAB_000143d4:
  kfree(iVar2);
  return iVar10;
}



// ==== FUN_00014428 @ 00014428 size=184

void FUN_00014428(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[10];
  param_1[10] = iVar1 + -1;
  if (iVar1 != 1) {
    return;
  }
  if (param_1[0xb] != 0) {
    sg_free_table();
    kfree(param_1[0xb]);
  }
  rtscam_mem_free(*param_1,param_1[3],param_1[2],param_1[4]);
  put_device(param_1[1]);
  kfree(param_1);
  return;
}



