/* rsa_pub_dec — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rsa_pub_dec.h"

// ==== _init @ 004007d0 size=72

void _init(void)

{
  FUN_00400c3c();
  FUN_00400de0();
  return;
}



// ==== main @ 00400820 size=640

undefined4 main(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_9f0 [16];
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  undefined1 *puStack_9d8;
  undefined4 uStack_9d0;
  undefined1 auStack_9cc [20];
  char acStack_9b8 [1024];
  char acStack_5b8 [980];
  char local_1e4 [4];
  undefined4 local_1e0 [112];
  
  pcVar7 = local_1e4;
  pcVar8 = 
  "-----BEGIN PUBLIC KEY-----\nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA2H25q4JDLUKY4g+yXAAR\n21fufV5WDvwItz0rxmIse6VcSMCFuJhNd1klIdl5E2ObznnJ1Ri5rwd99Jwlem9E\nUxi8n9xDb8+0AtgrkZzM+0/MUAVArZwRtrC8tRrWzl6juO1uO+fzg7G822ivikA2\nlecO9ZZ6jU/uQF/HuAIYBJ4Y7l95e03486OPa4mXYiiyeEeGQgIjUf+ZguCf2RIR\nFtpWuIjB8sbZT7hFTay4zkl6io9gXJdYai/4MHII3rkMC5AHdjBuwOXHj++nRJWa\nWwfpBa6we8xzmt5hk+KXxqZqsCf8yZVNhnAprd09ydyxeI3BIkVrknWFzUZk0i+Z\nKQIDAQAB\n-----END PUBLIC KEY-----\n"
  ;
  do {
    pcVar9 = pcVar8 + 0x10;
    pcVar1 = pcVar7 + 0x10;
    uVar6 = *(undefined4 *)(pcVar8 + 4);
    uVar5 = *(undefined4 *)(pcVar8 + 8);
    uVar4 = *(undefined4 *)(pcVar8 + 0xc);
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    *(undefined4 *)(pcVar7 + 4) = uVar6;
    *(undefined4 *)(pcVar7 + 8) = uVar5;
    *(undefined4 *)(pcVar7 + 0xc) = uVar4;
    pcVar7 = pcVar1;
    pcVar8 = pcVar9;
  } while (pcVar9 != "--\n");
  *(undefined4 *)pcVar1 = s_jANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBC_00400f6c._416_4_;
  if (param_1 == 3) {
    pcVar7 = acStack_9b8;
    do {
      pcVar1 = pcVar7 + 0x100;
      memset(pcVar7,0,0x100);
      pcVar8 = acStack_5b8;
      pcVar7 = pcVar1;
    } while (acStack_5b8 != pcVar1);
    do {
      pcVar7 = pcVar8 + 0xf5;
      memset(pcVar8,0,0xf5);
      pcVar8 = pcVar7;
    } while (local_1e4 != pcVar7);
    puts("before read argv1");
    iVar2 = fopen(*(undefined4 *)(param_2 + 4),"r");
    if (iVar2 == 0) {
      printf("fopen %s fail!\n",*(undefined4 *)(param_2 + 4));
      uVar4 = 1;
    }
    else {
      fseek(iVar2,0,2);
      iVar3 = ftell(iVar2);
      fseek(iVar2,0,0);
      if (iVar3 == 0x400) {
        pcVar7 = acStack_9b8;
        do {
          pcVar8 = pcVar7 + 0x100;
          fread(pcVar7,1,0x100,iVar2);
          pcVar7 = pcVar8;
        } while (acStack_5b8 != pcVar8);
        pcVar8 = acStack_9b8;
        fclose(iVar2);
        pcVar7 = acStack_5b8;
        do {
          iVar2 = FUN_00400d0c(pcVar8,0x100,local_1e4,pcVar7);
          if (iVar2 != 0xf5) {
            FUN_00400d70("public_decrypt() failed !!!",0xf5);
            uStack_9dc = exit(0);
            puStack_9d8 = auStack_9f0;
            uStack_9e0 = DAT_00411320;
            (*(code *)PTR___uClibc_main_00411324)
                      (PTR_main_00411318,uStack_9d0,auStack_9cc,PTR__init_0041131c);
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          pcVar8 = pcVar8 + 0x100;
          pcVar7 = pcVar7 + 0xf5;
          printf("decrypted_length =%d\n");
        } while (acStack_5b8 != pcVar8);
        iVar2 = fopen(*(undefined4 *)(param_2 + 8),&DAT_00400f48);
        if (iVar2 == 0) {
          printf("fopen %s fail!\n",*(undefined4 *)(param_2 + 8));
          uVar4 = 1;
        }
        else {
          fseek(iVar2,0,0);
          pcVar7 = acStack_5b8;
          do {
            pcVar8 = pcVar7 + 0xf5;
            fwrite(pcVar7,1,0xf5,iVar2);
            pcVar7 = pcVar8;
          } while (local_1e4 != pcVar8);
          fclose(iVar2);
          uVar4 = 0;
        }
      }
      else {
        puts("input file size error");
        fclose(iVar2);
        fclose(iVar2);
        uVar4 = 1;
      }
    }
  }
  else {
    perror("error argc\n");
    uVar4 = 1;
  }
  return uVar4;
}



// ==== __uClibc_main @ 00400e30 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00400b8c();
  return;
}



// ==== _fini @ 00400e50 size=56

void _fini(void)

{
  FUN_00400b8c();
  return;
}



