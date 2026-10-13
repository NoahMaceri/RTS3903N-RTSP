/* librtsaec — "rtaecns" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsaec.h"

// ==== RTAecNs_API_Process @ 00020d44 size=132

int RTAecNs_API_Process(int param_1,int param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int in_v0;
  int in_v1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int in_t5;
  int in_t7;
  uint in_t8;
  int unaff_gp;
  
  iVar4 = in_t8 << 1;
  uVar3 = ((param_4 >> 0x1b) * in_t8 * 2 + (int)((ulonglong)in_t8 * (ulonglong)in_t8 >> 0x20)) *
          0x40 | (uint)((ulonglong)in_t8 * (ulonglong)in_t8) >> 0x1a;
  uVar5 = (int)((ulonglong)((longlong)in_v1 * (longlong)iVar4) >> 0x20) << 6 |
          (uint)((longlong)in_v1 * (longlong)iVar4) >> 0x1a;
  lVar1 = (longlong)in_v1 *
          (longlong)
          (int)((int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20) << 6 |
               (uint)((longlong)iVar4 * (longlong)iVar4) >> 0x1a);
  lVar1 = (longlong)*(int *)(*(int *)(unaff_gp + -0x7914) + param_1) *
          (longlong)
          ((((int)uVar5 >> 0x1f) -
           (int)((ulonglong)((longlong)(int)uVar5 * (longlong)param_2) >> 0x20)) + in_v1 +
          (int)((int)((ulonglong)lVar1 >> 0x20) << 6 | (uint)lVar1 >> 0x1a) / 0x78);
  lVar2 = (longlong)in_t5 *
          (longlong)
          (int)(((in_t7 - in_t8) +
                ((int)((ulonglong)((longlong)(int)uVar3 * (longlong)param_2) >> 0x20) -
                ((int)uVar3 >> 0x1f))) -
               (int)(((param_4 >> 0x1b) * uVar3 + ((int)uVar3 >> 0x1f) * in_t8 +
                     (int)((ulonglong)in_t8 * (ulonglong)uVar3 >> 0x20)) * 0x40 |
                    (uint)((ulonglong)in_t8 * (ulonglong)uVar3) >> 0x1a) / 0x5a);
  return (((int)((ulonglong)lVar2 >> 0x20) << 6 | (uint)lVar2 >> 0x1a) +
         ((int)((ulonglong)lVar1 >> 0x20) << 6 | (uint)lVar1 >> 0x1a)) * in_v0;
}



// ==== RTAecNs_API_Set @ 00020dc8 size=228

int RTAecNs_API_Set(uint param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int in_v0;
  int in_v1;
  int in_t0;
  int in_t2;
  int in_t4;
  int in_t5;
  int in_t6;
  int in_t7;
  uint in_t8;
  
  lVar1 = (longlong)in_t6 *
          (longlong)
          (((in_t2 >> 0x1f) - (int)((ulonglong)((longlong)in_t2 * (longlong)param_2) >> 0x20)) +
           in_v1 + (int)((int)((ulonglong)((longlong)in_v1 * (longlong)in_t0) >> 0x20) << 6 |
                        (uint)((longlong)in_v1 * (longlong)in_t0) >> 0x1a) / 0x78);
  lVar2 = (longlong)in_t5 *
          (longlong)
          ((in_t7 + ((int)((ulonglong)((longlong)(int)param_1 * (longlong)param_2) >> 0x20) -
                    param_4)) -
          (int)((in_t4 + param_3 + (int)((ulonglong)in_t8 * (ulonglong)param_1 >> 0x20)) * 0x40 |
               (uint)((ulonglong)in_t8 * (ulonglong)param_1) >> 0x1a) / 0x5a);
  return (((int)((ulonglong)lVar2 >> 0x20) << 6 | (uint)lVar2 >> 0x1a) +
         ((int)((ulonglong)lVar1 >> 0x20) << 6 | (uint)lVar1 >> 0x1a)) * in_v0;
}



// ==== RTAecNs_API_free @ 00020fbc size=260

int RTAecNs_API_free(undefined4 param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint in_v0;
  uint uVar3;
  int in_v1;
  uint uVar4;
  int in_t0;
  int in_t2;
  int in_t3;
  int in_t4;
  int in_t5;
  int in_t6;
  uint in_t8;
  int in_lo;
  
  uVar3 = (in_lo * 2 + in_v1) * 0x40 | in_v0;
  uVar4 = (int)((ulonglong)((longlong)in_t0 * (longlong)param_3) >> 0x20) << 6 |
          (uint)((longlong)in_t0 * (longlong)param_3) >> 0x1a;
  lVar1 = (longlong)in_t0 *
          (longlong)
          (int)((int)((ulonglong)((longlong)param_3 * (longlong)param_3) >> 0x20) << 6 |
               (uint)((longlong)param_3 * (longlong)param_3) >> 0x1a);
  lVar1 = (longlong)in_t5 *
          (longlong)
          ((((int)uVar4 >> 0x1f) -
           (int)((ulonglong)((longlong)(int)uVar4 * (longlong)in_t2) >> 0x20)) + in_t0 +
          (int)((int)((ulonglong)lVar1 >> 0x20) << 6 | (uint)lVar1 >> 0x1a) / 0x78);
  lVar2 = (longlong)in_t4 *
          (longlong)
          ((in_t6 + ((int)((ulonglong)((longlong)(int)uVar3 * (longlong)in_t2) >> 0x20) -
                    ((int)uVar3 >> 0x1f))) -
          (int)((in_t3 * uVar3 + ((int)uVar3 >> 0x1f) * in_t8 +
                (int)((ulonglong)in_t8 * (ulonglong)uVar3 >> 0x20)) * 0x40 |
               (uint)((ulonglong)in_t8 * (ulonglong)uVar3) >> 0x1a) / 0x5a);
  return ((int)((ulonglong)lVar2 >> 0x20) << 6 | (uint)lVar2 >> 0x1a) -
         ((int)((ulonglong)lVar1 >> 0x20) << 6 | (uint)lVar1 >> 0x1a);
}



// ==== RTAecNs_API_context_Create @ 000210c0 size=48

int RTAecNs_API_context_Create(void)

{
  uint in_v0;
  int in_t4;
  int in_t8;
  int in_hi;
  
  return ((int)((ulonglong)((longlong)in_t4 * (longlong)in_t8) >> 0x20) << 6 |
         (uint)((longlong)in_t4 * (longlong)in_t8) >> 0x1a) - (in_hi << 6 | in_v0 >> 0x1a);
}



// ==== RTAecNs_API_Process @ 00030d44 size=132

undefined4 RTAecNs_API_Process(int param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar4 = *param_2;
    iVar5 = 0;
    iVar3 = *param_3;
    do {
      puVar2 = (undefined4 *)(iVar4 + iVar5);
      puVar1 = (undefined4 *)(iVar3 + iVar5);
      iVar5 = iVar5 + 4;
      *param_4 = *puVar2;
      param_4[1] = *puVar1;
      param_4 = param_4 + 2;
    } while (iVar5 != 0x400);
    return 0;
  }
  (*(code *)PTR_IPCam_038_000511cc)(param_4,param_2,param_3,*(undefined4 *)(param_1 + 0x18));
  return 0;
}



// ==== RTAecNs_API_Set @ 00030dc8 size=80

undefined4 RTAecNs_API_Set(void)

{
  undefined4 uVar1;
  uint in_a3;
  
  if (in_a3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00030e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(IPCam_410 + *(int *)(PTR_DAT_00050bfc + in_a3 * 4 + -0x4310) + 0x7490))();
    return uVar1;
  }
  return 0xffffffff;
}



// ==== RTAecNs_API_free @ 00030fbc size=260

void RTAecNs_API_free(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_IPCam_722_00050e24;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
  (*(code *)PTR_IPCam_043_00050e5c)(*(int *)(param_1 + 0x18));
  (*(code *)PTR_IPCam_700_00050c28)(*(undefined4 *)(param_1 + 0x18));
  puVar1 = PTR_IPCam_700_00050c28;
  *(undefined4 *)(param_1 + 0x18) = 0;
  (*(code *)puVar1)(param_1);
  if (*(int *)puVar2 == 0x1757) {
    (*(code *)PTR_IPCam_724_000514ac)();
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)PTR_IPCam_723_00050f8c = 0;
  }
  if (*(int *)PTR_IPCam_782_000512d4 != 0x99e) {
                    /* WARNING: Could not recover jumptable at 0x00031060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_printf_000514ec)(PTR_DAT_00050bfc + -0x42e0,uVar3);
    return;
  }
  (*(code *)PTR_IPCam_924_00050cb4)();
                    /* WARNING: Could not recover jumptable at 0x00031098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_printf_000514ec)(PTR_DAT_00050bfc + -0x42e0,uVar3);
  return;
}



// ==== RTAecNs_API_context_Create @ 000310c0 size=292

int RTAecNs_API_context_Create(undefined4 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)PTR_IPCam_722_00050e24 = 0;
  puVar1 = PTR_IPCam_923_00051460;
  *(undefined4 *)PTR_IPCam_723_00050f8c = 0;
  uVar2 = (*(code *)puVar1)();
  if ((uVar2 & 0xffff) - 1 < 2) {
    iVar3 = (*(code *)PTR_IPCam_699_000512c8)(0x1c);
    iVar5 = iVar3;
    if (iVar3 != 0) {
      (*(code *)PTR_IPCam_057_00050c88)(iVar3);
      iVar4 = (*(code *)PTR_IPCam_058_00051088)(param_1,iVar3);
      if (iVar4 != 0) {
        (*(code *)PTR_printf_000514ec)(PTR_DAT_00050bfc + -0x42c0,param_1);
        (*(code *)PTR_RTAecNs_API_free_00050d40)(iVar3);
        iVar5 = 0;
        (*(code *)PTR_IPCam_700_00050c28)(iVar3);
      }
    }
    (*(code *)PTR_printf_000514ec)(PTR_DAT_00050bfc + -0x42a0,param_1);
    return iVar5;
  }
  (*(code *)PTR_puts_00051374)(PTR_DAT_00050bfc + -0x427c);
  return 0;
}



