/* rts_cam_mem — "rts" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_cam_mem.h"

// ==== rts_get_mem_info @ 00010110 size=44

int rts_get_mem_info(void)

{
  int iVar1;
  
  if (m_rmdev != 0) {
    iVar1 = m_rmdev + 4;
    if (*(int *)(m_rmdev + 0x18) == 0) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}



// ==== rts_put_mem_info @ 0001013c size=8

void rts_put_mem_info(void)

{
  return;
}



// ==== rts_isp_mem_probe @ 00011020 size=760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rts_isp_mem_probe(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_28 [3];
  
  puVar6 = *(undefined4 **)(param_1 + 0x58);
  if ((puVar6 == (undefined4 *)0x0) || (param_1 = param_1 + 0x10, puVar6[1] == 0)) {
    iVar5 = -0x16;
    if ((_rtscam_debug & 1) == 0) {
      return -0x16;
    }
    puVar4 = &_LC25;
  }
  else {
    puVar2 = (undefined4 *)devm_kzalloc(param_1,0x44,0xd0);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = get_device(param_1);
      *puVar2 = uVar3;
      uVar1 = _rtscam_debug;
      puVar2[0xb] = *puVar6;
      puVar2[0xc] = puVar6[1];
      if ((uVar1 & 0x100) != 0) {
        printk(&_LC27);
      }
      iVar5 = rtscam_mem_init(puVar2 + 1,*puVar2,puVar2[0xb],puVar2[0xb],puVar2[0xc]);
      if (iVar5 != 0) {
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC28,iVar5);
        }
        put_device(*puVar2);
        *puVar2 = 0;
        return iVar5;
      }
      puVar2[0xf] = puVar2 + 0xf;
      puVar2[0x10] = puVar2 + 0xf;
      puVar2[0xd] = 0;
      if (puVar6[2] != 0) {
        local_28[0] = 0x80;
        iVar5 = __dma_request_channel(local_28,0,0);
        puVar2[0xd] = iVar5;
        if ((iVar5 == 0) && (printk(&_LC29), (_rtscam_debug & 1) != 0)) {
          printk(&_LC30,0xffffffed);
        }
      }
      if ((puVar2[0xe] == 0) &&
         (puVar6 = (undefined4 *)rtscam_ge_device_alloc(), puVar6 != (undefined4 *)0x0)) {
        strlcpy(puVar6 + 0x42,"rtsmem",0x20);
        uVar3 = get_device(*puVar2);
        *puVar6 = rts_isp_mem_fops;
        puVar6[0x3f] = uVar3;
        puVar6[0x4b] = rtscam_ge_device_release;
        dev_set_drvdata(puVar6 + 2,puVar2);
        iVar5 = rtscam_ge_register_device(puVar6);
        if (iVar5 == 0) {
          puVar2[0xe] = puVar6;
        }
        else {
          rtscam_ge_device_release(puVar6);
        }
      }
      dev_set_drvdata(param_1,puVar2);
      device_create_file(*puVar2,dev_attr_meminfo);
      device_create_file(*puVar2,dev_attr_memctrl);
      device_create_file(*puVar2,dev_attr_memlist);
      m_rmdev = puVar2;
      return 0;
    }
    iVar5 = -0xc;
    if ((_rtscam_debug & 1) == 0) {
      return -0xc;
    }
    puVar4 = &_LC26;
  }
  printk(puVar4);
  return iVar5;
}



// ==== rts_isp_mem_remove @ 00011318 size=236

undefined4 rts_isp_mem_remove(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)dev_get_drvdata(param_1 + 0x10);
  m_rmdev = 0;
  device_remove_file(*puVar1,dev_attr_meminfo);
  device_remove_file(*puVar1,dev_attr_memctrl);
  device_remove_file(*puVar1,dev_attr_memlist);
  iVar2 = puVar1[0xe];
  if (iVar2 != 0) {
    put_device(*(undefined4 *)(iVar2 + 0xfc));
    rtscam_ge_unregister_device(iVar2);
    puVar1[0xe] = 0;
  }
  if (puVar1[0xd] != 0) {
    dma_release_channel();
    puVar1[0xd] = 0;
  }
  rtscam_mem_release(puVar1 + 1);
  put_device(*puVar1);
  *puVar1 = 0;
  return 0;
}



// ==== rts_dma_contig_cleanup_ctx @ 00013c98 size=60

void rts_dma_contig_cleanup_ctx(undefined4 *param_1)

{
  put_device(*param_1);
  kfree(param_1);
  return;
}



// ==== rts_dma_contig_init_ctx @ 00013e04 size=108

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * rts_dma_contig_init_ctx(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)kmem_cache_alloc(_DAT_000160fc,0x80d0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0xfffffff4;
  }
  else {
    uVar2 = get_device(*param_1);
    *puVar1 = uVar2;
    puVar1[1] = param_1;
  }
  return puVar1;
}



