/* log_server — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "log_server.h"

// ==== _init @ 00400834 size=72

void _init(void)

{
  FUN_00400ddc();
  FUN_00401240();
  return;
}



// ==== _ftext @ 00400880 size=952

undefined4 _ftext(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_2940;
  undefined1 auStack_293c [10236];
  undefined1 auStack_140 [112];
  undefined2 local_d0;
  char local_ce [4];
  char local_ca [4];
  char local_c6 [4];
  char local_c2;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  memset(&local_2940,0,0x2800);
  memset(&local_d0,0,0x6e);
  memset(auStack_140,0,0x6e);
  local_38[0] = 0;
  memset(&DAT_00411930,0,0x2d0);
  local_d0 = 1;
  local_ce[0] = s__tmp_logsock_0040131c[0];
  local_ce[1] = s__tmp_logsock_0040131c[1];
  local_ce[2] = s__tmp_logsock_0040131c[2];
  local_ce[3] = s__tmp_logsock_0040131c[3];
  local_ca[0] = s__tmp_logsock_0040131c[4];
  local_ca[1] = s__tmp_logsock_0040131c[5];
  local_ca[2] = s__tmp_logsock_0040131c[6];
  local_ca[3] = s__tmp_logsock_0040131c[7];
  local_c6[0] = s__tmp_logsock_0040131c[8];
  local_c6[1] = s__tmp_logsock_0040131c[9];
  local_c6[2] = s__tmp_logsock_0040131c[10];
  local_c6[3] = s__tmp_logsock_0040131c[0xb];
  __bss_start = 0;
  local_c2 = s__tmp_logsock_0040131c[0xc];
  iVar1 = socket(1,1,0);
  if (iVar1 < 0) {
    puts("create socket fail\r");
    uVar6 = 0xffffffff;
  }
  else {
    unlink("/tmp/logsock");
    iVar2 = bind(iVar1,&local_d0,0x6e);
    if (iVar2 < 0) {
      puVar4 = (undefined4 *)__errno_location();
      uVar8 = *puVar4;
      uVar6 = strerror(uVar8);
      printf("bind socket error(%d), %s\n",uVar8,uVar6);
    }
    else {
      local_30 = fopen("/tmp/sd/log.txt",&DAT_0040136c);
      if (local_30 == 0) {
        puVar4 = (undefined4 *)__errno_location();
        uVar8 = *puVar4;
        uVar6 = strerror(uVar8);
        printf("open %s error(%d),%s\n","/tmp/sd/log.txt",uVar8,uVar6);
      }
      else {
        iVar2 = fopen("/tmp/sd/log_oss.txt",&DAT_0040136c);
        if (iVar2 != 0) {
          iVar3 = FUN_00400fe0("cat /sys/block/mmcblk0/device/cid",&local_60,0x20,2);
          if (iVar3 < 1) {
            local_2c = 0x19000;
          }
          else {
            local_2c = 0x6400000;
          }
          do {
            do {
              memset(&local_2940,0,0x2800);
              local_60 = 0;
              local_5c = 0;
              local_58 = 0;
              local_54 = 0;
              local_50 = 0;
              local_4c = 0;
              local_48 = 0;
              local_44 = 0;
              iVar3 = recvfrom(iVar1,&local_2940,0x27ff,0,auStack_140,local_38);
            } while (iVar3 < 1);
            gettimeofday(auStack_40,0);
            puVar4 = (undefined4 *)localtime(auStack_40);
            FUN_00400e20(local_2940,&local_60);
            iVar5 = strstr(&local_60,&DAT_004013c0);
            iVar3 = iVar2;
            iVar7 = 0x32000;
            if (iVar5 == 0) {
              iVar3 = local_30;
              iVar7 = local_2c;
            }
            iVar5 = ftell(iVar3);
            if (iVar5 < iVar7) {
              uVar6 = puVar4[2];
            }
            else {
              rewind(iVar3);
              uVar6 = puVar4[2];
            }
            fprintf(iVar3,"%02d-%02d %02d:%02d:%02d.%03lu %s",puVar4[4] + 1,puVar4[3],uVar6,
                    puVar4[1],*puVar4,local_3c / 1000,auStack_293c);
            fflush(iVar3);
          } while( true );
        }
        puVar4 = (undefined4 *)__errno_location();
        uVar8 = *puVar4;
        uVar6 = strerror(uVar8);
        printf("open %s error(%d),%s\n","/tmp/sd/log_oss.txt",uVar8,uVar6);
        fclose(local_30);
      }
    }
    if (iVar1 == 0) {
      uVar6 = 0;
    }
    else {
      close(iVar1);
      uVar6 = 0;
    }
  }
  return uVar6;
}



// ==== __uClibc_main @ 00401290 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00400d2c();
  return;
}



// ==== _fini @ 004012b0 size=56

void _fini(void)

{
  FUN_00400d2c();
  return;
}



