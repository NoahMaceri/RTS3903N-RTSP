/* oss — "set" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== set_content_type @ 00429a74 size=288

void set_content_type(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = param_2;
  }
  iVar1 = (*(code *)PTR_apr_table_get_005609dc)(param_3,PTR_COS_CONTENT_TYPE_00560c60);
  if ((iVar1 == 0) && (param_1 != 0)) {
    iVar1 = (*(code *)PTR_get_content_type_00560ca0)(param_1);
    if (iVar1 == 0) {
      (*(code *)PTR_apr_table_set_005609f8)
                (param_3,PTR_COS_CONTENT_TYPE_00560c60,*(undefined4 *)(PTR_DAT_0056098c + 0x248));
    }
    else {
      (*(code *)PTR_apr_table_set_005609f8)(param_3,PTR_COS_CONTENT_TYPE_00560c60,iVar1);
    }
  }
  return;
}



// ==== set_xmlnode_value_str @ 00439ee0 size=208

undefined4 set_xmlnode_value_str(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_40c [1028];
  
  uVar1 = (*(code *)PTR_mxmlNewElement_00560e3c)(param_1,param_2);
  (*(code *)PTR_apr_snprintf_00560ab0)
            (auStack_40c,0x400,PTR_LAB_00560984 + 0x5eb4,*param_3,param_3[1]);
  uVar1 = (*(code *)PTR_mxmlNewText_00560e40)(uVar1,0,auStack_40c);
  return uVar1;
}



// ==== set_xmlnode_value_int @ 00439fb0 size=188

undefined4 set_xmlnode_value_int(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_4c [68];
  
  uVar1 = (*(code *)PTR_mxmlNewElement_00560e3c)(param_1,param_2);
  (*(code *)PTR_apr_snprintf_00560ab0)(auStack_4c,0x40,PTR_LAB_00560984 + 0x5d64,param_3);
  uVar1 = (*(code *)PTR_mxmlNewText_00560e40)(uVar1,0,auStack_4c);
  return uVar1;
}



// ==== set_xmlnode_value_int64 @ 0043a06c size=220

undefined4 set_xmlnode_value_int64(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_4c [68];
  
  uVar1 = (*(code *)PTR_mxmlNewElement_00560e3c)(param_1,param_2);
  (*(code *)PTR_apr_snprintf_00560ab0)(auStack_4c,0x40,PTR_LAB_00560984 + 0x5ebc);
  uVar1 = (*(code *)PTR_mxmlNewText_00560e40)(uVar1,0,auStack_4c);
  return uVar1;
}



