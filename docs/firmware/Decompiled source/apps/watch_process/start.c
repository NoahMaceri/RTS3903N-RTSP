/* watch_process — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "watch_process.h"

// ==== _init @ 004009a8 size=72

void _init(void)

{
  FUN_004010bc();
  FUN_00401890();
  return;
}



// ==== _ftext @ 004009f0 size=1316

undefined4 _ftext(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 auStack_230 [512];
  undefined1 *local_30;
  char *local_2c;
  
  FUN_00401164(&DAT_00412140,0xa58,0,0xa58);
  iVar1 = access("/dev/pid_list",0);
  if (iVar1 != 0) {
    local_30 = auStack_230;
    memset(auStack_230,0,0x200);
    FUN_004014e4("insmod /home/app/localko/pid_list.ko",local_30,0x200,0);
    FUN_00401828(1000);
  }
  DAT_00412110 = FUN_00401734("/tmp/mmap.info",0xaa0);
  if (DAT_00412110 == 0) {
    FUN_0040129c("watch_process.c",&DAT_00401af4,0xe0,"create_sharemem MMAP_FILE_NAME fail");
  }
  iVar1 = access("/dev/pid_list",0);
  if (iVar1 == 0) {
    iVar1 = open("/dev/pid_list",2);
    if (-1 < iVar1) {
      iVar2 = fopen("/home/app/wp_cmd",&DAT_004019f4);
      if (iVar2 == 0) {
        FUN_0040129c("watch_process.c","get_watch_info",0x93,"no /home/app/wp_cmd\n");
        local_30 = auStack_230;
      }
      else {
        iVar3 = FUN_004016d4(iVar2);
        local_30 = auStack_230;
        if (iVar3 < 0x7d000) {
          memset(local_30,0,0x200);
          iVar4 = malloc(iVar3 + 0x10);
          if (iVar4 != 0) {
            fseek(iVar2,0,0);
            fread(iVar4,iVar3 + 0x10,1,iVar2);
            fclose(iVar2);
            iVar2 = FUN_00401100(local_30,"check_interval:",iVar4);
            if (iVar2 == 0) {
              DAT_00412140 = 5;
              FUN_0040129c("watch_process.c","get_watch_info",0x74,"check_interval=%d\n",5);
            }
            else {
              DAT_00412140 = atoi(local_30);
              FUN_0040129c("watch_process.c","get_watch_info",0x74,"check_interval=%d\n",
                           DAT_00412140);
              puVar6 = &DAT_0041214c;
              do {
                iVar3 = FUN_00401100(local_30,"process:",iVar2);
                iVar2 = 0;
                if (iVar3 != 0) {
                  snprintf(puVar6,0x40,&DAT_00401a28,local_30);
                  iVar2 = FUN_00401100(local_30,&DAT_00401a2c,iVar3);
                  if (iVar2 != 0) {
                    snprintf(puVar6 + 0x40,0x40,&DAT_00401a28,local_30);
                    *(undefined4 *)(puVar6 + -4) = 1;
                    DAT_00412144 = DAT_00412144 + 1;
                    FUN_0040129c("watch_process.c","get_watch_info",0x86,"process=%s;cmd=%s;\n",
                                 puVar6,puVar6 + 0x40);
                  }
                }
              } while ((puVar6 != (undefined *)0x412b18) && (puVar6 = puVar6 + 0x84, iVar2 != 0));
            }
            free(iVar4);
          }
        }
      }
      local_2c = "watch_process.c";
      iVar3 = 0;
      sleep(10);
      iVar2 = 0;
      do {
        iVar2 = iVar3 * 4 + iVar2;
        iVar4 = *(int *)((int)&DAT_00412148 + iVar2);
        while( true ) {
          if (iVar4 == 1) {
            puVar6 = &DAT_0041214c + iVar2;
            iVar4 = ioctl(iVar1,0x20007001,puVar6);
            if (iVar4 != 1) {
              FUN_0040129c(local_2c,"check_watch_info",0xab,"%s crashed!",puVar6);
              iVar4 = strncmp(&DAT_0041218c + iVar2,"reboot",6);
              if (iVar4 == 0) {
                memset(local_30,0,0x200);
                FUN_004014e4("killall mp4record;",local_30,0x200,0x3c);
                FUN_004014e4("/home/app/localbin/reboot_by_watchdog",local_30,0x200,0);
              }
              iVar4 = strncmp(puVar6,"cloud",5);
              if (((((iVar4 != 0) && (iVar4 = strncmp(puVar6,"p2p_tnp",7), iVar4 != 0)) ||
                   (DAT_00412110 == 0)) || (*(int *)(DAT_00412110 + 0x584) != 0)) &&
                 ((&DAT_0041218c)[iVar2] != '\0')) {
                system(&DAT_0041218c + iVar2);
              }
            }
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar3 * 0x80;
          if (iVar3 < 0x14) break;
          iVar3 = 0;
          sleep(10);
          iVar2 = 0;
          iVar4 = DAT_00412148;
        }
      } while( true );
    }
    FUN_0040129c("watch_process.c",&DAT_00401af4,0xe9,"Open /dev/pid_list error!\n");
    uVar5 = 0xffffffff;
  }
  else {
    FUN_0040129c("watch_process.c",&DAT_00401af4,0xf8,"init fail");
    uVar5 = 0;
  }
  return uVar5;
}



// ==== __uClibc_main @ 004018e0 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_0040100c();
  return;
}



// ==== _fini @ 00401900 size=56

void _fini(void)

{
  FUN_0040100c();
  return;
}



