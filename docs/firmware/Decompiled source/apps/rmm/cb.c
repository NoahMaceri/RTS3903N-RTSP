/* rmm — "cb" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== cb_full @ 00402590 size=40

void cb_full(void)

{
                    /* WARNING: Subroutine does not return */
  __assert("((void *)0) != pmngr","ringbuf.c",0xd3,"cb_full");
}



// ==== cb_empty @ 004025b8 size=40

void cb_empty(void)

{
                    /* WARNING: Subroutine does not return */
  __assert("((void *)0) != pmngr","ringbuf.c",0xde,"cb_empty");
}



// ==== cb_info @ 0040bcd4 size=96

void cb_info(int param_1,code *param_2)

{
  if (param_1 != 0) {
    (*param_2)("   --- pmngr:%p datalen=%d,readpos=%d,writepos=%d.\n",param_1,
               *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert("((void *)0) != pmngr","ringbuf.c",0x43,"cb_info");
}



// ==== cb_datalen @ 0040bd44 size=40

void cb_datalen(void)

{
                    /* WARNING: Subroutine does not return */
  __assert("((void *)0) != pmngr","ringbuf.c",200,"cb_datalen");
}



// ==== cb_write @ 0040bd98 size=320

uint cb_write(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert("((void *)0) != pmngr","ringbuf.c",0x8e,"cb_write");
  }
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar5 = param_1[1];
    uVar2 = iVar5 - param_1[2];
    if (iVar5 != param_1[2]) {
      uVar1 = param_1[4];
      if (param_3 <= uVar2) {
        uVar2 = param_3;
      }
      uVar4 = iVar5 - uVar1;
      if ((uVar1 < (uint)param_1[3]) || (uVar2 <= uVar4)) {
        memcpy(iVar3 + uVar1,param_2,uVar2);
        iVar3 = param_1[4];
      }
      else {
        memcpy(iVar3 + uVar1,param_2,uVar4);
        memcpy(*param_1,param_2 + uVar4,uVar2 - uVar4);
        iVar3 = param_1[4];
      }
      if (param_1[1] == 0) {
        trap(0x1c00);
      }
      param_1[2] = param_1[2] + uVar2;
      param_1[4] = (uVar2 + iVar3) % (uint)param_1[1];
      return uVar2;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __assert("((void *)0) != pmngr->bufptr","ringbuf.c",0x8f,"cb_write");
}



// ==== cb_read @ 0040befc size=276

uint cb_read(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert("((void *)0) != pmngr","ringbuf.c",0x5c,"cb_read");
  }
  iVar4 = *param_1;
  if (iVar4 != 0) {
    uVar1 = param_1[2];
    uVar2 = uVar1;
    if (uVar1 != 0) {
      uVar6 = param_1[1];
      iVar3 = param_1[3];
      uVar2 = param_3;
      if (uVar1 < param_3) {
        uVar2 = uVar1;
      }
      uVar5 = uVar6 - iVar3;
      if (param_2 != 0) {
        if (uVar5 < uVar2) {
          param_2 = memcpy(param_2,iVar4 + iVar3,uVar5);
          iVar4 = *param_1;
          param_2 = param_2 + uVar5;
          uVar1 = uVar2 - uVar5;
        }
        else {
          iVar4 = iVar4 + iVar3;
          uVar1 = uVar2;
        }
        memcpy(param_2,iVar4,uVar1);
        iVar3 = param_1[3];
        uVar6 = param_1[1];
        uVar1 = param_1[2];
      }
      if (uVar6 == 0) {
        trap(0x1c00);
      }
      param_1[2] = uVar1 - uVar2;
      param_1[3] = (iVar3 + uVar2) % uVar6;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __assert("((void *)0) != pmngr->bufptr","ringbuf.c",0x5d,"cb_read");
}



// ==== cb_init @ 0040c010 size=296

void cb_init(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert("((void *)0) != ppmngr","ringbuf.c",0xc,"cb_init");
  }
  if ((*param_1 != 0) || (param_2 == 0)) {
    return;
  }
  puVar1 = (undefined4 *)malloc(0x14);
  *param_1 = (int)puVar1;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert("((void *)0) != *ppmngr","ringbuf.c",0x19,"cb_init");
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  uVar2 = malloc(param_2);
  piVar3 = (int *)*param_1;
  *puVar1 = uVar2;
  if (*piVar3 != 0) {
    piVar3[1] = param_2;
    printf("ppmngr:%p, len:%d\n",piVar3,param_2);
    memset(*(undefined4 *)*param_1,0,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert("((void *)0) != (*ppmngr)->bufptr","ringbuf.c",0x1d,"cb_init");
}



// ==== cb_deinit @ 0040c138 size=128

void cb_deinit(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if ((int *)*param_1 != (int *)0x0) {
      iVar1 = *(int *)*param_1;
      if (iVar1 != 0) {
        free(iVar1);
        *(undefined4 *)*param_1 = 0;
        *(undefined4 *)(*param_1 + 4) = 0;
      }
      free();
      *param_1 = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert("((void *)0) != ppmngr","ringbuf.c",0x2a,"cb_deinit");
}



