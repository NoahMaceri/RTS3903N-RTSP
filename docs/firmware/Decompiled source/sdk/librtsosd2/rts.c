/* librtsosd2 — "rts" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsosd2.h"

// ==== rts_osd2_release @ 000128fc size=212

undefined4 rts_osd2_release(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != (int *)0x0) {
    iVar2 = 0;
    piVar3 = param_1 + 4;
    do {
      if (piVar3 != (int *)0x0) {
        (*(code *)PTR_rts_isp_free_dma_000275b4)((int)param_1 + iVar2 + 0x58);
      }
      iVar2 = iVar2 + 0x60;
      piVar3 = (int *)(iVar2 + (int)(param_1 + 4));
    } while (iVar2 != 0x240);
    (*(code *)PTR_pthread_mutex_destroy_000275e8)(param_1 + 0xa8);
    (*(code *)PTR___free_osd2_dma_buf_0002766c)(param_1);
    if (*param_1 != 0) {
      (*(code *)PTR_osd2_ewl_release_000275d0)();
    }
    puVar1 = PTR_rts_free_000275d8;
    *param_1 = 0;
    (*(code *)puVar1)(param_1);
  }
  return 0;
}



// ==== rts_osd2_init @ 000129d0 size=712

int rts_osd2_init(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *unaff_s3;
  int local_20 [2];
  
  if (param_1 == (int *)0x0) {
    uVar5 = 0x2d6;
    puVar3 = PTR_00027598 + 0x5ed8;
LAB_00012a38:
    param_2 = (int *)(PTR_00027598 + 0x5d38);
    (*(code *)PTR___assert_000275b8)(puVar3,param_2,uVar5,PTR_00027598 + 0x63e0);
  }
  else {
    unaff_s3 = param_2;
    if (param_2 == (int *)0x0) {
      uVar5 = 0x2d7;
      puVar3 = PTR_00027598 + 0x5ee0;
      goto LAB_00012a38;
    }
  }
  puVar3 = PTR_00027598;
  if (*(ushort *)PTR_rts_hw_id_00027688 < 3) {
    return -0x1d;
  }
  if ((((*param_2 != 1) || (0x7f0 < param_2[1] - 0x10U)) || (0x7f0 < param_2[2] - 0x10U)) ||
     (((param_2[1] & 1U) != 0 || ((param_2[2] & 1U) != 0)))) {
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x5f44,PTR_00027598 + 0x63d0,0x2de);
    return -0x15;
  }
  piVar1 = (int *)(*(code *)PTR___rts_calloc_000276b4)(1,0x2c0,PTR_00027598 + 0x63d0,0x2e2);
  if (piVar1 == (int *)0x0) {
    return -0xb;
  }
  iVar2 = (*(code *)PTR_osd2_ewl_init_0002768c)();
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x5ee8,puVar3 + 0x63d0,0x2e8);
    (*(code *)PTR_rts_free_000275d8)(piVar1);
    return -0x1f;
  }
  (*(code *)PTR_pthread_mutex_init_000275bc)(piVar1 + 0xa8,0);
  (*(code *)PTR___init_osd2_pameters_000276ec)(piVar1);
  iVar2 = (*(code *)PTR___alloc_osd2_dma_buf_000275f8)(piVar1);
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR___init_osd2_color_table_000276b8)(piVar1,local_20);
    if (-1 < iVar2) {
      pcVar6 = (code *)(PTR_00027598 + 0x1bd8);
      piVar1[0x9e] = local_20[0];
      iVar2 = (*pcVar6)(piVar1,piVar1 + 0x94);
      if (((iVar2 == 0) && (iVar2 = (*pcVar6)(piVar1,piVar1 + 0x99), iVar2 == 0)) &&
         (iVar2 = (*(code *)PTR___init_osd2_blocks_000275c4)(piVar1,piVar1 + 4), iVar2 == 0)) {
        (*(code *)PTR_memcpy_000276a8)(piVar1 + 1,unaff_s3,0xc);
        *param_1 = (int)piVar1;
        return 0;
      }
      goto LAB_00012c60;
    }
    uVar5 = 0x2f9;
    puVar4 = PTR_00027598 + 0x5f24;
  }
  else {
    uVar5 = 0x2f3;
    puVar4 = PTR_00027598 + 0x5f00;
  }
  (*(code *)PTR_rts_log_00027630)(4,puVar4,puVar3 + 0x63d0,uVar5);
LAB_00012c60:
  (*(code *)PTR_rts_osd2_release_00027620)(piVar1);
  return iVar2;
}



// ==== rts_osd2_update @ 00012c98 size=92

undefined4 rts_osd2_update(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0xfffffff6;
  }
  else {
    (*(code *)PTR_memcpy_000276a8)(param_1 + 4,param_2,0xc);
    *(undefined4 *)(param_1 + 700) = 1;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_osd2_config_block @ 00012cf4 size=1408

int rts_osd2_config_block(int param_1,undefined *param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint *unaff_s0;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  code *pcVar15;
  int iVar16;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  if (param_1 == 0) {
    param_3 = (uint *)&DAT_00000345;
    puVar6 = PTR_00027598 + 0x5d30;
    puVar8 = PTR_00027598 + 0x63b8;
LAB_00012da0:
    param_2 = PTR_00027598 + 0x5d38;
    (*(code *)PTR___assert_000275b8)(puVar6,param_2,param_3,puVar8);
  }
  else {
    if ((int)param_2 < 0) {
      uVar9 = 0x348;
      puVar6 = PTR_00027598 + 0x5f5c;
      goto LAB_00012ea4;
    }
    unaff_s0 = param_3;
    if (param_3 == (uint *)0x0) {
      param_3 = (uint *)0xdf;
      puVar6 = PTR_00027598 + 0x5d90;
      puVar8 = PTR_00027598 + 0x638c;
      goto LAB_00012da0;
    }
  }
  uVar14 = *param_3;
  if (((-1 < (int)uVar14) && (uVar7 = param_3[2], (int)uVar14 <= (int)uVar7)) &&
     ((uVar7 - uVar14 & 1) == 0)) {
    uVar11 = param_3[3];
    uVar4 = param_3[1];
    if ((uVar11 - uVar4 & 1) == 0) {
      uVar14 = uVar14 & 0xfffffffe;
      uVar7 = uVar7 & 0xfffffffe;
      *param_3 = uVar14;
      param_3[2] = uVar7;
      if ((-1 < (int)uVar4) && (uVar5 = uVar4 & 0xfffffffe, (int)uVar4 <= (int)uVar11)) {
        uVar11 = uVar11 & 0xfffffffe;
        uVar4 = *(uint *)(param_1 + 8);
        unaff_s0[1] = uVar5;
        unaff_s0[3] = uVar11;
        if ((((uVar14 <= uVar4) && ((uVar7 <= uVar4 && (uVar5 <= *(uint *)(param_1 + 0xc))))) &&
            (uVar11 <= *(uint *)(param_1 + 0xc))) &&
           ((uVar4 = unaff_s0[4], uVar4 - 0x240 < 5 || (uVar4 == 0x100)))) {
          if (unaff_s0[8] == 0) {
            unaff_s0[8] = 0xff;
          }
          if ((undefined *)0x5 < param_2) {
            return -0x15;
          }
          iVar10 = param_1 + (int)param_2 * 0x60 + 0x10;
          if (unaff_s0[5] == 0) {
            if (*(int *)(iVar10 + 0x48) == 0) {
              return 0;
            }
            (*(code *)PTR_pthread_mutex_lock_000275e4)(param_1 + 0x2a0);
            (*(code *)PTR_rts_isp_free_dma_000275b4)(iVar10 + 0x48);
            *(undefined4 *)(iVar10 + 0x5c) = 0;
            iVar10 = param_1 + 0x2a0;
            goto LAB_0001322c;
          }
          local_2c = uVar7 - uVar14;
          uVar11 = uVar11 - uVar5;
          pcVar15 = (code *)(PTR_00027598 + 0x19b0);
          if (uVar4 == 0x100) {
            uVar14 = local_2c + 7 >> 3;
          }
          else {
            uVar14 = (*pcVar15)(local_2c,uVar11,uVar4);
            uVar14 = uVar14 / uVar11;
            if (uVar11 == 0) {
              trap(0x1c00);
            }
          }
          uVar12 = uVar14 + 7 & 0xfffffff8;
          uVar7 = uVar12 * uVar11;
          uVar5 = (*pcVar15)(local_2c,uVar11,uVar4);
          if (unaff_s0[6] < uVar5) {
            return -0x24;
          }
          bVar1 = false;
          if ((uVar14 == uVar12) && (bVar1 = true, (local_2c & 7) != 0)) {
            bVar1 = uVar4 != 0x100;
          }
          local_3c = 2;
          local_48 = 0;
          uVar4 = unaff_s0[7];
          if (((*(int *)(iVar10 + 0x48) == 0) || (*(uint *)(iVar10 + 0x4c) < uVar7)) ||
             (*(uint *)(iVar10 + 0x4c) < uVar4)) {
            local_44 = uVar4;
            if (uVar4 <= uVar7) {
              local_44 = uVar7;
            }
            iVar2 = (*(code *)PTR_rts_isp_alloc_dma_000276e0)(&local_48);
            if (iVar2 != 0) {
              (*(code *)PTR_rts_log_00027630)
                        (4,PTR_00027598 + 0x5f8c,PTR_00027598 + 0x63a0,0x385,iVar2);
              return iVar2;
            }
            (*(code *)PTR_rts_isp_set_dma_info_000275a8)(local_40,PTR_00027598 + 0x5fb8);
          }
          local_38 = param_1 + 0x2a0;
          (*(code *)PTR_pthread_mutex_lock_000275e4)(local_38);
          if (local_48 != 0) {
            if (*(int *)(iVar10 + 0x48) != 0) {
              (*(code *)PTR_rts_isp_free_dma_000275b4)(iVar10 + 0x48);
            }
            (*(code *)PTR_memcpy_000276a8)(iVar10 + 0x48,&local_48,0x10);
          }
          (*(code *)PTR_rts_isp_mem_sync_cpu_0002764c)(*(undefined4 *)(iVar10 + 0x50));
          iVar2 = *(int *)(param_1 + 0x2b8);
          if (bVar1) {
            if (iVar2 == 0) {
              (*(code *)PTR_memcpy_000276a8)(*(undefined4 *)(iVar10 + 0x48),unaff_s0[5],uVar7);
            }
            else {
              (*(code *)PTR_rts_memcpy_00027670)();
            }
          }
          else {
            if (unaff_s0[4] == 0x100) {
              local_34 = unaff_s0[2] - *unaff_s0;
              iVar13 = 0;
              if ((local_34 & 7) != 0) {
                local_30 = unaff_s0[5];
                iVar2 = 0;
                for (uVar14 = 0; uVar14 != uVar11; uVar14 = uVar14 + 1) {
                  iVar16 = *(int *)(iVar10 + 0x48);
                  uVar7 = 0;
                  do {
                    iVar3 = (*(code *)PTR_rts_test_bit_000275c0)(local_30,unaff_s0[6],uVar7 + iVar2)
                    ;
                    pcVar15 = (code *)PTR_rts_clear_bit_000276c0;
                    if (iVar3 != 0) {
                      pcVar15 = (code *)PTR_rts_set_bit_00027678;
                    }
                    uVar4 = uVar7 + 1;
                    (*pcVar15)(iVar16 + iVar13,uVar12,uVar7);
                    uVar7 = uVar4;
                  } while (uVar4 != local_34);
                  iVar13 = iVar13 + uVar12;
                  iVar2 = iVar2 + uVar11;
                }
                goto LAB_00013204;
              }
            }
            iVar13 = 0;
            iVar16 = 0;
            for (uVar7 = 0; uVar7 != uVar11; uVar7 = uVar7 + 1) {
              if (iVar2 == 0) {
                (*(code *)PTR_memcpy_000276a8)
                          (*(int *)(iVar10 + 0x48) + iVar13,unaff_s0[5] + iVar16,uVar14);
              }
              else {
                (*(code *)PTR_rts_memcpy_00027670)();
              }
              iVar16 = iVar16 + uVar14;
              iVar13 = iVar13 + uVar12;
            }
          }
LAB_00013204:
          (*(code *)PTR_rts_isp_mem_sync_device_00027680)(*(undefined4 *)(iVar10 + 0x50));
          (*(code *)PTR_memcpy_000276a8)(iVar10 + 4,unaff_s0,0x24);
          iVar10 = local_38;
LAB_0001322c:
          (*(code *)PTR_pthread_mutex_unlock_00027614)(iVar10);
          return 0;
        }
      }
    }
  }
  param_2 = (undefined *)0xffffffeb;
  puVar6 = PTR_00027598 + 0x5fc4;
  uVar9 = 0x34e;
LAB_00012ea4:
  (*(code *)PTR_rts_log_00027630)(4,puVar6,PTR_00027598 + 0x63a0,uVar9,param_2);
  return -0x15;
}



// ==== rts_osd2_query_block @ 00013274 size=268

undefined4
rts_osd2_query_block(undefined *param_1,undefined *param_2,undefined4 param_3,undefined *param_4)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_3 = 0x3b3;
    param_1 = PTR_00027598 + 0x5d30;
    param_2 = PTR_00027598 + 0x5d38;
    param_4 = PTR_00027598 + 0x6374;
    (*(code *)PTR___assert_000275b8)(param_1,param_2,0x3b3);
  }
  if ((int)param_2 < 0) {
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x5f5c,PTR_00027598 + 0x635c,0x3b6,param_2);
    uVar1 = 0xffffffeb;
  }
  else if (param_2 < (undefined *)0x6) {
    (*(code *)PTR_pthread_mutex_lock_000275e4)(param_1 + 0x2a0);
    (*(code *)PTR_memcpy_000276a8)(param_3,param_1 + (int)param_2 * 0x60 + 0x14,0x24);
    (*(code *)PTR_pthread_mutex_unlock_00027614)(param_1 + 0x2a0);
    uVar1 = 0;
    *param_4 = (char)*(undefined4 *)(param_1 + (int)param_2 * 0x60 + 0x6c);
  }
  else {
    uVar1 = 0xffffffeb;
  }
  return uVar1;
}



// ==== rts_osd2_enable_block @ 00013380 size=352

undefined4 rts_osd2_enable_block(undefined *param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  
  puVar5 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar5 = PTR_00027598 + 0x5d30;
    param_2 = PTR_00027598 + 0x5d38;
    (*(code *)PTR___assert_000275b8)(puVar5,param_2,0x3cd,PTR_00027598 + 0x6344);
  }
  if (param_2 < (undefined *)0x6) {
    iVar1 = (int)param_2 * 0x60;
    uVar3 = (*(code *)(PTR_00027598 + 0x1a5c))();
    iVar4 = (*(code *)PTR_RTS_IS_ERR_00027604)(uVar3);
    if (iVar4 == 0) {
      (*(code *)PTR_pthread_mutex_lock_000275e4)(param_1 + 0x2a0);
      puVar2 = PTR_pthread_mutex_unlock_00027614;
      *(undefined4 *)(puVar5 + iVar1 + 0x6c) = 1;
      (*(code *)puVar2)(param_1 + 0x2a0);
      uVar3 = 0;
    }
    else {
      (*(code *)PTR_rts_log_00027630)
                (4,PTR_00027598 + 0x5e2c,PTR_00027598 + 0x632c,0x3da,param_2,
                 *(undefined4 *)(puVar5 + iVar1 + 0x14),*(undefined4 *)(puVar5 + iVar1 + 0x18),
                 *(undefined4 *)(puVar5 + iVar1 + 0x1c),*(undefined4 *)(puVar5 + iVar1 + 0x20),
                 *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    }
  }
  else {
    uVar3 = 0xffffffeb;
  }
  return uVar3;
}



// ==== rts_osd2_disable_block @ 000134e0 size=168

undefined4 rts_osd2_disable_block(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 < (undefined *)0x6);
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_00027598 + 0x5d30;
    param_2 = PTR_00027598 + 0x5d38;
    (*(code *)PTR___assert_000275b8)(param_1,param_2,0x3ea,PTR_00027598 + 0x6314);
  }
  if (uVar3 == 0) {
    uVar2 = 0xffffffeb;
  }
  else {
    (*(code *)PTR_pthread_mutex_lock_000275e4)(param_1 + 0x2a0);
    puVar1 = PTR_pthread_mutex_unlock_00027614;
    *(undefined4 *)(param_1 + (int)param_2 * 0x60 + 0x6c) = 0;
    (*(code *)puVar1)(param_1 + 0x2a0);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_osd2_set_attr @ 00013588 size=316

undefined4 rts_osd2_set_attr(undefined *param_1,undefined *param_2,int *param_3)

{
  int *unaff_s0;
  
  if (param_1 == (undefined *)0x0) {
    param_3 = (int *)&DAT_000003fe;
    param_1 = PTR_00027598 + 0x5d30;
  }
  else {
    unaff_s0 = param_3;
    if (param_3 != (int *)0x0) goto LAB_000135f8;
    param_3 = (int *)0x3ff;
    param_1 = PTR_00027598 + 0x5ff4;
  }
  param_2 = PTR_00027598 + 0x5d38;
  (*(code *)PTR___assert_000275b8)(param_1,param_2,param_3,PTR_00027598 + 0x6300);
LAB_000135f8:
  if (*param_3 != 0) {
    if ((param_3[2] == 0) && (param_3[1] == 0)) {
      (*(code *)PTR_rts_log_00027630)
                (4,PTR_00027598 + 0x5ffc,PTR_00027598 + 0x62ec,0x403,0xffffffeb);
      return 0xffffffeb;
    }
    *unaff_s0 = 1;
  }
  if ((undefined *)0x5 < param_2) {
    return 0xffffffeb;
  }
  (*(code *)PTR_pthread_mutex_lock_000275e4)(param_1 + 0x2a0);
  (*(code *)PTR_memcpy_000276a8)(param_1 + (int)param_2 * 0x60 + 0x38,unaff_s0,0xc);
  (*(code *)PTR_pthread_mutex_unlock_00027614)(param_1 + 0x2a0);
  return 0;
}



// ==== rts_osd2_get_attr @ 000136c4 size=232

undefined4 rts_osd2_get_attr(undefined *param_1,undefined *param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_s1;
  
  if (param_1 == (undefined *)0x0) {
    uVar1 = 0x418;
    param_1 = PTR_00027598 + 0x5d30;
    param_3 = unaff_s1;
  }
  else {
    if (param_3 != 0) goto LAB_00013734;
    uVar1 = 0x419;
    param_1 = PTR_00027598 + 0x5ff4;
  }
  param_2 = PTR_00027598 + 0x5d38;
  (*(code *)PTR___assert_000275b8)(param_1,param_2,uVar1,PTR_00027598 + 0x62d8);
LAB_00013734:
  if (param_2 < (undefined *)0x6) {
    (*(code *)PTR_pthread_mutex_lock_000275e4)(param_1 + 0x2a0);
    (*(code *)PTR_memcpy_000276a8)(param_3,param_1 + (int)param_2 * 0x60 + 0x38,0xc);
    (*(code *)PTR_pthread_mutex_unlock_00027614)(param_1 + 0x2a0);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffeb;
  }
  return uVar1;
}



// ==== rts_osd2_encode @ 00013948 size=604

int rts_osd2_encode(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0x450;
    puVar3 = (undefined4 *)(PTR_00027598 + 0x5d30);
LAB_000139a4:
    param_2 = (int *)(PTR_00027598 + 0x5d38);
    (*(code *)PTR___assert_000275b8)(puVar3,param_2,uVar5,PTR_00027598 + 0x62a0);
  }
  else {
    uVar5 = 0x451;
    puVar3 = param_1;
    if (param_2 == (int *)0x0) {
      puVar3 = (undefined4 *)(PTR_00027598 + 0x6090);
      goto LAB_000139a4;
    }
  }
  if (((*param_2 == 0) || (param_2[1] == 0)) || (param_2[2] == 0)) {
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6098,PTR_00027598 + 0x6290,0x454);
    return -0x15;
  }
  if ((uint)param_2[3] < (uint)(puVar3[2] * puVar3[3] * 3) >> 1) {
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x60b8,PTR_00027598 + 0x6290,0x45b);
    return -0x24;
  }
  (*(code *)PTR_pthread_mutex_lock_000275e4)(puVar3 + 0xa8);
  iVar1 = (*(code *)PTR___check_blk_valid_num_00027690)(param_1);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR___write_frame_info_cmd_000276dc)(param_1,param_2);
    if (iVar2 < 0) {
      uVar5 = 0x467;
      puVar4 = PTR_00027598 + 0x60e0;
      puVar6 = PTR_00027598 + 0x6290;
    }
    else {
      iVar2 = (*(code *)PTR___write_color_table_info_cmd_00027660)(param_1);
      if (iVar2 == 0) {
        iVar2 = (*(code *)PTR_osd2_ewl_reserve_hw_000275d4)(*param_1);
        if (iVar2 == 0) {
          iVar2 = (*(code *)PTR_osd2_encode_frame_000276c4)(param_1);
          if (iVar2 < 0) {
            (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6138,PTR_00027598 + 0x6290,0x479);
          }
          (*(code *)PTR_osd2_ewl_release_hw_000275f4)(*param_1);
          goto LAB_00013b7c;
        }
        uVar5 = 0x473;
        puVar4 = PTR_00027598 + 0x6120;
        puVar6 = PTR_00027598 + 0x6290;
      }
      else {
        uVar5 = 0x46d;
        puVar4 = PTR_00027598 + 0x6100;
        puVar6 = PTR_00027598 + 0x6290;
      }
    }
    (*(code *)PTR_rts_log_00027630)(4,puVar4,puVar6,uVar5);
  }
LAB_00013b7c:
  (*(code *)PTR_pthread_mutex_unlock_00027614)(puVar3 + 0xa8);
  return iVar2;
}



// ==== rts_osd2_set_color_table @ 00013ba4 size=232

undefined4
rts_osd2_set_color_table
          (undefined *param_1,undefined *param_2,undefined4 param_3,undefined1 param_4,
          undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    param_3 = 0x488;
    puVar2 = PTR_00027598 + 0x5d30;
    param_2 = PTR_00027598 + 0x5d38;
    (*(code *)PTR___assert_000275b8)(puVar2,param_2,0x488,PTR_00027598 + 0x6274);
  }
  (*(code *)PTR_pthread_mutex_lock_000275e4)(puVar2 + 0x2a0);
  uVar1 = (*(code *)PTR_osd2_set_color_table_000276a0)
                    (param_1 + 0x27c,param_2,param_3,param_4,param_5,param_6,param_7);
  (*(code *)PTR_pthread_mutex_unlock_00027614)(puVar2 + 0x2a0);
  return uVar1;
}



// ==== rts_osd2_get_color_table @ 00013c8c size=224

undefined4
rts_osd2_get_color_table
          (undefined *param_1,undefined *param_2,undefined1 param_3,undefined1 param_4,
          undefined1 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR_00027598 + 0x5d30;
    param_2 = PTR_00027598 + 0x5d38;
    (*(code *)PTR___assert_000275b8)(puVar2,param_2,0x499,PTR_00027598 + 0x6258);
  }
  (*(code *)PTR_pthread_mutex_lock_000275e4)(puVar2 + 0x2a0);
  uVar1 = (*(code *)PTR_osd2_get_color_table_00027664)
                    (param_1 + 0x27c,param_2,param_3,param_4,param_5,param_6);
  (*(code *)PTR_pthread_mutex_unlock_00027614)(puVar2 + 0x2a0);
  return uVar1;
}



// ==== rts_osd2_get_blk_max_num @ 00013d6c size=8

undefined4 rts_osd2_get_blk_max_num(void)

{
  return 6;
}



// ==== rts_osd2_set_adma_copy @ 00013d74 size=156

void rts_osd2_set_adma_copy(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR_00027598 + 0x5d30;
    param_2 = PTR_00027598 + 0x5d38;
    (*(code *)PTR___assert_000275b8)(puVar1,param_2,0x4ac,PTR_00027598 + 0x6240);
  }
  (*(code *)PTR_pthread_mutex_lock_000275e4)(puVar1 + 0x2a0);
  if (param_2 == (undefined *)0x0) {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x2b8) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00013e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_unlock_00027614)(puVar1 + 0x2a0);
  return;
}



// ==== rts_osd2_get_adma_copy @ 00013e10 size=76

undefined4 rts_osd2_get_adma_copy(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_00027598 + 0x5d30;
    (*(code *)PTR___assert_000275b8)(param_1,PTR_00027598 + 0x5d38,0x4ba,PTR_00027598 + 0x6228);
  }
  return *(undefined4 *)(param_1 + 0x2b8);
}



// ==== rts_osd2_set_epoll_hook @ 00013e5c size=136

void rts_osd2_set_epoll_hook(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_osd2_ewl_set_epoll_hook_0002767c;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_00027598 + 0x5d30);
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6158,PTR_00027598 + 0x6210,0x4c4,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000275b8;
    (*(code *)PTR___assert_000275b8)(param_1,PTR_00027598 + 0x5d38,0x4c4,PTR_00027598 + 0x61f8);
  }
                    /* WARNING: Could not recover jumptable at 0x00013edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1);
  return;
}



// ==== rts_osd2_check_done @ 00013ee4 size=136

void rts_osd2_check_done(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_osd2_ewl_check_done_000275ec;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_00027598 + 0x5d30);
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6158,PTR_00027598 + 0x61e4,0x4cd,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000275b8;
    (*(code *)PTR___assert_000275b8)(param_1,PTR_00027598 + 0x5d38,0x4cd,PTR_00027598 + 0x61d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00013f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1);
  return;
}



// ==== rts_osd2_make_rdy @ 00013f6c size=136

void rts_osd2_make_rdy(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_osd2_ewl_make_rdy_00027600;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_00027598 + 0x5d30);
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6158,PTR_00027598 + 0x61bc,0x4d6,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000275b8;
    (*(code *)PTR___assert_000275b8)(param_1,PTR_00027598 + 0x5d38,0x4d6,PTR_00027598 + 25000);
  }
                    /* WARNING: Could not recover jumptable at 0x00013fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1);
  return;
}



// ==== rts_osd2_use_sigio @ 00013ff4 size=136

void rts_osd2_use_sigio(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_osd2_ewl_use_sigio_0002765c;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_00027598 + 0x5d30);
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6158,PTR_00027598 + 0x6194,0x4df,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000275b8;
    (*(code *)PTR___assert_000275b8)(param_1,PTR_00027598 + 0x5d38,0x4df,PTR_00027598 + 0x6180);
  }
                    /* WARNING: Could not recover jumptable at 0x00014074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1);
  return;
}



// ==== rts_osd2_set_register @ 00014080 size=356

void rts_osd2_set_register(int param_1,undefined *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *unaff_s0;
  int iVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(PTR_DAT_0002758c + 0x7098);
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    if ((undefined *)*puVar1 == param_2) {
      unaff_s0 = (undefined4 *)((int)(PTR_DAT_0002758c + 0x7098) + iVar5 * 6 * 4);
      if (param_1 == 0) goto LAB_00014100;
      goto LAB_00014120;
    }
    puVar1 = puVar1 + 6;
    iVar5 = iVar6;
  } while (iVar6 != 0x29);
  if (param_1 == 0) {
LAB_00014100:
    param_2 = PTR_00027598 + 0x64f4;
    (*(code *)PTR___assert_000275b8)(PTR_00027598 + 0x64f0,param_2,0x84,PTR_00027598 + 0x69e8);
LAB_00014120:
    if ((unaff_s0[4] & 2) != 0) {
      uVar2 = (*(code *)PTR_osd2_ewl_read_reg_00027650)(param_1,unaff_s0[1]);
                    /* WARNING: Could not recover jumptable at 0x000141b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_osd2_ewl_write_reg_0002762c)
                (param_1,unaff_s0[1],
                 uVar2 & ~unaff_s0[2] | param_3 << (unaff_s0[3] & 0x1f) & unaff_s0[2]);
      return;
    }
    uVar4 = 0x8c;
    puVar3 = PTR_00027598 + 0x657c;
  }
  else {
    uVar4 = 0x87;
    puVar3 = PTR_00027598 + 0x6558;
  }
  (*(code *)PTR_rts_log_00027630)(4,puVar3,PTR_00027598 + 0x69d0,uVar4,param_2);
  return;
}



// ==== rts_osd2_get_register @ 000141e4 size=288

uint rts_osd2_get_register(int param_1,undefined *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *unaff_s0;
  int iVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(PTR_DAT_0002758c + 0x7098);
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    if ((undefined *)*puVar1 == param_2) {
      unaff_s0 = (undefined4 *)((int)(PTR_DAT_0002758c + 0x7098) + iVar5 * 6 * 4);
      if (param_1 != 0) goto LAB_00014274;
      goto LAB_00014254;
    }
    puVar1 = puVar1 + 6;
    iVar5 = iVar6;
  } while (iVar6 != 0x29);
  if (param_1 == 0) {
LAB_00014254:
    param_2 = PTR_00027598 + 0x64f4;
    (*(code *)PTR___assert_000275b8)(PTR_00027598 + 0x64f0,param_2,0x9a,PTR_00027598 + 0x69b8);
LAB_00014274:
    if ((unaff_s0[4] & 1) != 0) {
      uVar2 = (*(code *)PTR_osd2_ewl_read_reg_00027650)();
      return (uVar2 & unaff_s0[2]) >> (unaff_s0[3] & 0x1f);
    }
    uVar4 = 0xa2;
    puVar3 = PTR_00027598 + 0x65a4;
  }
  else {
    uVar4 = 0x9d;
    puVar3 = PTR_00027598 + 0x6558;
  }
  (*(code *)PTR_rts_log_00027630)(4,puVar3,PTR_00027598 + 0x69a0,uVar4,param_2);
  return 0;
}



// ==== rts_osd2_set_cmd @ 000144b0 size=368

void rts_osd2_set_cmd(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  iVar2 = (*(code *)(PTR_00027598 + 0x4440))(param_2);
  if (param_1 == 0) {
    iVar2 = (*(code *)PTR___assert_000275b8)
                      (PTR_00027598 + 0x6b2c,PTR_00027598 + 0x6a00,0x5b,PTR_00027598 + 0x6c4c);
  }
  if (iVar2 == 0) {
    uVar5 = 0x5e;
    puVar4 = PTR_00027598 + 0x6a5c;
  }
  else {
    if ((*(byte *)(iVar2 + 9) & 2) != 0) {
      bVar1 = *(byte *)(iVar2 + 1);
      uVar3 = (*(code *)(PTR_00027598 + 0x4480))(param_1,(bVar1 & 0x3f) << 2);
      uVar3 = uVar3 & ~*(uint *)(iVar2 + 4) |
              param_3 << (*(byte *)(iVar2 + 8) & 0x1f) & *(uint *)(iVar2 + 4);
      *(char *)(param_1 + (uint)bVar1 * 4) = (char)uVar3;
      *(char *)(param_1 + (uint)*(byte *)(iVar2 + 1) * 4 + 1) = (char)(uVar3 >> 8);
      *(char *)(param_1 + (uint)*(byte *)(iVar2 + 1) * 4 + 2) = (char)(uVar3 >> 0x10);
      *(char *)(param_1 + (uint)*(byte *)(iVar2 + 1) * 4 + 3) = (char)(uVar3 >> 0x18);
      return;
    }
    uVar5 = 99;
    puVar4 = PTR_00027598 + 0x6a7c;
  }
  (*(code *)PTR_rts_log_00027630)(4,puVar4,PTR_00027598 + 0x6c38,uVar5,param_2);
  return;
}



// ==== rts_osd2_get_cmd @ 00014620 size=272

uint rts_osd2_get_cmd(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar1 = (*(code *)(PTR_00027598 + 0x4440))(param_2);
  if (param_1 == 0) {
    iVar1 = (*(code *)PTR___assert_000275b8)
                      (PTR_00027598 + 0x6b2c,PTR_00027598 + 0x6a00,0x74,PTR_00027598 + 0x6c24);
  }
  if (iVar1 == 0) {
    uVar4 = 0x77;
    puVar3 = PTR_00027598 + 0x6a5c;
  }
  else {
    if ((*(byte *)(iVar1 + 9) & 1) != 0) {
      uVar2 = (*(code *)(PTR_00027598 + 0x4480))(param_1,(*(byte *)(iVar1 + 1) & 0x3f) << 2);
      return (uVar2 & *(uint *)(iVar1 + 4)) >> (*(byte *)(iVar1 + 8) & 0x1f);
    }
    uVar4 = 0x7c;
    puVar3 = PTR_00027598 + 0x6aa0;
  }
  (*(code *)PTR_rts_log_00027630)(4,puVar3,PTR_00027598 + 0x6c10,uVar4,param_2);
  return 0;
}



// ==== rts_dump_frame_cmd @ 00014730 size=184

void rts_dump_frame_cmd(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  puVar1 = PTR_00027598;
  puVar6 = PTR_00027598 + 0x6ac4;
  iVar4 = 0;
  do {
    iVar2 = (*(code *)(puVar1 + 0x4440))(iVar4);
    iVar5 = iVar4 + 1;
    uVar3 = (*(code *)PTR_rts_osd2_get_cmd_0002761c)(param_1,iVar4);
    (*(code *)PTR_rts_log_00027630)(1,puVar6,uVar3,*(undefined4 *)(iVar2 + 0xc));
    iVar4 = iVar5;
  } while (iVar5 != 7);
  return;
}



// ==== rts_dump_blk_cmd @ 000147e8 size=196

void rts_dump_blk_cmd(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  
  puVar1 = PTR_00027598;
  puVar5 = PTR_00027598 + 0x6ad8;
  uVar6 = 0xfffffffd;
  iVar4 = 0;
  do {
    if (3 < uVar6) {
      iVar2 = (*(code *)(puVar1 + 0x4440))(iVar4);
      uVar3 = (*(code *)PTR_rts_osd2_get_cmd_0002761c)(param_1,iVar4);
      (*(code *)PTR_rts_log_00027630)(1,puVar5,uVar3,*(undefined4 *)(iVar2 + 0xc));
    }
    iVar2 = iVar4 + 1;
    uVar6 = iVar4 - 2;
    iVar4 = iVar2;
  } while (iVar2 != 0x10);
  return;
}



