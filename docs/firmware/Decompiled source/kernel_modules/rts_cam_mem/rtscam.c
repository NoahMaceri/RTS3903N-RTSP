/* rts_cam_mem — "rtscam" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_cam_mem.h"

// ==== rtscam_mem_get_total_size @ 00011794 size=44

int rtscam_mem_get_total_size(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    return *(int *)(param_1 + 0x10) << 0xc;
  }
  return 0;
}



// ==== rtscam_mem_find @ 000117c0 size=56

undefined4 rtscam_mem_find(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    uVar1 = FUN_0001174c(param_1,(uint)(param_2 - *(int *)(param_1 + 8)) >> 0xc);
    return uVar1;
  }
  return 0;
}



// ==== rtscam_vma_is_io @ 000117f8 size=16

bool rtscam_vma_is_io(int param_1)

{
  return (*(uint *)(param_1 + 0x28) & 0x4400) != 0;
}



// ==== rtscam_mem_set_info @ 00011808 size=132

undefined4 rtscam_mem_set_info(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 != (char *)0x0) {
      iVar2 = rtscam_mem_find();
      pcVar3 = (char *)(iVar2 + 0x2c);
      if (iVar2 != 0) {
        iVar2 = 0x1f;
        do {
          cVar1 = *param_3;
          iVar2 = iVar2 + -1;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          param_3 = param_3 + 1;
        } while (iVar2 != 0);
        return 0;
      }
    }
    return 0xffffffea;
  }
  return 0xffffffea;
}



// ==== rtscam_mem_alloc @ 00011964 size=456

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_mem_alloc(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *unaff_gp;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    if (param_2 != 0) {
      uVar4 = param_2 + 0xfffU >> 0xc;
      iVar3 = param_1 + 0x18;
      if (uVar4 < 0x11) {
        iVar2 = *(int *)(param_1 + 0x10);
        for (iVar5 = *(int *)(param_1 + 0x1c); iVar5 != iVar3; iVar5 = *(int *)(iVar5 + 4)) {
          piVar1 = (int *)(iVar5 + 8);
          if (uVar4 <= (uint)((iVar2 - *piVar1) - *(int *)(iVar5 + 0xc))) goto LAB_00011a60;
          iVar2 = *piVar1;
        }
        iVar5 = 0;
        if (iVar2 < (int)uVar4) {
          return 0;
        }
LAB_00011a60:
        if (iVar5 != 0) {
          iVar3 = iVar5;
        }
        iVar3 = FUN_0001188c(param_1,iVar3,iVar2 - uVar4);
      }
      else {
        iVar2 = 0;
        piVar1 = (int *)0;
        for (piVar6 = (int *)*(int *)(param_1 + 0x18); piVar6 != (int *)iVar3;
            piVar6 = (int *)*piVar6) {
          if (uVar4 <= (uint)(piVar6[2] - iVar2)) goto LAB_00011a90;
          iVar2 = piVar6[2] + piVar6[3];
          piVar1 = piVar6;
        }
        if (*(int *)(param_1 + 0x10) - iVar2 < (int)uVar4) {
          return 0;
        }
LAB_00011a90:
        if (piVar1 != (int *)0x0) {
          iVar3 = (int)piVar1;
        }
        iVar3 = FUN_0001188c(param_1,iVar3);
      }
      if (iVar3 != 0) {
        uVar4 = _rtscam_debug & 0x1000;
        *(undefined4 *)(iVar3 + 0x18) = param_4;
        if (uVar4 != 0) {
          printk(&_LC0,*(undefined4 *)(*unaff_gp + 0xe4),*(undefined4 *)(iVar3 + 8),
                 *(undefined4 *)(iVar3 + 0xc));
        }
        iVar2 = *(int *)(iVar3 + 8);
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(iVar3 + 0x10);
        }
        return *(int *)(param_1 + 4) + iVar2 * 0x1000;
      }
    }
  }
  return 0;
}



// ==== rtscam_mem_put_bitmap @ 00011b2c size=32

void rtscam_mem_put_bitmap(int param_1)

{
  if (param_1 != 0) {
    vfree();
    return;
  }
  return;
}



// ==== rtscam_mem_get_bitmap @ 00011b4c size=180

int rtscam_mem_get_bitmap(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x14) == 0)) ||
     (iVar1 = vzalloc((*(int *)(param_1 + 0x10) + 0x1fU >> 5) << 2), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    for (piVar4 = *(int **)(param_1 + 0x18); uVar2 = 0, piVar4 != (int *)(param_1 + 0x18);
        piVar4 = (int *)*piVar4) {
      for (; uVar2 < (uint)piVar4[3]; uVar2 = uVar2 + 1) {
        puVar3 = (uint *)(iVar1 + (uVar2 + piVar4[2] >> 5) * 4);
        *puVar3 = *puVar3 | 1 << (uVar2 + piVar4[2] & 0x1f);
      }
    }
  }
  return iVar1;
}



// ==== rtscam_put_sg_buf @ 00011cd4 size=208

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtscam_put_sg_buf(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar3 = *(int *)(iVar1 + 0x80), *(int *)(iVar1 + 0x80) == 0)) {
    iVar3 = _mips_dma_map_ops;
  }
  if (2 < *(uint *)(param_1 + 0x10)) {
    trap(0x3000);
  }
  if (*(code **)(iVar3 + 0x1c) != (code *)0x0) {
    (**(code **)(iVar3 + 0x1c))(iVar1,*puVar2,puVar2[2],*(uint *)(param_1 + 0x10),0);
  }
  if ((*(uint *)(*(int *)(param_1 + 0x18) + 0x28) & 0x4400) == 0) {
    FUN_00011c00(puVar2,&LAB_00011da4);
  }
  sg_free_table(puVar2);
  kfree(puVar2);
  kfree(param_1);
  return;
}



// ==== rtscam_mem_get_left_size @ 00011ddc size=80

int rtscam_mem_get_left_size(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != 0) && (iVar1 = 0, *(int *)(param_1 + 0x14) != 0)) {
    for (piVar2 = *(int **)(param_1 + 0x18); piVar2 != (int *)(param_1 + 0x18);
        piVar2 = (int *)*piVar2) {
      iVar1 = iVar1 + piVar2[3];
    }
    return (*(int *)(param_1 + 0x10) - iVar1) * 0x1000;
  }
  return 0;
}



// ==== rtscam_mem_free @ 00011e2c size=416

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtscam_mem_free(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int *unaff_gp;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_2 != 0)))) {
    uVar3 = param_3 - *(int *)(param_1 + 4);
    if (uVar3 == param_4 - *(int *)(param_1 + 8)) {
      iVar1 = FUN_0001174c();
      if (iVar1 == 0) {
        if ((_rtscam_debug & 1) != 0) {
          puVar2 = &_LC2;
LAB_00011f38:
          printk(puVar2);
          return;
        }
      }
      else {
        if ((uVar3 >> 0xc) + (param_2 + 0xfffU >> 0xc) <=
            (uint)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8))) {
          if ((_rtscam_debug & 0x1000) != 0) {
            printk(&_LC4,*(undefined4 *)(*unaff_gp + 0xe4));
          }
          FUN_00011710(param_1,iVar1);
          return;
        }
        if ((_rtscam_debug & 1) != 0) {
          puVar2 = &_LC3;
          goto LAB_00011f38;
        }
      }
    }
    else if ((_rtscam_debug & 1) != 0) {
      printk(&_LC1,"rtscam_mem_free",0x17d);
      return;
    }
  }
  return;
}



// ==== rtscam_mem_free_V2 @ 00011fcc size=224

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtscam_mem_free_V2(int param_1,int param_2)

{
  int iVar1;
  int *unaff_gp;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar1 = FUN_0001174c(param_1,(uint)(param_2 - *(int *)(param_1 + 8)) >> 0xc);
    if (iVar1 != 0) {
      if ((_rtscam_debug & 0x1000) != 0) {
        printk(&_LC4,*(undefined4 *)(*unaff_gp + 0xe4),*(undefined4 *)(iVar1 + 8),
               *(undefined4 *)(iVar1 + 0xc));
      }
      FUN_00011710(param_1,iVar1);
      return;
    }
    if ((_rtscam_debug & 1) != 0) {
      printk(&_LC2);
      return;
    }
  }
  return;
}



// ==== rtscam_mem_convert_v2d @ 000120ac size=192

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_mem_convert_v2d(int param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    uVar2 = *(uint *)(param_1 + 4);
    if ((param_2 < uVar2) || (uVar2 + *(int *)(param_1 + 0x10) * 0x1000 <= param_2)) {
      if ((_rtscam_debug & 1) == 0) {
        return 0;
      }
      puVar1 = &_LC5;
    }
    else {
      if ((param_2 - uVar2 & 0xfff) == 0) {
        return (param_2 - uVar2) + *(int *)(param_1 + 8);
      }
      if ((_rtscam_debug & 1) == 0) {
        return 0;
      }
      puVar1 = &_LC6;
    }
    printk(puVar1);
  }
  return 0;
}



// ==== rtscam_mem_convert_d2v @ 0001216c size=204

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_mem_convert_d2v(int param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x14) == 0)) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 8);
  if ((param_2 < uVar2) || (*(int *)(param_1 + 0x10) * 0x1000 + uVar2 <= param_2)) {
    if ((_rtscam_debug & 1) == 0) {
      return 0;
    }
    puVar1 = &_LC7;
  }
  else {
    if ((param_2 - uVar2 & 0xfff) == 0) {
      return *(int *)(param_1 + 4) + (param_2 - uVar2);
    }
    if ((_rtscam_debug & 1) == 0) {
      return 0;
    }
    puVar1 = &_LC6;
  }
  printk(puVar1);
  return 0;
}



// ==== rtscam_mem_enum @ 00012238 size=120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_mem_enum(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = *(int **)(param_1 + 0x18);
  while( true ) {
    if (piVar2 == (int *)(param_1 + 0x18)) {
      if ((_rtscam_debug & 0x80) != 0) {
        printk(&_LC8);
      }
      return 0;
    }
    bVar1 = iVar3 == param_2;
    iVar3 = iVar3 + 1;
    if (bVar1) break;
    piVar2 = (int *)*piVar2;
  }
  return (int)piVar2;
}



// ==== rtscam_mem_release @ 000122b0 size=252

undefined4 rtscam_mem_release(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[5] != 0)) {
    if (param_1[1] != 0) {
      __iounmap();
    }
    param_1[1] = 0;
    puVar3 = (undefined4 *)param_1[6];
    puVar4 = *(undefined4 **)param_1[6];
    while (puVar3 != param_1 + 6) {
      FUN_00011710(param_1);
      puVar3 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    }
    piVar2 = (int *)param_1[8];
    piVar5 = *(int **)param_1[8];
    while (piVar2 != param_1 + 8) {
      piVar6 = (int *)piVar2[1];
      iVar1 = *piVar2;
      *(int **)(iVar1 + 4) = piVar6;
      *piVar6 = iVar1;
      *piVar2 = (int)piVar2;
      piVar2[1] = (int)piVar2;
      vfree();
      piVar2 = piVar5;
      piVar5 = (int *)*piVar5;
    }
    put_device(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return 0;
}



// ==== rtscam_mem_init @ 000123ac size=360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
rtscam_mem_init(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[5] != 0) {
      rtscam_mem_release();
    }
    if (param_5 != 0) {
      iVar1 = __ioremap(param_3,param_5,0x800);
      if (iVar1 != 0) {
        param_1[3] = param_3 >> 0xc;
        puVar5 = param_1 + 8;
        param_1[4] = param_5 >> 0xc;
        iVar4 = 0x40;
        param_1[1] = iVar1;
        param_1[2] = param_4;
        param_1[6] = param_1 + 6;
        param_1[7] = param_1 + 6;
        param_1[8] = puVar5;
        param_1[9] = puVar5;
        do {
          puVar2 = (undefined4 *)vzalloc(0x4c);
          if (puVar2 != (undefined4 *)0x0) {
            piVar6 = (int *)param_1[9];
            param_1[9] = puVar2;
            *puVar2 = puVar5;
            puVar2[1] = piVar6;
            *piVar6 = (int)puVar2;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar3 = get_device(param_2);
        *param_1 = uVar3;
        param_1[5] = 1;
        if ((_rtscam_debug & 0x100) == 0) {
          return 0;
        }
        printk(&_LC9,"rtscam_mem_init",param_1[1],param_1[2],param_1[4]);
        return 0;
      }
    }
  }
  return 0xffffffea;
}



// ==== rtscam_vaddr_is_io @ 00012514 size=136

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool rtscam_vaddr_is_io(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int *unaff_gp;
  
  iVar2 = find_vma(*(undefined4 *)(*unaff_gp + 0xbc),param_1);
  if (iVar2 == 0) {
    bVar1 = false;
    if ((_rtscam_debug & 1) != 0) {
      printk(&_LC10,param_1);
      bVar1 = false;
    }
  }
  else {
    bVar1 = (*(uint *)(iVar2 + 0x28) & 0x4400) != 0;
  }
  return bVar1;
}



// ==== rtscam_get_user_pages @ 0001259c size=404

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_get_user_pages(uint param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_gp;
  int local_30 [2];
  
  if ((*(uint *)(param_4 + 0x28) & 0x4400) == 0) {
    uVar3 = get_user_pages(*unaff_gp,*(undefined4 *)(*unaff_gp + 0xbc),param_1 & 0xfffff000,param_3,
                           param_5,1,param_2,0);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    iVar4 = 0;
    if (uVar3 != param_3) {
      printk(&_LC12,uVar3,param_3);
      while (bVar1 = uVar3 != 0, uVar3 = uVar3 - 1, bVar1) {
        put_page(*(undefined4 *)(param_2 + uVar3 * 4));
      }
      iVar4 = -0xe;
    }
  }
  else {
    for (uVar3 = 0; iVar4 = uVar3 * 0x1000 + param_1, uVar3 < param_3; uVar3 = uVar3 + 1) {
      iVar2 = follow_pfn(param_4,iVar4,local_30);
      if (iVar2 != 0) {
        printk(&_LC11,iVar4);
        return iVar2;
      }
      *(int *)(param_2 + uVar3 * 4) = _mem_map + local_30[0] * 0x20;
    }
    iVar4 = 0;
  }
  return iVar4;
}



// ==== rtscam_get_sg_buf @ 00012730 size=1152

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * rtscam_get_sg_buf(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int *unaff_gp;
  int iVar12;
  
  if (param_3 == 0) {
    if ((_rtscam_debug & 1) == 0) {
      return (undefined4 *)0xffffffea;
    }
    printk(&_LC13);
    return (undefined4 *)0xffffffea;
  }
  if (((param_3 | param_2) & 0x1f) != 0) {
    return (undefined4 *)0xffffffea;
  }
  puVar2 = (undefined4 *)kmem_cache_alloc(_DAT_000160fc,0x80d0);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0xfffffff4;
  }
  *puVar2 = param_1;
  puVar2[1] = *param_1;
  uVar11 = 2;
  if (param_4 == 0) {
    uVar11 = 1;
  }
  puVar2[4] = uVar11;
  uVar10 = (param_3 + param_2 + 0xfff & 0xfffff000) - (param_2 & 0xfffff000) >> 0xc;
  iVar3 = __kmalloc(uVar10 << 2,0xd0);
  if (iVar3 == 0) {
    puVar7 = (undefined4 *)0xfffffff4;
    if ((_rtscam_debug & 1) != 0) {
      printk(&_LC14);
    }
    goto LAB_00012b60;
  }
  iVar4 = find_vma(*(undefined4 *)(*unaff_gp + 0xbc),param_2);
  if (iVar4 == 0) {
    puVar7 = (undefined4 *)0xfffffff2;
    if ((_rtscam_debug & 1) != 0) {
      printk(&_LC10,param_2);
    }
  }
  else if (*(uint *)(iVar4 + 4) < param_3 + param_2) {
    puVar7 = (undefined4 *)0xfffffff2;
    if ((_rtscam_debug & 1) != 0) {
      printk(&_LC15,param_2,param_3);
    }
  }
  else {
    puVar2[6] = iVar4;
    puVar7 = (undefined4 *)rtscam_get_user_pages(param_2 & 0xfffff000,iVar3,uVar10,iVar4,param_4);
    if (puVar7 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)kmem_cache_alloc(_DAT_000160fc,0x80d0);
      if (puVar5 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0xfffffff4;
        if ((_rtscam_debug & 1) == 0) goto LAB_00012b0c;
        printk(&_LC17);
        iVar4 = puVar2[6];
      }
      else {
        puVar7 = (undefined4 *)
                 sg_alloc_table_from_pages(puVar5,iVar3,uVar10,param_2 & 0xfff,param_3,0xd0);
        if (puVar7 == (undefined4 *)0x0) {
          iVar8 = puVar2[1];
          uVar11 = *puVar5;
          iVar4 = puVar5[2];
          uVar6 = puVar2[4];
          if ((iVar8 == 0) || (iVar9 = *(int *)(iVar8 + 0x80), *(int *)(iVar8 + 0x80) == 0)) {
            iVar9 = _mips_dma_map_ops;
          }
          for (iVar12 = 0; iVar12 < iVar4; iVar12 = iVar12 + 1) {
            uVar11 = sg_next(uVar11);
          }
          if (2 < uVar6) {
            trap(0x3000);
          }
          iVar4 = (**(code **)(iVar9 + 0x18))(iVar8);
          puVar5[1] = iVar4;
          if (iVar4 != 0) {
            kfree(iVar3);
            puVar2[2] = param_2;
            puVar2[3] = param_3;
            puVar2[5] = puVar5;
            return puVar2;
          }
          printk(&_LC19);
          if ((*(uint *)(puVar2[6] + 0x28) & 0x4400) == 0) {
            FUN_00011c00(puVar5,put_page);
          }
          puVar7 = (undefined4 *)0xfffffffb;
          sg_free_table(puVar5);
        }
        else if ((_rtscam_debug & 1) != 0) {
          printk(&_LC18);
        }
        kfree(puVar5);
LAB_00012b0c:
        iVar4 = puVar2[6];
      }
      if ((*(uint *)(iVar4 + 0x28) & 0x4400) == 0) {
        while (bVar1 = uVar10 != 0, uVar10 = uVar10 - 1, bVar1) {
          put_page(*(undefined4 *)(iVar3 + uVar10 * 4));
        }
      }
    }
    else if ((_rtscam_debug & 1) != 0) {
      printk(&_LC16);
    }
  }
  kfree(iVar3);
LAB_00012b60:
  kfree(puVar2);
  return puVar7;
}



// ==== rtscam_mem_get_used_size @ 00012bb0 size=72

int rtscam_mem_get_used_size(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != 0) && (iVar1 = 0, *(int *)(param_1 + 0x14) != 0)) {
    for (piVar2 = *(int **)(param_1 + 0x18); piVar2 != (int *)(param_1 + 0x18);
        piVar2 = (int *)*piVar2) {
      iVar1 = iVar1 + piVar2[3];
    }
    return iVar1 << 0xc;
  }
  return 0;
}



// ==== rtscam_mem_realloc @ 00012bf8 size=404

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_mem_realloc(int param_1,int param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *unaff_gp;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    if (param_3 == (uint *)0x0) {
      return 0;
    }
    if (param_2 == 0) {
      return 0;
    }
    uVar4 = *param_3;
    uVar6 = *(uint *)(param_1 + 8);
    if (uVar4 < uVar6) {
      return 0;
    }
    if (uVar4 <= *(int *)(param_1 + 0x10) * 0x1000 + uVar6) {
      piVar1 = *(int **)(param_1 + 0x18);
      uVar5 = param_2 + 0xfffU >> 0xc;
      uVar4 = uVar4 - uVar6 >> 0xc;
      iVar2 = 0;
      do {
        if (piVar1 == (int *)(param_1 + 0x18)) {
          if ((int)(*(int *)(param_1 + 0x10) - uVar4) < (int)uVar5) {
            return 0;
          }
LAB_00012cd4:
          iVar3 = param_1 + 0x18;
          if ((iVar2 != 0) && (iVar3 = iVar2, uVar4 - *(int *)(iVar2 + 8) < *(uint *)(iVar2 + 0xc)))
          {
            return 0;
          }
          iVar2 = FUN_0001188c(param_1,iVar3);
          uVar4 = _rtscam_debug & 0x1000;
          *(undefined4 *)(iVar2 + 0x18) = param_4;
          if (uVar4 != 0) {
            printk(&_LC0,*(undefined4 *)(*unaff_gp + 0xe4),*(undefined4 *)(iVar2 + 8),
                   *(undefined4 *)(iVar2 + 0xc));
          }
          iVar3 = *(int *)(iVar2 + 8);
          *param_3 = *(uint *)(iVar2 + 0x10);
          return *(int *)(param_1 + 4) + iVar3 * 0x1000;
        }
        uVar6 = piVar1[2];
        piVar7 = piVar1;
        if (uVar4 <= uVar6) {
          if (uVar6 == uVar4) {
            return 0;
          }
          piVar7 = (int *)iVar2;
          if (uVar4 < uVar6) {
            if (uVar6 - uVar4 < uVar5) {
              return 0;
            }
            goto LAB_00012cd4;
          }
        }
        piVar1 = (int *)*piVar1;
        iVar2 = (int)piVar7;
      } while( true );
    }
  }
  return 0;
}



// ==== rtscam_mem_check @ 00012d8c size=284

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rtscam_mem_check(int param_1,uint param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((uVar1 <= param_2) && (param_2 + param_3 <= *(int *)(param_1 + 0x10) * 0x1000 + uVar1)) {
      uVar1 = param_2 - uVar1 >> 0xc;
      iVar2 = FUN_0001174c(param_1,uVar1);
      if (iVar2 == 0) {
        if ((_rtscam_debug & 1) == 0) {
          return 0xffffffea;
        }
        puVar3 = &_LC20;
      }
      else {
        if (uVar1 + (param_3 + 0xfffU >> 0xc) <= (uint)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 8))
           ) {
          if (param_4 != (int *)0x0) {
            *param_4 = iVar2;
          }
          return 0;
        }
        if ((_rtscam_debug & 1) == 0) {
          return 0xffffffea;
        }
        puVar3 = &_LC21;
      }
      printk(puVar3,"rtscam_mem_check");
      return 0xffffffea;
    }
  }
  return 0xffffffea;
}



// ==== rtscam_mem_mmap @ 00012ea8 size=492

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_mem_mmap(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_38 [2];
  int local_30;
  
  local_30 = param_2[1];
  iVar7 = *param_2;
  iVar5 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar3 = param_2[0x13];
  local_38[0] = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar1 = rtscam_mem_check(param_1,param_4,param_5,local_38);
    if (iVar1 == 0) {
      if (param_4 - *(int *)(param_1 + 8) == param_3 - *(int *)(param_1 + 4)) {
        if (*(int *)(local_38[0] + 0x18) == 0) {
          param_2[9] = param_2[9] | 0x800;
        }
        uVar4 = param_5 + 0xfffU >> 0xc;
        iVar1 = -6;
        if (((uVar3 < uVar4) && (uVar2 = (uint)(local_30 - iVar7) >> 0xc, uVar2 <= uVar4 - uVar3))
           && (iVar1 = remap_pfn_range(param_2,*param_2,
                                       uVar3 + iVar6 + ((uint)(param_4 - iVar5) >> 0xc),uVar2 << 0xc
                                       ,param_2[9]), iVar1 == 0)) {
          return 0;
        }
        if ((_rtscam_debug & 1) == 0) {
          return iVar1;
        }
        printk(&_LC24,iVar1);
        return iVar1;
      }
      if ((_rtscam_debug & 1) != 0) {
        printk(&_LC23,param_3);
        return -0x16;
      }
    }
    else if ((_rtscam_debug & 1) != 0) {
      printk(&_LC22,param_4,param_5);
    }
  }
  return -0x16;
}



