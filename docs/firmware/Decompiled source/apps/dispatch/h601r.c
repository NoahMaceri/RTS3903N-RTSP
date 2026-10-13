/* dispatch — "h601r" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "dispatch.h"

// ==== h601r_stop @ 0040ad3c size=84

undefined4 h601r_stop(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ssp_uart_send_cmd(3,0);
  uVar2 = 0;
  if (iVar1 < 0) {
    FUN_00410740("ptz_ctl.c","h601r_stop",0x441,"PTZ stop timeout");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== h601r_get_position @ 0040ad90 size=168

undefined4 h601r_get_position(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_00426414 < 0) {
    FUN_00410740("ptz_ctl.c","h601r_get_position",0x431,"PTZ not open");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = ssp_uart_send_cmd(1,param_1);
    if (iVar1 < 0) {
      FUN_00410740("ptz_ctl.c","h601r_get_position",0x436,"H601R PTZ not support get position \n");
    }
    uVar2 = 0;
    *(undefined4 *)(DAT_0042640c + 0x8b4) = *param_1;
  }
  return uVar2;
}



// ==== h601r_cruise_start @ 0040cbc4 size=968

/* WARNING: Type propagation algorithm not settling */

undefined4 h601r_cruise_start(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_80 [24];
  
  if (DAT_00426aac == 0) {
    DAT_0042634c = 0;
    DAT_00426348 = 0;
    DAT_00426344 = 0;
    DAT_00426aac = 1;
  }
  piVar8 = (int *)(DAT_0042640c + 0x8b8);
  piVar1 = local_80;
  do {
    iVar5 = *piVar8;
    iVar4 = piVar8[1];
    iVar3 = piVar8[2];
    iVar2 = piVar8[3];
    piVar8 = piVar8 + 4;
    *piVar1 = iVar5;
    piVar1[1] = iVar4;
    piVar1[2] = iVar3;
    piVar1[3] = iVar2;
    piVar1 = piVar1 + 4;
  } while (piVar8 != (int *)(DAT_0042640c + 0x918));
  piVar1 = local_80;
  iVar2 = 0;
  do {
    piVar1 = piVar1 + 3;
    iVar2 = iVar2 + 1;
    iVar3 = iVar2;
    piVar8 = piVar1;
    do {
      while( true ) {
        iVar5 = piVar8[1];
        iVar4 = piVar1[-2];
        if (DAT_00426344 != 0) break;
        if (iVar5 < iVar4) goto LAB_0040cdb4;
        if ((iVar5 == iVar4) && (iVar4 = piVar1[-1], piVar8[2] < iVar4)) {
          iVar7 = *piVar8;
          goto LAB_0040ccc4;
        }
LAB_0040cc7c:
        iVar3 = iVar3 + 1;
        piVar8 = piVar8 + 3;
        if (7 < iVar3) goto LAB_0040ccf8;
      }
      if (iVar4 < iVar5) {
LAB_0040cdb4:
        iVar7 = piVar1[-3];
        piVar1[-3] = *piVar8;
        iVar5 = piVar1[-1];
        piVar1[-2] = piVar8[1];
        piVar1[-1] = piVar8[2];
        *piVar8 = iVar7;
        piVar8[1] = iVar4;
        piVar8[2] = iVar5;
        goto LAB_0040cc7c;
      }
      if ((iVar5 != iVar4) || (iVar4 = piVar1[-1], piVar8[2] <= iVar4)) goto LAB_0040cc7c;
      iVar7 = *piVar8;
LAB_0040ccc4:
      iVar3 = iVar3 + 1;
      iVar6 = piVar1[-3];
      piVar1[-3] = iVar7;
      piVar1[-2] = piVar8[1];
      piVar1[-1] = piVar8[2];
      piVar8[2] = iVar4;
      *piVar8 = iVar6;
      piVar8[1] = iVar5;
      piVar8 = piVar8 + 3;
    } while (iVar3 < 8);
LAB_0040ccf8:
    if (iVar2 == 7) {
      while( true ) {
        while ((*(uint *)(DAT_0042640c + 0x18c) <= DAT_00426a94 && (DAT_00426a98 == 0))) {
          FUN_00410ed0(500);
        }
        iVar2 = FUN_0040ca84();
        if (iVar2 != 2) {
          DAT_00426a9c = 0;
          return 0;
        }
        if (local_80[DAT_0042634c * 3] == 1) {
          if (DAT_00426340 == 0) {
            FUN_0040b328(local_80[DAT_0042634c * 3 + 1],local_80[DAT_0042634c * 3 + 2]);
            FUN_0040b12c(*(int *)(DAT_0042640c + 0x8a4) * 10,0);
            DAT_0042633c = DAT_0042633c + 1;
          }
          DAT_00426340 = 0;
        }
        if (DAT_00426a98 == 1) break;
        DAT_0042634c = DAT_0042634c + 1;
        if (7 < DAT_0042634c) {
          DAT_00426348 = DAT_00426348 + 1;
          DAT_0042634c = 0;
          DAT_00426340 = 1;
          if (DAT_00426344 != 0) {
            DAT_00426344 = 0;
            if (0x1d < DAT_0042633c) {
              FUN_00410740("ptz_ctl.c","h601r_cruise_start",0x772,"\n\n\ngoto default point\n\n\n");
              FUN_0040b240();
              if ((uint)(*(int *)(DAT_0042640c + 0x988) - DAT_00426338) < 0x14) {
                DAT_0042633c = 0;
              }
              else {
                DAT_00426338 = *(int *)(DAT_0042640c + 0x988);
                FUN_0040b1dc();
                DAT_0042633c = 0;
              }
            }
            return 0;
          }
          DAT_00426344 = 1;
          return 0;
        }
        FUN_00410ed0(100);
      }
      return 0;
    }
  } while( true );
}



