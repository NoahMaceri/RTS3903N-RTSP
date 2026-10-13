/* p2p_tnp — "sll" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== sll_element_Allocate @ 0042d848 size=176

/* tnp::sll_element_Allocate(unsigned int, unsigned int) */

uint * tnp::sll_element_Allocate(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(*(code *)PTR_malloc_00468890)(0x14);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    uVar2 = (*(code *)PTR_malloc_00468890)(param_2);
    puVar1[2] = uVar2;
    if (uVar2 == 0) {
      (*(code *)PTR_free_004687a8)(puVar1);
      puVar1 = (uint *)0x0;
    }
    else {
      (*(code *)PTR_memset_00468810)(uVar2,0,param_2);
      puVar1[1] = param_2;
      *puVar1 = param_1;
    }
  }
  return puVar1;
}



// ==== sll_element_Free @ 0042d8f8 size=100

/* tnp::sll_element_Free(tnp::__the_SLL_Element*) */

void tnp::sll_element_Free(__the_SLL_Element *param_1)

{
  if (param_1 != (__the_SLL_Element *)0x0) {
    if (*(int *)(param_1 + 8) != 0) {
      (*(code *)PTR_free_004687a8)();
    }
    (*(code *)PTR_free_004687a8)(param_1);
    return;
  }
  return;
}



// ==== sll_Init @ 0042da80 size=100

/* tnp::sll_Init(tnp::__the_SLL*, unsigned int) */

void tnp::sll_Init(__the_SLL *param_1,uint param_2)

{
  if (param_1 != (__the_SLL *)0x0) {
    (*(code *)PTR_memset_00468810)(param_1,0,0x1c);
    *(uint *)(param_1 + 0x10) = param_2;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// ==== sll_DeInit @ 0042dae4 size=124

/* tnp::sll_DeInit(tnp::__the_SLL*) */

void tnp::sll_DeInit(__the_SLL *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = *(int *)param_1;
  while (puVar2 = PTR_sll_element_Free_004682dc, iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(iVar1 + 4);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    (*(code *)puVar2)(iVar1);
    *(int *)param_1 = iVar3;
    iVar1 = iVar3;
  }
  return;
}



// ==== sll_Put @ 0042db60 size=656

/* tnp::sll_Put(tnp::__the_SLL*, tnp::__the_SLL_Element*) */

undefined4 tnp::sll_Put(__the_SLL *param_1,__the_SLL_Element *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (*(undefined4 **)param_1 == (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(param_2 + 4);
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(__the_SLL_Element **)param_1 = param_2;
    *(__the_SLL_Element **)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = iVar1 + 1;
    *(int *)(param_1 + 0xc) = iVar2 + iVar5;
    return 1;
  }
  iVar1 = (*(code *)PTR_SllIndexCompare_00468674)(*(undefined4 *)param_2,**(undefined4 **)param_1);
  iVar2 = (*(code *)PTR_SllIndexCompare_00468674)
                    (*(undefined4 *)param_2,**(undefined4 **)(param_1 + 4),
                     *(undefined4 *)(param_1 + 0x10));
  if (((int)(uVar3 / 3) < iVar1) || (iVar2 < (int)-(uVar3 / 3))) {
    (*(code *)PTR_sll_element_Free_004682dc)(param_2);
    return 0xffffffff;
  }
  if ((iVar2 == 0) || (iVar1 == 0)) {
LAB_0042dcc4:
    (*(code *)PTR_sll_element_Free_004682dc)(param_2);
    return 0;
  }
  if (iVar1 < 0) {
    iVar1 = *(int *)param_1;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(int *)(param_2 + 0xc) = iVar1;
    *(__the_SLL_Element **)(iVar1 + 0x10) = param_2;
    *(__the_SLL_Element **)param_1 = param_2;
  }
  else if (iVar2 < 1) {
    if (iVar1 + iVar2 < 1) {
      iVar1 = *(int *)param_1;
      puVar4 = *(undefined4 **)(iVar1 + 0xc);
      if (puVar4 == (undefined4 *)0x0) {
        iVar1 = *(int *)(param_2 + 4);
        goto LAB_0042dc34;
      }
      do {
        iVar2 = (*(code *)PTR_SllIndexCompare_00468674)
                          (*(undefined4 *)param_2,*puVar4,*(undefined4 *)(param_1 + 0x10));
        if (iVar2 == 0) goto LAB_0042dcc4;
        if (iVar2 < 0) {
          uVar6 = *(undefined4 *)(iVar1 + 0xc);
          *(int *)(param_2 + 0x10) = iVar1;
          *(undefined4 *)(param_2 + 0xc) = uVar6;
          *(__the_SLL_Element **)(*(int *)(iVar1 + 0xc) + 0x10) = param_2;
          *(__the_SLL_Element **)(iVar1 + 0xc) = param_2;
          break;
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        puVar4 = *(undefined4 **)(iVar1 + 0xc);
      } while (puVar4 != (undefined4 *)0x0);
    }
    else {
      iVar1 = *(int *)(param_1 + 4);
      puVar4 = *(undefined4 **)(iVar1 + 0x10);
      if (puVar4 == (undefined4 *)0x0) {
        iVar1 = *(int *)(param_2 + 4);
        goto LAB_0042dc34;
      }
      do {
        iVar2 = (*(code *)PTR_SllIndexCompare_00468674)
                          (*(undefined4 *)param_2,*puVar4,*(undefined4 *)(param_1 + 0x10));
        if (iVar2 == 0) goto LAB_0042dcc4;
        if (0 < iVar2) {
          uVar6 = *(undefined4 *)(iVar1 + 0x10);
          *(int *)(param_2 + 0xc) = iVar1;
          *(undefined4 *)(param_2 + 0x10) = uVar6;
          *(__the_SLL_Element **)(*(int *)(iVar1 + 0x10) + 0xc) = param_2;
          *(__the_SLL_Element **)(iVar1 + 0x10) = param_2;
          break;
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        puVar4 = *(undefined4 **)(iVar1 + 0x10);
      } while (puVar4 != (undefined4 *)0x0);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(int *)(param_2 + 0x10) = iVar1;
    *(__the_SLL_Element **)(iVar1 + 0xc) = param_2;
    *(__the_SLL_Element **)(param_1 + 4) = param_2;
  }
  iVar1 = *(int *)(param_2 + 4);
LAB_0042dc34:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1;
  return 1;
}



// ==== sll_Search_ByIndex @ 0042ddf0 size=496

/* tnp::sll_Search_ByIndex(tnp::__the_SLL const*, unsigned int, unsigned int*) */

undefined4 tnp::sll_Search_ByIndex(__the_SLL *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = (*(code *)PTR_SllIndexCompare_00468674)
                      (param_2,**(undefined4 **)param_1,*(undefined4 *)(param_1 + 0x10));
    iVar2 = (*(code *)PTR_SllIndexCompare_00468674)
                      (param_2,**(undefined4 **)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
    if ((-1 < iVar1) && (iVar2 < 1)) {
      if (iVar2 == 0) {
        if (param_3 != (uint *)0x0) {
          *param_3 = *(int *)(param_1 + 8) - 1;
        }
        return *(undefined4 *)(param_1 + 4);
      }
      if (iVar1 == 0) {
        if (param_3 != (uint *)0x0) {
          *param_3 = 0;
        }
        return *(undefined4 *)param_1;
      }
      if (0 < iVar1 + iVar2) {
        iVar2 = *(int *)(param_1 + 4);
        puVar4 = *(undefined4 **)(iVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 8);
        if (puVar4 == (undefined4 *)0x0) {
          return 0;
        }
        while( true ) {
          iVar3 = (*(code *)PTR_SllIndexCompare_00468674)
                            (param_2,*puVar4,*(undefined4 *)(param_1 + 0x10));
          if (iVar3 == 0) {
            if (param_3 != (uint *)0x0) {
              *param_3 = iVar1 - 2;
            }
            return *(undefined4 *)(iVar2 + 0x10);
          }
          if (0 < iVar3) break;
          iVar2 = *(int *)(iVar2 + 0x10);
          puVar4 = *(undefined4 **)(iVar2 + 0x10);
          iVar1 = iVar1 + -1;
          if (puVar4 == (undefined4 *)0x0) {
            return 0;
          }
        }
        return 0;
      }
      iVar1 = *(int *)param_1;
      puVar4 = *(undefined4 **)(iVar1 + 0xc);
      iVar2 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        while( true ) {
          iVar3 = (*(code *)PTR_SllIndexCompare_00468674)
                            (param_2,*puVar4,*(undefined4 *)(param_1 + 0x10));
          if (iVar3 == 0) {
            if (param_3 != (uint *)0x0) {
              *param_3 = iVar2 + 1;
            }
            return *(undefined4 *)(iVar1 + 0xc);
          }
          if (iVar3 < 0) break;
          iVar1 = *(int *)(iVar1 + 0xc);
          puVar4 = *(undefined4 **)(iVar1 + 0xc);
          iVar2 = iVar2 + 1;
          if (puVar4 == (undefined4 *)0x0) {
            return 0;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}



// ==== sll_Search_ByNumber @ 0042dfe0 size=68

/* tnp::sll_Search_ByNumber(tnp::__the_SLL const*, unsigned int) */

int tnp::sll_Search_ByNumber(__the_SLL *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == 0) {
    return 0;
  }
  if (0 < (int)param_2) {
    do {
      iVar1 = *(int *)(iVar1 + 0xc);
      param_2 = param_2 - 1;
      if (iVar1 == 0) {
        return 0;
      }
    } while (param_2 != 0);
  }
  return iVar1;
}



// ==== sll_Remove_ByIndex @ 0042e024 size=152

/* tnp::sll_Remove_ByIndex(tnp::__the_SLL*, unsigned int) */

void tnp::sll_Remove_ByIndex(__the_SLL *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)PTR_sll_Search_ByIndex_00468678)(param_1,param_2,0);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x10);
    iVar2 = *(int *)(iVar1 + 0xc);
    if (iVar3 == 0) {
      *(int *)param_1 = iVar2;
    }
    else {
      *(int *)(iVar3 + 0xc) = iVar2;
      iVar2 = *(int *)(iVar1 + 0xc);
    }
    if (iVar2 == 0) {
      *(int *)(param_1 + 4) = iVar3;
    }
    else {
      *(int *)(iVar2 + 0x10) = iVar3;
    }
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(int *)(param_1 + 8) = iVar2 + -1;
    *(int *)(param_1 + 0xc) = iVar3 - iVar4;
    return;
  }
  return;
}



// ==== sll_Remove_ByNumber @ 0042e0bc size=148

/* tnp::sll_Remove_ByNumber(tnp::__the_SLL*, unsigned int) */

void tnp::sll_Remove_ByNumber(__the_SLL *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)PTR_sll_Search_ByNumber_0046867c)();
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x10);
    iVar2 = *(int *)(iVar1 + 0xc);
    if (iVar3 == 0) {
      *(int *)param_1 = iVar2;
    }
    else {
      *(int *)(iVar3 + 0xc) = iVar2;
      iVar2 = *(int *)(iVar1 + 0xc);
    }
    if (iVar2 == 0) {
      *(int *)(param_1 + 4) = iVar3;
    }
    else {
      *(int *)(iVar2 + 0x10) = iVar3;
    }
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(int *)(param_1 + 8) = iVar2 + -1;
    *(int *)(param_1 + 0xc) = iVar3 - iVar4;
    return;
  }
  return;
}



