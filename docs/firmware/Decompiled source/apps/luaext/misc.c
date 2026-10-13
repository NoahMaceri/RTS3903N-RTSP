/* luaext — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "luaext.h"

// ==== _DT_INIT @ 000110ac size=120

void _DT_INIT(void)

{
  FUN_000112a0();
  FUN_00017930();
  return;
}



// ==== entry @ 00011130 size=72

void processEntry entry(void)

{
  if (((undefined *)0x6 < PTR___DT_PLTGOT_0002ad68 + (3 - (int)(PTR_DAT_0002ad6c + -0x52a0))) &&
     (PTR__ITM_deregisterTMCloneTable_0002ae50 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_deregisterTMCloneTable_0002ae50)();
    return;
  }
  return;
}



// ==== md5_init @ 0001654c size=48

void md5_init(void)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  
  iVar4 = 0xaa;
  puVar1 = (uint *)(PTR_DAT_0002ad7c + -0x5650);
  puVar3 = PTR_DAT_0002ad7c + -0x563c;
  puVar9 = PTR___assert_0002ade8;
  (*(code *)PTR___assert_0002ade8)();
  if (puVar1 == (uint *)0x0) {
    uVar5 = 0xbe;
    iVar4 = *(int *)(puVar9 + 0x14800) + -0x5650;
    goto LAB_000166ec;
  }
  if (puVar3 != (undefined *)0x0) {
    uVar2 = puVar1[6];
    if (uVar2 < 0x41) {
      if (0 < iVar4) {
        iVar6 = *(int *)(puVar9 + 0x147fc);
        while( true ) {
          if ((uVar2 == 0) && (0x3f < iVar4)) {
            (*(code *)(iVar6 + 0x56d0))(puVar1,puVar3);
            iVar4 = iVar4 + -0x40;
            uVar2 = *puVar1;
            uVar8 = uVar2 + 0x200;
            *puVar1 = uVar8;
            puVar1[1] = (uint)(uVar8 < uVar2) + puVar1[1];
            puVar3 = puVar3 + 0x40;
          }
          else {
            iVar7 = 0x40 - uVar2;
            if (iVar4 < (int)(0x40 - uVar2)) {
              iVar7 = iVar4;
            }
            (**(code **)(puVar9 + 0x14954))((undefined *)((int)puVar1 + uVar2 + 0x1c),puVar3,iVar7);
            uVar2 = puVar1[6];
            puVar3 = puVar3 + iVar7;
            iVar4 = iVar4 - iVar7;
            puVar1[6] = iVar7 + uVar2;
            if (iVar7 + uVar2 == 0x40) {
              (*(code *)(iVar6 + 0x56d0))(puVar1,puVar1 + 7);
              uVar2 = *puVar1;
              uVar8 = uVar2 + 0x200;
              *puVar1 = uVar8;
              puVar1[1] = (uint)(uVar8 < uVar2) + puVar1[1];
              puVar1[6] = 0;
            }
          }
          if (iVar4 < 1) break;
          uVar2 = puVar1[6];
        }
      }
      return;
    }
    do {
      uVar5 = 0xc0;
      iVar4 = *(int *)(puVar9 + 0x14800) + -0x560c;
LAB_000166ec:
      (**(code **)(puVar9 + 0x1486c))
                (iVar4,*(int *)(puVar9 + 0x14800) + -0x563c,uVar5,
                 *(int *)(puVar9 + 0x14800) + -0x5594);
    } while( true );
  }
  uVar5 = 0xbf;
  iVar4 = *(int *)(puVar9 + 0x14800) + -0x5620;
  goto LAB_000166ec;
}



// ==== md5_done @ 00016724 size=504

void md5_done(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  
  if (param_1 == (uint *)0x0) {
    uVar6 = 0xe1;
    puVar3 = PTR_DAT_0002ad7c + -0x5650;
    goto LAB_000168e4;
  }
  if (param_2 == 0) {
    uVar6 = 0xe2;
    puVar3 = PTR_DAT_0002ad7c + -0x55ec;
    goto LAB_000168e4;
  }
  uVar1 = param_1[6];
  if (0x3f < uVar1) {
    do {
      uVar6 = 0xe3;
      puVar3 = PTR_DAT_0002ad7c + -0x55d8;
LAB_000168e4:
      (*(code *)PTR___assert_0002ade8)
                (puVar3,PTR_DAT_0002ad7c + -0x563c,uVar6,PTR_DAT_0002ad7c + -0x55b0);
    } while( true );
  }
  uVar8 = uVar1 + 1;
  uVar5 = uVar1 * 8 + *param_1;
  uVar2 = (uint)(uVar5 < uVar1 * 8) + param_1[1];
  *param_1 = uVar5;
  param_1[1] = uVar2;
  param_1[6] = uVar8;
  *(undefined1 *)((int)param_1 + uVar1 + 0x1c) = 0x80;
  if (uVar8 < 0x39) {
    if (uVar8 == 0x38) {
      pcVar7 = (code *)(PTR_0002ad78 + 0x56d0);
      goto LAB_00016808;
    }
    pcVar7 = (code *)(PTR_0002ad78 + 0x56d0);
  }
  else {
    if (uVar8 != 0x40) {
      do {
        uVar1 = uVar8 + 1;
        *(undefined1 *)((int)param_1 + uVar8 + 0x1c) = 0;
        uVar8 = uVar1;
      } while (uVar1 != 0x40);
      param_1[6] = 0x40;
    }
    pcVar7 = (code *)(PTR_0002ad78 + 0x56d0);
    (*pcVar7)(param_1,param_1 + 7);
    uVar5 = *param_1;
    uVar2 = param_1[1];
    param_1[6] = 0;
    uVar8 = 0;
  }
  do {
    uVar1 = uVar8 + 1;
    *(undefined1 *)((int)param_1 + uVar8 + 0x1c) = 0;
    uVar8 = uVar1;
  } while (uVar1 < 0x38);
  param_1[6] = uVar1;
LAB_00016808:
  *(char *)(param_1 + 0x16) = (char)uVar2;
  *(char *)((int)param_1 + 0x5a) = (char)(uVar2 >> 0x10);
  *(char *)((int)param_1 + 0x5b) = (char)(uVar2 >> 0x18);
  *(char *)((int)param_1 + 0x57) = (char)(uVar5 >> 0x18);
  *(char *)((int)param_1 + 0x59) = (char)(uVar2 >> 8);
  *(char *)((int)param_1 + 0x56) = (char)(uVar5 >> 0x10);
  *(char *)((int)param_1 + 0x55) = (char)(uVar5 >> 8);
  *(char *)(param_1 + 0x15) = (char)uVar5;
  (*pcVar7)(param_1,param_1 + 7);
  iVar9 = 0;
  puVar4 = (undefined1 *)(param_2 + 3);
  do {
    iVar9 = iVar9 + 1;
    *puVar4 = *(undefined1 *)((int)param_1 + 0xb);
    puVar4[-1] = (char)*(undefined2 *)((int)param_1 + 10);
    puVar4[-2] = (char)(param_1[2] >> 8);
    puVar4[-3] = (char)param_1[2];
    puVar4 = puVar4 + 4;
    param_1 = param_1 + 1;
  } while (iVar9 != 4);
  return;
}



// ==== sha1_init @ 0001724c size=48

void sha1_init(void)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  
  iVar4 = 0x90;
  puVar1 = (uint *)(PTR_DAT_0002ad7c + -0x554c);
  puVar3 = PTR_DAT_0002ad7c + -0x5538;
  puVar9 = PTR___assert_0002ade8;
  (*(code *)PTR___assert_0002ade8)();
  if (puVar1 == (uint *)0x0) {
    uVar5 = 0xa5;
    iVar4 = *(int *)(puVar9 + 0x13b00) + -0x554c;
    goto LAB_000173ec;
  }
  if (puVar3 != (undefined *)0x0) {
    uVar2 = puVar1[7];
    if (uVar2 < 0x41) {
      if (0 < iVar4) {
        iVar6 = *(int *)(puVar9 + 0x13afc);
        while( true ) {
          if ((uVar2 == 0) && (0x3f < iVar4)) {
            (*(code *)(iVar6 + 0x6c30))(puVar1,puVar3);
            iVar4 = iVar4 + -0x40;
            uVar2 = *puVar1;
            uVar8 = uVar2 + 0x200;
            *puVar1 = uVar8;
            puVar1[1] = (uint)(uVar8 < uVar2) + puVar1[1];
            puVar3 = puVar3 + 0x40;
          }
          else {
            iVar7 = 0x40 - uVar2;
            if (iVar4 < (int)(0x40 - uVar2)) {
              iVar7 = iVar4;
            }
            (**(code **)(puVar9 + 0x13c54))((undefined *)((int)puVar1 + uVar2 + 0x20),puVar3,iVar7);
            uVar2 = puVar1[7];
            puVar3 = puVar3 + iVar7;
            iVar4 = iVar4 - iVar7;
            puVar1[7] = iVar7 + uVar2;
            if (iVar7 + uVar2 == 0x40) {
              (*(code *)(iVar6 + 0x6c30))(puVar1,puVar1 + 8);
              uVar2 = *puVar1;
              uVar8 = uVar2 + 0x200;
              *puVar1 = uVar8;
              puVar1[1] = (uint)(uVar8 < uVar2) + puVar1[1];
              puVar1[7] = 0;
            }
          }
          if (iVar4 < 1) break;
          uVar2 = puVar1[7];
        }
      }
      return;
    }
    do {
      uVar5 = 0xa7;
      iVar4 = *(int *)(puVar9 + 0x13b00) + -0x5530;
LAB_000173ec:
      (**(code **)(puVar9 + 0x13b6c))
                (iVar4,*(int *)(puVar9 + 0x13b00) + -0x5538,uVar5,
                 *(int *)(puVar9 + 0x13b00) + -0x54d4);
    } while( true );
  }
  uVar5 = 0xa6;
  iVar4 = *(int *)(puVar9 + 0x13b00) + -0x5620;
  goto LAB_000173ec;
}



// ==== sha1_done @ 00017424 size=504

void sha1_done(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1 == (uint *)0x0) {
    uVar5 = 200;
    puVar3 = PTR_DAT_0002ad7c + -0x554c;
    goto LAB_000175e4;
  }
  if (param_2 == (undefined1 *)0x0) {
    uVar5 = 0xc9;
    puVar3 = PTR_DAT_0002ad7c + -0x55ec;
    goto LAB_000175e4;
  }
  uVar1 = param_1[7];
  if (0x3f < uVar1) {
    do {
      uVar5 = 0xca;
      puVar3 = PTR_DAT_0002ad7c + -0x550c;
LAB_000175e4:
      (*(code *)PTR___assert_0002ade8)
                (puVar3,PTR_DAT_0002ad7c + -0x5538,uVar5,PTR_DAT_0002ad7c + -0x54e0);
    } while( true );
  }
  uVar7 = uVar1 + 1;
  uVar4 = uVar1 * 8 + *param_1;
  uVar2 = (uint)(uVar4 < uVar1 * 8) + param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar2;
  param_1[7] = uVar7;
  *(undefined1 *)((int)param_1 + uVar1 + 0x20) = 0x80;
  if (uVar7 < 0x39) {
    if (uVar7 == 0x38) {
      pcVar6 = (code *)(PTR_0002ad78 + 0x6c30);
      goto LAB_00017508;
    }
    pcVar6 = (code *)(PTR_0002ad78 + 0x6c30);
  }
  else {
    if (uVar7 != 0x40) {
      do {
        uVar1 = uVar7 + 1;
        *(undefined1 *)((int)param_1 + uVar7 + 0x20) = 0;
        uVar7 = uVar1;
      } while (uVar1 != 0x40);
      param_1[7] = 0x40;
    }
    pcVar6 = (code *)(PTR_0002ad78 + 0x6c30);
    (*pcVar6)(param_1,param_1 + 8);
    uVar4 = *param_1;
    uVar2 = param_1[1];
    param_1[7] = 0;
    uVar7 = 0;
  }
  do {
    uVar1 = uVar7 + 1;
    *(undefined1 *)((int)param_1 + uVar7 + 0x20) = 0;
    uVar7 = uVar1;
  } while (uVar1 < 0x38);
  param_1[7] = uVar1;
LAB_00017508:
  *(char *)((int)param_1 + 0x5b) = (char)uVar2;
  *(char *)((int)param_1 + 0x59) = (char)(uVar2 >> 0x10);
  *(char *)(param_1 + 0x16) = (char)(uVar2 >> 0x18);
  *(char *)(param_1 + 0x17) = (char)(uVar4 >> 0x18);
  *(char *)((int)param_1 + 0x5a) = (char)(uVar2 >> 8);
  *(char *)((int)param_1 + 0x5d) = (char)(uVar4 >> 0x10);
  *(char *)((int)param_1 + 0x5e) = (char)(uVar4 >> 8);
  *(char *)((int)param_1 + 0x5f) = (char)uVar4;
  (*pcVar6)(param_1,param_1 + 8);
  iVar8 = 0;
  do {
    iVar8 = iVar8 + 1;
    *param_2 = *(undefined1 *)((int)param_1 + 0xb);
    param_2[1] = (char)*(undefined2 *)((int)param_1 + 10);
    param_2[2] = (char)(param_1[2] >> 8);
    param_2[3] = (char)param_1[2];
    param_2 = param_2 + 4;
    param_1 = param_1 + 1;
  } while (iVar8 != 5);
  return;
}



// ==== _DT_FINI @ 00017df0 size=80

void _DT_FINI(void)

{
  FUN_000111c8();
  return;
}



