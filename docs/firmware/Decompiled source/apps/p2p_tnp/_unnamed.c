/* p2p_tnp — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== FUN_00406170 @ 00406170 size=12

void FUN_00406170(void)

{
  FUN_00415fb4();
  return;
}



// ==== FUN_00406180 @ 00406180 size=12

void FUN_00406180(void)

{
  FUN_0041f734();
  return;
}



// ==== FUN_00406190 @ 00406190 size=12

void FUN_00406190(void)

{
  FUN_0043f440();
  return;
}



// ==== FUN_004061a0 @ 004061a0 size=12

void FUN_004061a0(void)

{
  FUN_00425854();
  return;
}



// ==== FUN_004061b0 @ 004061b0 size=12

void FUN_004061b0(void)

{
  FUN_0043eb10();
  return;
}



// ==== FUN_004061c0 @ 004061c0 size=12

void FUN_004061c0(void)

{
  FUN_0041467c();
  return;
}



// ==== FUN_004061d0 @ 004061d0 size=12

void FUN_004061d0(void)

{
  FUN_004157e4();
  return;
}



// ==== FUN_004061e0 @ 004061e0 size=12

void FUN_004061e0(void)

{
  FUN_0043f200();
  return;
}



// ==== FUN_004061f0 @ 004061f0 size=12

void FUN_004061f0(void)

{
  AesSetKey();
  return;
}



// ==== FUN_00406200 @ 00406200 size=12

void FUN_00406200(void)

{
  FUN_0044473c();
  return;
}



// ==== FUN_00406210 @ 00406210 size=12

void FUN_00406210(void)

{
  FUN_00413ec0();
  return;
}



// ==== FUN_00406220 @ 00406220 size=12

void FUN_00406220(void)

{
  FUN_0043f4e0();
  return;
}



// ==== FUN_00406230 @ 00406230 size=12

void FUN_00406230(void)

{
  FUN_004141a8();
  return;
}



// ==== FUN_00406240 @ 00406240 size=12

void FUN_00406240(void)

{
  FUN_0041f63c();
  return;
}



// ==== FUN_00406250 @ 00406250 size=12

void FUN_00406250(void)

{
  FUN_00425480();
  return;
}



// ==== FUN_00406260 @ 00406260 size=12

void FUN_00406260(void)

{
  fshare_open();
  return;
}



// ==== FUN_00406270 @ 00406270 size=12

void FUN_00406270(void)

{
  fshare_write();
  return;
}



// ==== FUN_00406280 @ 00406280 size=12

void FUN_00406280(void)

{
  FUN_00415600();
  return;
}



// ==== FUN_00406290 @ 00406290 size=12

void FUN_00406290(void)

{
  FUN_00425870();
  return;
}



// ==== FUN_004062a0 @ 004062a0 size=12

void FUN_004062a0(void)

{
  FUN_0043f27c();
  return;
}



// ==== FUN_004067d0 @ 004067d0 size=64

/* WARNING: Removing unreachable block (ram,0x004067f0) */
/* WARNING: Removing unreachable block (ram,0x00406800) */

void FUN_004067d0(void)

{
  return;
}



// ==== FUN_00406810 @ 00406810 size=76

/* WARNING: Removing unreachable block (ram,0x0040683c) */
/* WARNING: Removing unreachable block (ram,0x0040684c) */

void FUN_00406810(void)

{
  return;
}



// ==== FUN_0040685c @ 0040685c size=176

/* WARNING: Removing unreachable block (ram,0x004068bc) */

void FUN_0040685c(void)

{
  if (DAT_00468900 == '\0') {
    FUN_004067d0();
    DAT_00468900 = '\x01';
  }
  return;
}



// ==== FUN_0040690c @ 0040690c size=60

/* WARNING: Removing unreachable block (ram,0x00406928) */

void FUN_0040690c(void)

{
  FUN_00406810();
  return;
}



// ==== FUN_00406a34 @ 00406a34 size=228

uint * FUN_00406a34(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00;
  uVar1 = param_1[1];
  param_2[1] = uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00;
  uVar1 = param_1[2];
  param_2[2] = uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00;
  uVar1 = param_1[3];
  param_2[3] = uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00;
  uVar1 = param_1[4];
  param_2[4] = uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00;
  return param_2;
}



// ==== FUN_00406b18 @ 00406b18 size=6964

void FUN_00406b18(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint local_98 [4];
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  
  uVar23 = param_3[5];
  local_34 = (uint *)((int)param_1 + (param_2 & 0xfffffffc));
  local_48 = *param_3;
  local_44 = param_3[2];
  local_40 = param_3[1];
  local_3c = param_3[3];
  local_38 = param_3[4];
  param_3[5] = param_2 + uVar23;
  if (param_2 + uVar23 < param_2) {
    param_3[6] = param_3[6] + 1;
  }
  if (param_1 < local_34) {
    do {
      puVar24 = param_1 + 0x10;
      puVar1 = local_98;
      do {
        uVar23 = *param_1;
        param_1 = param_1 + 1;
        *puVar1 = uVar23 >> 0x18 | uVar23 << 0x18 | (uVar23 & 0xff00) << 8 | uVar23 >> 8 & 0xff00;
        puVar1 = puVar1 + 1;
      } while (param_1 != puVar24);
      uVar2 = local_40 << 0x1e | local_40 >> 2;
      uVar5 = local_98[0] + 0x5a827999 + local_38 + (local_48 >> 0x1b | local_48 << 5) +
              ((local_3c ^ local_44) & local_40 ^ local_3c);
      uVar23 = local_48 << 0x1e | local_48 >> 2;
      uVar16 = local_98[1] + 0x5a827999 + local_3c + ((uVar2 ^ local_44) & local_48 ^ local_44) +
               (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar6 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar5 = local_98[2] + 0x5a827999 + local_44 + (uVar5 & (uVar23 ^ uVar2) ^ uVar2) +
              (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar17 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar2 = local_98[3] + 0x5a827999 + uVar2 + ((uVar6 ^ uVar23) & uVar16 ^ uVar23) +
              (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar16 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar23 = local_88 + 0x5a827999 + uVar23 + ((uVar17 ^ uVar6) & uVar5 ^ uVar6) +
               (uVar2 >> 0x1b | uVar2 * 0x20);
      uVar5 = uVar2 * 0x40000000 | uVar2 >> 2;
      uVar6 = local_84 + 0x5a827999 + uVar6 + ((uVar16 ^ uVar17) & uVar2 ^ uVar17) +
              (uVar23 >> 0x1b | uVar23 * 0x20);
      uVar2 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar17 = local_80 + 0x5a827999 + uVar17 + ((uVar5 ^ uVar16) & uVar23 ^ uVar16) +
               (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar23 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar6 = local_7c + 0x5a827999 + uVar16 + ((uVar2 ^ uVar5) & uVar6 ^ uVar5) +
              (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar16 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar5 = local_78 + 0x5a827999 + uVar5 + ((uVar23 ^ uVar2) & uVar17 ^ uVar2) +
              (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar17 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar6 = local_74 + 0x5a827999 + uVar2 + ((uVar16 ^ uVar23) & uVar6 ^ uVar23) +
              (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar2 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar23 = local_70 + 0x5a827999 + uVar23 + ((uVar17 ^ uVar16) & uVar5 ^ uVar16) +
               (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar15 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar16 = local_6c + 0x5a827999 + uVar16 + ((uVar2 ^ uVar17) & uVar6 ^ uVar17) +
               (uVar23 >> 0x1b | uVar23 * 0x20);
      uVar12 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar5 = local_68 + 0x5a827999 + uVar17 + ((uVar15 ^ uVar2) & uVar23 ^ uVar2) +
              (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar23 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar2 = local_64 + 0x5a827999 + uVar2 + ((uVar12 ^ uVar15) & uVar16 ^ uVar15) +
              (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar17 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar5 = local_60 + 0x5a827999 + uVar15 + ((uVar23 ^ uVar12) & uVar5 ^ uVar12) +
              (uVar2 >> 0x1b | uVar2 * 0x20);
      uVar16 = local_98[2] ^ local_98[0] ^ local_78 ^ local_64;
      uVar6 = uVar2 * 0x40000000 | uVar2 >> 2;
      uVar11 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar16 = local_98[3] ^ local_98[1] ^ local_74 ^ local_60;
      uVar2 = local_5c + 0x5a827999 + uVar12 + ((uVar17 ^ uVar23) & uVar2 ^ uVar23) +
              (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar10 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar16 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar12 = local_88 ^ local_98[2] ^ local_70 ^ local_5c;
      uVar23 = uVar11 + 0x5a827999 + uVar23 + ((uVar6 ^ uVar17) & uVar5 ^ uVar17) +
               (uVar2 >> 0x1b | uVar2 * 0x20);
      uVar5 = uVar2 * 0x40000000 | uVar2 >> 2;
      uVar9 = uVar12 << 1 | uVar12 >> 0x1f;
      uVar12 = uVar10 + 0x5a827999 + uVar17 + ((uVar16 ^ uVar6) & uVar2 ^ uVar6) +
               (uVar23 >> 0x1b | uVar23 * 0x20);
      uVar17 = local_84 ^ local_98[3] ^ local_6c ^ uVar11;
      uVar2 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar8 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar17 = uVar9 + 0x5a827999 + uVar6 + ((uVar5 ^ uVar16) & uVar23 ^ uVar16) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar23 = local_80 ^ local_88 ^ local_68 ^ uVar10;
      uVar7 = uVar23 << 1 | uVar23 >> 0x1f;
      uVar6 = uVar12 * 0x40000000 | uVar12 >> 2;
      uVar23 = local_7c ^ local_84 ^ local_64 ^ uVar9;
      uVar4 = uVar23 << 1 | uVar23 >> 0x1f;
      uVar25 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar16 = uVar8 + 0x5a827999 + uVar16 + ((uVar2 ^ uVar5) & uVar12 ^ uVar5) +
               (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar5 = uVar7 + 0x6ed9eba1 + uVar5 + (uVar6 ^ uVar2 ^ uVar17) +
              (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar23 = local_78 ^ local_80 ^ local_60 ^ uVar8;
      uVar3 = uVar23 << 1 | uVar23 >> 0x1f;
      uVar23 = local_74 ^ local_7c ^ local_5c ^ uVar7;
      uVar13 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar15 = uVar23 << 1 | uVar23 >> 0x1f;
      uVar23 = uVar4 + 0x6ed9eba1 + uVar2 + (uVar25 ^ uVar6 ^ uVar16) +
               (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar16 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar2 = local_70 ^ local_78 ^ uVar11 ^ uVar4;
      uVar6 = uVar3 + 0x6ed9eba1 + uVar6 + (uVar13 ^ uVar25 ^ uVar5) +
              (uVar23 >> 0x1b | uVar23 * 0x20);
      uVar12 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar5 = local_6c ^ local_74 ^ uVar10 ^ uVar3;
      uVar2 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar17 = uVar5 << 1 | uVar5 >> 0x1f;
      uVar5 = uVar15 + 0x6ed9eba1 + uVar25 + (uVar16 ^ uVar13 ^ uVar23) +
              (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar25 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar23 = local_68 ^ local_70 ^ uVar9 ^ uVar15;
      uVar13 = uVar12 + 0x6ed9eba1 + uVar13 + (uVar2 ^ uVar16 ^ uVar6) +
               (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar6 = uVar23 << 1 | uVar23 >> 0x1f;
      uVar26 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar18 = uVar17 + 0x6ed9eba1 + uVar16 + (uVar25 ^ uVar2 ^ uVar5) +
               (uVar13 >> 0x1b | uVar13 * 0x20);
      uVar23 = local_64 ^ local_6c ^ uVar8 ^ uVar12;
      uVar5 = uVar23 << 1 | uVar23 >> 0x1f;
      uVar14 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar23 = local_60 ^ local_68 ^ uVar7 ^ uVar17;
      uVar23 = uVar23 << 1 | uVar23 >> 0x1f;
      uVar16 = uVar6 + 0x6ed9eba1 + uVar2 + (uVar26 ^ uVar25 ^ uVar13) +
               (uVar18 >> 0x1b | uVar18 * 0x20);
      uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar2 = local_5c ^ local_64 ^ uVar4 ^ uVar6;
      uVar20 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar5 + 0x6ed9eba1 + uVar25 + (uVar14 ^ uVar26 ^ uVar18) +
              (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar13 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar27 = uVar23 + 0x6ed9eba1 + uVar26 + (uVar19 ^ uVar14 ^ uVar16) +
               (uVar2 >> 0x1b | uVar2 * 0x20);
      uVar16 = uVar11 ^ local_60 ^ uVar3 ^ uVar5;
      uVar26 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar16 = uVar2 * 0x40000000 | uVar2 >> 2;
      uVar25 = uVar20 + 0x6ed9eba1 + uVar14 + (uVar13 ^ uVar19 ^ uVar2) +
               (uVar27 >> 0x1b | uVar27 * 0x20);
      uVar2 = uVar10 ^ local_5c ^ uVar15 ^ uVar23;
      uVar28 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar18 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar9 ^ uVar11 ^ uVar12 ^ uVar20;
      uVar14 = uVar26 + 0x6ed9eba1 + uVar19 + (uVar16 ^ uVar13 ^ uVar27) +
               (uVar25 >> 0x1b | uVar25 * 0x20);
      uVar11 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar29 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar8 ^ uVar10 ^ uVar17 ^ uVar26;
      uVar10 = uVar18 + 0x6ed9eba1 + uVar13 + (uVar28 ^ uVar16 ^ uVar25) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar25 = uVar14 * 0x40000000 | uVar14 >> 2;
      uVar22 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar7 ^ uVar9 ^ uVar6 ^ uVar18;
      uVar16 = uVar29 + 0x6ed9eba1 + uVar16 + (uVar11 ^ uVar28 ^ uVar14) +
               (uVar10 >> 0x1b | uVar10 * 0x20);
      uVar9 = uVar10 * 0x40000000 | uVar10 >> 2;
      uVar21 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar4 ^ uVar8 ^ uVar5 ^ uVar29;
      uVar10 = uVar22 + 0x6ed9eba1 + uVar28 + (uVar25 ^ uVar11 ^ uVar10) +
               (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar8 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar27 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar3 ^ uVar7 ^ uVar23 ^ uVar22;
      uVar16 = uVar21 + 0x6ed9eba1 + uVar11 + (uVar9 ^ uVar25 ^ uVar16) +
               (uVar10 >> 0x1b | uVar10 * 0x20);
      uVar13 = uVar10 * 0x40000000 | uVar10 >> 2;
      uVar19 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar15 ^ uVar4 ^ uVar20 ^ uVar21;
      uVar7 = uVar27 + 0x6ed9eba1 + uVar25 + (uVar8 ^ uVar9 ^ uVar10) +
              (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar4 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar10 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar12 ^ uVar3 ^ uVar26 ^ uVar27;
      uVar16 = uVar19 + 0x6ed9eba1 + uVar9 + (uVar13 ^ uVar8 ^ uVar16) +
               (uVar7 >> 0x1b | uVar7 * 0x20);
      uVar11 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar9 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar17 ^ uVar15 ^ uVar18 ^ uVar19;
      uVar15 = uVar10 + 0x6ed9eba1 + uVar8 + (uVar4 ^ uVar13 ^ uVar7) +
               (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar7 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar8 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar13 = uVar9 + 0x6ed9eba1 + uVar13 + (uVar11 ^ uVar4 ^ uVar16) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar16 = uVar6 ^ uVar12 ^ uVar29 ^ uVar10;
      uVar2 = uVar8 + 0x6ed9eba1 + uVar4 + (uVar7 ^ uVar11 ^ uVar15) +
              (uVar13 >> 0x1b | uVar13 * 0x20);
      uVar25 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar3 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar16 = uVar5 ^ uVar17 ^ uVar22 ^ uVar9;
      uVar17 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar15 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar4 = uVar25 + 0x8f1bbcdc + uVar11 + (uVar2 >> 0x1b | uVar2 * 0x20) +
              ((uVar13 | uVar3) & uVar7 | uVar13 & uVar3);
      uVar6 = uVar23 ^ uVar6 ^ uVar21 ^ uVar8;
      uVar16 = uVar15 + 0x8f1bbcdc + uVar7 + ((uVar2 | uVar17) & uVar3 | uVar2 & uVar17) +
               (uVar4 >> 0x1b | uVar4 * 0x20);
      uVar28 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar12 = uVar2 * 0x40000000 | uVar2 >> 2;
      uVar2 = uVar20 ^ uVar5 ^ uVar27 ^ uVar25;
      uVar13 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar4 = uVar28 + 0x8f1bbcdc + uVar3 + (uVar16 >> 0x1b | uVar16 * 0x20) +
              ((uVar4 | uVar12) & uVar17 | uVar4 & uVar12);
      uVar23 = uVar26 ^ uVar23 ^ uVar19 ^ uVar15;
      uVar6 = uVar13 + 0x8f1bbcdc + uVar17 + ((uVar16 | uVar2) & uVar12 | uVar16 & uVar2) +
              (uVar4 >> 0x1b | uVar4 * 0x20);
      uVar14 = uVar23 << 1 | uVar23 >> 0x1f;
      uVar5 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar16 = uVar18 ^ uVar20 ^ uVar10 ^ uVar28;
      uVar23 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar3 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar17 = uVar14 + 0x8f1bbcdc + uVar12 + (uVar6 >> 0x1b | uVar6 * 0x20) +
               ((uVar4 | uVar5) & uVar2 | uVar4 & uVar5);
      uVar16 = uVar29 ^ uVar26 ^ uVar9 ^ uVar13;
      uVar12 = uVar3 + 0x8f1bbcdc + uVar2 + ((uVar6 | uVar23) & uVar5 | uVar6 & uVar23) +
               (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar7 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar16 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar6 = uVar22 ^ uVar18 ^ uVar8 ^ uVar14;
      uVar2 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar4 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar5 = uVar7 + 0x8f1bbcdc + uVar5 + (uVar12 >> 0x1b | uVar12 * 0x20) +
              ((uVar17 | uVar16) & uVar23 | uVar17 & uVar16);
      uVar17 = uVar21 ^ uVar29 ^ uVar25 ^ uVar3;
      uVar6 = uVar4 + 0x8f1bbcdc + uVar23 + ((uVar12 | uVar2) & uVar16 | uVar12 & uVar2) +
              (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar29 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar17 = uVar12 * 0x40000000 | uVar12 >> 2;
      uVar23 = uVar27 ^ uVar22 ^ uVar15 ^ uVar7;
      uVar22 = uVar23 << 1 | uVar23 >> 0x1f;
      uVar23 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar16 = uVar29 + 0x8f1bbcdc + uVar16 + (uVar6 >> 0x1b | uVar6 * 0x20) +
               ((uVar5 | uVar17) & uVar2 | uVar5 & uVar17);
      uVar12 = uVar19 ^ uVar21 ^ uVar28 ^ uVar4;
      uVar5 = uVar22 + 0x8f1bbcdc + uVar2 + ((uVar6 | uVar23) & uVar17 | uVar6 & uVar23) +
              (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar20 = uVar12 << 1 | uVar12 >> 0x1f;
      uVar6 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar2 = uVar10 ^ uVar27 ^ uVar13 ^ uVar29;
      uVar26 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar17 = uVar20 + 0x8f1bbcdc + uVar17 + (uVar5 >> 0x1b | uVar5 * 0x20) +
               ((uVar16 | uVar6) & uVar23 | uVar16 & uVar6);
      uVar12 = uVar9 ^ uVar19 ^ uVar14 ^ uVar22;
      uVar16 = uVar26 + 0x8f1bbcdc + uVar23 + ((uVar5 | uVar2) & uVar6 | uVar5 & uVar2) +
               (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar11 = uVar12 << 1 | uVar12 >> 0x1f;
      uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar23 = uVar8 ^ uVar10 ^ uVar3 ^ uVar20;
      uVar18 = uVar23 << 1 | uVar23 >> 0x1f;
      uVar23 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar6 = uVar11 + 0x8f1bbcdc + uVar6 + (uVar16 >> 0x1b | uVar16 * 0x20) +
              ((uVar17 | uVar5) & uVar2 | uVar17 & uVar5);
      uVar17 = uVar25 ^ uVar9 ^ uVar7 ^ uVar26;
      uVar12 = uVar18 + 0x8f1bbcdc + uVar2 + ((uVar16 | uVar23) & uVar5 | uVar16 & uVar23) +
               (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar16 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar9 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar17 = uVar15 ^ uVar8 ^ uVar4 ^ uVar11;
      uVar2 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar10 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar5 = uVar9 + 0x8f1bbcdc + uVar5 + (uVar12 >> 0x1b | uVar12 * 0x20) +
              ((uVar6 | uVar16) & uVar23 | uVar6 & uVar16);
      uVar6 = uVar28 ^ uVar25 ^ uVar29 ^ uVar18;
      uVar23 = uVar10 + 0x8f1bbcdc + uVar23 + ((uVar12 | uVar2) & uVar16 | uVar12 & uVar2) +
               (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar25 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar12 = uVar12 * 0x40000000 | uVar12 >> 2;
      uVar6 = uVar13 ^ uVar15 ^ uVar22 ^ uVar9;
      uVar17 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar15 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar16 = uVar25 + 0x8f1bbcdc + uVar16 + (uVar23 >> 0x1b | uVar23 * 0x20) +
               ((uVar5 | uVar12) & uVar2 | uVar5 & uVar12);
      uVar6 = uVar14 ^ uVar28 ^ uVar20 ^ uVar10;
      uVar5 = uVar15 + 0x8f1bbcdc + uVar2 + ((uVar23 | uVar17) & uVar12 | uVar23 & uVar17) +
              (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar19 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar6 = uVar3 ^ uVar13 ^ uVar26 ^ uVar25;
      uVar13 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar12 = uVar19 + 0x8f1bbcdc + uVar12 + (uVar5 >> 0x1b | uVar5 * 0x20) +
               ((uVar16 | uVar23) & uVar17 | uVar16 & uVar23);
      uVar16 = uVar7 ^ uVar14 ^ uVar11 ^ uVar15;
      uVar14 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar16 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar6 = uVar4 ^ uVar3 ^ uVar18 ^ uVar19;
      uVar17 = uVar13 + 0x8f1bbcdc + uVar17 + ((uVar5 | uVar2) & uVar23 | uVar5 & uVar2) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar8 = uVar12 * 0x40000000 | uVar12 >> 2;
      uVar3 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar5 = uVar29 ^ uVar7 ^ uVar9 ^ uVar13;
      uVar23 = uVar14 + 0xca62c1d6 + uVar23 + (uVar16 ^ uVar2 ^ uVar12) +
               (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar12 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar7 = uVar5 << 1 | uVar5 >> 0x1f;
      uVar2 = uVar3 + 0xca62c1d6 + uVar2 + (uVar8 ^ uVar16 ^ uVar17) +
              (uVar23 >> 0x1b | uVar23 * 0x20);
      uVar5 = uVar22 ^ uVar4 ^ uVar10 ^ uVar14;
      uVar17 = uVar5 << 1 | uVar5 >> 0x1f;
      uVar16 = uVar7 + 0xca62c1d6 + uVar16 + (uVar12 ^ uVar8 ^ uVar23) +
               (uVar2 >> 0x1b | uVar2 * 0x20);
      uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar6 = uVar20 ^ uVar29 ^ uVar25 ^ uVar3;
      uVar5 = uVar2 * 0x40000000 | uVar2 >> 2;
      local_98[0] = uVar6 << 1 | uVar6 >> 0x1f;
      uVar4 = uVar17 + 0xca62c1d6 + uVar8 + (uVar23 ^ uVar12 ^ uVar2) +
              (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar6 = uVar26 ^ uVar22 ^ uVar15 ^ uVar7;
      uVar2 = local_98[0] + 0xca62c1d6 + uVar12 + (uVar5 ^ uVar23 ^ uVar16) +
              (uVar4 >> 0x1b | uVar4 * 0x20);
      local_98[1] = uVar6 << 1 | uVar6 >> 0x1f;
      uVar16 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar6 = uVar11 ^ uVar20 ^ uVar19 ^ uVar17;
      uVar12 = uVar4 * 0x40000000 | uVar4 >> 2;
      local_98[2] = uVar6 << 1 | uVar6 >> 0x1f;
      uVar23 = local_98[1] + 0xca62c1d6 + uVar23 + (uVar16 ^ uVar5 ^ uVar4) +
               (uVar2 >> 0x1b | uVar2 * 0x20);
      uVar6 = uVar18 ^ uVar26 ^ uVar13 ^ local_98[0];
      local_98[3] = uVar6 << 1 | uVar6 >> 0x1f;
      uVar6 = uVar2 * 0x40000000 | uVar2 >> 2;
      uVar5 = local_98[2] + 0xca62c1d6 + uVar5 + (uVar12 ^ uVar16 ^ uVar2) +
              (uVar23 >> 0x1b | uVar23 * 0x20);
      uVar2 = uVar9 ^ uVar11 ^ uVar14 ^ local_98[1];
      local_88 = uVar2 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar23 = local_98[3] + 0xca62c1d6 + uVar16 + (uVar6 ^ uVar12 ^ uVar23) +
               (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar16 = uVar10 ^ uVar18 ^ uVar3 ^ local_98[2];
      uVar12 = local_88 + 0xca62c1d6 + uVar12 + (uVar2 ^ uVar6 ^ uVar5) +
               (uVar23 >> 0x1b | uVar23 * 0x20);
      local_84 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar16 = uVar25 ^ uVar9 ^ uVar7 ^ local_98[3];
      uVar6 = local_84 + 0xca62c1d6 + uVar6 + (uVar5 ^ uVar2 ^ uVar23) +
              (uVar12 >> 0x1b | uVar12 * 0x20);
      local_80 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar16 = uVar23 * 0x40000000 | uVar23 >> 2;
      uVar23 = uVar15 ^ uVar10 ^ uVar17 ^ local_88;
      local_7c = uVar23 << 1 | uVar23 >> 0x1f;
      uVar4 = uVar12 * 0x40000000 | uVar12 >> 2;
      uVar23 = local_80 + 0xca62c1d6 + uVar2 + (uVar16 ^ uVar5 ^ uVar12) +
               (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar8 = uVar19 ^ uVar25 ^ local_98[0] ^ local_84;
      uVar2 = local_7c + 0xca62c1d6 + uVar5 + (uVar4 ^ uVar16 ^ uVar6) +
              (uVar23 >> 0x1b | uVar23 * 0x20);
      uVar12 = uVar6 * 0x40000000 | uVar6 >> 2;
      local_78 = uVar8 << 1 | uVar8 >> 0x1f;
      uVar5 = uVar13 ^ uVar15 ^ local_98[1] ^ local_80;
      uVar16 = local_78 + 0xca62c1d6 + uVar16 + (uVar12 ^ uVar4 ^ uVar23) +
               (uVar2 >> 0x1b | uVar2 * 0x20);
      uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
      local_74 = uVar5 << 1 | uVar5 >> 0x1f;
      uVar6 = uVar14 ^ uVar19 ^ local_98[2] ^ local_7c;
      uVar5 = uVar2 * 0x40000000 | uVar2 >> 2;
      local_70 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar8 = uVar3 ^ uVar13 ^ local_98[3] ^ local_78;
      uVar15 = local_74 + 0xca62c1d6 + uVar4 + (uVar23 ^ uVar12 ^ uVar2) +
               (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar6 = uVar16 * 0x40000000 | uVar16 >> 2;
      local_6c = uVar8 << 1 | uVar8 >> 0x1f;
      uVar2 = local_70 + 0xca62c1d6 + uVar12 + (uVar5 ^ uVar23 ^ uVar16) +
              (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar16 = uVar7 ^ uVar14 ^ local_88 ^ local_74;
      uVar4 = uVar15 * 0x40000000 | uVar15 >> 2;
      local_68 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar23 = local_6c + 0xca62c1d6 + uVar23 + (uVar6 ^ uVar5 ^ uVar15) +
               (uVar2 >> 0x1b | uVar2 * 0x20);
      uVar16 = uVar17 ^ uVar3 ^ local_84 ^ local_70;
      uVar12 = uVar2 * 0x40000000 | uVar2 >> 2;
      local_64 = uVar16 << 1 | uVar16 >> 0x1f;
      uVar5 = local_68 + 0xca62c1d6 + uVar5 + (uVar4 ^ uVar6 ^ uVar2) +
              (uVar23 >> 0x1b | uVar23 * 0x20);
      uVar16 = local_98[0] ^ uVar7 ^ local_80 ^ local_6c;
      uVar2 = uVar23 * 0x40000000 | uVar23 >> 2;
      local_60 = uVar16 << 1 | uVar16 >> 0x1f;
      local_38 = local_38 + uVar2;
      uVar16 = local_64 + 0xca62c1d6 + uVar6 + (uVar12 ^ uVar4 ^ uVar23) +
               (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar23 = local_98[1] ^ uVar17 ^ local_7c ^ local_68;
      local_5c = uVar23 << 1 | uVar23 >> 0x1f;
      uVar23 = uVar5 * 0x40000000 | uVar5 >> 2;
      local_3c = local_3c + uVar23;
      uVar5 = local_60 + 0xca62c1d6 + uVar4 + (uVar2 ^ uVar12 ^ uVar5) +
              (uVar16 >> 0x1b | uVar16 * 0x20);
      local_40 = local_40 + uVar5;
      local_44 = local_44 + (uVar16 * 0x40000000 | uVar16 >> 2);
      local_48 = local_48 + local_5c + 0xca62c1d6 + uVar12 + (uVar23 ^ uVar2 ^ uVar16) +
                 (uVar5 >> 0x1b | uVar5 * 0x20);
      *param_3 = local_48;
      param_3[1] = local_40;
      param_3[2] = local_44;
      param_3[3] = local_3c;
      param_3[4] = local_38;
    } while (puVar24 < local_34);
  }
  return;
}



// ==== FUN_0040864c @ 0040864c size=316

void FUN_0040864c(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar7 = 0x40;
  uVar2 = *(uint *)(param_1 + 0x1c);
  bVar1 = 0x37 < uVar2;
  iVar5 = 0x38;
  if (bVar1) {
    uVar7 = 0x80;
  }
  uVar8 = uVar2 + *(int *)(param_1 + 0x14);
  if (bVar1) {
    iVar5 = 0x78;
  }
  iVar4 = 0xf;
  iVar6 = 0xe;
  if (bVar1) {
    iVar4 = 0x1f;
  }
  if (bVar1) {
    iVar6 = 0x1e;
  }
  *(uint *)(param_1 + 0x14) = uVar8;
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar8 < uVar2) {
    uVar3 = uVar3 + 1;
    *(uint *)(param_1 + 0x18) = uVar3;
  }
  *(uint *)(param_1 + (iVar6 + 8) * 4) =
       (uVar3 & 0x1fffffff) >> 0x15 | (uVar3 << 3 | uVar8 >> 0x1d) << 0x18 |
       (uVar3 << 3 & 0xff00) << 8 | (uVar3 & 0x1fffffff) >> 5 & 0xff00;
  *(uint *)(param_1 + (iVar4 + 8) * 4) =
       (uVar8 & 0x1fffffff) >> 0x15 | uVar8 * 0x8000000 | (uVar8 * 8 & 0xff00) << 8 |
       (uVar8 & 0x1fffffff) >> 5 & 0xff00;
  memcpy(param_1 + 0x20 + uVar2,&DAT_00449294,iVar5 - uVar2);
  FUN_00406b18(param_1 + 0x20,uVar7,param_1);
  FUN_00406a34(param_1,param_2);
  return;
}



// ==== FUN_00408788 @ 00408788 size=580

void FUN_00408788(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar7 = *(int *)(param_3 + 0x1c);
  if (iVar7 != 0) {
    iVar10 = param_3 + 0x20;
    uVar9 = 0x80U - iVar7;
    if (param_2 <= 0x80U - iVar7) {
      uVar9 = param_2;
    }
    memcpy(iVar10 + iVar7,param_1,uVar9);
    uVar3 = uVar9 + *(int *)(param_3 + 0x1c);
    *(uint *)(param_3 + 0x1c) = uVar3;
    if (uVar3 < 0x41) {
      param_1 = (undefined4 *)((int)param_1 + uVar9);
      param_2 = param_2 - uVar9;
    }
    else {
      param_1 = (undefined4 *)((int)param_1 + uVar9);
      param_2 = param_2 - uVar9;
      FUN_00406b18(iVar10,uVar3 & 0xffffffc0,param_3);
      *(uint *)(param_3 + 0x1c) = *(uint *)(param_3 + 0x1c) & 0x3f;
      memcpy(iVar10,iVar10 + (uVar9 + iVar7 & 0xffffffc0));
    }
  }
  if (0x3f < param_2) {
    if (((uint)param_1 & 3) != 0) {
      puVar8 = param_1;
      uVar9 = param_2;
      if (param_2 != 0x40) {
        do {
          puVar6 = puVar8 + 0x10;
          puVar11 = (undefined4 *)(param_3 + 0x20);
          do {
            uVar5 = *puVar8;
            uVar4 = puVar8[1];
            uVar2 = puVar8[2];
            uVar1 = puVar8[3];
            puVar8 = puVar8 + 4;
            *puVar11 = uVar5;
            puVar11[1] = uVar4;
            puVar11[2] = uVar2;
            puVar11[3] = uVar1;
            puVar11 = puVar11 + 4;
          } while (puVar8 != puVar6);
          uVar9 = uVar9 - 0x40;
          FUN_00406b18((undefined4 *)(param_3 + 0x20),0x40,param_3);
        } while (0x40 < uVar9);
        uVar9 = param_2 - 0x41 >> 6;
        param_2 = (param_2 - 0x40) + uVar9 * -0x40;
        param_1 = param_1 + (uVar9 + 1) * 0x10;
      }
      goto LAB_00408878;
    }
    uVar9 = param_2 & 0xffffffc0;
    param_2 = param_2 & 0x3f;
    FUN_00406b18(param_1,uVar9,param_3);
    param_1 = (undefined4 *)((int)param_1 + uVar9);
  }
  if (param_2 == 0) {
    return;
  }
LAB_00408878:
  iVar7 = param_3 + 0x20;
  uVar9 = param_2 + *(int *)(param_3 + 0x1c);
  memcpy(iVar7 + *(int *)(param_3 + 0x1c),param_1,param_2);
  if (uVar9 < 0x40) {
    *(uint *)(param_3 + 0x1c) = uVar9;
  }
  else {
    FUN_00406b18(iVar7,0x40,param_3);
    memcpy(iVar7,param_3 + 0x60,uVar9 - 0x40);
    *(uint *)(param_3 + 0x1c) = uVar9 - 0x40;
  }
  return;
}



// ==== FUN_004089cc @ 004089cc size=752

undefined4
FUN_004089cc(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  byte local_90 [64];
  undefined1 auStack_50 [20];
  byte local_3c [20];
  
  if (param_2 < 0x41) {
    local_130 = 0x67452301;
    local_12c = 0xefcdab89;
    local_128 = 0x98badcfe;
    local_124 = 0x10325476;
    local_120 = 0xc3d2e1f0;
    local_118 = 0;
    local_11c = 0;
    local_114 = 0;
    memset(local_90,0x36,0x40);
    if (param_2 == 0) {
      FUN_00406b18(local_90,0x40,&local_130);
      FUN_00408788(param_3,param_4,&local_130);
      FUN_0040864c(&local_130,auStack_50);
      local_1d0 = 0x67452301;
      local_1cc = 0xefcdab89;
      local_1c8 = 0x98badcfe;
      local_1c4 = 0x10325476;
      local_1c0 = 0xc3d2e1f0;
      local_1b8 = 0;
      local_1bc = 0;
      local_1b4 = 0;
      memset(local_90,0x5c,0x40);
      goto LAB_00408b4c;
    }
    pbVar5 = param_1 + param_2;
    pbVar3 = param_1;
  }
  else {
    local_1c0 = 0xc3d2e1f0;
    local_1d0 = 0x67452301;
    local_1cc = 0xefcdab89;
    local_1c8 = 0x98badcfe;
    pbVar3 = local_3c;
    local_1c4 = 0x10325476;
    local_1b8 = 0;
    local_1bc = 0;
    local_1b4 = 0;
    FUN_00408788(param_1,param_2,&local_1d0);
    FUN_0040864c(&local_1d0,local_3c);
    local_120 = 0xc3d2e1f0;
    local_130 = 0x67452301;
    local_12c = 0xefcdab89;
    local_128 = 0x98badcfe;
    local_124 = 0x10325476;
    local_118 = 0;
    local_11c = 0;
    local_114 = 0;
    memset(local_90,0x36,0x40);
    pbVar5 = &stack0xffffffd8;
  }
  pbVar1 = local_90;
  pbVar4 = pbVar3;
  do {
    pbVar2 = pbVar4 + 1;
    *pbVar1 = *pbVar4 ^ *pbVar1;
    pbVar1 = pbVar1 + 1;
    pbVar4 = pbVar2;
  } while (pbVar2 != pbVar5);
  FUN_00406b18(local_90,0x40,&local_130);
  FUN_00408788(param_3,param_4,&local_130);
  FUN_0040864c(&local_130,auStack_50);
  local_1d0 = 0x67452301;
  local_1cc = 0xefcdab89;
  local_1b8 = 0;
  local_1c8 = 0x98badcfe;
  local_1c4 = 0x10325476;
  local_1bc = 0;
  local_1c0 = 0xc3d2e1f0;
  local_1b4 = 0;
  memset(local_90,0x5c,0x40);
  pbVar1 = local_90;
  do {
    pbVar4 = pbVar3 + 1;
    *pbVar1 = *pbVar3 ^ *pbVar1;
    pbVar1 = pbVar1 + 1;
    pbVar3 = pbVar4;
  } while (pbVar4 != pbVar5);
LAB_00408b4c:
  FUN_00406b18(local_90,0x40,&local_1d0);
  FUN_00408788(auStack_50,0x14,&local_1d0);
  FUN_0040864c(&local_1d0,param_5);
  return 0;
}



// ==== FUN_00408cbc @ 00408cbc size=480

void FUN_00408cbc(byte *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (param_3 < 1) {
    iVar3 = 0;
  }
  else {
    *param_2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*param_1 >> 2];
    uVar6 = (*param_1 & 3) * 0x10;
    if (param_3 != 1) {
      iVar5 = 1;
      iVar3 = 0;
      iVar7 = 0;
      pcVar1 = param_2;
      pbVar4 = param_1;
      while( true ) {
        iVar2 = iVar3;
        pbVar4 = pbVar4 + 3;
        iVar8 = iVar7 + 4;
        param_2[iVar5] =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
             [param_1[iVar7 + 1] >> 4 | uVar6];
        uVar6 = (param_1[iVar7 + 1] & 0xf) * 4;
        if (param_3 <= iVar7 + 2) break;
        iVar5 = iVar2 + 5;
        pcVar1[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                    [uVar6 | param_1[iVar7 + 2] >> 6];
        pcVar1[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                    [param_1[iVar7 + 2] & 0x3f];
        if (param_3 <= iVar7 + 3) goto LAB_00408dfc;
        pcVar1[4] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar4 >> 2]
        ;
        uVar6 = (*pbVar4 & 3) * 0x10;
        iVar3 = iVar2 + 4;
        iVar7 = iVar7 + 3;
        pcVar1 = pcVar1 + 4;
        if (param_3 <= iVar8) {
          param_2[iVar5] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar6]
          ;
          param_2[iVar2 + 6] = '=';
          param_2[iVar2 + 7] = '=';
          param_2[iVar2 + 8] = '\0';
          return;
        }
      }
      param_2[iVar2 + 2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar6]
      ;
      param_2[iVar2 + 3] = '=';
LAB_00408dfc:
      param_2[iVar2 + 4] = '\0';
      return;
    }
    iVar3 = 4;
    param_2[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar6];
    param_2[2] = '=';
    param_2[3] = '=';
  }
  param_2[iVar3] = '\0';
  return;
}



// ==== FUN_00408e9c @ 00408e9c size=112

void FUN_00408e9c(undefined4 param_1,undefined1 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_00406280(param_1,param_2);
  if (iVar1 < 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xfffffff;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0xfffffff;
      return;
    }
  }
  return;
}



// ==== FUN_00408f0c @ 00408f0c size=112

int FUN_00408f0c(int *param_1)

{
  int local_10;
  int local_c;
  
  gettimeofday(&local_10,0);
  return (local_10 - *param_1) * 1000 + (local_c - param_1[1]) / 1000;
}



// ==== FUN_00408f7c @ 00408f7c size=132

int FUN_00408f7c(void)

{
  int iVar1;
  
  iVar1 = open("/tmp/record_event",0);
  if (iVar1 == -1) {
    iVar1 = -1;
  }
  else {
    DAT_00468924 = mmap(0,0x8010,1,1,iVar1,0);
    close(iVar1);
    iVar1 = -(uint)(DAT_00468924 == -1);
  }
  return iVar1;
}



// ==== FUN_00409880 @ 00409880 size=240

uint FUN_00409880(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    iVar1 = FUN_0044177c();
    if ((uint)((*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18)) * *(int *)(param_2 + 0x10)) <=
        (uint)(iVar1 - *(int *)(param_2 + 0x2c))) {
      iVar1 = FUN_00440418(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28),
                           *(int *)(param_2 + 0x14),param_1 + 7,param_3 + -7);
      uVar2 = iVar1 + 7;
      if (0 < iVar1) {
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        *param_1 = 0xff;
        param_1[1] = 0xf1;
        param_1[2] = 0x60;
        param_1[5] = (char)uVar2 * ' ' + '\x1f';
        param_1[3] = 0x40;
        param_1[4] = (char)(uVar2 >> 3);
        param_1[6] = 0xfc;
        return uVar2;
      }
    }
  }
  return 0;
}



// ==== FUN_00409970 @ 00409970 size=236

int FUN_00409970(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = &DAT_00478424;
  iVar5 = 0;
  iVar3 = 0;
  do {
    while ((*pcVar2 == '\x02' && (('\0' < pcVar2[3] || ('\0' < pcVar2[1]))))) {
      pcVar1 = pcVar2 + 0x18;
      iVar4 = iVar3 + 1;
      iVar5 = iVar5 + 1;
      pcVar2 = pcVar2 + 0xdc8;
      printf("p2p cur user %d SessionHandle(%d)\n",iVar3,*(undefined4 *)pcVar1);
      iVar3 = iVar4;
      if (iVar4 == 10) goto LAB_00409a00;
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 0xdc8;
  } while (iVar3 != 10);
LAB_00409a00:
  printf("p2p cur viewer(%d) max_user_num(%d) in_packet_loss(%d) out_packet_loss(%d)\n",iVar5,
         DAT_00480e18,*(undefined4 *)(DAT_0047841c + 0x594),*(undefined4 *)(DAT_0047841c + 0x598));
  return iVar5;
}



// ==== FUN_00409a5c @ 00409a5c size=352

void FUN_00409a5c(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  int local_41c;
  undefined1 auStack_418 [1008];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  memset(&local_428,0,0x400);
  local_24 = 8;
  local_20 = CONCAT22(1,(short)param_2);
  if (param_2 < 0x1034) {
    if (0x1031 < param_2) {
LAB_00409b80:
      local_28 = 2;
      goto LAB_00409b08;
    }
    if (param_2 < 0x1025) {
      if (0x1020 < param_2) goto LAB_00409b80;
      if (param_2 - 0x74 < 8) {
        local_28 = 2;
        goto LAB_00409b08;
      }
    }
    else if (param_2 - 0x1028 < 3) goto LAB_00409b80;
LAB_00409b04:
    local_28 = 1;
  }
  else {
    if (param_2 < 0x6002) {
      if (param_2 < 0x6000) {
        if (param_2 - 0x1038 < 4) goto LAB_00409b80;
        goto LAB_00409b04;
      }
    }
    else if ((param_2 != 0x6006) && ((param_2 < 0x6006 || (2 < param_2 - 0x6008))))
    goto LAB_00409b04;
    local_28 = 4;
  }
LAB_00409b08:
  local_428 = local_28;
  local_424 = 8;
  local_420 = local_20;
  local_41c = param_4;
  local_1c = param_4;
  if ((param_3 != 0) && (0 < param_4)) {
    memcpy(auStack_418,param_3,param_4);
  }
  FUN_00440e4c(param_1,&local_428,param_4 + 0x10);
  return;
}



// ==== FUN_0040acbc @ 0040acbc size=148

undefined1 FUN_0040acbc(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0047841c + 0x938);
  if (iVar2 == 10000) {
    uVar1 = 0;
  }
  else if (iVar2 == 0x2714) {
    uVar1 = 4;
  }
  else if (iVar2 == 0x271c) {
    uVar1 = 5;
  }
  else if (iVar2 == 0x271a) {
    uVar1 = 3;
  }
  else if (iVar2 == 0x2712) {
    uVar1 = 2;
  }
  else {
    uVar1 = iVar2 == 0x2713;
  }
  printf("hue, p2p_get_sd_state() return (%d) \n",uVar1);
  return uVar1;
}



// ==== FUN_0040bae0 @ 0040bae0 size=868

int FUN_0040bae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_c90 [2048];
  undefined1 auStack_490 [512];
  char local_290 [256];
  undefined1 auStack_190 [128];
  char local_110 [64];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  
  memset(auStack_490,0,0x200);
  memset(auStack_c90,0,0x800);
  memset(auStack_190,0,0x80);
  memset(auStack_90,0,0x40);
  memset(auStack_d0,0,0x40);
  memset(local_290,0,0x100);
  memset(local_110,0,0x40);
  local_50 = 0;
  local_4c = 0;
  iVar2 = 5;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  sprintf(auStack_490,
          "%s -c 145 -url \"%s/vmanager/ipc/firmware/upgrade\" -did %s -sname %s -version %s ",
          "/backup/cloudAPI",DAT_0047841c + 0xc,DAT_0047841c + 0x255,DAT_0047841c + 0x10c,
          DAT_0047841c + 400);
  dump_string("p2p_tnp.c","get_update_url_md5",0xd7e,"cmd = %s\n",auStack_490);
  do {
    iVar2 = iVar2 + -1;
    memset(auStack_c90,0,0x800);
    FUN_00440c04(auStack_490,auStack_c90,0x800,0x3c);
    dump_string("p2p_tnp.c","get_update_url_md5",0xd86,"cmd = %s\n",auStack_490);
    dump_string("p2p_tnp.c","get_update_url_md5",0xd87,"ret_string = %s\n",auStack_c90);
    memset(auStack_190,0,0x80);
    iVar1 = FUN_00441318(auStack_190,&DAT_004466e8,auStack_c90);
    if (iVar1 == 1) {
      local_30 = atoi(auStack_190);
      if (local_30 == 1) {
        memset(auStack_90,0,0x40);
        memset(auStack_d0,0,0x40);
        iVar2 = FUN_00441318(auStack_90,"needUpdate",auStack_c90);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = strcmp(auStack_90,&DAT_004466fc);
        if (iVar2 != 0) {
          return 0;
        }
        memset(local_290,0,0x100);
        iVar2 = FUN_00441318(local_290,"downloadPath",auStack_c90);
        if (iVar2 == 0) {
          return 0;
        }
        if (local_290[0] == '\0') {
          return 0;
        }
        memset(local_110,0,0x40);
        iVar2 = FUN_00441318(local_110,"md5Code",auStack_c90);
        if (iVar2 == 0) {
          return 0;
        }
        if (local_110[0] == '\0') {
          return 0;
        }
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        iVar2 = FUN_004413f8(&local_50,"\"version\"",auStack_c90);
        if (iVar2 == 0) {
          return 0;
        }
        if ((char)local_50 == '\0') {
          return 0;
        }
        strcpy(param_1,local_290);
        strcpy(param_2,local_110);
        strcpy(param_3,&local_50);
        return local_30;
      }
    }
    sleep(10);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}



// ==== FUN_0040c164 @ 0040c164 size=172

undefined4 FUN_0040c164(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = DAT_0047841c;
  local_28 = FUN_00445068(*(undefined4 *)(DAT_0047841c + 0x5e0));
  local_24 = FUN_00445068(*(undefined4 *)(iVar1 + 0x5e4));
  local_20 = FUN_00445068((int)*(short *)(iVar1 + 0x5e8));
  local_1c = FUN_00445068(-(int)*(short *)(iVar1 + 0x5ea));
  local_18 = FUN_00445068((int)*(short *)(iVar1 + 0x5ec));
  local_14 = FUN_00445068(-(int)*(short *)(iVar1 + 0x5ee));
  p2p_send_ctrl_data(param_1,0x1328,param_2,&local_28,0x18);
  return 0;
}



// ==== FUN_0040c384 @ 0040c384 size=328

undefined4 FUN_0040c384(undefined4 param_1,undefined2 param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 local_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = DAT_0047841c;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  bVar1 = *(char *)(DAT_0047841c + 0x932) != '\0';
  local_18 = 0;
  local_48 = (ushort)bVar1;
  if (*(int *)(DAT_0047841c + 0x938) == 10000) {
    uVar2 = *(ushort *)(DAT_0047841c + 0x98e);
    uVar4 = *(undefined4 *)(DAT_0047841c + 0x990);
    local_48 = CONCAT11(1,bVar1);
    _local_48 = CONCAT12(*(undefined1 *)(DAT_0047841c + 0x98c),local_48);
    _local_48 = CONCAT13(*(undefined1 *)(DAT_0047841c + 0x98d),_local_48);
  }
  else {
    uVar2 = *(ushort *)(DAT_0047841c + 0x98e);
    _local_48 = CONCAT12(*(undefined1 *)(DAT_0047841c + 0x98c),local_48);
    uVar4 = *(undefined4 *)(DAT_0047841c + 0x990);
    _local_48 = CONCAT13(*(undefined1 *)(DAT_0047841c + 0x98d),_local_48);
  }
  local_44 = (uint)uVar2;
  local_40 = FUN_00445068(uVar4);
  local_3c = FUN_00445068(*(undefined4 *)(iVar3 + 0x994));
  local_38 = FUN_00445068(*(undefined4 *)(iVar3 + 0x998));
  local_34 = FUN_00445068(*(undefined4 *)(iVar3 + 0x99c));
  local_30 = FUN_00445068(*(undefined4 *)(iVar3 + 0x9a0));
  local_2c = FUN_00445068(*(undefined4 *)(iVar3 + 0x9a4));
  p2p_send_ctrl_data(param_1,0x1356,param_2,&local_48,0x34);
  return 0;
}



// ==== FUN_0040ce50 @ 0040ce50 size=172

undefined4 FUN_0040ce50(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = DAT_0047841c;
  local_1c = 0;
  local_18 = 0;
  local_28 = FUN_00445068(*(undefined4 *)(DAT_0047841c + 0x4f0));
  local_24 = FUN_00445068((*(int *)(iVar1 + 0x4f4) * 100) / 6);
  local_20 = FUN_00445068(*(undefined4 *)(iVar1 + 0x9ac));
  p2p_send_ctrl_data(param_1,0x4025,param_2,&local_28,0x14);
  return 0;
}



// ==== FUN_0040d9f8 @ 0040d9f8 size=120

void FUN_0040d9f8(undefined4 param_1,int param_2,undefined2 param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  local_20 = FUN_00445068(param_2);
  local_1c = FUN_00445068(-(uint)(param_2 != 0x10));
  p2p_send_ctrl_data(param_1,0x31b,param_3,&local_20,0xc);
  return;
}



// ==== FUN_0040da70 @ 0040da70 size=56

void FUN_0040da70(undefined4 param_1)

{
  undefined4 local_10 [3];
  
  local_10[0] = 1;
  p2p_send_ctrl_data(param_1,0x2349,0,local_10,4);
  return;
}



// ==== FUN_0040ee3c @ 0040ee3c size=364

undefined4 FUN_0040ee3c(int param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [10];
  ushort local_26;
  
  iVar1 = param_1 * 0xdc8;
  uVar2 = 0x400;
  iVar3 = param_1 + 6;
  iVar4 = *(int *)(&DAT_00478444 + iVar1);
  if (iVar4 != 0) {
    uVar2 = 0x800;
  }
  if (((param_2 != 0) || (iVar4 != *(int *)(&DAT_00478448 + iVar1))) ||
     ((&DAT_0047842c)[iVar1] == '\x01')) {
    uVar2 = uVar2 | 2;
    *(int *)(&DAT_00478448 + iVar1) = iVar4;
    (&DAT_0047842c)[iVar1] = 0;
  }
  if ((&DAT_00478426)[iVar1] == '\x01') {
    uVar2 = uVar2 | 0x100;
  }
  if (*(ushort *)(&DAT_00479164 + iVar1) != uVar2) {
    FUN_004061b0(iVar3,uVar2);
    *(ushort *)(&DAT_00479164 + iVar1) = uVar2;
  }
  if (param_2 == 0) {
    iVar1 = FUN_00406190(iVar3,&DAT_00479160 + iVar1,&DAT_00478468 + iVar1,0x98,auStack_30);
  }
  else {
    FUN_004062a0(iVar3,0);
    iVar1 = FUN_00406220(iVar3,&DAT_00479160 + iVar1,&DAT_00478468 + iVar1,0x98,auStack_30);
  }
  if (0 < iVar1) {
    if ((local_26 & 0x100) != 0) {
      send_realtime_audio(param_1,0x98,auStack_30);
      return 0;
    }
    send_realtime_video();
  }
  return 0;
}



// ==== FUN_0040efa8 @ 0040efa8 size=1256

int FUN_0040efa8(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 auStack_13c [196];
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  
  iVar1 = param_1 * 0xdc8;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  iVar6 = *(int *)(&DAT_00479160 + iVar1);
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_48[0] = 0;
  if (iVar6 == 0) {
    iVar6 = malloc(*(undefined4 *)(&DAT_00478468 + iVar1));
    *(int *)(&DAT_00479160 + iVar1) = iVar6;
  }
  iVar1 = param_1 * 0xdc8;
  iVar6 = get_video_replay_frame
                    (iVar6 + 0x20,param_2,*(undefined4 *)(&DAT_00478468 + iVar1),&local_4c,
                     *(undefined4 *)(&DAT_00478450 + iVar1));
  if (iVar6 < 1) {
    iVar8 = 0;
    if (iVar6 == -1) {
      iVar8 = -1;
      (&DAT_0047842b)[iVar1] = 1;
    }
  }
  else {
    local_50 = 0;
    uVar2 = FUN_004400cc(param_2[8],param_2[9],&local_50);
    if (0 < local_50) {
      local_70 = CONCAT22(0x40,(undefined2)local_70);
    }
    iVar1 = param_1 * 0xdc8;
    local_40 = DAT_00448c30;
    do {
      while (local_4c == 0) {
        iVar8 = 0x66;
        while( true ) {
          iVar3 = FUN_00408e9c((&DAT_0047843c)[param_1 * 0x372],5,local_48,0);
          iVar8 = iVar8 + -1;
          if (iVar3 != 0) {
            return iVar3;
          }
          if (local_48[0] < 0xa001) break;
          if (iVar8 == 0) {
            return -1;
          }
          ms_sleep(0x14);
        }
        local_74 = param_3 * 1000 + param_2[1] * *param_2;
        local_78 = (param_2[1] * *param_2) / 1000 + param_3;
        iVar8 = p2p_send_frame_data(param_1,0,1,0,&local_78,*(undefined4 *)(&DAT_00479160 + iVar1),
                                    iVar6);
        if (iVar8 != 0) {
          return iVar8;
        }
      }
      local_54 = 0;
      iVar3 = 0x66;
      local_58 = 0;
      local_3c = FUN_00440110(param_2[8],param_2[9],&local_54);
      local_38 = FUN_00440154(param_2[8],param_2[9],&local_58);
      FUN_00440080(param_2[8],param_2[9],&local_5c,&local_60);
      iVar8 = param_2[1];
      iVar9 = *param_2;
      *(short *)(&DAT_00478434 + iVar1) = (short)local_5c;
      local_64 = CONCAT22((short)local_60,(short)local_5c);
      *(short *)(&DAT_00478436 + iVar1) = (short)local_60;
      local_74 = iVar8 * iVar9 + param_3 * 1000;
      local_78 = (iVar8 * iVar9) / 1000 + param_3;
      while( true ) {
        iVar8 = FUN_00408e9c((&DAT_0047843c)[param_1 * 0x372],4,local_48,0);
        iVar3 = iVar3 + -1;
        if (iVar8 != 0) {
          return iVar8;
        }
        if (local_48[0] < 0x31001) break;
        if (iVar3 == 0) {
          return -1;
        }
        ms_sleep(0x14);
      }
      if (local_50 < 1) {
        puVar7 = &DAT_00450000;
        puVar5 = auStack_13c;
      }
      else {
        local_30 = &DAT_00450000;
        local_2c = (undefined1 *)local_50;
        local_140 = local_40;
        local_160 = 0;
        local_15c = 0;
        local_158 = 0;
        local_154 = 0;
        local_150 = 0;
        local_14c = 0;
        local_148 = 0;
        local_144 = 0;
        puVar5 = (undefined1 *)memcpy(auStack_13c,uVar2,local_50);
        iVar8 = (int)local_2c + 4;
        local_2c = puVar5;
        p2p_send_frame_data(param_1,0,1,1,&local_78,&local_160,iVar8);
        puVar7 = local_30;
        puVar5 = local_2c;
      }
      local_140 = puVar7[-0x1cf4];
      local_2c = (undefined1 *)local_54;
      local_160 = 0;
      local_15c = 0;
      local_158 = 0;
      local_154 = 0;
      local_150 = 0;
      local_14c = 0;
      local_148 = 0;
      local_144 = 0;
      local_34 = local_140;
      uVar4 = memcpy(puVar5,local_3c,local_54);
      iVar8 = (int)local_2c + 4;
      local_2c = (undefined1 *)uVar4;
      p2p_send_frame_data(param_1,0,1,1,&local_78,&local_160,iVar8);
      puVar5 = local_2c;
      local_2c = (undefined1 *)local_58;
      local_140 = local_34;
      local_160 = 0;
      local_15c = 0;
      local_158 = 0;
      local_154 = 0;
      local_150 = 0;
      local_14c = 0;
      local_148 = 0;
      local_144 = 0;
      memcpy(puVar5,local_38,local_58);
      p2p_send_frame_data(param_1,0,1,1,&local_78,&local_160,(int)local_2c + 4);
      iVar8 = p2p_send_frame_data(param_1,0,1,1,&local_78,*(undefined4 *)(&DAT_00479160 + iVar1),
                                  iVar6);
    } while (iVar8 == 0);
  }
  return iVar8;
}



// ==== FUN_0040f490 @ 0040f490 size=404

int FUN_0040f490(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28 [3];
  
  iVar3 = param_1 * 0xdc8;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28[0] = 0;
  iVar1 = FUN_00408e9c((&DAT_0047843c)[param_1 * 0x372],1,local_28,0);
  if (iVar1 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = -1;
    if (local_28[0] < 0x5001) {
      iVar2 = *(int *)(&DAT_00479160 + iVar3);
      if (iVar2 == 0) {
        iVar2 = malloc(*(undefined4 *)(&DAT_00478468 + iVar3));
        *(int *)(&DAT_00479160 + iVar3) = iVar2;
      }
      iVar3 = FUN_00409880(iVar2 + 0x20,param_2,*(undefined4 *)(&DAT_00478468 + param_1 * 0xdc8));
      if (iVar3 < 1) {
        return iVar1;
      }
      iVar1 = *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0x10);
      local_3c = iVar1 + param_3 * 1000;
      local_40 = iVar1 / 1000 + param_3;
      iVar2 = p2p_send_frame_data(param_1,0,2,0xffffffff,&local_40,
                                  *(undefined4 *)(&DAT_00479160 + param_1 * 0xdc8),iVar3);
    }
  }
  return iVar2;
}



// ==== FUN_0040fb50 @ 0040fb50 size=360

undefined4 FUN_0040fb50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char local_438 [4];
  char acStack_434 [1020];
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [3];
  
  memset(local_438,0,0x400);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar1 = FUN_00445068(*(undefined4 *)(param_2 + 4));
  if (((iVar1 - 1U < 0x3ff) &&
      (local_20[0] = iVar1,
      iVar2 = FUN_004061c0((&DAT_0047843c)[param_1 * 0x372],1,param_2 + 8,local_20,10), iVar2 == 0))
     && (iVar1 == local_20[0])) {
    iVar1 = FUN_00445068(*(undefined4 *)(param_2 + 4));
    iVar2 = FUN_00445068(*(undefined4 *)(param_2 + 0x14));
    if (iVar2 != 0) {
      memcpy(local_438,param_2 + 0x20,iVar1 + -0x18);
      if ((byte)(local_438[0] - 4U) < 2) {
        local_2c = iVar1 + -0x1c;
        pcVar3 = acStack_434;
      }
      else {
        pcVar3 = local_438;
        local_2c = iVar1 + -0x18;
      }
      DAT_00468958 = DAT_00468958 + 1;
      local_30 = CONCAT22(0x200,DAT_00468958);
      local_34 = iVar2;
      FUN_00406270(pcVar3,&local_38);
    }
  }
  return 0;
}



// ==== FUN_00410920 @ 00410920 size=164

undefined4 FUN_00410920(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  pthread_mutex_lock(&DAT_00468928);
  piVar3 = &DAT_00480df4;
  iVar1 = 0;
  do {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    if (iVar2 == -1) {
      (&DAT_00478414)[iVar1 + 0x2278] = param_1;
      pthread_mutex_unlock(&DAT_00468928);
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  pthread_mutex_unlock(&DAT_00468928);
  return 0xffffffff;
}



// ==== FUN_004109c4 @ 004109c4 size=216

undefined4 FUN_004109c4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  pthread_mutex_lock(&DAT_00468928);
  piVar3 = &DAT_00480df4;
  iVar1 = 0;
  do {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    if (iVar2 == param_1) {
      if (iVar1 != 7) {
        puVar4 = &DAT_00478414 + iVar1 + 0x2279;
        do {
          puVar5 = puVar4 + 1;
          puVar4[-1] = *puVar4;
          puVar4 = puVar5;
        } while (puVar5 != &DAT_00480e14);
      }
      DAT_00480e10 = 0xffffffff;
      pthread_mutex_unlock(&DAT_00468928);
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  pthread_mutex_unlock(&DAT_00468928);
  return 0xffffffff;
}



// ==== FUN_00410a9c @ 00410a9c size=108

undefined4 FUN_00410a9c(void)

{
  int iVar1;
  
  iVar1 = DAT_00480df4;
  FUN_0040da70(DAT_00480df4);
  sleep(3);
  FUN_004109c4(iVar1);
  (&DAT_00478424)[iVar1 * 0xdc8] = 1;
  return 0;
}



// ==== FUN_004132b8 @ 004132b8 size=148

int FUN_004132b8(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = &DAT_00478424;
  iVar2 = 0;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 0xdc8;
    if (cVar1 == '\x02') {
      iVar2 = iVar2 + 1;
    }
  } while (pcVar3 != (char *)&DAT_00480df4);
  if (DAT_00480e18 < iVar2) {
    DAT_00480e18 = iVar2;
  }
  DAT_00480e14 = iVar2;
  printf("p2p cur user(%d) max_user_num(%d) in_packet_loss(%d) out_packet_loss(%d)\n",iVar2,
         DAT_00480e18,*(undefined4 *)(DAT_0047841c + 0x594),*(undefined4 *)(DAT_0047841c + 0x598));
  return iVar2;
}



// ==== FUN_004135d4 @ 004135d4 size=1572

void FUN_004135d4(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_b8 [89];
  char local_5f;
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [8];
  
  p2p_set_tnp_init_status(3);
  FUN_00440868(&DAT_00478424,0x89d0,0,0x89d0);
  pcVar7 = &DAT_00478424;
  do {
    *pcVar7 = '\0';
    pcVar7 = pcVar7 + 0xdc8;
  } while (pcVar7 != (char *)&DAT_00480df4);
  uVar1 = FUN_00413ce8();
  uVar8 = (uVar1 & 0xff00) >> 8;
  uVar5 = uVar1 >> 0x18;
  uVar4 = uVar1 >> 0x10 & 0xff;
  uVar2 = uVar1 & 0xff;
  dump_string("p2p_tnp.c","tnp_proc",0x1946,"PPPP_API Version: %x %d.%d.%d.%d\n",uVar1,uVar5,uVar4,
              uVar8,uVar2);
  FUN_00406170(param_1,0xb);
  if (DAT_00468918 != 1) {
    _ftext(&local_5c,10000);
  }
  dump_string("p2p_tnp.c","tnp_proc",0x1950,"PPPP_NetworkDetect() ret = %d\n",0,uVar5,uVar4,uVar8,
              uVar2);
  dump_string("p2p_tnp.c","tnp_proc",0x1951,"-------------- NetInfo: -------------------\n");
  if (local_5c == '\x01') {
    puVar9 = &DAT_00448374;
  }
  else {
    puVar9 = &DAT_00448378;
  }
  dump_string("p2p_tnp.c","tnp_proc",0x1952,"Internet Reachable     : %s\n",puVar9);
  if (local_5b == '\x01') {
    puVar9 = &DAT_00448374;
  }
  else {
    puVar9 = &DAT_00448378;
  }
  dump_string("p2p_tnp.c","tnp_proc",0x1953,"P2P Server IP resolved : %s\n",puVar9);
  if (local_5a == '\x01') {
    puVar9 = &DAT_00448374;
  }
  else {
    puVar9 = &DAT_00448378;
  }
  dump_string("p2p_tnp.c","tnp_proc",0x1954,"P2P Server Hello Ack   : %s\n",puVar9);
  dump_string("p2p_tnp.c","tnp_proc",0x1955,"Local NAT Type         :");
  puVar10 = &LAB_00440000;
  puVar6 = &DAT_00450000;
  if (local_59 == '\x01') {
    dump_string("p2p_tnp.c","tnp_proc",0x195d," IP-Restricted Cone\n",puVar9);
  }
  else if (local_59 < '\x02') {
    if (local_59 == '\0') {
      dump_string("p2p_tnp.c","tnp_proc",0x195a," Unknow\n",puVar9);
    }
  }
  else {
    if (local_59 == '\x02') goto LAB_0041398c;
    if (local_59 == '\x03') {
      dump_string("p2p_tnp.c","tnp_proc",0x1963," Symmetric\n",puVar9);
    }
  }
  do {
    dump_string("p2p_tnp.c","tnp_proc",0x1967,"My Wan IP : %s\n",auStack_48);
    dump_string("p2p_tnp.c","tnp_proc",0x1968,"My Lan IP : %s\n",auStack_58);
    dump_string("p2p_tnp.c","tnp_proc",0x196a,"InitStr(%s)\n",param_1);
    dump_string("p2p_tnp.c","tnp_proc",0x196b,"did(%s)\n",param_2);
    dump_string("p2p_tnp.c","tnp_proc",0x196c,"key(%s)\n",DAT_0047841c + 0x295);
    iVar3 = pthread_create(&local_38,0,state_statistics,0);
    if (iVar3 == 0) {
      pthread_detach(local_38);
    }
    else {
      dump_string("p2p_tnp.c","tnp_proc",0x197e,"pthread_create state_statistics failed, ret = %d",
                  iVar3);
      perror("state_statistics failed");
    }
    iVar3 = pthread_create(&local_34,0,&LAB_0040fd94,0);
    if (iVar3 == 0) {
      pthread_detach(local_34);
    }
    else {
      dump_string("p2p_tnp.c","tnp_proc",0x1988,"pthread_create speaker_worker failed, ret = %d",
                  iVar3);
      perror("speaker_worker failed");
    }
    puVar6 = (undefined4 *)&LAB_00412e40;
    FUN_004061a0(&LAB_00409e84);
    p2p_set_tnp_init_status(4);
    while( true ) {
      while( true ) {
        while( true ) {
          puVar9 = (undefined *)(DAT_0047841c + 0x295);
          puVar10 = (undefined1 *)FUN_00406250(param_2,0xe10,0,DAT_00468918 != 1,puVar9);
          if ((int)puVar10 < 0) break;
          param_1 = 0;
          pcVar7 = &DAT_00478424;
          while (*pcVar7 != '\0') {
            param_1 = param_1 + 1;
            pcVar7 = pcVar7 + 0xdc8;
            if (param_1 == 10) {
              FUN_00406230(puVar10);
              dump_string("p2p_tnp.c","tnp_proc",0x19ac,"too many session force exit\n");
              pcVar7 = "tnp_too_many_user";
              goto LAB_0041397c;
            }
          }
          (&DAT_00478424)[param_1 * 0xdc8] = 2;
          (&DAT_0047843c)[param_1 * 0x372] = puVar10;
          DAT_00478420 = param_1;
          dump_string("p2p_tnp.c","tnp_proc",0x19b4,"user_index=%d connected SessionHandle(%d)\n",
                      param_1,puVar10);
          p2p_send_connected();
          p2p_set_tnp_init_status(5);
          memset(auStack_b8,0,0x5c);
          iVar3 = FUN_00406210(puVar10,auStack_b8);
          if (iVar3 == 0) {
            if (local_5f == '\0') {
              p2p_set_tnp_work_mode(1);
            }
            else if (local_5f == '\x01') {
              p2p_set_tnp_work_mode(2);
            }
          }
          iVar3 = pthread_create(auStack_30,0,&LAB_00412e40,&DAT_00478420);
          if (iVar3 == 0) {
            ms_sleep(1000);
          }
          else {
            dump_string("p2p_tnp.c","tnp_proc",0x19cc,"create tnp_worker fail\n");
            FUN_00406230(puVar10);
            (&DAT_00478424)[param_1 * 0xdc8] = 0;
          }
        }
        if (puVar10 != (undefined1 *)0xfffff444) break;
        dump_string("p2p_tnp.c","tnp_proc",0x19d6,"Invalid DID \n");
        sleep(0x3c);
      }
      if (puVar10 == (undefined1 *)0xfffff437) break;
      dump_string("p2p_tnp.c","tnp_proc",0x19e1,"PPPP_Listen_With_Key failed, ret = %d\n",puVar10);
      sleep(10);
    }
    dump_string("p2p_tnp.c","tnp_proc",0x19db,"too many session force exit\n");
    pcVar7 = "tnp_too_many_session";
LAB_0041397c:
    FUN_00441774(*(undefined4 *)(DAT_0047841c + 0x5ac),pcVar7);
    exit(0);
LAB_0041398c:
    dump_string(puVar10 + 0x5920,puVar6 + -0x1d37,0x1960," Port-Restricted Cone\n",puVar9);
  } while( true );
}



// ==== FUN_00413ce8 @ 00413ce8 size=20

undefined4 FUN_00413ce8(void)

{
  return 0xd2020e06;
}



// ==== FUN_00413cfc @ 00413cfc size=220

undefined4 FUN_00413cfc(int param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x6d00);
  uVar1 = 0xfffff447;
  if (*PTR_gFlagInitialized_0046829c != '\0') {
    if (param_1 == 0) {
      uVar1 = 0xfffff443;
    }
    else {
      (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_TheLock_004682a4);
      uVar1 = (*(code *)PTR_PPPP__DoNetWorkDetect_004682b0)
                        (param_1,param_2,PTR_gServerString_004682ac,PTR_gP2PServerAddr_004682a8,
                         PTR_gP2PServerAddr_004682a8 + 0x10,PTR_gP2PServerAddr_004682a8 + 0x20);
      (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_TheLock_004682a4);
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x6ce0);
    }
  }
  return uVar1;
}



// ==== FUN_00413ec0 @ 00413ec0 size=608

int FUN_00413ec0(uint param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x6cc4);
  puVar1 = PTR_gTNPSession_004682bc;
  iVar2 = -0xbb9;
  if (*PTR_gFlagInitialized_0046829c != '\0') {
    if (param_2 == (undefined4 *)0x0) {
      iVar2 = -0xbbd;
    }
    else if (*(uint *)PTR_gMaxSessionNumber_004682b8 < param_1) {
      iVar2 = -0xbc3;
    }
    else {
      iVar2 = param_1 * 0x3f20;
      iVar9 = *(int *)PTR_gTNPSession_004682bc + iVar2;
      uVar3 = *(byte *)(iVar9 + 1) - 1 & 0xff;
      if (uVar3 < 6) {
        if (*(int *)(PTR_DAT_00468298 + uVar3 * 4 + -0x6710) < 0) {
          return *(int *)(PTR_DAT_00468298 + uVar3 * 4 + -0x6710);
        }
        iVar4 = *(int *)(iVar9 + 0xc);
      }
      else {
        iVar4 = *(int *)(iVar9 + 0xc);
      }
      if ((iVar4 < 0) && (*(int *)(iVar9 + 4) < 0)) {
        iVar2 = -0xbd0;
      }
      else {
        (*(code *)PTR_memset_00468810)(param_2,0,0x5c);
        iVar9 = *(int *)puVar1 + iVar2;
        uVar8 = *(undefined4 *)(iVar9 + 4);
        uVar7 = *(undefined4 *)(iVar9 + 0x1c4);
        uVar5 = *(undefined4 *)(iVar9 + 0x1cc);
        param_2[0xe] = *(undefined4 *)(iVar9 + 0x1c8);
        *param_2 = uVar8;
        param_2[0xd] = uVar7;
        param_2[0xf] = uVar5;
        puVar6 = PTR_strncpy_0046883c;
        *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)(iVar9 + 0xf0);
        *(undefined1 *)((int)param_2 + 0x59) = *(undefined1 *)(iVar9 + 0xf1);
        (*(code *)puVar6)(param_2 + 0x10,iVar9 + 0xd8,0x18);
        iVar2 = *(int *)puVar1 + iVar2;
        uVar5 = *(undefined4 *)(iVar2 + 0xb4);
        uVar8 = *(undefined4 *)(iVar2 + 0xac);
        uVar7 = *(undefined4 *)(iVar2 + 0xb0);
        param_2[1] = *(undefined4 *)(iVar2 + 0xa8);
        param_2[2] = uVar8;
        param_2[3] = uVar7;
        param_2[4] = uVar5;
        uVar5 = *(undefined4 *)(iVar2 + 0xc4);
        uVar8 = *(undefined4 *)(iVar2 + 0xbc);
        uVar7 = *(undefined4 *)(iVar2 + 0xc0);
        param_2[5] = *(undefined4 *)(iVar2 + 0xb8);
        param_2[6] = uVar8;
        param_2[7] = uVar7;
        param_2[8] = uVar5;
        uVar5 = *(undefined4 *)(iVar2 + 0xd4);
        uVar8 = *(undefined4 *)(iVar2 + 0xcc);
        uVar7 = *(undefined4 *)(iVar2 + 0xd0);
        param_2[9] = *(undefined4 *)(iVar2 + 200);
        param_2[10] = uVar8;
        puVar1 = PTR_PPPP_DebugTrace_00468294;
        puVar6 = PTR_DAT_00468298 + -0x6cac;
        param_2[0xb] = uVar7;
        param_2[0xc] = uVar5;
        (*(code *)puVar1)(1,puVar6);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



// ==== FUN_004141a8 @ 004141a8 size=1236

undefined4 FUN_004141a8(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x6c6c);
  puVar5 = PTR_gTNPSessionLock_004682c4;
  puVar4 = PTR_gTNPSession_004682bc;
  iVar1 = param_1 * 0x3f20;
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (8,PTR_DAT_00468298 + -0x6c50,param_1,
             (int)*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar1 + 0x139));
  iVar2 = param_1 * 0x18;
  (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar5 + iVar2);
  if (*(char *)(*(int *)puVar4 + iVar1 + 0x139) != '\x01') {
    *(undefined1 *)(*(int *)puVar4 + iVar1 + 0x139) = 1;
  }
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar5 + iVar2);
  puVar3 = PTR_gTNPSession_004682bc;
  iVar8 = *(int *)puVar4 + iVar1;
  if (*(char *)(iVar8 + 0xf0) == '\x01') {
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    uVar6 = (*(code *)PTR_getCurTime_004682c8)();
    (*(code *)PTR_sprintf_004687f0)(&local_40,PTR_DAT_00468298 + -0x6c2c,param_1,uVar6,0);
    (*(code *)PTR_PPPP__SendReport_004682d0)
              (2,(int)*(char *)(*(int *)puVar3 + iVar1 + 0x1d0),&local_40);
    iVar8 = *(int *)puVar3 + iVar1;
  }
  if (*PTR_gFlagInitialized_0046829c == '\0') {
    if (*(char *)(iVar8 + 0xf0) == '\x01') {
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      uVar6 = (*(code *)PTR_getCurTime_004682c8)();
      (*(code *)PTR_sprintf_004687f0)(&local_40,PTR_DAT_00468298 + -0x6c14,param_1,uVar6,0xfffff447)
      ;
      (*(code *)PTR_PPPP__SendReport_004682d0)
                (2,(int)*(char *)(*(int *)puVar4 + iVar1 + 0x1d0),&local_40);
      uVar6 = 0xfffff447;
    }
    else {
      uVar6 = 0xfffff447;
    }
  }
  else if (*(uint *)PTR_gMaxSessionNumber_004682b8 < param_1) {
    if (*(char *)(iVar8 + 0xf0) != '\x01') {
      return 0xfffff43d;
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    uVar6 = (*(code *)PTR_getCurTime_004682c8)();
    (*(code *)PTR_sprintf_004687f0)(&local_40,PTR_DAT_00468298 + -0x6bfc,param_1,uVar6,0xfffff43d);
    (*(code *)PTR_PPPP__SendReport_004682d0)
              (2,(int)*(char *)(*(int *)puVar4 + iVar1 + 0x1d0),&local_40);
    uVar6 = 0xfffff43d;
  }
  else {
    if ((-1 < *(int *)(iVar8 + 0xc)) || (-1 < *(int *)(iVar8 + 4))) {
      (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar5 + iVar2);
      puVar3 = PTR_MUTEX_RELEASE_004682b4;
      iVar8 = *(int *)puVar5;
      *(undefined1 *)(*(int *)puVar4 + iVar1 + 0xf3) = 1;
      (*(code *)puVar3)(iVar8 + iVar2);
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x6bcc);
      uVar6 = (*(code *)PTR_PPPP_Close_004682cc)(param_1);
      if (*(char *)(*(int *)puVar4 + iVar1 + 0xf0) == '\x01') {
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        uVar7 = (*(code *)PTR_getCurTime_004682c8)();
        (*(code *)PTR_sprintf_004687f0)(&local_40,PTR_DAT_00468298 + -0x6bb8,param_1,uVar7,uVar6);
        (*(code *)PTR_PPPP__SendReport_004682d0)
                  (2,(int)*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar1 + 0x1d0),&local_40);
      }
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x6ba0);
      return 0;
    }
    if (*(char *)(iVar8 + 0xf0) == '\x01') {
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      uVar6 = (*(code *)PTR_getCurTime_004682c8)();
      (*(code *)PTR_sprintf_004687f0)(&local_40,PTR_DAT_00468298 + -0x6be4,param_1,uVar6,0xfffff430)
      ;
      (*(code *)PTR_PPPP__SendReport_004682d0)
                (2,(int)*(char *)(*(int *)puVar4 + iVar1 + 0x1d0),&local_40);
      uVar6 = 0xfffff430;
    }
    else {
      uVar6 = 0xfffff430;
    }
  }
  return uVar6;
}



// ==== FUN_0041467c @ 0041467c size=3972

int FUN_0041467c(uint param_1,uint param_2,int param_3,int *param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 local_a0 [9];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  
  puVar4 = PTR_gFlagInitialized_0046829c;
  param_2 = param_2 & 0xff;
  local_54 = (*(code *)PTR_time_00468800)(0);
  puVar6 = PTR_gTNPSession_004682bc;
  puVar5 = PTR_gMaxSessionNumber_004682b8;
  cVar12 = *puVar4;
  if (cVar12 == '\0') {
LAB_00414a0c:
    local_58 = -0xbb9;
  }
  else {
    if ((((5 < param_2) || (param_3 == 0)) || (param_4 == (int *)0x0)) ||
       (iVar17 = *param_4, iVar17 < 1)) {
      return -0xbbd;
    }
    if (*(uint *)PTR_gMaxSessionNumber_004682b8 < param_1) {
      *param_4 = 0;
      return -0xbc3;
    }
    iVar2 = param_1 * 0x3f20;
    pcVar20 = (char *)(*(int *)PTR_gTNPSession_004682bc + iVar2);
    uVar9 = (byte)pcVar20[1] - 1 & 0xff;
    if (uVar9 < 6) {
      iVar18 = *(int *)(PTR_DAT_00468298 + uVar9 * 4 + -0x6728);
      if (-1 < iVar18) {
        cVar1 = *pcVar20;
        goto joined_r0x004147d4;
      }
    }
    else {
      cVar1 = *pcVar20;
joined_r0x004147d4:
      if (cVar1 == '\x01') {
        if ((-1 < *(int *)(pcVar20 + 0xc)) || (-1 < *(int *)(pcVar20 + 4))) {
          local_44 = param_2 * 2;
          uVar9 = (uint)*(ushort *)(pcVar20 + local_44 + 0x34bc);
          local_48 = *(ushort *)(pcVar20 + local_44 + 0x34c8) - uVar9;
          if (iVar17 <= local_48) {
            (*(code *)PTR_memcpy_00468898)
                      (param_3,pcVar20 + param_2 * 0x400 + uVar9 + 0x1cb0,iVar17);
            pcVar20 = (char *)(*(int *)puVar6 + iVar2);
            *(short *)(pcVar20 + local_44 + 0x34bc) =
                 (short)iVar17 + *(short *)(pcVar20 + local_44 + 0x34bc);
            *param_4 = iVar17;
            if (*puVar4 != '\0') {
              if (param_5 < 10) {
                return -0xbbb;
              }
              goto LAB_00414a90;
            }
            goto LAB_00414a0c;
          }
          uVar19 = param_5;
          if (uVar9 < *(ushort *)(pcVar20 + local_44 + 0x34c8)) {
            local_38 = param_3 + local_48;
            (*(code *)PTR_memcpy_00468898)(param_3,pcVar20 + param_2 * 0x400 + uVar9 + 0x1cb0);
            iVar17 = *param_4;
            iVar18 = *(int *)puVar6 + iVar2 + local_44;
            *(undefined2 *)(iVar18 + 0x34bc) = *(undefined2 *)(iVar18 + 0x34c8);
            iVar17 = iVar17 - local_48;
            cVar12 = *puVar4;
            if (param_5 < 10) {
LAB_0041482c:
              uVar19 = 10;
            }
            if (iVar17 < 1) {
LAB_00414c3c:
              *param_4 = local_48;
              if (cVar12 == '\0') {
                return -0xbb9;
              }
LAB_00414a88:
              pcVar20 = (char *)(*(int *)puVar6 + iVar2);
LAB_00414a90:
              uVar9 = (byte)pcVar20[1] - 1 & 0xff;
              iVar17 = 0;
              if ((5 < uVar9) ||
                 (iVar17 = *(int *)(PTR_DAT_00468298 + uVar9 * 4 + -0x6740), -1 < iVar17)) {
                if (*pcVar20 != '\x01') {
                  iVar17 = -0xbc6;
                }
                if ((*(int *)(pcVar20 + 0xc) < 0) && (*(int *)(pcVar20 + 4) < 0)) {
                  iVar17 = -0xbd0;
                }
                else if (-1 < iVar17) {
                  return 0;
                }
              }
              if (pcVar20[0xf0] == '\x01') {
                local_a0[0] = 0;
                local_a0[1] = 0;
                local_a0[2] = 0;
                local_a0[3] = 0;
                local_a0[4] = 0;
                local_a0[5] = 0;
                local_a0[6] = 0;
                local_a0[7] = 0;
                uVar10 = (*(code *)PTR_getCurTime_004682c8)();
                (*(code *)PTR_sprintf_004687f0)
                          (local_a0,PTR_DAT_00468298 + -0x68f8,param_1,uVar10,param_2,iVar17);
                (*(code *)PTR_PPPP__SendReport_004682d0)
                          (2,(int)*(char *)(*(int *)puVar6 + iVar2 + 0x1d0),local_a0);
                return iVar17;
              }
              return iVar17;
            }
          }
          else {
            local_48 = 0;
            local_38 = param_3;
            if (param_5 < 10) goto LAB_0041482c;
          }
          puVar5 = PTR_gTNPSessionLock_004682c4;
          if (cVar12 != '\0') {
            iVar18 = param_2 * 0x1c;
            local_40 = iVar18 + 0x3f0;
            iVar3 = param_1 * 0x18;
            local_50 = param_5 / 1000 + 1;
            iVar13 = (param_2 + 0x250) * 2;
            local_3c = param_2 + 0x1a64;
            local_4c = param_2;
            do {
              (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar5 + iVar3);
              iVar14 = *(int *)puVar6 + iVar2;
              if ((*(int *)(iVar14 + iVar18 + 0x3f8) != 0) &&
                 (**(uint **)(iVar14 + iVar18 + 0x3f0) == (uint)*(ushort *)(iVar14 + iVar13 + 4))) {
                local_34 = (*(code *)PTR_sll_Remove_ByNumber_004682d8)(iVar14 + local_40,0);
                puVar7 = PTR_memcpy_00468898;
                iVar14 = *(int *)PTR_gTNPSession_004682bc;
                uVar10 = *(undefined4 *)(local_34 + 4);
                local_30 = local_4c * 0x400 + 0x1cb0;
                uVar15 = *(undefined4 *)(local_34 + 8);
                *(short *)(iVar14 + iVar2 + local_3c * 2) = (short)uVar10;
                (*(code *)puVar7)(iVar14 + iVar2 + local_30,uVar15,uVar10);
                (*(code *)PTR_sll_element_Free_004682dc)(local_34);
                puVar7 = PTR_memcpy_00468898;
                iVar14 = *(int *)PTR_gTNPSession_004682bc + iVar2;
                iVar22 = iVar14 + local_44;
                uVar9 = (uint)*(ushort *)(iVar22 + 0x34c8);
                *(short *)(iVar22 + 0x4a4) = *(short *)(iVar22 + 0x4a4) + 1;
                if ((int)uVar9 < iVar17) {
                  local_34 = uVar9;
                  (*(code *)puVar7)(local_38,iVar14 + local_30,uVar9);
                  local_48 = local_48 + local_34;
                  local_38 = param_3 + local_48;
                  iVar17 = *param_4;
                  iVar14 = *(int *)PTR_gTNPSession_004682bc + iVar2 + local_44;
                  *(undefined2 *)(iVar14 + 0x34bc) = *(undefined2 *)(iVar14 + 0x34c8);
                  iVar17 = iVar17 - local_48;
                }
                else {
                  (*(code *)puVar7)(local_38,iVar14 + local_30,iVar17);
                  local_48 = local_48 + iVar17;
                  iVar14 = *param_4;
                  local_38 = param_3 + local_48;
                  *(short *)(*(int *)PTR_gTNPSession_004682bc + iVar2 + (local_4c + 0x1a5c) * 2 + 4)
                       = (short)iVar17;
                  iVar17 = iVar14 - local_48;
                }
              }
              (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar5 + iVar3);
              param_2 = local_4c;
              pcVar20 = (char *)(*(int *)puVar6 + iVar2);
              if (pcVar20[1] != '\0') {
LAB_00414c30:
                cVar12 = *puVar4;
                param_2 = local_4c;
                goto LAB_00414c3c;
              }
              if (*pcVar20 != 1) {
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (1,PTR_DAT_00468298 + -0x6a2c,param_1,local_4c,(int)*pcVar20);
                cVar12 = *puVar4;
                goto LAB_00414c3c;
              }
              if ((*(int *)(pcVar20 + 0xc) < 0) && (*(int *)(pcVar20 + 4) < 0)) {
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (1,PTR_DAT_00468298 + -0x69f4,param_1,local_4c,*(int *)(pcVar20 + 0xc),
                           *(int *)(pcVar20 + 4));
                cVar12 = *puVar4;
                goto LAB_00414c3c;
              }
              if (iVar17 == 0) goto LAB_00414c30;
              (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar5 + iVar3);
              iVar14 = *(int *)puVar6 + iVar2 + iVar18;
              if (*(int *)(iVar14 + 0x3f8) == 0) {
LAB_00414994:
                uVar19 = uVar19 - 10;
                (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar5 + iVar3);
                (*(code *)PTR_mSecSleep_004682d4)(10);
              }
              else {
                uVar21 = (uint)*(ushort *)(*(int *)puVar6 + iVar2 + iVar13 + 4);
                uVar9 = **(uint **)(iVar14 + 0x3f0);
                if (uVar9 != uVar21) {
                  (*(code *)PTR_PPPP_DebugTrace_00468294)
                            (1,PTR_DAT_00468298 + -0x69b0,*param_4 - iVar17,*param_4,uVar19,local_4c
                             ,uVar9,param_1,uVar21);
                  goto LAB_00414994;
                }
                (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)PTR_gTNPSessionLock_004682c4 + iVar3);
              }
              iVar14 = (*(code *)PTR_time_00468800)(0);
              param_2 = local_4c;
              if (local_50 < (uint)(iVar14 - local_54)) {
                (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x691c);
                cVar12 = *puVar4;
LAB_00414a70:
                *param_4 = local_48;
                if (cVar12 == '\0') goto LAB_00414a0c;
                if (0 < iVar17) {
                  return -0xbbb;
                }
                goto LAB_00414a88;
              }
              if (uVar19 < 10) {
                cVar12 = *puVar4;
                goto LAB_00414a70;
              }
              if (iVar17 < 1) goto LAB_00414c30;
            } while (*puVar4 != '\0');
          }
          *param_4 = local_48;
          goto LAB_00414a0c;
        }
        iVar18 = -0xbd0;
      }
      else {
        iVar18 = -0xbc6;
      }
    }
    *param_4 = 0;
    local_58 = iVar18;
    if (pcVar20[0xf0] == '\x01') {
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_a0[2] = 0;
      local_a0[3] = 0;
      local_a0[4] = 0;
      local_a0[5] = 0;
      local_a0[6] = 0;
      local_a0[7] = 0;
      uVar10 = (*(code *)PTR_getCurTime_004682c8)();
      (*(code *)PTR_sprintf_004687f0)
                (local_a0,PTR_DAT_00468298 + -0x6b84,param_1,uVar10,param_2,iVar18);
      puVar4 = PTR_gTNPSession_004682bc;
      (*(code *)PTR_PPPP__SendReport_004682d0)
                (2,(int)*(char *)(*(int *)puVar6 + iVar2 + 0x1d0),local_a0);
      pcVar20 = (char *)(*(int *)puVar6 + iVar2);
      if (pcVar20[0xf0] == '\x01') {
        local_a0[0] = 0;
        local_a0[1] = 0;
        local_a0[2] = 0;
        local_a0[3] = 0;
        local_a0[4] = 0;
        local_a0[5] = 0;
        local_a0[6] = 0;
        local_a0[7] = 0;
        (*(code *)PTR_sprintf_004687f0)
                  (local_a0,PTR_DAT_00468298 + -0x6b6c,param_1,(int)*pcVar20,(int)pcVar20[1]);
        (*(code *)PTR_PPPP__SendReport_004682d0)
                  (2,(int)*(char *)(*(int *)puVar4 + iVar2 + 0x1d0),local_a0);
        iVar17 = *(int *)puVar4 + iVar2;
        if (*(char *)(iVar17 + 0xf0) == '\x01') {
          local_a0[0] = 0;
          local_a0[1] = 0;
          local_a0[2] = 0;
          local_a0[3] = 0;
          local_a0[4] = 0;
          local_a0[5] = 0;
          local_a0[6] = 0;
          local_a0[7] = 0;
          (*(code *)PTR_sprintf_004687f0)
                    (local_a0,PTR_DAT_00468298 + -0x6b50,param_1,*(undefined4 *)(iVar17 + 0xc),
                     *(undefined4 *)(iVar17 + 4));
          (*(code *)PTR_PPPP__SendReport_004682d0)
                    (2,(int)*(char *)(*(int *)puVar4 + iVar2 + 0x1d0),local_a0);
          if (*(char *)(*(int *)puVar4 + iVar2 + 0xf0) == '\x01') {
            local_a0[0] = 0;
            local_a0[1] = 0;
            local_a0[2] = 0;
            local_a0[3] = 0;
            local_a0[4] = 0;
            local_a0[5] = 0;
            local_a0[6] = 0;
            local_a0[7] = 0;
            (*(code *)PTR_sprintf_004687f0)
                      (local_a0,PTR_DAT_00468298 + -0x6b34,param_1,
                       (int)*(char *)(*(int *)puVar4 + iVar2 + 8));
            (*(code *)PTR_PPPP__SendReport_004682d0)
                      (2,(int)*(char *)(*(int *)puVar4 + iVar2 + 0x1d0),local_a0);
            if (*(char *)(*(int *)puVar4 + iVar2 + 0xf0) == '\x01') {
              local_a0[0] = 0;
              local_a0[1] = 0;
              local_a0[2] = 0;
              local_a0[3] = 0;
              local_a0[4] = 0;
              local_a0[5] = 0;
              local_a0[6] = 0;
              local_a0[7] = 0;
              (*(code *)PTR_sprintf_004687f0)
                        (local_a0,PTR_DAT_00468298 + -0x6b1c,param_1,
                         (int)*(char *)(*(int *)puVar4 + iVar2 + 0x10),1);
              (*(code *)PTR_PPPP__SendReport_004682d0)
                        (2,(int)*(char *)(*(int *)puVar4 + iVar2 + 0x1d0),local_a0);
              if (*(char *)(*(int *)puVar4 + iVar2 + 0xf0) == '\x01') {
                local_a0[0] = 0;
                local_a0[1] = 0;
                local_a0[2] = 0;
                local_a0[3] = 0;
                local_a0[4] = 0;
                local_a0[5] = 0;
                local_a0[6] = 0;
                local_a0[7] = 0;
                (*(code *)PTR_sprintf_004687f0)
                          (local_a0,PTR_DAT_00468298 + -0x6b00,param_1,
                           (int)*(char *)(*(int *)puVar4 + iVar2 + 0x139));
                (*(code *)PTR_PPPP__SendReport_004682d0)
                          (2,(int)*(char *)(*(int *)puVar4 + iVar2 + 0x1d0),local_a0);
                iVar17 = *(int *)puVar4 + iVar2;
                if (*(char *)(iVar17 + 0xf0) == '\x01') {
                  local_a0[0] = 0;
                  local_a0[1] = 0;
                  local_a0[2] = 0;
                  local_a0[3] = 0;
                  local_a0[4] = 0;
                  local_a0[5] = 0;
                  local_a0[6] = 0;
                  local_a0[7] = 0;
                  (*(code *)PTR_sprintf_004687f0)
                            (local_a0,PTR_DAT_00468298 + -0x6ae8,param_1,
                             (int)*(char *)(iVar17 + 0xf1),(int)*(char *)(iVar17 + 0x138));
                  (*(code *)PTR_PPPP__SendReport_004682d0)
                            (2,(int)*(char *)(*(int *)puVar4 + iVar2 + 0x1d0),local_a0);
                  if (*(char *)(*(int *)puVar4 + iVar2 + 0xf0) == '\x01') {
                    local_a0[0] = 0;
                    local_a0[1] = 0;
                    local_a0[2] = 0;
                    local_a0[3] = 0;
                    local_a0[4] = 0;
                    local_a0[5] = 0;
                    local_a0[6] = 0;
                    local_a0[7] = 0;
                    (*(code *)PTR_sprintf_004687f0)
                              (local_a0,PTR_DAT_00468298 + -0x6acc,param_1,
                               (int)*(char *)(*(int *)puVar4 + iVar2 + 0xf2));
                    (*(code *)PTR_PPPP__SendReport_004682d0)
                              (2,(int)*(char *)(*(int *)puVar4 + iVar2 + 0x1d0),local_a0);
                    if (*(char *)(*(int *)puVar4 + iVar2 + 0xf0) == '\x01') {
                      local_a0[0] = 0;
                      local_a0[1] = 0;
                      local_a0[2] = 0;
                      local_a0[3] = 0;
                      local_a0[4] = 0;
                      local_a0[5] = 0;
                      local_a0[6] = 0;
                      local_a0[7] = 0;
                      (*(code *)PTR_sprintf_004687f0)
                                (local_a0,PTR_DAT_00468298 + -0x6ab4,param_1,
                                 (int)*(char *)(*(int *)puVar4 + iVar2 + 0xf3));
                      (*(code *)PTR_PPPP__SendReport_004682d0)
                                (2,(int)*(char *)(*(int *)puVar4 + iVar2 + 0x1d0),local_a0);
                      if (*(char *)(*(int *)puVar4 + iVar2 + 0xf0) == '\x01') {
                        local_a0[0] = 0;
                        local_a0[1] = 0;
                        local_a0[2] = 0;
                        local_a0[3] = 0;
                        local_a0[4] = 0;
                        local_a0[5] = 0;
                        local_a0[6] = 0;
                        local_a0[7] = 0;
                        (*(code *)PTR_sprintf_004687f0)
                                  (local_a0,PTR_DAT_00468298 + -0x6aa4,param_1,
                                   (int)*(char *)(*(int *)puVar4 + iVar2 + 0xf4));
                        (*(code *)PTR_PPPP__SendReport_004682d0)
                                  (2,(int)*(char *)(*(int *)puVar6 + iVar2 + 0x1d0),local_a0);
                        if (*(char *)(*(int *)puVar6 + iVar2 + 0xf0) == '\x01') {
                          local_a0[0] = 0;
                          local_a0[1] = 0;
                          local_a0[2] = 0;
                          local_a0[3] = 0;
                          local_a0[4] = 0;
                          local_a0[5] = 0;
                          local_a0[6] = 0;
                          local_a0[7] = 0;
                          (*(code *)PTR_sprintf_004687f0)
                                    (local_a0,PTR_DAT_00468298 + -0x6a88,param_1,
                                     (int)*(char *)(*(int *)puVar6 + iVar2 + 0x13b));
                          (*(code *)PTR_PPPP__SendReport_004682d0)
                                    (2,(int)*(char *)(*(int *)puVar4 + iVar2 + 0x1d0),local_a0);
                          iVar17 = *(int *)puVar4 + iVar2;
                          if (*(char *)(iVar17 + 0xf0) == '\x01') {
                            local_a0[0] = 0;
                            local_a0[1] = 0;
                            local_a0[2] = 0;
                            local_a0[3] = 0;
                            local_a0[4] = 0;
                            local_a0[5] = 0;
                            local_a0[6] = 0;
                            local_a0[7] = 0;
                            (*(code *)PTR_sprintf_004687f0)
                                      (local_a0,PTR_DAT_00468298 + -0x6a74,param_1,
                                       (int)*(char *)(iVar17 + 0x1a5),(int)*(char *)(iVar17 + 0x1a6)
                                      );
                            (*(code *)PTR_PPPP__SendReport_004682d0)
                                      (2,(int)*(char *)(*(int *)puVar4 + iVar2 + 0x1d0),local_a0);
                            if (*(char *)(*(int *)puVar4 + iVar2 + 0xf0) == '\x01') {
                              local_a0[0] = 0;
                              local_a0[1] = 0;
                              local_a0[2] = 0;
                              local_a0[3] = 0;
                              local_a0[4] = 0;
                              local_a0[5] = 0;
                              local_a0[6] = 0;
                              local_a0[7] = 0;
                              (*(code *)PTR_sprintf_004687f0)
                                        (local_a0,PTR_DAT_00468298 + -0x6a54,param_1,
                                         (int)*(char *)(*(int *)puVar4 + iVar2 + 0x1a7));
                              (*(code *)PTR_PPPP__SendReport_004682d0)
                                        (2,(int)*(char *)(*(int *)puVar4 + iVar2 + 0x1d0),local_a0);
                              puVar7 = PTR_gTNPSessionLock_004682c4;
                              if ((*(char *)(*(int *)puVar4 + iVar2 + 0xf0) == '\x01') &&
                                 (*(int *)puVar5 != 0)) {
                                uVar9 = 0;
                                do {
                                  local_78 = 0;
                                  puVar23 = (undefined4 *)(*(int *)puVar7 + param_1 * 0x18);
                                  local_74 = 0;
                                  local_70 = 0;
                                  local_6c = 0;
                                  local_68 = 0;
                                  local_64 = 0;
                                  local_60 = 0;
                                  local_5c = 0;
                                  puVar8 = local_a0;
                                  puVar25 = puVar23;
                                  do {
                                    puVar24 = puVar25;
                                    puVar11 = puVar8;
                                    uVar16 = puVar24[1];
                                    uVar15 = puVar24[2];
                                    uVar10 = puVar24[3];
                                    puVar25 = puVar24 + 4;
                                    *puVar11 = *puVar24;
                                    puVar11[1] = uVar16;
                                    puVar11[2] = uVar15;
                                    puVar11[3] = uVar10;
                                    puVar8 = puVar11 + 4;
                                  } while (puVar25 != puVar23 + 8);
                                  uVar10 = puVar24[5];
                                  uVar19 = uVar9 + 1;
                                  puVar11[4] = *puVar25;
                                  puVar11[5] = uVar10;
                                  (*(code *)PTR_sprintf_004687f0)
                                            (&local_78,PTR_DAT_00468298 + -0x6a40,param_1,uVar9,
                                             local_a0[0],local_7c);
                                  (*(code *)PTR_PPPP__SendReport_004682d0)
                                            (2,(int)*(char *)(*(int *)puVar6 + iVar2 + 0x1d0),
                                             &local_78);
                                  uVar9 = uVar19;
                                } while (uVar19 < *(uint *)puVar5);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_58;
}



// ==== FUN_00415600 @ 00415600 size=484

int FUN_00415600(uint param_1,uint param_2,int *param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  puVar2 = PTR_gTNPSessionLock_004682c4;
  puVar1 = PTR_gTNPSession_004682bc;
  param_2 = param_2 & 0xff;
  if (*PTR_gFlagInitialized_0046829c == '\0') {
    iVar4 = -0xbb9;
  }
  else if (param_2 < 6) {
    if (*(uint *)PTR_gMaxSessionNumber_004682b8 < param_1) {
      iVar4 = -0xbc3;
    }
    else {
      iVar5 = param_1 * 0x3f20;
      pcVar6 = (char *)(*(int *)PTR_gTNPSession_004682bc + iVar5);
      uVar3 = (byte)pcVar6[1] - 1 & 0xff;
      if ((uVar3 < 6) && (*(int *)(PTR_DAT_00468298 + uVar3 * 4 + -0x6758) < 0)) {
        return *(int *)(PTR_DAT_00468298 + uVar3 * 4 + -0x6758);
      }
      iVar4 = -0xbc6;
      if (*pcVar6 == '\x01') {
        if ((*(int *)(pcVar6 + 0xc) < 0) && (*(int *)(pcVar6 + 4) < 0)) {
          iVar4 = -0xbd0;
        }
        else {
          (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + param_1 * 0x18);
          if (param_3 != (int *)0x0) {
            iVar4 = *(int *)puVar1 + iVar5 + param_2 * 0x1c;
            *param_3 = *(int *)(iVar4 + 0x2ac) + *(int *)(iVar4 + 0x204) + *(int *)(iVar4 + 0x354);
          }
          if (param_4 != (int *)0x0) {
            iVar5 = *(int *)puVar1 + iVar5;
            iVar4 = iVar5 + param_2 * 2;
            *param_4 = ((uint)*(ushort *)(iVar4 + 0x34c8) - (uint)*(ushort *)(iVar4 + 0x34bc)) +
                       *(int *)(iVar5 + param_2 * 0x1c + 0x3fc);
          }
          (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar2 + param_1 * 0x18);
          iVar4 = 0;
        }
      }
    }
  }
  else {
    iVar4 = -0xbbd;
  }
  return iVar4;
}



// ==== FUN_004157e4 @ 004157e4 size=1796

int FUN_004157e4(uint param_1,uint param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  param_2 = param_2 & 0xff;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x68e0);
  puVar7 = PTR_gTNPSession_004682bc;
  if (*PTR_gFlagInitialized_0046829c == '\0') {
    return -0xbb9;
  }
  if (5 < param_2) {
    return -0xbbd;
  }
  if (param_3 == 0) {
    return -0xbbd;
  }
  if (param_4 < 1) {
    return -0xbbd;
  }
  if (*(uint *)PTR_gMaxSessionNumber_004682b8 < param_1) {
    return -0xbc3;
  }
  iVar10 = param_1 * 0x3f20;
  pcVar12 = (char *)(*(int *)PTR_gTNPSession_004682bc + iVar10);
  uVar3 = (byte)pcVar12[1] - 1 & 0xff;
  if (uVar3 < 6) {
    iVar11 = *(int *)(PTR_DAT_00468298 + uVar3 * 4 + -0x6770);
    if (iVar11 < 0) goto LAB_004159ec;
  }
  else {
    iVar11 = 0;
  }
  if (*pcVar12 != '\x01') {
    iVar11 = -0xbc6;
  }
  if ((*(int *)(pcVar12 + 0xc) < 0) && (*(int *)(pcVar12 + 4) < 0)) {
    iVar11 = -0xbd0;
  }
  else if (-1 < iVar11) {
    if ((((pcVar12[0xf0] == '\x01') &&
         (iVar11 = (*(code *)PTR_PPPP__ShareBandwidth_004682e0)(), puVar1 = PTR_gTNPSession_004682bc
         , iVar11 != 0)) && (*(char *)(*(int *)puVar7 + iVar10 + 0x10) == '\0')) &&
       (((*(char *)(*(int *)puVar7 + iVar10 + 0x13a) == '\0' && (param_2 - 2 < 4)) &&
        ((PTR_gNetInfo_004682e8[3] == '\x01' &&
         (iVar11 = (*(code *)PTR_PPPP__AnotherDeviceInLan_004682ec)(), iVar11 == 0)))))) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x6838,param_2);
      puVar5 = (undefined4 *)(*(code *)PTR_malloc_00468890)(0x518);
      if (puVar5 != (undefined4 *)0x0) {
        (*(code *)PTR_memset_00468810)(puVar5,0,0x518);
        uVar14 = (*(code *)PTR_getCurTime_004682c8)();
        uVar6 = (*(code *)PTR___udivdi3_004682f0)
                          ((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),1000,0);
        puVar2 = PTR_PPPP_Proto_Generate_SeqNum_004682f4;
        *puVar5 = uVar6;
        uVar6 = (*(code *)puVar2)();
        iVar11 = *(int *)puVar1 + iVar10;
        *(undefined1 *)(puVar5 + 3) = 0xa4;
        uVar8 = *(undefined4 *)(iVar11 + 0x1b8);
        puVar5[2] = uVar6;
        puVar5[1] = 0;
        puVar5[0x145] = 0;
        uVar6 = (*(code *)PTR_PPPP_Proto_Generate_SendDataReport_004682f8)
                          (puVar5 + 5,uVar6,iVar11 + 0x1a8,uVar8,iVar11 + 0x1b0,
                           (int)*(char *)(iVar11 + 0xf0),2);
        puVar2 = PTR_PPPP__Timer_Push_004682fc;
        puVar5[4] = uVar6;
        (*(code *)puVar2)(puVar5);
        *(undefined1 *)(*(int *)puVar1 + iVar10 + 0x13a) = 1;
      }
    }
    puVar2 = PTR_gTNPSessionLock_004682c4;
    iVar11 = param_1 * 0x18;
    local_38 = param_2 + 0x1a58;
    (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + iVar11);
    puVar1 = PTR_gTNPSession_004682bc;
    iVar4 = *(int *)puVar7 + iVar10;
    uVar3 = (uint)*(ushort *)(iVar4 + local_38 * 2);
    iVar13 = 0x400 - uVar3;
    if (iVar13 < param_4) {
      local_34 = param_2 * 0x400;
      local_30 = iVar13;
      (*(code *)PTR_memcpy_00468898)(iVar4 + local_34 + uVar3 + 0x4b0,param_3,iVar13);
      iVar4 = (*(code *)PTR_PPPP_Write_Block_004682e4)
                        (param_1,param_2,*(int *)puVar1 + iVar10 + local_34 + 0x4b0,0x400);
      if (iVar4 < 0) {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x68b0);
        iVar4 = *(int *)puVar1 + iVar10;
        *(undefined1 *)(iVar4 + 0xf3) = 1;
        if (*(char *)(iVar4 + 1) == '\0') {
          *(undefined1 *)(iVar4 + 1) = 4;
        }
        (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar2 + iVar11);
        if (*(char *)(*(int *)puVar7 + iVar10 + 0xf0) == '\x01') {
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          uVar6 = (*(code *)PTR_getCurTime_004682c8)();
          puVar7 = PTR_DAT_00468298 + -0x687c;
LAB_00415df4:
          (*(code *)PTR_sprintf_004687f0)(&local_58,puVar7,param_1,uVar6,0xfffff434);
          (*(code *)PTR_PPPP__SendReport_004682d0)
                    (2,(int)*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar10 + 0x1d0),&local_58);
        }
        return -0xbcc;
      }
      iVar4 = param_4 - local_30;
      param_3 = param_3 + local_30;
      if (iVar4 < 0x400) {
        iVar13 = *(int *)puVar7;
      }
      else {
        do {
          iVar4 = iVar4 + -0x400;
          iVar13 = (*(code *)PTR_PPPP_Write_Block_004682e4)(param_1,param_2,param_3,0x400);
          if (iVar13 < 0) {
            (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x68b0);
            iVar4 = *(int *)puVar7 + iVar10;
            *(undefined1 *)(iVar4 + 0xf3) = 1;
            if (*(char *)(iVar4 + 1) == '\0') {
              *(undefined1 *)(iVar4 + 1) = 4;
            }
            (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar2 + iVar11);
            if (*(char *)(*(int *)puVar7 + iVar10 + 0xf0) != '\x01') {
              return -0xbcc;
            }
            local_58 = 0;
            local_54 = 0;
            local_50 = 0;
            local_4c = 0;
            local_48 = 0;
            local_44 = 0;
            local_40 = 0;
            local_3c = 0;
            uVar6 = (*(code *)PTR_getCurTime_004682c8)();
            puVar7 = PTR_DAT_00468298 + -0x6864;
            goto LAB_00415df4;
          }
          param_3 = param_3 + 0x400;
        } while (0x3ff < iVar4);
        iVar13 = *(int *)puVar7;
      }
      iVar9 = local_38 * 2;
      *(undefined2 *)(iVar13 + iVar10 + iVar9) = 0;
      if (0 < iVar4) {
        (*(code *)PTR_memcpy_00468898)(iVar13 + iVar10 + local_34 + 0x4b0,param_3,iVar4);
        *(short *)(*(int *)PTR_gTNPSession_004682bc + iVar10 + iVar9) = (short)iVar4;
      }
    }
    else {
      (*(code *)PTR_memcpy_00468898)(iVar4 + param_2 * 0x400 + uVar3 + 0x4b0,param_3,param_4);
      iVar10 = *(int *)puVar1 + iVar10 + param_2 * 2;
      *(short *)(iVar10 + 0x34b0) = (short)param_4 + *(short *)(iVar10 + 0x34b0);
    }
    (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar2 + iVar11);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x684c);
    return param_4;
  }
LAB_004159ec:
  if (pcVar12[0xf0] == '\x01') {
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    uVar6 = (*(code *)PTR_getCurTime_004682c8)();
    (*(code *)PTR_sprintf_004687f0)(&local_58,PTR_DAT_00468298 + -0x68c8,param_1,uVar6,iVar11);
    (*(code *)PTR_PPPP__SendReport_004682d0)
              (2,(int)*(char *)(*(int *)puVar7 + iVar10 + 0x1d0),&local_58);
    return iVar11;
  }
  return iVar11;
}



// ==== FUN_00415fb4 @ 00415fb4 size=920

undefined4 FUN_00415fb4(char *param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  char *pcVar14;
  uint uVar15;
  undefined *puVar16;
  int iVar17;
  char local_430 [1024];
  undefined *local_30;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x6804);
  if (*PTR_gFlagInitialized_0046829c == '\x01') {
    uVar6 = 0xfffff446;
  }
  else {
    (*(code *)PTR_MUTEX_INIT_0046830c)(PTR_TheLock_004682a4);
    iVar5 = (*(code *)PTR_InitSocketEnv_00468310)();
    if (iVar5 < 0) {
      uVar6 = 0xfffff416;
    }
    else {
      (*(code *)PTR_UpdateNetwork_00468304)();
      puVar2 = PTR_gMaxSessionNumber_004682b8;
      *(undefined4 *)PTR_gLastNetDetectTime_00468314 = 0;
      if (param_2 != 0) {
        *(int *)puVar2 = param_2;
      }
      puVar16 = PTR_gTNPSessionLock_004682c4;
      puVar3 = PTR_gTNPSession_004682bc;
      if (*(int *)PTR_gTNPSession_004682bc == 0) {
        iVar7 = *(int *)puVar2;
        uVar6 = (*(code *)PTR_malloc_00468890)(iVar7 * 0x3f20);
        puVar4 = PTR_malloc_00468890;
        *(undefined4 *)puVar3 = uVar6;
        iVar5 = (*(code *)puVar4)(iVar7 * 0x18);
        *(int *)puVar16 = iVar5;
        if (iVar7 != 0) {
          iVar7 = 0;
          uVar15 = 0;
          while( true ) {
            iVar5 = iVar5 + iVar7;
            uVar15 = uVar15 + 1;
            iVar7 = iVar7 + 0x18;
            (*(code *)PTR_MUTEX_INIT_0046830c)(iVar5);
            if (*(uint *)puVar2 <= uVar15) break;
            iVar5 = *(int *)puVar16;
          }
        }
      }
      if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
        (*(code *)PTR_strncpy_0046883c)(PTR_gServerString_004682ac,param_1,0x100);
        (*(code *)PTR_memset_00468810)(local_430,0,0x400);
        (*(code *)PTR_PPPP_DecodeString_0046832c)(param_1,local_430,0x400);
        iVar5 = (*(code *)PTR_strlen_004687c0)(local_430);
        puVar3 = PTR_gP2PServerName_00468330;
        if (0 < iVar5) {
          iVar12 = 1;
          iVar7 = 0;
          iVar17 = 0;
          puVar16 = PTR_DAT_00468298 + -0x67e8;
          pcVar14 = local_430;
          do {
            if (*pcVar14 == ',') {
              iVar8 = iVar17 * 0x100;
              *pcVar14 = '\0';
              iVar17 = iVar17 + 1;
              local_30 = puVar3 + iVar8;
              (*(code *)PTR_strncpy_0046883c)(puVar3 + iVar8,local_430 + iVar7,0xff);
              (*(code *)PTR_PPPP_DebugTrace_00468294)(1,puVar16,iVar17,local_30);
              iVar7 = iVar12;
            }
            bVar1 = iVar12 < iVar5;
            pcVar14 = pcVar14 + 1;
            iVar12 = iVar12 + 1;
          } while (bVar1);
        }
      }
      puVar13 = (undefined2 *)(PTR_gP2PServerAddr_004682a8 + 0x30);
      puVar9 = (undefined2 *)PTR_gP2PServerAddr_004682a8;
      do {
        puVar10 = puVar9 + 8;
        (*(code *)PTR_memset_00468810)(puVar9,0,0x10);
        *puVar9 = 2;
        puVar9[1] = 0x647d;
        puVar9 = puVar10;
      } while (puVar10 != puVar13);
      uVar15 = 0;
      if (*(int *)puVar2 != 0) {
        do {
          uVar11 = uVar15 + 1;
          (*(code *)PTR_PPPP__Reset_Session_00468318)(uVar15,0);
          uVar15 = uVar11;
        } while (uVar11 < *(uint *)puVar2);
      }
      puVar3 = PTR_gNetInfo_004682e8;
      puVar2 = PTR_DAT_00468298;
      (*(code *)PTR_strncpy_0046883c)(PTR_gNetInfo_004682e8 + 0x14,PTR_DAT_00468298 + -0x67d0,0x10);
      (*(code *)PTR_strncpy_0046883c)(puVar3 + 4,puVar2 + -0x67d0,0x10);
      (*(code *)PTR_PPPP__Device_Init_0046831c)();
      (*(code *)PTR_PPPP__App_Init_00468320)();
      (*(code *)PTR_keymap_Init_00468324)();
      (*(code *)PTR_PPPP__Timer_Init_00468328)();
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x67c8);
      *PTR_gFlagInitialized_0046829c = 1;
      uVar6 = 0;
    }
  }
  return uVar6;
}



// ==== FUN_0041dbb0 @ 0041dbb0 size=496

int FUN_0041dbb0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [2];
  int local_30;
  int local_2c;
  
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38[0] = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  if (*PTR_gFlagInitialized_0046829c == '\0') {
    local_2c = -0xbb9;
  }
  else {
    local_2c = (*(code *)PTR_PPPP__ParseDID_00468498)
                         (param_1,&local_48,0x10,local_38,&local_58,0x10);
    if (local_2c == 0) {
      uVar3 = 0;
      (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_TheLock_004682a4);
      uVar5 = *(uint *)PTR_gMaxSessionNumber_004682b8;
      if (uVar5 != 0) {
        local_30 = local_38[0];
        iVar4 = *(int *)PTR_gTNPSession_004682bc;
        do {
          pcVar2 = (char *)(iVar4 + uVar3 * 0x3f20);
          if ((((*pcVar2 == '\x01') &&
               (iVar1 = (*(code *)PTR_strcmp_004687fc)(pcVar2 + 0x1a8,&local_48), iVar1 == 0)) &&
              (*(int *)(pcVar2 + 0x1b8) == local_30)) &&
             (iVar1 = (*(code *)PTR_strcmp_004687fc)(pcVar2 + 0x1b0,&local_58), iVar1 == 0)) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar5);
      }
      (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_TheLock_004682a4);
      if (uVar3 < *(uint *)PTR_gMaxSessionNumber_004682b8) {
        *(undefined1 *)(*(int *)PTR_gTNPSession_004682bc + uVar3 * 0x3f20 + 0xf5) = 1;
      }
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5278,uVar3);
    }
    else {
      local_2c = -0xbbc;
    }
  }
  return local_2c;
}



// ==== FUN_0041e554 @ 0041e554 size=356

void FUN_0041e554(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_c18 [2048];
  undefined1 auStack_418 [1028];
  
  puVar1 = PTR_DAT_004684d0;
  if (*(int *)(PTR_DAT_004684d0 + -0x44c4) == 0) {
    (*(code *)PTR_memset_00468810)(auStack_418,0,0x400);
    (*(code *)PTR_memset_00468810)(auStack_c18,0,0x800);
    (*(code *)PTR_sprintf_004687f0)(auStack_418,PTR_DAT_00468298 + -0x4d18,param_1);
    uVar2 = (*(code *)PTR_popen_004688d8)(auStack_418,PTR_DAT_00468298 + -0x79ac);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x7b30,auStack_418);
    (*(code *)PTR_memset_00468810)(auStack_c18,0,0x800);
    iVar3 = (*(code *)PTR_fread_00468828)(auStack_c18,1,0x800,uVar2);
    auStack_c18[iVar3] = 0;
    uVar4 = (*(code *)PTR_strlen_004687c0)(auStack_c18);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x4cac,auStack_c18,uVar4);
    (*(code *)PTR_pclose_004688b8)(uVar2);
    *(undefined4 *)(puVar1 + -0x44c4) = 1;
  }
  return;
}



// ==== FUN_0041f63c @ 0041f63c size=248

undefined4 FUN_0041f63c(undefined1 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x4b74,param_1);
  puVar1 = PTR_DAT_00468298;
  uVar2 = 0xfffff447;
  if (*PTR_gFlagInitialized_0046829c != '\0') {
    if (param_1 == (undefined1 *)0x0) {
      uVar2 = 0xfffff443;
    }
    else {
      iVar3 = (*(code *)PTR_time_00468800)(0);
      uVar4 = iVar3 - *(int *)PTR_gLastSuccessLoginTime_004684dc;
      (*(code *)PTR_PPPP_DebugTrace_00468294)(2,puVar1 + -0x4b38,uVar4);
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x40000,puVar1 + -0x4b38,uVar4);
      if (uVar4 < 0x3d) {
        *param_1 = 1;
      }
      else {
        *param_1 = 0;
      }
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x4b08);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== FUN_0041f734 @ 0041f734 size=180

undefined4 FUN_0041f734(char param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  puVar2 = PTR_gSDevInfo_004684b0;
  puVar4 = PTR_DAT_00468298;
  if (*PTR_gFlagInitialized_0046829c == '\0') {
    uVar3 = 0xfffff447;
  }
  else {
    if (((int)(char)PTR_gSDevInfo_004684b0[0x60] != (int)param_1) &&
       (pcVar1 = PTR_gSDevInfo_004684b0 + 0x6c, PTR_gSDevInfo_004684b0[0x60] = param_1,
       '\0' < *pcVar1)) {
      (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(2);
      (*(code *)PTR_WaitThreadExit_00468404)(puVar2 + 0x68);
      (*(code *)PTR_PPPP__ResetSuperDevice_004684e4)();
      puVar4 = PTR_DAT_00468298;
    }
    (*(code *)PTR_PPPP_DebugTrace_00468294)(0x200,puVar4 + -0x4ae8,(int)param_1);
    uVar3 = 0;
  }
  return uVar3;
}



// ==== FUN_00425480 @ 00425480 size=68

void FUN_00425480(undefined4 param_1,undefined4 param_2,undefined2 param_3,char param_4,
                 undefined4 param_5)

{
  (*(code *)PTR_PPPP_Listen_With_Key2_004685b8)(param_1,param_2,param_3,(int)param_4,param_5,0);
  return;
}



// ==== FUN_00425504 @ 00425504 size=608

int FUN_00425504(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  
  if (*PTR_gFlagInitialized_0046829c == '\0') {
    iVar7 = -0xbb9;
  }
  else {
    (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_TheLock_004682a4);
    puVar1 = PTR_gTNPSession_004682bc;
    if (*(int *)PTR_gMaxSessionNumber_004682b8 != 0) {
      iVar7 = 0;
      do {
        pcVar8 = (char *)(*(int *)PTR_gTNPSession_004682bc + iVar7 * 0x3f20);
        if ((*pcVar8 == '\x01') && (pcVar8[0xf6] != '\x01')) {
          (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_TheLock_004682a4);
          local_28 = 0xd2;
          local_27 = 2;
          local_26 = 0xe;
          iVar3 = (*(code *)PTR_PPPP__SessionHandler_Is_Full_00468504)();
          puVar2 = PTR_gLoginFlag_00468518;
          if (iVar3 == 0) {
            iVar3 = (int)(char)PTR_gNetInfo_004682e8[3];
          }
          else {
            iVar3 = -7;
          }
          iVar4 = *(int *)puVar1;
          iVar9 = iVar4 + iVar7 * 0x3f20;
          if (*(char *)(iVar9 + 0x10) == 0) {
            puVar6 = PTR_gP2PServerAddr_004682a8 + 0x30;
            puVar5 = PTR_gP2PServerAddr_004682a8;
            while( true ) {
              iVar4 = iVar4 + iVar7 * 0x3f20;
              iVar4 = (*(code *)PTR_PPPP_Proto_Send_DevLgn_Key_00468590)
                                (*(undefined4 *)(iVar4 + 0xc),0,puVar5,iVar4 + 0x1a8,
                                 *(undefined4 *)(iVar4 + 0x1b8),iVar4 + 0x1b0,iVar3,&local_28,
                                 iVar4 + 0xb8,iVar4 + 0xf7,(int)(char)*puVar2);
              if (puVar5 + 0x10 == puVar6) break;
              iVar4 = *(int *)puVar1;
              puVar5 = puVar5 + 0x10;
            }
          }
          else {
            iVar4 = (*(code *)PTR_PPPP_Proto_Send_DevLgn_Key_00468590)
                              (*(undefined4 *)(iVar9 + 0xc),(int)*(char *)(iVar9 + 0x10),
                               iVar9 + (*(int *)(iVar9 + 0xa4) + 1) * 0x10 + 4,iVar9 + 0x1a8,
                               *(undefined4 *)(iVar9 + 0x1b8),iVar9 + 0x1b0,iVar3,&local_28,
                               iVar9 + 0xb8,iVar9 + 0xf7,(int)(char)*PTR_gLoginFlag_00468518);
          }
          if (iVar4 < 0) {
            return iVar4;
          }
          return 0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != *(int *)PTR_gMaxSessionNumber_004682b8);
    }
    (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_TheLock_004682a4);
    iVar7 = -0xbc3;
  }
  return iVar7;
}



// ==== FUN_00425854 @ 00425854 size=28

undefined4 FUN_00425854(undefined4 param_1)

{
  *(undefined4 *)PTR_gNoticeToCallback_004684d8 = param_1;
  return 0;
}



// ==== FUN_00425870 @ 00425870 size=540

int FUN_00425870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  if (*PTR_gFlagInitialized_0046829c == '\0') {
    iVar5 = -0xbb9;
  }
  else {
    (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_TheLock_004682a4);
    puVar1 = PTR_gTNPSession_004682bc;
    if (*(int *)PTR_gMaxSessionNumber_004682b8 != 0) {
      iVar5 = 0;
      do {
        pcVar6 = (char *)(*(int *)PTR_gTNPSession_004682bc + iVar5 * 0x3f20);
        if ((*pcVar6 == '\x01') && (pcVar6[0xf6] != '\x01')) {
          (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_TheLock_004682a4);
          iVar2 = *(int *)puVar1;
          iVar7 = iVar2 + iVar5 * 0x3f20;
          if (*(char *)(iVar7 + 0x10) == '\0') {
            puVar4 = PTR_gP2PServerAddr_004682a8 + 0x30;
            puVar3 = PTR_gP2PServerAddr_004682a8;
            while( true ) {
              iVar2 = iVar2 + iVar5 * 0x3f20;
              iVar2 = (*(code *)PTR_PPPP_Proto_Send_NoticeToAck_004685bc)
                                (*(undefined4 *)(iVar2 + 0xc),0,puVar3,iVar2 + 0x1a8,
                                 *(undefined4 *)(iVar2 + 0x1b8),iVar2 + 0x1b0,param_1,param_2,
                                 param_4,param_3);
              if (puVar3 + 0x10 == puVar4) break;
              iVar2 = *(int *)puVar1;
              puVar3 = puVar3 + 0x10;
            }
          }
          else {
            iVar2 = (*(code *)PTR_PPPP_Proto_Send_NoticeToAck_004685bc)
                              (*(undefined4 *)(iVar7 + 0xc),1,
                               iVar7 + (*(int *)(iVar7 + 0xa4) + 1) * 0x10 + 4,iVar7 + 0x1a8,
                               *(undefined4 *)(iVar7 + 0x1b8),iVar7 + 0x1b0,param_1,param_2,param_4,
                               param_3);
          }
          if (iVar2 < 0) {
            return iVar2;
          }
          return 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != *(int *)PTR_gMaxSessionNumber_004682b8);
    }
    (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_TheLock_004682a4);
    iVar5 = -0xbc3;
  }
  return iVar5;
}



// ==== FUN_00425aec @ 00425aec size=136

undefined4 FUN_00425aec(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(uint *)PTR_gMaxSessionNumber_004682b8 < param_1) {
    return 0xfffff43d;
  }
  if (((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) &&
     (param_4 != (undefined4 *)0x0)) {
    iVar1 = *(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20;
    uVar3 = *(undefined4 *)(iVar1 + 0x3f1c);
    uVar2 = *(undefined4 *)(iVar1 + 0x3f10);
    *param_2 = *(undefined4 *)(iVar1 + 0x3f18);
    param_2[1] = uVar3;
    *param_3 = uVar2;
    *param_4 = *(undefined4 *)(iVar1 + 0x3f14);
    return 0;
  }
  return 0xfffff443;
}



// ==== FUN_0042d95c @ 0042d95c size=292

void FUN_0042d95c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  (*(code *)PTR_printf_004688d4)(PTR_DAT_00468298 + -0x22d0,param_1[2],param_1[3],param_1[4]);
  if (param_2 != 1) {
    if (param_2 == 2) {
      param_1 = (undefined4 *)*param_1;
      iVar1 = 0;
      if (param_1 != (undefined4 *)0x0) {
        puVar2 = PTR_DAT_00468298 + -0x224c;
        do {
          if (iVar1 < 200) {
            (*(code *)PTR_printf_004688d4)(puVar2,iVar1,*param_1,param_1[2],param_1[1]);
          }
          param_1 = (undefined4 *)param_1[3];
          iVar1 = iVar1 + 1;
        } while (param_1 != (undefined4 *)0x0);
      }
    }
    return;
  }
  puVar3 = (undefined4 *)*param_1;
  (*(code *)PTR_printf_004688d4)(PTR_DAT_00468298 + -0x22a4,*puVar3,puVar3[2],puVar3[1]);
  puVar3 = (undefined4 *)param_1[1];
  (*(code *)PTR_printf_004688d4)(PTR_DAT_00468298 + -0x2278,*puVar3,puVar3[2],puVar3[1]);
  return;
}



// ==== FUN_004303e4 @ 004303e4 size=336

undefined4 FUN_004303e4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1108 [4168];
  undefined1 auStack_c0 [164];
  
  (*(code *)PTR_pppp_sha1_init_ctx_00468688)(auStack_c0);
  iVar2 = 0;
  while( true ) {
    while( true ) {
      iVar1 = (*(code *)PTR_fread_00468828)(auStack_1108 + iVar2,1,0x1000 - iVar2,param_1);
      iVar2 = iVar2 + iVar1;
      if (iVar2 != 0x1000) break;
      (*(code *)PTR_pppp_sha1_process_block_00468680)(auStack_1108,0x1000,auStack_c0);
      iVar2 = 0;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_feof_00468894)();
    if (iVar1 != 0) {
LAB_00430480:
      if (iVar2 != 0) {
        (*(code *)PTR_pppp_sha1_process_bytes_0046868c)(auStack_1108,iVar2,auStack_c0);
      }
      (*(code *)PTR_pppp_sha1_finish_ctx_00468690)(auStack_c0,param_2);
      return 0;
    }
  }
  iVar1 = (*(code *)PTR_ferror_00468848)(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  goto LAB_00430480;
}



// ==== FUN_00430dac @ 00430dac size=612

undefined4 FUN_00430dac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_830 [2048];
  undefined1 *local_30;
  
  iVar3 = (*(code *)PTR_fopen_00468818)(param_1,PTR_DAT_00468298 + -0x48c8);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  bVar1 = false;
LAB_00430e28:
  iVar4 = (*(code *)PTR_fgets_0046889c)(auStack_830,0x7ff,iVar3);
  do {
    if (iVar4 == 0) {
      (*(code *)PTR_fclose_00468808)(iVar3);
      return 0;
    }
    pcVar5 = (char *)(*(code *)PTR_trim_004686a4)(iVar4);
    uVar6 = (*(code *)PTR_strlen_004687c0)(pcVar5);
    if ((uVar6 < 3) || (*pcVar5 == '#')) goto LAB_00430e28;
    if ((*pcVar5 == '[') && (pcVar5[uVar6 - 1] == ']')) {
      pcVar5 = pcVar5 + 1;
      iVar4 = (*(code *)PTR_strlen_004687c0)(pcVar5);
      puVar2 = PTR_trim_004686a4;
      pcVar5[iVar4 + -1] = '\0';
      pcVar5 = (char *)(*(code *)puVar2)(pcVar5);
      iVar4 = (*(code *)PTR_strcasecmp_00468838)(pcVar5,param_2);
      if (iVar4 != 0) break;
    }
    else if (!bVar1) break;
    puVar7 = (undefined1 *)(*(code *)PTR_strchr_004687bc)(pcVar5,0x3d);
    puVar2 = PTR_trim_004686a4;
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 0;
      uVar8 = (*(code *)puVar2)(pcVar5);
      iVar4 = (*(code *)PTR_strcasecmp_00468838)(uVar8,param_3);
      if (iVar4 == 0) {
        iVar4 = (*(code *)PTR_trim_004686a4)(puVar7 + 1);
        (*(code *)PTR_fclose_00468808)(iVar3);
        if (iVar4 == 0) {
          return 0;
        }
        local_30 = &stack0x00000010;
        uVar8 = (*(code *)PTR_vsscanf_004688a0)(iVar4,param_4);
        return uVar8;
      }
    }
    iVar4 = (*(code *)PTR_fgets_0046889c)(auStack_830,0x7ff,iVar3);
    bVar1 = true;
  } while( true );
  bVar1 = false;
  goto LAB_00430e28;
}



// ==== FUN_0043125c @ 0043125c size=1124

undefined4 FUN_0043125c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined1 *local_1930 [512];
  undefined1 auStack_1130 [2048];
  undefined1 local_930 [2048];
  undefined4 local_130;
  undefined4 local_12c;
  undefined2 local_128;
  undefined1 local_126;
  undefined1 *local_30;
  
  local_1930[0] = &stack0x00000010;
  local_30 = local_930;
  local_930[0] = 0;
  (*(code *)PTR_vsnprintf_0046888c)(local_30,0x800,param_4,local_1930[0]);
  iVar8 = (*(code *)PTR_fopen_00468818)(param_1,PTR_DAT_00468298 + -0x48c8);
  (*(code *)PTR_strcpy_004688e0)(&local_130,param_1);
  iVar9 = (*(code *)PTR_myrindex_004686a8)(&local_130,0x2f);
  puVar7 = PTR_DAT_00468298;
  if (iVar9 == 0) {
    local_130 = *(undefined4 *)(PTR_DAT_00468298 + -0x212c);
    local_12c = *(undefined4 *)(PTR_DAT_00468298 + -0x2128);
    local_128 = *(undefined2 *)(PTR_DAT_00468298 + -0x2124);
    local_126 = PTR_DAT_00468298[-0x2122];
  }
  else {
    uVar15 = *(uint *)(PTR_DAT_00468298 + -0x212c);
    uVar14 = *(undefined4 *)(PTR_DAT_00468298 + -0x2128);
    uVar12 = iVar9 + 4U & 3;
    puVar4 = (uint *)((iVar9 + 4U) - uVar12);
    *puVar4 = *puVar4 & -1 << (uVar12 + 1) * 8 | uVar15 >> (3 - uVar12) * 8;
    uVar12 = iVar9 + 1U & 3;
    puVar4 = (uint *)((iVar9 + 1U) - uVar12);
    *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar12) * 8 | uVar15 << uVar12 * 8;
    uVar1 = puVar7[-0x2124];
    uVar2 = puVar7[-0x2123];
    uVar3 = puVar7[-0x2122];
    *(undefined4 *)(iVar9 + 5) = uVar14;
    *(undefined1 *)(iVar9 + 9) = uVar1;
    *(undefined1 *)(iVar9 + 10) = uVar2;
    *(undefined1 *)(iVar9 + 0xb) = uVar3;
  }
  iVar9 = (*(code *)PTR_fopen_00468818)(&local_130,PTR_DAT_00468298 + -0x2120);
  if (iVar9 == 0) {
    (*(code *)PTR_fclose_00468808)(iVar8);
    uVar14 = 0xffffffff;
  }
  else {
    bVar5 = false;
    if (iVar8 != 0) {
      bVar6 = false;
LAB_00431390:
      iVar10 = (*(code *)PTR_fgets_0046889c)(auStack_1130,0x7ff,iVar8);
      while( true ) {
        if (iVar10 == 0) {
          if (bVar5) {
            (*(code *)PTR_fclose_00468808)(iVar9);
            goto LAB_00431404;
          }
          if (!bVar6) goto LAB_004315f0;
          (*(code *)PTR_fprintf_0046885c)(iVar9,PTR_DAT_00468298 + -0x2114,param_3,local_930);
          (*(code *)PTR_fclose_00468808)(iVar9);
          goto LAB_00431404;
        }
        if (!bVar5) break;
        (*(code *)PTR_fputs_004687b8)(iVar10,iVar9);
        iVar10 = (*(code *)PTR_fgets_0046889c)(auStack_1130,0x7ff,iVar8);
      }
      (*(code *)PTR_strcpy_004688e0)(local_1930,iVar10);
      pcVar11 = (char *)(*(code *)PTR_trim_004686a4)(iVar10);
      uVar12 = (*(code *)PTR_strlen_004687c0)(pcVar11);
      if ((2 < uVar12) && (*pcVar11 != '#')) {
        if ((*pcVar11 == '[') && (pcVar11[uVar12 - 1] == ']')) {
          if (!bVar6) {
            pcVar11 = pcVar11 + 1;
            iVar10 = (*(code *)PTR_strlen_004687c0)(pcVar11);
            puVar7 = PTR_trim_004686a4;
            pcVar11[iVar10 + -1] = '\0';
            pcVar11 = (char *)(*(code *)puVar7)(pcVar11);
            iVar10 = (*(code *)PTR_strcasecmp_00468838)(pcVar11,param_2);
            if (iVar10 != 0) goto LAB_004315a0;
            bVar6 = true;
            goto LAB_004314b0;
          }
          (*(code *)PTR_fprintf_0046885c)(iVar9,PTR_DAT_00468298 + -0x2114,param_3,local_930);
          bVar5 = true;
          (*(code *)PTR_fputs_004687b8)(local_1930,iVar9);
          goto LAB_00431390;
        }
        if (!bVar6) {
LAB_004315a0:
          bVar6 = false;
          (*(code *)PTR_fputs_004687b8)(local_1930,iVar9);
          goto LAB_00431390;
        }
LAB_004314b0:
        puVar13 = (undefined1 *)(*(code *)PTR_strchr_004687bc)(pcVar11,0x3d);
        puVar7 = PTR_trim_004686a4;
        if (puVar13 != (undefined1 *)0x0) {
          *puVar13 = 0;
          uVar14 = (*(code *)puVar7)(pcVar11);
          iVar10 = (*(code *)PTR_strcasecmp_00468838)(uVar14,param_3);
          if (iVar10 != 0) goto LAB_00431584;
          (*(code *)PTR_fprintf_0046885c)(iVar9,PTR_DAT_00468298 + -0x2114,param_3,local_930);
          bVar5 = true;
          goto LAB_00431390;
        }
      }
LAB_00431584:
      (*(code *)PTR_fputs_004687b8)(local_1930,iVar9);
      goto LAB_00431390;
    }
LAB_004315f0:
    (*(code *)PTR_fprintf_0046885c)(iVar9,PTR_DAT_00468298 + -0x211c,param_2);
    (*(code *)PTR_fprintf_0046885c)(iVar9,PTR_DAT_00468298 + -0x2114,param_3,local_930);
    (*(code *)PTR_fclose_00468808)(iVar9);
    if (iVar8 != 0) {
LAB_00431404:
      (*(code *)PTR_fclose_00468808)(iVar8);
    }
    (*(code *)PTR_rename_00468860)(&local_130,param_1);
    uVar14 = 0;
  }
  return uVar14;
}



// ==== FUN_00433bd0 @ 00433bd0 size=308

int FUN_00433bd0(undefined4 param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [256];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,1,0x10);
  (*(code *)PTR_htonAddr_004686c8)(param_3,auStack_114);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x14,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1e80;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1e58;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== FUN_00435bec @ 00435bec size=184

void FUN_00435bec(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0xc,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  *param_3 = uVar1;
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 0x14));
  *param_5 = uVar1;
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 0x18));
  *param_6 = uVar1;
  return;
}



// ==== FUN_00435ca4 @ 00435ca4 size=376

int FUN_00435ca4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x60,0x1c);
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  (*(code *)PTR_PPPP_Proto_Write_RSLgn_004686e8)(&local_114,param_3,param_4,param_5,param_6,param_7)
  ;
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x20,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x186c;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1844;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== FUN_0043757c @ 0043757c size=424

void FUN_0043757c(int param_1,undefined4 param_2,uint *param_3,uint param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint in_t0;
  uint uVar34;
  uint in_t1;
  undefined8 uVar35;
  
  uVar32 = param_4;
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  uVar28 = param_1 + 0xc;
  uVar30 = 7;
  (*(code *)PTR_strncpy_0046883c)(param_4);
  uVar35 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  *param_3 = (uint)uVar35;
  uVar1 = param_1 + 0x1bU & 3;
  iVar8 = *(int *)((param_1 + 0x1bU) - uVar1);
  uVar2 = param_1 + 0x1fU & 3;
  uVar3 = param_1 + 0x23U & 3;
  uVar4 = param_1 + 0x27U & 3;
  uVar5 = param_1 + 0x2bU & 3;
  uVar6 = param_1 + 0x2fU & 3;
  uVar7 = param_1 + 0x33U & 3;
  uVar15 = param_1 + 0x18U & 3;
  uVar18 = *(uint *)((param_1 + 0x18U) - uVar15);
  uVar16 = param_1 + 0x1cU & 3;
  uVar34 = (*(int *)((param_1 + 0x1fU) - uVar2) << (3 - uVar2) * 8 |
           in_t0 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar16) * 8 |
           *(uint *)((param_1 + 0x1cU) - uVar16) >> uVar16 * 8;
  uVar2 = param_1 + 0x20U & 3;
  uVar33 = (*(int *)((param_1 + 0x23U) - uVar3) << (3 - uVar3) * 8 |
           uVar32 & 0xffffffffU >> (uVar3 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)((param_1 + 0x20U) - uVar2) >> uVar2 * 8;
  uVar2 = param_1 + 0x24U & 3;
  uVar31 = (*(int *)((param_1 + 0x27U) - uVar4) << (3 - uVar4) * 8 |
           uVar30 & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)((param_1 + 0x24U) - uVar2) >> uVar2 * 8;
  uVar2 = param_1 + 0x28U & 3;
  uVar29 = (*(int *)((param_1 + 0x2bU) - uVar5) << (3 - uVar5) * 8 |
           uVar28 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)((param_1 + 0x28U) - uVar2) >> uVar2 * 8;
  uVar2 = param_1 + 0x2cU & 3;
  uVar27 = (*(int *)((param_1 + 0x2fU) - uVar6) << (3 - uVar6) * 8 |
           (uint)((ulonglong)uVar35 >> 0x20) & 0xffffffffU >> (uVar6 + 1) * 8) &
           -1 << (4 - uVar2) * 8 | *(uint *)((param_1 + 0x2cU) - uVar2) >> uVar2 * 8;
  uVar2 = param_1 + 0x30U & 3;
  uVar26 = (*(int *)((param_1 + 0x33U) - uVar7) << (3 - uVar7) * 8 |
           (uint)uVar35 & 0xffffffffU >> (uVar7 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)((param_1 + 0x30U) - uVar2) >> uVar2 * 8;
  *param_5 = *(undefined4 *)(param_1 + 0x14);
  param_5[1] = (iVar8 << (3 - uVar1) * 8 | in_t1 & 0xffffffffU >> (uVar1 + 1) * 8) &
               -1 << (4 - uVar15) * 8 | uVar18 >> uVar15 * 8;
  param_5[2] = uVar34;
  param_5[3] = uVar33;
  param_5[4] = uVar31;
  param_5[5] = uVar29;
  param_5[6] = uVar27;
  param_5[7] = uVar26;
  uVar1 = param_1 + 0x3bU & 3;
  iVar8 = *(int *)((param_1 + 0x3bU) - uVar1);
  uVar2 = param_1 + 0x3fU & 3;
  iVar9 = *(int *)((param_1 + 0x3fU) - uVar2);
  uVar3 = param_1 + 0x43U & 3;
  iVar10 = *(int *)((param_1 + 0x43U) - uVar3);
  uVar4 = param_1 + 0x47U & 3;
  iVar11 = *(int *)((param_1 + 0x47U) - uVar4);
  uVar5 = param_1 + 0x4bU & 3;
  iVar12 = *(int *)((param_1 + 0x4bU) - uVar5);
  uVar6 = param_1 + 0x4fU & 3;
  iVar13 = *(int *)((param_1 + 0x4fU) - uVar6);
  uVar7 = param_1 + 0x53U & 3;
  iVar14 = *(int *)((param_1 + 0x53U) - uVar7);
  uVar15 = param_1 + 0x38U & 3;
  uVar19 = *(uint *)((param_1 + 0x38U) - uVar15);
  uVar16 = param_1 + 0x3cU & 3;
  uVar20 = *(uint *)((param_1 + 0x3cU) - uVar16);
  uVar18 = param_1 + 0x40U & 3;
  uVar21 = *(uint *)((param_1 + 0x40U) - uVar18);
  uVar32 = param_1 + 0x44U & 3;
  uVar22 = *(uint *)((param_1 + 0x44U) - uVar32);
  uVar28 = param_1 + 0x48U & 3;
  uVar23 = *(uint *)((param_1 + 0x48U) - uVar28);
  uVar30 = param_1 + 0x4cU & 3;
  uVar24 = *(uint *)((param_1 + 0x4cU) - uVar30);
  uVar17 = param_1 + 0x50U & 3;
  uVar25 = *(uint *)((param_1 + 0x50U) - uVar17);
  *param_6 = *(undefined4 *)(param_1 + 0x34);
  param_6[1] = (iVar8 << (3 - uVar1) * 8 | uVar34 & 0xffffffffU >> (uVar1 + 1) * 8) &
               -1 << (4 - uVar15) * 8 | uVar19 >> uVar15 * 8;
  param_6[2] = (iVar9 << (3 - uVar2) * 8 | uVar33 & 0xffffffffU >> (uVar2 + 1) * 8) &
               -1 << (4 - uVar16) * 8 | uVar20 >> uVar16 * 8;
  param_6[3] = (iVar10 << (3 - uVar3) * 8 | uVar31 & 0xffffffffU >> (uVar3 + 1) * 8) &
               -1 << (4 - uVar18) * 8 | uVar21 >> uVar18 * 8;
  param_6[4] = (iVar11 << (3 - uVar4) * 8 | uVar29 & 0xffffffffU >> (uVar4 + 1) * 8) &
               -1 << (4 - uVar32) * 8 | uVar22 >> uVar32 * 8;
  param_6[5] = (iVar12 << (3 - uVar5) * 8 | uVar27 & 0xffffffffU >> (uVar5 + 1) * 8) &
               -1 << (4 - uVar28) * 8 | uVar23 >> uVar28 * 8;
  param_6[6] = (iVar13 << (3 - uVar6) * 8 | uVar26 & 0xffffffffU >> (uVar6 + 1) * 8) &
               -1 << (4 - uVar30) * 8 | uVar24 >> uVar30 * 8;
  param_6[7] = (iVar14 << (3 - uVar7) * 8 | (uint)(param_1 + 0x14) & 0xffffffffU >> (uVar7 + 1) * 8)
               & -1 << (4 - uVar17) * 8 | uVar25 >> uVar17 * 8;
  return;
}



// ==== FUN_00438180 @ 00438180 size=92

void FUN_00438180(int param_1)

{
  undefined1 *in_stack_00000010;
  
  (*(code *)PTR_PPPP_Proto_Read_PunchPkt_00468364)();
  *in_stack_00000010 = *(undefined1 *)(param_1 + 0x14);
  in_stack_00000010[1] = *(undefined1 *)(param_1 + 0x15);
  in_stack_00000010[2] = *(undefined1 *)(param_1 + 0x16);
  return;
}



// ==== FUN_004381dc @ 004381dc size=328

int FUN_004381dc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [252];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x41,0x14);
  (*(code *)PTR_PPPP_Proto_Write_PunchPkt_00468708)(auStack_114,param_3,param_4,param_5);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x18,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x12b4;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x128c;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== FUN_004385f0 @ 004385f0 size=92

void FUN_004385f0(int param_1)

{
  undefined1 *in_stack_00000010;
  
  (*(code *)PTR_PPPP_Proto_Read_P2PRdy_00468368)();
  *in_stack_00000010 = *(undefined1 *)(param_1 + 0x14);
  in_stack_00000010[1] = *(undefined1 *)(param_1 + 0x15);
  in_stack_00000010[2] = *(undefined1 *)(param_1 + 0x16);
  return;
}



// ==== FUN_0043ae50 @ 0043ae50 size=136

void FUN_0043ae50(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0xc,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  *param_3 = uVar1;
  return;
}



// ==== FUN_0043b554 @ 0043b554 size=136

void FUN_0043b554(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0xc,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  *param_3 = uVar1;
  return;
}



// ==== FUN_0043b5dc @ 0043b5dc size=328

int FUN_0043b5dc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [252];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x67,0x14);
  (*(code *)PTR_PPPP_Proto_Write_ListReq1_0046873c)(auStack_114,param_3,param_4,param_5);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x18,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0xac8;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0xaa0;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== FUN_0043d590 @ 0043d590 size=136

void FUN_0043d590(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0xc,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  *param_3 = uVar1;
  return;
}



// ==== FUN_0043d618 @ 0043d618 size=352

int FUN_0043d618(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0xf6,0x14);
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  (*(code *)PTR_PPPP_Proto_Write_MGMDumpLoginDID1_0046875c)(&local_114,param_3,param_4,param_5);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x18,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x688;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x654;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== FUN_0043d938 @ 0043d938 size=672

int FUN_0043d938(undefined4 param_1,int param_2,uint param_3,uint param_4,int param_5,ushort param_6
                )

{
  ushort uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_538 [4];
  undefined1 auStack_534 [8];
  undefined1 auStack_52c [1268];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_30 = param_3 & 0xff;
  local_34 = (uint)param_6;
  local_2c = param_4 & 0xff;
  (*(code *)PTR_memset_00468810)(auStack_538,0,0x500);
  uVar5 = local_34 / 0x4f4;
  if (local_34 == uVar5 * 0x4f4) {
    uVar5 = uVar5 & 0xff;
    if (uVar5 == 0) {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = uVar5 + 1;
  }
  local_38 = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar7 + 1;
    if (uVar5 == uVar4) {
      uVar6 = local_34 - local_38 & 0xffff;
      (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_538,0xf8,uVar6 + 8 & 0xffff);
      (*(code *)PTR_PPPP_Proto_Write_MGMRemoteManagement_00468760)
                (auStack_534,local_30,local_2c,uVar7,uVar5,uVar6);
      if (param_5 == 0) {
        iVar8 = uVar6 + 0xc;
      }
      else {
        if (uVar6 != 0) {
          iVar8 = uVar6 + 0xc;
          goto LAB_0043db60;
        }
        iVar8 = 0xc;
      }
    }
    else {
      (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_538,0xf8,0x4fc);
      iVar8 = 0x500;
      (*(code *)PTR_PPPP_Proto_Write_MGMRemoteManagement_00468760)
                (auStack_534,local_30,local_2c,uVar7,uVar5,0x4f4);
      if (param_5 != 0) {
        uVar6 = 0x4f4;
LAB_0043db60:
        (*(code *)PTR_memcpy_00468898)(auStack_52c,param_5 + local_38,uVar6);
        local_38 = uVar6 + local_38 & 0xffff;
      }
    }
    iVar8 = (*(code *)PTR_SendMessage_0046856c)(auStack_538,iVar8,param_1,param_2);
    if (iVar8 < 0) {
      uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
      uVar1 = *(ushort *)(param_2 + 2);
      puVar3 = PTR_DAT_00468298 + -0x5d8;
    }
    else {
      uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
      uVar1 = *(ushort *)(param_2 + 2);
      puVar3 = PTR_DAT_00468298 + -0x5a4;
    }
    (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar3,uVar2,uVar1 >> 8 | uVar1 << 8);
    uVar7 = uVar4;
    if (uVar5 <= (uVar4 & 0xff)) {
      return iVar8;
    }
  } while( true );
}



// ==== FUN_0043dbe0 @ 0043dbe0 size=204

void FUN_0043dbe0(void)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_004684d0;
  if (*(int *)(PTR_DAT_004684d0 + -0x7df0) != -1) {
    (*(code *)PTR_munmap_004688ac)(*(int *)(PTR_DAT_004684d0 + -0x7df0),0x1b412c);
    *(undefined4 *)(puVar1 + -0x7df0) = 0xffffffff;
  }
  if (*(int *)(puVar1 + -0x7dec) != 0) {
    (*(code *)PTR_sem_close_0046884c)();
    *(undefined4 *)(puVar1 + -0x7dec) = 0;
  }
  if (*(int *)(puVar1 + -0x7de8) != 0) {
    (*(code *)PTR_sem_close_0046884c)();
    *(undefined4 *)(puVar1 + -0x7de8) = 0;
  }
  piVar2 = (int *)(PTR_DAT_004684d0 + -0x7de4);
  do {
    if (*piVar2 != 0) {
      (*(code *)PTR_sem_close_0046884c)(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)(puVar1 + -0x7da0));
  return;
}



// ==== FUN_0043dcac @ 0043dcac size=156

void FUN_0043dcac(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_004684d0;
  (*(code *)PTR_sem_wait_00468884)(*(undefined4 *)(PTR_DAT_004684d0 + -0x7de8));
  iVar2 = **(int **)(puVar1 + -0x7df0) + 1;
  **(int **)(puVar1 + -0x7df0) = iVar2;
  if (iVar2 != 1) {
    (*(code *)PTR_sem_post_00468880)(*(undefined4 *)(puVar1 + -0x7de8));
    return;
  }
  (*(code *)PTR_sem_wait_00468884)(*(undefined4 *)(puVar1 + -0x7dec));
  (*(code *)PTR_sem_post_00468880)(*(undefined4 *)(puVar1 + -0x7de8));
  return;
}



// ==== FUN_0043dd48 @ 0043dd48 size=124

void FUN_0043dd48(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_004684d0;
  (*(code *)PTR_sem_wait_00468884)(*(undefined4 *)(PTR_DAT_004684d0 + -0x7de8));
  iVar2 = **(int **)(puVar1 + -0x7df0) + -1;
  **(int **)(puVar1 + -0x7df0) = iVar2;
  if (iVar2 == 0) {
    (*(code *)PTR_sem_post_00468880)(*(undefined4 *)(puVar1 + -0x7dec));
  }
  (*(code *)PTR_sem_post_00468880)(*(undefined4 *)(puVar1 + -0x7de8));
  return;
}



// ==== FUN_0043ddc4 @ 0043ddc4 size=244

uint FUN_0043ddc4(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_004684d0;
  uVar3 = param_1 + param_3;
  if (*(uint *)(PTR_DAT_004684d0 + -0x7da0) < uVar3) {
    iVar5 = *(uint *)(PTR_DAT_004684d0 + -0x7da0) - param_1;
    iVar2 = (*(code *)PTR_memcpy_00468898)(param_2,param_1,iVar5);
    iVar4 = *(int *)(puVar1 + -0x7df0);
    (*(code *)PTR_memcpy_00468898)(iVar2 + iVar5,iVar4 + 300,param_3 - iVar5);
    return iVar4 + 300 + (param_3 - iVar5);
  }
  (*(code *)PTR_memcpy_00468898)(param_2,param_1);
  if (uVar3 != *(uint *)(puVar1 + -0x7da0)) {
    return uVar3;
  }
  return *(int *)(puVar1 + -0x7df0) + 300;
}



// ==== FUN_0043deb8 @ 0043deb8 size=200

void FUN_0043deb8(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  pcVar5 = (code *)(PTR_LAB_00468460 + -0x223c);
  uVar1 = (*pcVar5)(param_1,param_2 + 0x12,1);
  if (*(byte *)(param_2 + 0x12) != 1) {
    bVar2 = *(byte *)(param_2 + 0x12) ^ 2;
    uVar4 = 0xffffffff;
    if (bVar2 == 0) {
      uVar4 = 4;
    }
    uVar3 = 5;
    if (bVar2 != 0) {
      uVar3 = 0;
    }
    *param_3 = uVar3;
    (*pcVar5)(uVar1,param_2 + 0x13,uVar4);
    return;
  }
  *param_3 = 6;
  (*pcVar5)(uVar1,param_2 + 0x13,5);
  return;
}



// ==== FUN_0043df80 @ 0043df80 size=244

uint FUN_0043df80(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_004684d0;
  uVar3 = param_1 + param_3;
  if (*(uint *)(PTR_DAT_004684d0 + -0x7da0) < uVar3) {
    iVar4 = *(uint *)(PTR_DAT_004684d0 + -0x7da0) - param_1;
    (*(code *)PTR_memcpy_00468898)(param_1,param_2,iVar4);
    iVar2 = (*(code *)PTR_memcpy_00468898)
                      (*(int *)(puVar1 + -0x7df0) + 300,param_2 + iVar4,param_3 - iVar4);
    return iVar2 + (param_3 - iVar4);
  }
  (*(code *)PTR_memcpy_00468898)();
  if (uVar3 != *(uint *)(puVar1 + -0x7da0)) {
    return uVar3;
  }
  return *(int *)(puVar1 + -0x7df0) + 300;
}



// ==== FUN_0043e17c @ 0043e17c size=92

bool FUN_0043e17c(int param_1,uint param_2,uint param_3,int param_4)

{
  if ((((param_2 & 0xf) == 0) || ((param_2 & 0xf) == (param_3 & 0xf))) &&
     ((param_3 & param_2 & 0xff00) != 0)) {
    if (param_1 != 0) {
      param_1 = param_1 + 1;
      if (param_1 == 0) {
        param_1 = 1;
      }
      return (uint)(param_4 - param_1) < 0x7fffffff;
    }
    return true;
  }
  return false;
}



// ==== FUN_0043eb10 @ 0043eb10 size=128

void FUN_0043eb10(int param_1,undefined2 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_004684d0;
  (*(code *)PTR_sem_wait_00468884)(*(undefined4 *)(PTR_DAT_004684d0 + -0x7dec));
  *(undefined2 *)(*(int *)(puVar1 + -0x7df0) + (param_1 + 2) * 0x10 + 8) = param_2;
  (*(code *)PTR_sem_post_00468880)(*(undefined4 *)(puVar1 + -0x7dec));
  return;
}



// ==== FUN_0043f164 @ 0043f164 size=156

int FUN_0043f164(void)

{
  int iVar1;
  undefined1 auStack_20 [12];
  int local_14;
  
  (*(code *)(PTR_LAB_00468460 + -0x2354))();
  iVar1 = *(int *)(PTR_DAT_004684d0 + -0x7df0);
  if (*(int *)(iVar1 + 4) < 1) {
    local_14 = 0;
  }
  else {
    (*(code *)(PTR_LAB_00468460 + -0x223c))(iVar1 + *(int *)(iVar1 + 0x10) + 300,auStack_20,0x16);
    local_14 = *(int *)(iVar1 + 0x14) - local_14;
  }
  (*(code *)(PTR_LAB_00468460 + -0x22b8))();
  return local_14;
}



// ==== FUN_0043f200 @ 0043f200 size=124

undefined4 FUN_0043f200(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (*(code *)(PTR_LAB_00468460 + -0x2354))();
  uVar1 = 0xffffffff;
  if (0 < *(int *)(*(int *)(PTR_DAT_004684d0 + -0x7df0) + 4)) {
    uVar1 = 0;
    *param_1 = *(undefined4 *)(*(int *)(PTR_DAT_004684d0 + -0x7df0) + 0x14);
  }
  (*(code *)(PTR_LAB_00468460 + -0x22b8))();
  return uVar1;
}



// ==== FUN_0043f27c @ 0043f27c size=452

void FUN_0043f27c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int local_60;
  undefined4 local_5c;
  int local_54;
  ushort local_50;
  undefined1 auStack_48 [12];
  int local_3c;
  int local_30;
  
  (*(code *)(PTR_LAB_00468460 + -0x2354))();
  iVar3 = *(int *)(PTR_DAT_004684d0 + -0x7df0);
  if ((param_2 == 0) || (*(int *)(iVar3 + 4) < 1)) {
    iVar5 = param_1 << 4;
    *(undefined4 *)(iVar3 + (param_1 + 2) * 0x10 + 4) = 0;
  }
  else {
    pcVar6 = (code *)(PTR_LAB_00468460 + -0x223c);
    (*pcVar6)(iVar3 + *(int *)(iVar3 + 0x10) + 300,auStack_48,0x16);
    if (param_2 < (uint)(*(int *)(iVar3 + 0x14) - local_3c)) {
      iVar5 = param_1 * 0x10;
      iVar4 = *(int *)(iVar3 + 4);
      local_30 = param_2 + local_3c;
      iVar1 = *(int *)(iVar3 + 0x10);
      if (0 < iVar4) {
        do {
          (*pcVar6)(iVar3 + iVar1 + 300,&local_60,0x16);
          if (((local_50 & 0x200) == 0) && ((uint)(local_54 - local_30) < 0x7fffffff)) break;
          iVar2 = iVar1 + local_60;
          iVar4 = (iVar4 + -0x16) - local_60;
          iVar1 = iVar2 + 0x16;
          *(undefined4 *)(iVar3 + iVar5 + 0x24) = local_5c;
          if (0x1b3fff < iVar1) {
            iVar1 = iVar2 + -0x1b3fea;
          }
        } while (0 < iVar4);
      }
    }
    else {
      iVar5 = param_1 << 4;
      *(undefined4 *)(iVar3 + (param_1 + 2) * 0x10 + 4) = *(undefined4 *)(iVar3 + 0x18);
    }
  }
  pcVar6 = (code *)(PTR_LAB_00468460 + -0x22b8);
  *(undefined4 *)(iVar3 + iVar5 + 0x1c) = 1;
  (*pcVar6)();
  return;
}



// ==== FUN_0043f440 @ 0043f440 size=160

void FUN_0043f440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (*(code *)PTR_fshare_read_00468764)(param_1,param_2,param_3,param_4,param_5);
    if (-2 < iVar1) break;
    (*(code *)PTR_fshare_wait_00468768)(param_1);
  }
  return;
}



// ==== FUN_0043f4e0 @ 0043f4e0 size=160

void FUN_0043f4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (*(code *)PTR_fshare_read_newest_0046876c)(param_1,param_2,param_3,param_4,param_5);
    if (-2 < iVar1) break;
    (*(code *)PTR_fshare_wait_00468768)(param_1);
  }
  return;
}



// ==== FUN_0043f580 @ 0043f580 size=192

int FUN_0043f580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x32;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = (*(code *)PTR_fshare_read_00468764)(param_1,param_2,param_3,param_4,param_5);
    if (0 < iVar1) {
      return iVar1;
    }
    (*(code *)PTR_ms_sleep_00468770)(10);
  } while (iVar2 != 0);
  return iVar1;
}



// ==== FUN_0043f640 @ 0043f640 size=192

int FUN_0043f640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x32;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = (*(code *)PTR_fshare_read_newest_0046876c)(param_1,param_2,param_3,param_4,param_5);
    if (0 < iVar1) {
      return iVar1;
    }
    (*(code *)PTR_ms_sleep_00468770)(10);
  } while (iVar2 != 0);
  return iVar1;
}



// ==== FUN_0043f700 @ 0043f700 size=156

undefined4 FUN_0043f700(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0xc);
  lVar1 = (ulonglong)(uVar2 << 0x18 | uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | (uVar2 & 0xff00) << 8) *
          1000;
  uVar3 = FUN_004450a8((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),
                       uVar4 << 0x18 | uVar4 >> 0x18 | uVar4 >> 8 & 0xff00 | (uVar4 & 0xff00) << 8,0
                      );
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return 0;
}



// ==== FUN_0043fcf0 @ 0043fcf0 size=368

uint FUN_0043fcf0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar3 = *(uint *)(param_2 + 0x14);
  if (1 < *(uint *)(param_2 + 0xc)) {
    iVar5 = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x10);
    uVar10 = 1;
    if (iVar5 * uVar3 < param_4) {
      iVar9 = 0;
      iVar7 = 4;
      iVar6 = 0x10;
      iVar8 = *(int *)(param_2 + 0x1c);
      uVar1 = iVar5 * uVar3;
      do {
        uVar4 = uVar1;
        iVar2 = iVar6 - iVar7;
        uVar10 = uVar10 + 1;
        iVar7 = uVar10 * 4;
        iVar6 = uVar10 * 0x10;
        iVar9 = iVar9 + iVar5;
        uVar3 = *(uint *)(param_2 + iVar2 + 0x14);
        if (uVar10 == *(uint *)(param_2 + 0xc)) break;
        iVar2 = *(int *)(param_2 + uVar10 * 0xc + 0x10);
        iVar5 = iVar2 - iVar8;
        uVar1 = uVar4 + iVar5 * uVar3;
        iVar8 = iVar2;
      } while (uVar1 < param_4);
      goto LAB_0043fd94;
    }
  }
  uVar4 = 0;
  iVar9 = 0;
LAB_0043fd94:
  param_4 = param_4 - 1;
  uVar10 = (param_4 - uVar4) / uVar3;
  if (uVar3 == 0) {
    trap(0x1c00);
  }
  uVar4 = uVar10 * uVar3 + uVar4;
  uVar3 = *(uint *)(param_3 + (iVar9 + uVar10 + 4) * 4);
  uVar3 = uVar3 << 0x18 | uVar3 >> 0x18 | uVar3 >> 8 & 0xff00 | (uVar3 & 0xff00) << 8;
  if (uVar4 < param_4) {
    do {
      iVar5 = uVar4 + 4;
      uVar4 = uVar4 + 1;
      uVar10 = *(uint *)(param_1 + iVar5 * 4 + 4);
      uVar3 = uVar3 + (uVar10 << 0x18 | uVar10 >> 0x18 | uVar10 >> 8 & 0xff00 |
                      (uVar10 & 0xff00) << 8);
    } while (uVar4 != param_4);
  }
  return uVar3;
}



// ==== FUN_0043fe60 @ 0043fe60 size=236

undefined4 FUN_0043fe60(undefined4 param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  for (; 7 < param_3; param_3 = param_3 - uVar2) {
    uVar2 = *param_2;
    uVar2 = uVar2 << 0x18 | uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | (uVar2 & 0xff00) << 8;
    iVar1 = bsearch(param_2 + 1,&DAT_0044fba0,0xf,8,&DAT_0043fffc);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 4))(param_1,param_2 + 2,uVar2 - 8);
    }
    param_2 = (uint *)((int)param_2 + uVar2);
  }
  return 0;
}



// ==== FUN_0043ff4c @ 0043ff4c size=36

undefined4 FUN_0043ff4c(undefined4 param_1,int param_2,int param_3)

{
  FUN_0043fe60(param_1,param_2 + 8,param_3 + -8);
  return 0;
}



// ==== FUN_0043ff84 @ 0043ff84 size=120

undefined4 FUN_0043ff84(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_v1;
  
  iVar1 = param_1 + in_v1 * 0x2c;
  *(ushort *)(iVar1 + 0x14) = *(ushort *)(param_2 + 0x18) << 8 | *(ushort *)(param_2 + 0x18) >> 8;
  *(ushort *)(iVar1 + 0x16) = *(ushort *)(param_2 + 0x1a) << 8 | *(ushort *)(param_2 + 0x1a) >> 8;
  FUN_0043fe60(param_1,param_2 + 0x4e,param_3 + -0x4e);
  return 0;
}



// ==== FUN_00440070 @ 00440070 size=16

void FUN_00440070(void)

{
  calloc(1,0xb4);
  return;
}



// ==== FUN_00440080 @ 00440080 size=76

undefined4 FUN_00440080(int param_1,int param_2,uint *param_3,uint *param_4)

{
  ushort uVar1;
  
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 0x20))) {
    param_1 = param_1 + param_2 * 0x2c;
    uVar1 = *(ushort *)(param_1 + 0x16);
    *param_3 = (uint)*(ushort *)(param_1 + 0x14);
    *param_4 = (uint)uVar1;
    return 0;
  }
  *param_3 = 0;
  *param_4 = 0;
  return 0xffffffff;
}



// ==== FUN_004400cc @ 004400cc size=68

undefined4 FUN_004400cc(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 0x20))) {
    param_1 = param_1 + (param_2 + -1) * 0x2c;
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    *param_3 = *(undefined4 *)(param_1 + 0x50);
    return uVar1;
  }
  *param_3 = 0;
  return 0;
}



// ==== FUN_00440110 @ 00440110 size=68

undefined4 FUN_00440110(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 0x20))) {
    param_1 = param_1 + (param_2 + -1) * 0x2c;
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    *param_3 = *(undefined4 *)(param_1 + 0x54);
    return uVar1;
  }
  *param_3 = 0;
  return 0;
}



// ==== FUN_00440154 @ 00440154 size=68

undefined4 FUN_00440154(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 0x20))) {
    param_1 = param_1 + (param_2 + -1) * 0x2c;
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    *param_3 = *(undefined4 *)(param_1 + 0x58);
    return uVar1;
  }
  *param_3 = 0;
  return 0;
}



// ==== FUN_00440198 @ 00440198 size=152

uint FUN_00440198(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 0x20))) {
    iVar1 = *(int *)(param_1 + param_2 * 0x2c + 8);
    puVar5 = (uint *)(iVar1 + 0x14);
    iVar1 = *(int *)(iVar1 + 0x10);
    uVar2 = 0;
    if (iVar1 != 0) {
      puVar4 = puVar5 + iVar1;
      do {
        uVar3 = *puVar5;
        puVar5 = puVar5 + 1;
        uVar3 = uVar3 << 0x18 | uVar3 >> 0x18 | uVar3 >> 8 & 0xff00 | (uVar3 & 0xff00) << 8;
        if (uVar2 < uVar3) {
          uVar2 = uVar3;
        }
      } while (puVar5 != puVar4);
    }
    return uVar2;
  }
  return 0xffffffff;
}



// ==== FUN_00440230 @ 00440230 size=68

undefined4 FUN_00440230(int param_1,int param_2)

{
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 0x20))) {
    return *(undefined4 *)(*(int *)(param_1 + (param_2 + -1) * 0x2c + 0x34) + 0x10);
  }
  return 0xffffffff;
}



// ==== FUN_00440274 @ 00440274 size=68

undefined4 FUN_00440274(int param_1,int param_2)

{
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 0x1c))) {
    return *(undefined4 *)(*(int *)(param_1 + (param_2 + -1) * 0xc + 0x24) + 0x10);
  }
  return 0xffffffff;
}



// ==== FUN_004402b8 @ 004402b8 size=352

uint FUN_004402b8(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,
                 uint *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint local_20 [2];
  
  if (0 < (int)param_3) {
    iVar4 = param_1[param_2 * 0xb + 2];
    if (param_3 <= *(uint *)(iVar4 + 0x10)) {
      uVar1 = *(uint *)(iVar4 + (param_3 + 3) * 4 + 4);
      uVar1 = uVar1 << 0x18 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00 | (uVar1 & 0xff00) << 8;
      if (uVar1 <= param_5) {
        uVar2 = FUN_0043fcf0(iVar4,param_1[param_2 * 0xb + 3],param_1[param_2 * 0xb + 4],param_3);
        fseek(*param_1,uVar2,0);
        uVar3 = fread(param_4,1,uVar1,*param_1);
        if (uVar3 == uVar1) {
          local_20[0] = param_3;
          iVar4 = bsearch(local_20,param_1[param_2 * 0xb + 1] + 0x10,
                          *(undefined4 *)(param_1[param_2 * 0xb + 1] + 0xc),4,&LAB_0043fcb4);
          *param_6 = (uint)(iVar4 != 0);
          return uVar3;
        }
      }
    }
  }
  return 0xffffffff;
}



// ==== FUN_00440418 @ 00440418 size=240

uint FUN_00440418(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (0 < (int)param_3) {
    iVar4 = param_1[param_2 * 3 + 6];
    if (param_3 <= *(uint *)(iVar4 + 0x10)) {
      uVar1 = *(uint *)(iVar4 + (param_3 + 3) * 4 + 4);
      uVar1 = uVar1 << 0x18 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00 | (uVar1 & 0xff00) << 8;
      if (uVar1 <= param_5) {
        uVar2 = FUN_0043fcf0(iVar4,param_1[param_2 * 3 + 7],param_1[param_2 * 3 + 8],param_3);
        fseek(*param_1,uVar2,0);
        uVar3 = fread(param_4,1,uVar1,*param_1);
        if (uVar3 == uVar1) {
          return uVar3;
        }
      }
    }
  }
  return 0xffffffff;
}



// ==== FUN_00440508 @ 00440508 size=148

undefined4 FUN_00440508(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    fclose();
    *param_1 = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    *(undefined1 *)((int)param_1 + 0x26) = 0;
    *(undefined1 *)((int)param_1 + 0x27) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    *(undefined1 *)((int)param_1 + 0x2a) = 0;
    *(undefined1 *)((int)param_1 + 0x2b) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)((int)param_1 + 0x2d) = 0;
    *(undefined1 *)((int)param_1 + 0x2e) = 0;
    *(undefined1 *)((int)param_1 + 0x2f) = 0;
    memset(param_1 + 0xc,0,0x84);
  }
  return 0;
}



// ==== FUN_0044059c @ 0044059c size=644

undefined4 FUN_0044059c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint local_20;
  int local_1c;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      return 0xffffffff;
    }
    iVar2 = fopen(param_2,&DAT_0044fb90);
    *param_1 = iVar2;
    if (iVar2 != 0) {
      while (iVar2 = fread(&local_20,1,8,iVar2), iVar2 == 8) {
        local_20 = local_20 << 0x18 | local_20 >> 0x18 | local_20 >> 8 & 0xff00 |
                   (local_20 & 0xff00) << 8;
        if (local_20 < 8) goto LAB_0044066c;
        if (local_20 != 8) {
          iVar2 = local_20 - 8;
          if (local_1c == 0x766f6f6d) {
            iVar3 = ftell(*param_1,iVar2,1);
            iVar7 = param_1[2];
            uVar5 = param_1[3];
            uVar4 = iVar2 + iVar7;
            param_1[1] = iVar3 + -8;
            if (uVar5 < uVar4) {
              uVar6 = (uVar4 - uVar5) + 0xfff & 0xfffff000;
              iVar3 = realloc(param_1[4],uVar6 + uVar5);
              if (iVar3 == 0) goto LAB_0044066c;
              iVar7 = param_1[2];
              param_1[4] = iVar3;
              uVar4 = iVar2 + iVar7;
              param_1[3] = param_1[3] + uVar6;
            }
            else {
              iVar3 = param_1[4];
            }
            iVar3 = iVar3 + iVar7;
            param_1[2] = uVar4;
            if ((iVar3 == 0) || (iVar7 = fread(iVar3,1,iVar2,*param_1), iVar2 != iVar7))
            goto LAB_0044066c;
            FUN_0043fe60(param_1,iVar3,iVar2);
            break;
          }
          fseek();
        }
        iVar2 = *param_1;
      }
      if (param_1[8] < 1) {
LAB_00440770:
        if (param_1[7] < 1) {
          return 0;
        }
        if (((param_1[9] != 0) && (param_1[10] != 0)) && (param_1[0xb] != 0)) {
          iVar2 = 0;
          piVar8 = param_1 + 0xd;
          do {
            iVar2 = iVar2 + 1;
            if (iVar2 == param_1[7]) {
              return 0;
            }
          } while (((piVar8[-1] != 0) && (*piVar8 != 0)) &&
                  (piVar1 = piVar8 + 1, piVar8 = piVar8 + 3, *piVar1 != 0));
        }
      }
      else if ((((param_1[0xc] != 0) && (param_1[0xd] != 0)) && (param_1[0xe] != 0)) &&
              (param_1[0xf] != 0)) {
        iVar2 = 0;
        piVar8 = param_1;
        do {
          iVar2 = iVar2 + 1;
          if (iVar2 == param_1[8]) goto LAB_00440770;
        } while ((((piVar8[0x17] != 0) && (piVar8[0x18] != 0)) && (piVar8[0x19] != 0)) &&
                (piVar1 = piVar8 + 0x1a, piVar8 = piVar8 + 0xb, *piVar1 != 0));
      }
LAB_0044066c:
      FUN_00440508(param_1);
    }
  }
  return 0xffffffff;
}



// ==== FUN_00440820 @ 00440820 size=72

void FUN_00440820(int param_1)

{
  if (param_1 != 0) {
    FUN_00440508();
    free(*(undefined4 *)(param_1 + 0x10));
    free(param_1);
    return;
  }
  return;
}



// ==== FUN_00440868 @ 00440868 size=28

void FUN_00440868(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memset(param_1,param_3,param_4);
  return;
}



// ==== FUN_00440884 @ 00440884 size=28

void FUN_00440884(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memcpy(param_1,param_3,param_4);
  return;
}



// ==== FUN_004408a0 @ 004408a0 size=284

undefined4 FUN_004408a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_80 [2];
  undefined2 local_78;
  char acStack_76 [4];
  char acStack_72 [4];
  char local_6e [4];
  char local_6a;
  int aiStack_10 [2];
  
  if (param_1 == (int *)0x0) {
    puts("invalid para, is null\r");
    uVar2 = 0xffffffff;
  }
  else {
    memset(local_80,0,0x78);
    local_78 = 1;
    acStack_76[0] = s__tmp_logsock_0044fc38[0];
    acStack_76[1] = s__tmp_logsock_0044fc38[1];
    acStack_76[2] = s__tmp_logsock_0044fc38[2];
    acStack_76[3] = s__tmp_logsock_0044fc38[3];
    acStack_72[0] = s__tmp_logsock_0044fc38[4];
    acStack_72[1] = s__tmp_logsock_0044fc38[5];
    acStack_72[2] = s__tmp_logsock_0044fc38[6];
    acStack_72[3] = s__tmp_logsock_0044fc38[7];
    local_6e[0] = s__tmp_logsock_0044fc38[8];
    local_6e[1] = s__tmp_logsock_0044fc38[9];
    local_6e[2] = s__tmp_logsock_0044fc38[10];
    local_6e[3] = s__tmp_logsock_0044fc38[0xb];
    local_6a = s__tmp_logsock_0044fc38[0xc];
    local_80[1] = 0x6e;
    local_80[0] = socket(1,1,0);
    if (local_80[0] < 0) {
      puts("create socket fail\r");
      uVar2 = 0xffffffff;
    }
    else {
      piVar6 = local_80;
      do {
        piVar5 = piVar6;
        piVar4 = param_1;
        piVar6 = piVar5 + 4;
        iVar1 = piVar5[1];
        *piVar4 = *piVar5;
        iVar3 = piVar5[2];
        piVar4[1] = iVar1;
        iVar1 = piVar5[3];
        piVar4[2] = iVar3;
        piVar4[3] = iVar1;
        param_1 = piVar4 + 4;
      } while (piVar6 != aiStack_10);
      uVar2 = 0;
      iVar1 = piVar5[5];
      piVar4[4] = *piVar6;
      piVar4[5] = iVar1;
    }
  }
  return uVar2;
}



// ==== FUN_00440bd4 @ 00440bd4 size=48

void FUN_00440bd4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = popen(param_1,"r");
  if (iVar1 != 0) {
    pclose(iVar1);
    return;
  }
  return;
}



// ==== FUN_00440c04 @ 00440c04 size=496

int FUN_00440c04(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_a8 [32];
  uint local_28 [2];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = popen(param_1,"r");
    if (iVar1 == 0) {
      return -3;
    }
    uVar2 = fileno(iVar1);
    puVar5 = local_28;
    if ((int)uVar2 < 0) {
      return 0;
    }
    puVar4 = local_a8;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (puVar5 != puVar4);
    local_28[0] = param_4;
    local_28[1] = 0;
    local_a8[uVar2 >> 5] = local_a8[uVar2 >> 5] | 1 << (uVar2 & 0x1f);
    if ((int)param_4 < 1) {
      puVar5 = (uint *)0x0;
    }
    iVar3 = select(uVar2 + 1,local_a8,0,0,puVar5);
    if (0 < iVar3) {
      if (((int)local_a8[uVar2 >> 5] >> (uVar2 & 0x1f) & 1U) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fread(param_2,1,param_3 + -1,iVar1);
        *(undefined1 *)(param_2 + iVar3) = 0;
      }
      pclose(iVar1);
      return iVar3;
    }
    iVar1 = strstr(param_1,"cloudAPI");
    if (iVar1 != 0) {
      FUN_00440bd4("killall cloudAPI");
      FUN_00440bd4("killall cloudAPI");
      FUN_00440bd4("killall cloudAPI");
    }
  }
  return -1;
}



// ==== FUN_00440df4 @ 00440df4 size=88

int FUN_00440df4(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_24 = 8;
  local_20 = 0x200;
  local_28 = 0;
  iVar1 = mq_open(param_2,0x182,0x1b6,&local_28);
  *param_1 = iVar1;
  return -(uint)(iVar1 == -1);
}



// ==== FUN_00440e4c @ 00440e4c size=44

undefined4 FUN_00440e4c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != -1) && (param_3 < 0x201)) {
    uVar1 = mq_send();
    return uVar1;
  }
  return 0xffffffff;
}



// ==== FUN_00440e78 @ 00440e78 size=244

int FUN_00440e78(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 10;
  do {
    iVar1 = open(param_1,0);
    iVar2 = iVar2 + -1;
    if (iVar1 != -1) {
      iVar2 = mmap(0,param_2,1,1,iVar1,0);
      if (iVar2 == -1) {
        close(iVar1);
        return 0;
      }
      close(iVar1);
      return iVar2;
    }
    usleep(100000);
  } while (iVar2 != 0);
  return 0;
}



// ==== FUN_00441278 @ 00441278 size=160

undefined4 FUN_00441278(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_1 - 0x7b2U < 0x89) {
    local_28 = param_2 - 1;
    if ((((local_28 < 0xc) && (param_3 - 1U < 0x1f)) && (param_4 < 0x18)) &&
       ((param_5 < 0x3c && (local_24 = param_1 + -0x76c, param_6 < 0x3c)))) {
      local_34 = param_5;
      local_38 = param_6;
      local_30 = param_4;
      local_2c = param_3;
      uVar1 = mktime(&local_38);
      return uVar1;
    }
  }
  return 0;
}



// ==== FUN_00441318 @ 00441318 size=224

undefined4 FUN_00441318(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     (iVar2 = strstr(param_3), iVar2 == 0)) {
    return 0;
  }
  iVar3 = strlen(param_2);
  pcVar6 = (char *)(iVar2 + iVar3 + 1);
  iVar5 = 2;
  do {
    iVar4 = iVar5;
    cVar1 = *pcVar6;
    if (((cVar1 != ':') && (cVar1 != '\'')) && (cVar1 != '\"')) goto LAB_00441394;
    iVar5 = iVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (iVar5 != 0xc);
  pcVar6 = (char *)(iVar2 + iVar4 + iVar3);
LAB_00441394:
  sscanf(pcVar6,"%[^\"\',}]",param_1);
  return 1;
}



// ==== FUN_004413f8 @ 004413f8 size=892

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_004413f8(byte *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte bVar11;
  
  if ((((param_1 == (byte *)0x0) || (param_2 == 0)) || (param_3 == 0)) ||
     (iVar3 = strstr(param_3), iVar3 == 0)) {
    return 0;
  }
  iVar4 = strlen(param_3);
  pbVar10 = (byte *)(param_3 + iVar4 + -1);
  iVar4 = strlen(param_2);
  pbVar5 = (byte *)(iVar3 + iVar4);
  bVar11 = *pbVar5;
  while (bVar11 != 0x3a) {
    if (pbVar10 < pbVar5) goto LAB_004415bc;
    pbVar5 = pbVar5 + 1;
    bVar11 = *pbVar5;
  }
  iVar3 = 0;
  if (pbVar5 <= pbVar10) {
    bVar11 = *pbVar5;
    iVar4 = 0;
    iVar9 = 0;
    uVar8 = (uint)bVar11;
    bVar2 = false;
    bVar1 = false;
    pbVar7 = (byte *)0x0;
    if (uVar8 - 0x30 < 10) goto LAB_0044155c;
LAB_004414f0:
    if (bVar11 == 0x2b) goto LAB_0044155c;
    if (bVar11 == 0x2d) goto LAB_0044155c;
    if ((uVar8 & 0xffffffdf) - 0x41 < 0x1a) goto LAB_00441578;
LAB_00441514:
    pbVar6 = pbVar5;
    if (bVar11 == 0x22) goto LAB_00441600;
joined_r0x0044151c:
    pbVar5 = pbVar6;
    if (bVar11 == 0x5b) {
      iVar4 = iVar4 + 1;
      if (pbVar7 != (byte *)0x0) goto LAB_00441534;
      pbVar7 = pbVar6;
      goto LAB_00441534;
    }
LAB_00441524:
    if (bVar11 != 0x7b) goto LAB_00441618;
    iVar9 = iVar9 + 1;
    pbVar6 = pbVar5;
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = pbVar5;
    }
LAB_00441534:
    pbVar5 = pbVar6 + 1;
LAB_00441538:
    do {
      if (pbVar10 < pbVar5) goto LAB_004415c8;
      bVar11 = *pbVar5;
      uVar8 = (uint)bVar11;
      if (9 < uVar8 - 0x30) goto LAB_004414f0;
LAB_0044155c:
      if (pbVar7 != (byte *)0x0) {
LAB_00441580:
        pbVar6 = pbVar5;
        if (bVar11 != 0x22) goto joined_r0x0044151c;
LAB_00441608:
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (*pbVar7 != 0x22) goto LAB_00441618;
          pbVar6 = pbVar5;
          if (iVar3 != 0) {
            if (bVar11 == 0x5d) goto LAB_00441620;
            goto LAB_004416dc;
          }
          goto joined_r0x004415a8;
        }
        if (*pbVar7 != 0x22) goto LAB_00441524;
LAB_004415a0:
        pbVar6 = pbVar7;
        if (pbVar5 != (byte *)0x0) goto joined_r0x004415a8;
        goto LAB_004415c8;
      }
      bVar1 = true;
      pbVar7 = pbVar5;
      if (0x19 < (uVar8 & 0xffffffdf) - 0x41) goto LAB_00441514;
LAB_00441578:
      if (pbVar7 != (byte *)0x0) goto LAB_00441580;
      bVar2 = true;
      pbVar7 = pbVar5;
      pbVar6 = pbVar5;
      if (bVar11 != 0x22) goto joined_r0x0044151c;
LAB_00441600:
      if (pbVar7 != (byte *)0x0) goto LAB_00441608;
      iVar3 = iVar3 + 1;
      pbVar7 = pbVar5;
LAB_00441618:
      pbVar6 = pbVar5;
      if (bVar11 != 0x5d) {
LAB_004416dc:
        if (bVar11 == 0x7d) {
          if (!bVar1) {
            if (!bVar2) {
              iVar9 = iVar9 + -1;
              if (*pbVar7 != 0x7b) goto LAB_00441534;
              pbVar5 = pbVar6 + 1;
              if (iVar9 == 0) {
                bVar2 = false;
                bVar1 = false;
                pbVar5 = pbVar6;
                goto joined_r0x004415a8;
              }
              goto LAB_00441538;
            }
LAB_00441740:
            bVar1 = false;
          }
        }
        else {
          if (bVar11 != 0x2c) goto LAB_00441534;
          if (!bVar1) {
            pbVar5 = pbVar6 + 1;
            if (bVar2) goto LAB_00441740;
            goto LAB_00441538;
          }
        }
LAB_00441744:
        pbVar5 = pbVar6 + -1;
        goto LAB_004415a0;
      }
LAB_00441620:
      if (bVar1) goto LAB_00441744;
      if (bVar2) goto LAB_00441740;
      iVar4 = iVar4 + -1;
      if (*pbVar7 != 0x5b) goto LAB_00441534;
      pbVar5 = pbVar6 + 1;
      if (iVar4 == 0) {
        bVar2 = false;
        bVar1 = false;
        pbVar5 = pbVar6;
        goto joined_r0x004415a8;
      }
    } while( true );
  }
LAB_004415bc:
  bVar2 = false;
  bVar1 = false;
  pbVar7 = (byte *)0x0;
LAB_004415c8:
  if (!bVar1) {
    if (!bVar2) {
      return 0;
    }
    bVar1 = false;
  }
  pbVar5 = pbVar10;
  pbVar6 = pbVar10;
  if (pbVar7 == (byte *)0x0) {
    return 0;
  }
joined_r0x004415a8:
  if (pbVar6 == (byte *)0x0) {
    return 0;
  }
  if (!bVar1) {
    bVar1 = pbVar5 < pbVar7;
    if (bVar2) goto LAB_0044167c;
    pbVar7 = pbVar7 + 1;
    pbVar5 = pbVar5 + -1;
  }
  bVar1 = pbVar5 < pbVar7;
LAB_0044167c:
  if (!bVar1) {
    do {
      pbVar10 = pbVar7 + 1;
      *param_1 = *pbVar7;
      pbVar7 = pbVar10;
      param_1 = param_1 + 1;
    } while (pbVar10 != pbVar5 + 1);
  }
  return 1;
}



// ==== FUN_00441774 @ 00441774 size=8

void FUN_00441774(void)

{
  return;
}



// ==== FUN_0044177c @ 0044177c size=84

int FUN_0044177c(void)

{
  int local_10;
  int local_c;
  
  gettimeofday(&local_10,0);
  return local_c / 1000 + local_10 * 1000;
}



// ==== FUN_004417d0 @ 004417d0 size=76

uint FUN_004417d0(uint param_1,uint param_2)

{
  return param_1 >> (0x20 - param_2 & 0x1f) | param_1 << (param_2 & 0x1f);
}



// ==== FUN_0044181c @ 0044181c size=148

undefined4 FUN_0044181c(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(PTR_LAB_00468460 + 0x17d0))
                    ((param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8,0x10);
  return uVar1;
}



// ==== FUN_004418b0 @ 004418b0 size=204

void FUN_004418b0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_18;
  
  for (local_18 = 0; local_18 < param_3 >> 2; local_18 = local_18 + 1) {
    uVar1 = (*(code *)(PTR_LAB_00468460 + 0x181c))(*(undefined4 *)(param_2 + local_18 * 4));
    *(undefined4 *)(param_1 + local_18 * 4) = uVar1;
  }
  return;
}



// ==== FUN_0044197c @ 0044197c size=152

void FUN_0044197c(int param_1,int param_2,uint param_3)

{
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
    *(uint *)(param_1 + local_10 * 4) =
         *(uint *)(param_1 + local_10 * 4) ^ *(uint *)(param_2 + local_10 * 4);
  }
  return;
}



// ==== FUN_00441a14 @ 00441a14 size=268

void FUN_00441a14(uint param_1,uint param_2,uint param_3)

{
  uint local_18;
  
  if (((param_1 | param_2 | param_3) & 3) == 0) {
    (*(code *)(PTR_LAB_00468460 + 0x197c))(param_1,param_2,param_3 >> 2);
  }
  else {
    for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
      *(byte *)(param_1 + local_18) = *(byte *)(param_1 + local_18) ^ *(byte *)(param_2 + local_18);
    }
  }
  return;
}



// ==== FUN_00441b20 @ 00441b20 size=3272

void FUN_00441b20(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_30;
  uint *local_2c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_30 = param_1[0x3c] >> 1;
  if ((local_30 < 8) && (local_30 != 0)) {
    (*(code *)PTR_memcpy_00468898)(&local_18,param_2,4);
    (*(code *)PTR_memcpy_00468898)(&local_14,param_2 + 4,4);
    (*(code *)PTR_memcpy_00468898)(&local_10,param_2 + 8,4);
    (*(code *)PTR_memcpy_00468898)(&local_c,param_2 + 0xc,4);
    local_18 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_18);
    local_14 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_14);
    local_10 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_10);
    local_c = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_c);
    local_18 = *param_1 ^ local_18;
    local_14 = param_1[1] ^ local_14;
    local_10 = param_1[2] ^ local_10;
    local_c = param_1[3] ^ local_c;
    local_2c = param_1;
    while( true ) {
      uVar1 = *(uint *)(PTR_DAT_00468298 + (local_18 >> 0x18) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_14 >> 0x10 & 0xff) + 0x100) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_10 >> 8 & 0xff) + 0x200) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_c & 0xff) + 0x300) * 4 + -0xf8) ^ local_2c[4];
      uVar2 = *(uint *)(PTR_DAT_00468298 + (local_14 >> 0x18) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_10 >> 0x10 & 0xff) + 0x100) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_c >> 8 & 0xff) + 0x200) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_18 & 0xff) + 0x300) * 4 + -0xf8) ^ local_2c[5];
      uVar3 = *(uint *)(PTR_DAT_00468298 + (local_10 >> 0x18) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_c >> 0x10 & 0xff) + 0x100) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_18 >> 8 & 0xff) + 0x200) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_14 & 0xff) + 0x300) * 4 + -0xf8) ^ local_2c[6];
      uVar4 = *(uint *)(PTR_DAT_00468298 + (local_c >> 0x18) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_18 >> 0x10 & 0xff) + 0x100) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_14 >> 8 & 0xff) + 0x200) * 4 + -0xf8) ^
              *(uint *)(PTR_DAT_00468298 + ((local_10 & 0xff) + 0x300) * 4 + -0xf8) ^ local_2c[7];
      puVar5 = local_2c + 8;
      local_30 = local_30 - 1;
      if (local_30 == 0) break;
      local_18 = *(uint *)(PTR_DAT_00468298 + (uVar1 >> 0x18) * 4 + -0xf8) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4 + -0xf8) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar3 >> 8 & 0xff) + 0x200) * 4 + -0xf8) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar4 & 0xff) + 0x300) * 4 + -0xf8) ^ *puVar5;
      local_14 = *(uint *)(PTR_DAT_00468298 + (uVar2 >> 0x18) * 4 + -0xf8) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4 + -0xf8) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar4 >> 8 & 0xff) + 0x200) * 4 + -0xf8) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar1 & 0xff) + 0x300) * 4 + -0xf8) ^ local_2c[9];
      local_10 = *(uint *)(PTR_DAT_00468298 + (uVar3 >> 0x18) * 4 + -0xf8) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4 + -0xf8) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar1 >> 8 & 0xff) + 0x200) * 4 + -0xf8) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar2 & 0xff) + 0x300) * 4 + -0xf8) ^ local_2c[10];
      local_c = *(uint *)(PTR_DAT_00468298 + (uVar4 >> 0x18) * 4 + -0xf8) ^
                *(uint *)(PTR_DAT_00468298 + ((uVar1 >> 0x10 & 0xff) + 0x100) * 4 + -0xf8) ^
                *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 8 & 0xff) + 0x200) * 4 + -0xf8) ^
                *(uint *)(PTR_DAT_00468298 + ((uVar3 & 0xff) + 0x300) * 4 + -0xf8) ^ local_2c[0xb];
      local_2c = puVar5;
    }
    local_18 = *(uint *)(PTR_DAT_00468298 + ((uVar1 >> 0x18) + 0x400) * 4 + -0xf8) & 0xff000000 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) & 0xff0000
               ^ *(uint *)(PTR_DAT_00468298 + ((uVar3 >> 8 & 0xff) + 0x400) * 4 + -0xf8) & 0xff00 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar4 & 0xff) + 0x400) * 4 + -0xf8) & 0xff ^ *puVar5;
    local_14 = *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x18) + 0x400) * 4 + -0xf8) & 0xff000000 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar3 >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) & 0xff0000
               ^ *(uint *)(PTR_DAT_00468298 + ((uVar4 >> 8 & 0xff) + 0x400) * 4 + -0xf8) & 0xff00 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar1 & 0xff) + 0x400) * 4 + -0xf8) & 0xff ^
               local_2c[9];
    local_10 = *(uint *)(PTR_DAT_00468298 + ((uVar3 >> 0x18) + 0x400) * 4 + -0xf8) & 0xff000000 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar4 >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) & 0xff0000
               ^ *(uint *)(PTR_DAT_00468298 + ((uVar1 >> 8 & 0xff) + 0x400) * 4 + -0xf8) & 0xff00 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar2 & 0xff) + 0x400) * 4 + -0xf8) & 0xff ^
               local_2c[10];
    local_c = *(uint *)(PTR_DAT_00468298 + ((uVar4 >> 0x18) + 0x400) * 4 + -0xf8) & 0xff000000 ^
              *(uint *)(PTR_DAT_00468298 + ((uVar1 >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) & 0xff0000
              ^ *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + -0xf8) & 0xff00 ^
              *(uint *)(PTR_DAT_00468298 + ((uVar3 & 0xff) + 0x400) * 4 + -0xf8) & 0xff ^
              local_2c[0xb];
    local_18 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_18);
    local_14 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_14);
    local_10 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_10);
    local_c = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_c);
    (*(code *)PTR_memcpy_00468898)(param_3,&local_18,4);
    (*(code *)PTR_memcpy_00468898)(param_3 + 4,&local_14,4);
    (*(code *)PTR_memcpy_00468898)(param_3 + 8,&local_10,4);
    (*(code *)PTR_memcpy_00468898)(param_3 + 0xc,&local_c,4);
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00468774)(PTR_DAT_00468298 + 0x2708);
  }
  return;
}



// ==== FUN_004427e8 @ 004427e8 size=3272

void FUN_004427e8(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_30;
  uint *local_2c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_30 = param_1[0x3c] >> 1;
  if ((local_30 < 8) && (local_30 != 0)) {
    (*(code *)PTR_memcpy_00468898)(&local_18,param_2,4);
    (*(code *)PTR_memcpy_00468898)(&local_14,param_2 + 4,4);
    (*(code *)PTR_memcpy_00468898)(&local_10,param_2 + 8,4);
    (*(code *)PTR_memcpy_00468898)(&local_c,param_2 + 0xc,4);
    local_18 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_18);
    local_14 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_14);
    local_10 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_10);
    local_c = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_c);
    local_18 = *param_1 ^ local_18;
    local_14 = param_1[1] ^ local_14;
    local_10 = param_1[2] ^ local_10;
    local_c = param_1[3] ^ local_c;
    local_2c = param_1;
    while( true ) {
      uVar1 = *(uint *)(PTR_DAT_00468298 + (local_18 >> 0x18) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_c >> 0x10 & 0xff) + 0x100) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_10 >> 8 & 0xff) + 0x200) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_14 & 0xff) + 0x300) * 4 + 0x1308) ^ local_2c[4];
      uVar2 = *(uint *)(PTR_DAT_00468298 + (local_14 >> 0x18) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_18 >> 0x10 & 0xff) + 0x100) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_c >> 8 & 0xff) + 0x200) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_10 & 0xff) + 0x300) * 4 + 0x1308) ^ local_2c[5];
      uVar3 = *(uint *)(PTR_DAT_00468298 + (local_10 >> 0x18) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_14 >> 0x10 & 0xff) + 0x100) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_18 >> 8 & 0xff) + 0x200) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_c & 0xff) + 0x300) * 4 + 0x1308) ^ local_2c[6];
      uVar4 = *(uint *)(PTR_DAT_00468298 + (local_c >> 0x18) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_10 >> 0x10 & 0xff) + 0x100) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_14 >> 8 & 0xff) + 0x200) * 4 + 0x1308) ^
              *(uint *)(PTR_DAT_00468298 + ((local_18 & 0xff) + 0x300) * 4 + 0x1308) ^ local_2c[7];
      puVar5 = local_2c + 8;
      local_30 = local_30 - 1;
      if (local_30 == 0) break;
      local_18 = *(uint *)(PTR_DAT_00468298 + (uVar1 >> 0x18) * 4 + 0x1308) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4 + 0x1308) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar3 >> 8 & 0xff) + 0x200) * 4 + 0x1308) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar2 & 0xff) + 0x300) * 4 + 0x1308) ^ *puVar5;
      local_14 = *(uint *)(PTR_DAT_00468298 + (uVar2 >> 0x18) * 4 + 0x1308) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar1 >> 0x10 & 0xff) + 0x100) * 4 + 0x1308) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar4 >> 8 & 0xff) + 0x200) * 4 + 0x1308) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar3 & 0xff) + 0x300) * 4 + 0x1308) ^ local_2c[9];
      local_10 = *(uint *)(PTR_DAT_00468298 + (uVar3 >> 0x18) * 4 + 0x1308) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4 + 0x1308) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar1 >> 8 & 0xff) + 0x200) * 4 + 0x1308) ^
                 *(uint *)(PTR_DAT_00468298 + ((uVar4 & 0xff) + 0x300) * 4 + 0x1308) ^ local_2c[10];
      local_c = *(uint *)(PTR_DAT_00468298 + (uVar4 >> 0x18) * 4 + 0x1308) ^
                *(uint *)(PTR_DAT_00468298 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4 + 0x1308) ^
                *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 8 & 0xff) + 0x200) * 4 + 0x1308) ^
                *(uint *)(PTR_DAT_00468298 + ((uVar1 & 0xff) + 0x300) * 4 + 0x1308) ^ local_2c[0xb];
      local_2c = puVar5;
    }
    local_18 = *(uint *)(PTR_DAT_00468298 + ((uVar1 >> 0x18) + 0x400) * 4 + 0x1308) & 0xff000000 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar4 >> 0x10 & 0xff) + 0x400) * 4 + 0x1308) &
               0xff0000 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar3 >> 8 & 0xff) + 0x400) * 4 + 0x1308) & 0xff00 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar2 & 0xff) + 0x400) * 4 + 0x1308) & 0xff ^ *puVar5;
    local_14 = *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x18) + 0x400) * 4 + 0x1308) & 0xff000000 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar1 >> 0x10 & 0xff) + 0x400) * 4 + 0x1308) &
               0xff0000 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar4 >> 8 & 0xff) + 0x400) * 4 + 0x1308) & 0xff00 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar3 & 0xff) + 0x400) * 4 + 0x1308) & 0xff ^
               local_2c[9];
    local_10 = *(uint *)(PTR_DAT_00468298 + ((uVar3 >> 0x18) + 0x400) * 4 + 0x1308) & 0xff000000 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + 0x1308) &
               0xff0000 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar1 >> 8 & 0xff) + 0x400) * 4 + 0x1308) & 0xff00 ^
               *(uint *)(PTR_DAT_00468298 + ((uVar4 & 0xff) + 0x400) * 4 + 0x1308) & 0xff ^
               local_2c[10];
    local_c = *(uint *)(PTR_DAT_00468298 + ((uVar4 >> 0x18) + 0x400) * 4 + 0x1308) & 0xff000000 ^
              *(uint *)(PTR_DAT_00468298 + ((uVar3 >> 0x10 & 0xff) + 0x400) * 4 + 0x1308) & 0xff0000
              ^ *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + 0x1308) & 0xff00 ^
              *(uint *)(PTR_DAT_00468298 + ((uVar1 & 0xff) + 0x400) * 4 + 0x1308) & 0xff ^
              local_2c[0xb];
    local_18 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_18);
    local_14 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_14);
    local_10 = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_10);
    local_c = (*(code *)(PTR_LAB_00468460 + 0x181c))(local_c);
    (*(code *)PTR_memcpy_00468898)(param_3,&local_18,4);
    (*(code *)PTR_memcpy_00468898)(param_3 + 4,&local_14,4);
    (*(code *)PTR_memcpy_00468898)(param_3 + 8,&local_10,4);
    (*(code *)PTR_memcpy_00468898)(param_3 + 0xc,&local_c,4);
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00468774)(PTR_DAT_00468298 + 0x2738);
  }
  return;
}



// ==== FUN_004434b0 @ 004434b0 size=3828

undefined4
FUN_004434b0(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint *local_18;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  param_1[0x45] = 0;
  param_1[0x3c] = (param_3 >> 2) + 6;
  (*(code *)PTR_memcpy_00468898)(param_1,param_2,param_3);
  (*(code *)(PTR_LAB_00468460 + 0x18b0))(param_1,param_1,param_3);
  local_18 = param_1;
  if (param_3 == 0x18) {
    while( true ) {
      uVar2 = local_18[5];
      local_18[6] = *local_18 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) &
                    0xff000000 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + -0xf8) &
                    0xff0000 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 & 0xff) + 0x400) * 4 + -0xf8) & 0xff00 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x18) + 0x400) * 4 + -0xf8) & 0xff ^
                    *(uint *)(PTR_DAT_00468298 + local_14 * 4 + -0x120);
      local_18[7] = local_18[1] ^ local_18[6];
      local_18[8] = local_18[2] ^ local_18[7];
      local_18[9] = local_18[3] ^ local_18[8];
      local_14 = local_14 + 1;
      if (local_14 == 8) break;
      local_18[10] = local_18[4] ^ local_18[9];
      local_18[0xb] = local_18[5] ^ local_18[10];
      local_18 = local_18 + 6;
    }
  }
  else if (param_3 == 0x20) {
    while( true ) {
      uVar2 = local_18[7];
      local_18[8] = *local_18 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) &
                    0xff000000 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + -0xf8) &
                    0xff0000 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 & 0xff) + 0x400) * 4 + -0xf8) & 0xff00 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x18) + 0x400) * 4 + -0xf8) & 0xff ^
                    *(uint *)(PTR_DAT_00468298 + local_14 * 4 + -0x120);
      local_18[9] = local_18[1] ^ local_18[8];
      local_18[10] = local_18[2] ^ local_18[9];
      local_18[0xb] = local_18[3] ^ local_18[10];
      local_14 = local_14 + 1;
      if (local_14 == 7) break;
      uVar2 = local_18[0xb];
      local_18[0xc] =
           local_18[4] ^
           *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x18) + 0x400) * 4 + -0xf8) & 0xff000000 ^
           *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) & 0xff0000 ^
           *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + -0xf8) & 0xff00 ^
           *(uint *)(PTR_DAT_00468298 + ((uVar2 & 0xff) + 0x400) * 4 + -0xf8) & 0xff;
      local_18[0xd] = local_18[5] ^ local_18[0xc];
      local_18[0xe] = local_18[6] ^ local_18[0xd];
      local_18[0xf] = local_18[7] ^ local_18[0xe];
      local_18 = local_18 + 8;
    }
  }
  else {
    if (param_3 != 0x10) {
      return 0xffffff53;
    }
    while( true ) {
      uVar2 = local_18[3];
      local_18[4] = *local_18 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) &
                    0xff000000 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 8 & 0xff) + 0x400) * 4 + -0xf8) &
                    0xff0000 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 & 0xff) + 0x400) * 4 + -0xf8) & 0xff00 ^
                    *(uint *)(PTR_DAT_00468298 + ((uVar2 >> 0x18) + 0x400) * 4 + -0xf8) & 0xff ^
                    *(uint *)(PTR_DAT_00468298 + local_14 * 4 + -0x120);
      local_18[5] = local_18[1] ^ local_18[4];
      local_18[6] = local_18[2] ^ local_18[5];
      local_18[7] = local_18[3] ^ local_18[6];
      local_14 = local_14 + 1;
      if (local_14 == 10) break;
      local_18 = local_18 + 4;
    }
  }
  if (param_5 == 1) {
    local_14 = 0;
    local_10 = param_1[0x3c] << 2;
    for (; local_14 < local_10; local_14 = local_14 + 4) {
      uVar2 = param_1[local_14];
      param_1[local_14] = param_1[local_10];
      param_1[local_10] = uVar2;
      uVar2 = param_1[local_14 + 1];
      param_1[local_14 + 1] = param_1[local_10 + 1];
      param_1[local_10 + 1] = uVar2;
      uVar2 = param_1[local_14 + 2];
      param_1[local_14 + 2] = param_1[local_10 + 2];
      param_1[local_10 + 2] = uVar2;
      uVar2 = param_1[local_14 + 3];
      param_1[local_14 + 3] = param_1[local_10 + 3];
      param_1[local_10 + 3] = uVar2;
      local_10 = local_10 - 4;
    }
    local_18 = param_1;
    for (local_14 = 1; local_14 < param_1[0x3c]; local_14 = local_14 + 1) {
      puVar3 = local_18 + 4;
      *puVar3 = *(uint *)(PTR_DAT_00468298 +
                         (*(uint *)(PTR_DAT_00468298 + ((*puVar3 >> 0x18) + 0x400) * 4 + -0xf8) &
                         0xff) * 4 + 0x1308) ^
                *(uint *)(PTR_DAT_00468298 +
                         ((*(uint *)(PTR_DAT_00468298 +
                                    ((*puVar3 >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) & 0xff) + 0x100)
                         * 4 + 0x1308) ^
                *(uint *)(PTR_DAT_00468298 +
                         ((*(uint *)(PTR_DAT_00468298 + ((*puVar3 >> 8 & 0xff) + 0x400) * 4 + -0xf8)
                          & 0xff) + 0x200) * 4 + 0x1308) ^
                *(uint *)(PTR_DAT_00468298 +
                         ((*(uint *)(PTR_DAT_00468298 + ((*puVar3 & 0xff) + 0x400) * 4 + -0xf8) &
                          0xff) + 0x300) * 4 + 0x1308);
      local_18[5] = *(uint *)(PTR_DAT_00468298 +
                             (*(uint *)(PTR_DAT_00468298 +
                                       ((local_18[5] >> 0x18) + 0x400) * 4 + -0xf8) & 0xff) * 4 +
                             0x1308) ^
                    *(uint *)(PTR_DAT_00468298 +
                             ((*(uint *)(PTR_DAT_00468298 +
                                        ((local_18[5] >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) & 0xff)
                             + 0x100) * 4 + 0x1308) ^
                    *(uint *)(PTR_DAT_00468298 +
                             ((*(uint *)(PTR_DAT_00468298 +
                                        ((local_18[5] >> 8 & 0xff) + 0x400) * 4 + -0xf8) & 0xff) +
                             0x200) * 4 + 0x1308) ^
                    *(uint *)(PTR_DAT_00468298 +
                             ((*(uint *)(PTR_DAT_00468298 +
                                        ((local_18[5] & 0xff) + 0x400) * 4 + -0xf8) & 0xff) + 0x300)
                             * 4 + 0x1308);
      local_18[6] = *(uint *)(PTR_DAT_00468298 +
                             (*(uint *)(PTR_DAT_00468298 +
                                       ((local_18[6] >> 0x18) + 0x400) * 4 + -0xf8) & 0xff) * 4 +
                             0x1308) ^
                    *(uint *)(PTR_DAT_00468298 +
                             ((*(uint *)(PTR_DAT_00468298 +
                                        ((local_18[6] >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) & 0xff)
                             + 0x100) * 4 + 0x1308) ^
                    *(uint *)(PTR_DAT_00468298 +
                             ((*(uint *)(PTR_DAT_00468298 +
                                        ((local_18[6] >> 8 & 0xff) + 0x400) * 4 + -0xf8) & 0xff) +
                             0x200) * 4 + 0x1308) ^
                    *(uint *)(PTR_DAT_00468298 +
                             ((*(uint *)(PTR_DAT_00468298 +
                                        ((local_18[6] & 0xff) + 0x400) * 4 + -0xf8) & 0xff) + 0x300)
                             * 4 + 0x1308);
      local_18[7] = *(uint *)(PTR_DAT_00468298 +
                             (*(uint *)(PTR_DAT_00468298 +
                                       ((local_18[7] >> 0x18) + 0x400) * 4 + -0xf8) & 0xff) * 4 +
                             0x1308) ^
                    *(uint *)(PTR_DAT_00468298 +
                             ((*(uint *)(PTR_DAT_00468298 +
                                        ((local_18[7] >> 0x10 & 0xff) + 0x400) * 4 + -0xf8) & 0xff)
                             + 0x100) * 4 + 0x1308) ^
                    *(uint *)(PTR_DAT_00468298 +
                             ((*(uint *)(PTR_DAT_00468298 +
                                        ((local_18[7] >> 8 & 0xff) + 0x400) * 4 + -0xf8) & 0xff) +
                             0x200) * 4 + 0x1308) ^
                    *(uint *)(PTR_DAT_00468298 +
                             ((*(uint *)(PTR_DAT_00468298 +
                                        ((local_18[7] & 0xff) + 0x400) * 4 + -0xf8) & 0xff) + 0x300)
                             * 4 + 0x1308);
      local_18 = puVar3;
    }
  }
  uVar1 = (*(code *)PTR_AesSetIV_00468778)(param_1,param_4);
  return uVar1;
}



// ==== FUN_00444460 @ 00444460 size=128

undefined4
FUN_00444460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(PTR_LAB_00468460 + 0x34b0))(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}



// ==== FUN_004445a4 @ 004445a4 size=192

int FUN_004445a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int local_128;
  undefined1 auStack_124 [284];
  
  local_128 = (*(code *)PTR_AesSetKey_0046877c)(auStack_124,param_4,param_5,param_6,1);
  if (local_128 == 0) {
    local_128 = (*(code *)PTR_AesCbcDecrypt_00468780)(auStack_124,param_1,param_2,param_3);
  }
  return local_128;
}



// ==== FUN_00444664 @ 00444664 size=108

void FUN_00444664(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)(PTR_LAB_00468460 + 0x1b20))(param_1,param_3,param_2);
  return;
}



// ==== FUN_004446d0 @ 004446d0 size=108

void FUN_004446d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)(PTR_LAB_00468460 + 0x27e8))(param_1,param_3,param_2);
  return;
}



// ==== FUN_0044473c @ 0044473c size=280

undefined4 FUN_0044473c(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 4;
  while (local_10 != 0) {
    (*(code *)(PTR_LAB_00468460 + 0x1a14))(param_1 + 0xf4,local_res8,0x10);
    (*(code *)(PTR_LAB_00468460 + 0x1b20))(param_1,param_1 + 0xf4,param_1 + 0xf4);
    (*(code *)PTR_memcpy_00468898)(local_res4,param_1 + 0xf4,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== FUN_00444994 @ 00444994 size=124

void FUN_00444994(int param_1)

{
  char *pcVar1;
  int local_10;
  
  local_10 = 0xf;
  while( true ) {
    if (local_10 < 0) {
      return;
    }
    pcVar1 = (char *)(param_1 + local_10);
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 != '\0') break;
    local_10 = local_10 + -1;
  }
  return;
}



// ==== FUN_00444a10 @ 00444a10 size=636

void FUN_00444a10(int param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte *local_res4;
  byte *local_res8;
  uint local_resc;
  byte *local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = (byte *)((param_1 + 0x114) - *(int *)(param_1 + 0x114));
  for (local_resc = param_4; (*(int *)(param_1 + 0x114) != 0 && (local_resc != 0));
      local_resc = local_resc - 1) {
    *local_res4 = *local_res8 ^ *local_10;
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
    local_res4 = local_res4 + 1;
    local_res8 = local_res8 + 1;
    local_10 = local_10 + 1;
  }
  while (0xf < local_resc) {
    (*(code *)(PTR_LAB_00468460 + 0x1b20))(param_1,param_1 + 0xf4,local_res4);
    (*(code *)(PTR_LAB_00468460 + 0x4994))(param_1 + 0xf4);
    (*(code *)(PTR_LAB_00468460 + 0x1a14))(local_res4,local_res8,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_resc = local_resc - 0x10;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (local_resc != 0) {
    (*(code *)(PTR_LAB_00468460 + 0x1b20))(param_1,param_1 + 0xf4,param_1 + 0x104);
    (*(code *)(PTR_LAB_00468460 + 0x4994))(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x114) = 0x10;
    local_10 = (byte *)(param_1 + 0x104);
    while (local_resc != 0) {
      *local_res4 = *local_res8 ^ *local_10;
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
      local_res4 = local_res4 + 1;
      local_res8 = local_res8 + 1;
      local_resc = local_resc - 1;
      local_10 = local_10 + 1;
    }
  }
  return;
}



// ==== FUN_00444c90 @ 00444c90 size=104

undefined4 FUN_00444c90(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  if (param_1 == 0) {
    local_10 = 0xffffff53;
  }
  else {
    *(int *)(PTR_DAT_004684d0 + -0x3d50) = param_1;
  }
  return local_10;
}



// ==== FUN_00444cf8 @ 00444cf8 size=64

undefined4 FUN_00444cf8(void)

{
  *(undefined4 *)(PTR_DAT_004684d0 + -0x3d4c) = 1;
  return 0;
}



// ==== FUN_00444d38 @ 00444d38 size=52

void FUN_00444d38(void)

{
  *(undefined4 *)(PTR_DAT_004684d0 + -0x3d4c) = 0;
  return;
}



// ==== FUN_00444d6c @ 00444d6c size=180

void FUN_00444d6c(undefined4 param_1,undefined4 param_2)

{
  if (*(int *)(PTR_DAT_004684d0 + -0x3d50) == 0) {
    if (*(int *)(PTR_DAT_004684d0 + -0x3d4c) != 0) {
      (*(code *)PTR_fprintf_0046885c)
                (*(undefined4 *)PTR_stderr_004687e8,PTR_DAT_00468298 + 0x2770,param_2);
    }
  }
  else {
    (**(code **)(PTR_DAT_004684d0 + -0x3d50))(param_1,param_2);
  }
  return;
}



// ==== FUN_00444e8c @ 00444e8c size=152

void FUN_00444e8c(undefined4 param_1)

{
  undefined1 auStack_58 [80];
  
  if (*(int *)(PTR_DAT_004684d0 + -0x3d4c) != 0) {
    (*(code *)PTR_sprintf_004687f0)(auStack_58,PTR_DAT_00468298 + 0x2774,param_1);
    (*(code *)(PTR_LAB_00468460 + 0x4d6c))(2,auStack_58);
  }
  return;
}



// ==== FUN_00444f24 @ 00444f24 size=160

void FUN_00444f24(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [80];
  
  if (*(int *)(PTR_DAT_004684d0 + -0x3d4c) != 0) {
    (*(code *)PTR_sprintf_004687f0)(auStack_58,PTR_DAT_00468298 + 0x2788,param_1,param_2);
    (*(code *)(PTR_LAB_00468460 + 0x4d6c))(3,auStack_58);
  }
  return;
}



// ==== FUN_00444fc4 @ 00444fc4 size=152

void FUN_00444fc4(undefined4 param_1)

{
  undefined1 auStack_58 [80];
  
  if (*(int *)(PTR_DAT_004684d0 + -0x3d4c) != 0) {
    (*(code *)PTR_sprintf_004687f0)(auStack_58,PTR_DAT_00468298 + 0x27a8,param_1);
    (*(code *)(PTR_LAB_00468460 + 0x4d6c))(0,auStack_58);
  }
  return;
}



// ==== FUN_00445068 @ 00445068 size=8

uint FUN_00445068(uint param_1)

{
  return param_1 << 0x18 | param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8;
}



// ==== FUN_004450a8 @ 004450a8 size=8

undefined8 FUN_004450a8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar3 = 8;
        if (param_3 < 0x100) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x10;
        if (0xffffff < param_3) {
          iVar3 = 0x18;
        }
      }
      uVar9 = (uint)(byte)PTR___clz_tab_00468784[param_3 >> iVar3] + iVar3;
      uVar7 = 0x20 - uVar9;
      if (uVar7 == 0) {
        param_2 = param_2 - param_3;
        uVar7 = 1;
        uVar6 = param_1;
      }
      else {
        param_3 = param_3 << (uVar7 & 0x1f);
        uVar4 = param_2 >> (uVar9 & 0x1f);
        uVar6 = param_1 << (uVar7 & 0x1f);
        uVar2 = param_3 >> 0x10;
        uVar10 = uVar4 / uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        uVar7 = param_2 << (uVar7 & 0x1f) | param_1 >> (uVar9 & 0x1f);
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        uVar5 = uVar4 % uVar2 << 0x10 | uVar7 >> 0x10;
        uVar9 = uVar10 * (param_3 & 0xffff);
        uVar4 = uVar10;
        if (uVar5 < uVar9) {
          uVar5 = uVar5 + param_3;
          uVar4 = uVar10 - 1;
          if ((param_3 <= uVar5) && (uVar5 < uVar9)) {
            uVar4 = uVar10 - 2;
            uVar5 = uVar5 + param_3;
          }
        }
        uVar10 = (uVar5 - uVar9) / uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
          trap(0x1c00);
        }
        param_2 = (uVar5 - uVar9) % uVar2 << 0x10 | uVar7 & 0xffff;
        uVar9 = uVar10 * (param_3 & 0xffff);
        uVar7 = uVar10;
        if (param_2 < uVar9) {
          param_2 = param_2 + param_3;
          uVar7 = uVar10 - 1;
          if ((param_3 <= param_2) && (param_2 < uVar9)) {
            uVar7 = uVar10 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar9;
        uVar7 = uVar7 | uVar4 << 0x10;
      }
      uVar9 = param_3 >> 0x10;
      uVar2 = param_2 / uVar9;
      if (uVar9 == 0) {
        trap(0x1c00);
      }
      if (uVar9 == 0) {
        trap(0x1c00);
      }
      uVar5 = param_2 % uVar9 << 0x10 | uVar6 >> 0x10;
      uVar4 = uVar2 * (param_3 & 0xffff);
      uVar10 = uVar2;
      if (uVar5 < uVar4) {
        uVar5 = uVar5 + param_3;
        uVar10 = uVar2 - 1;
        if ((param_3 <= uVar5) && (uVar5 < uVar4)) {
          uVar10 = uVar2 - 2;
          uVar5 = uVar5 + param_3;
        }
      }
      uVar2 = (uVar5 - uVar4) / uVar9;
      if (uVar9 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar4 = (uVar5 - uVar4) % uVar9 << 0x10 | uVar6 & 0xffff;
      uVar6 = uVar2 * (param_3 & 0xffff);
      uVar9 = uVar2;
      if (uVar4 < uVar6) {
        uVar4 = uVar4 + param_3;
        uVar9 = uVar2 - 1;
        if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
          uVar9 = uVar2 - 2;
        }
      }
      uVar9 = uVar9 | uVar10 << 0x10;
      goto LAB_00445614;
    }
    if (param_3 < 0x10000) {
      iVar3 = 8;
      if (param_3 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x10;
      if (0xffffff < param_3) {
        iVar3 = 0x18;
      }
    }
    uVar9 = param_3 >> iVar3;
    uVar7 = 0x20 - ((uint)(byte)PTR___clz_tab_00468784[uVar9] + iVar3);
    if (uVar7 != 0) {
      param_3 = param_3 << (uVar7 & 0x1f);
      param_2 = param_2 << (uVar7 & 0x1f) |
                param_1 >> ((uint)(byte)PTR___clz_tab_00468784[uVar9] + iVar3 & 0x1f);
      param_1 = param_1 << (uVar7 & 0x1f);
    }
    uVar7 = param_3 >> 0x10;
    uVar9 = param_2 / uVar7;
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    uVar4 = param_2 % uVar7 << 0x10 | param_1 >> 0x10;
    uVar6 = uVar9 * (param_3 & 0xffff);
    uVar2 = uVar9;
    if (uVar4 < uVar6) {
      uVar4 = uVar4 + param_3;
      uVar2 = uVar9 - 1;
      if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
        uVar2 = uVar9 - 2;
        uVar4 = uVar4 + param_3;
      }
    }
    uVar10 = (uVar4 - uVar6) / uVar7;
    if (uVar7 == 0) {
      trap(0x1c00);
      trap(0x1c00);
    }
    uVar6 = (uVar4 - uVar6) % uVar7 << 0x10 | param_1 & 0xffff;
    uVar7 = uVar10 * (param_3 & 0xffff);
    uVar9 = uVar10;
    if (uVar6 < uVar7) {
      uVar6 = uVar6 + param_3;
      uVar9 = uVar10 - 1;
      if ((param_3 <= uVar6) && (uVar6 < uVar7)) {
        uVar9 = uVar10 - 2;
      }
    }
    uVar9 = uVar9 | uVar2 << 0x10;
  }
  else {
    uVar7 = 0;
    if (param_2 < param_4) {
      uVar9 = 0;
      goto LAB_00445614;
    }
    if (param_4 < 0x10000) {
      iVar3 = 8;
      if (param_4 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x10;
      if (0xffffff < param_4) {
        iVar3 = 0x18;
      }
    }
    uVar7 = (uint)(byte)PTR___clz_tab_00468784[param_4 >> iVar3] + iVar3;
    uVar6 = 0x20 - uVar7;
    uVar9 = param_2 >> (uVar7 & 0x1f);
    if (uVar6 == 0) {
      if (param_4 < param_2) {
        uVar7 = 0;
        uVar9 = 1;
        goto LAB_00445614;
      }
      uVar9 = param_1 < param_3 ^ 1;
    }
    else {
      uVar2 = param_4 << (uVar6 & 0x1f) | param_3 >> (uVar7 & 0x1f);
      uVar4 = uVar2 >> 0x10;
      uVar10 = uVar9 / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar7 = param_2 << (uVar6 & 0x1f) | param_1 >> (uVar7 & 0x1f);
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar8 = uVar9 % uVar4 << 0x10 | uVar7 >> 0x10;
      uVar9 = uVar10 * (uVar2 & 0xffff);
      uVar5 = uVar10;
      if (uVar8 < uVar9) {
        uVar8 = uVar8 + uVar2;
        uVar5 = uVar10 - 1;
        if ((uVar2 <= uVar8) && (uVar8 < uVar9)) {
          uVar5 = uVar10 - 2;
          uVar8 = uVar8 + uVar2;
        }
      }
      uVar10 = (uVar8 - uVar9) / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar8 = (uVar8 - uVar9) % uVar4 << 0x10 | uVar7 & 0xffff;
      uVar4 = uVar10 * (uVar2 & 0xffff);
      uVar9 = uVar10;
      if (uVar8 < uVar4) {
        uVar8 = uVar8 + uVar2;
        uVar9 = uVar10 - 1;
        if ((uVar2 <= uVar8) && (uVar8 < uVar4)) {
          uVar9 = uVar10 - 2;
          uVar8 = uVar8 + uVar2;
        }
      }
      uVar9 = uVar9 | uVar5 << 0x10;
      lVar1 = (ulonglong)uVar9 * (ulonglong)(param_3 << (uVar6 & 0x1f));
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar2 <= uVar8 - uVar4) &&
         ((uVar7 = 0, uVar2 != uVar8 - uVar4 || ((uint)lVar1 <= param_1 << (uVar6 & 0x1f)))))
      goto LAB_00445614;
      uVar9 = uVar9 - 1;
    }
  }
  uVar7 = 0;
LAB_00445614:
  return CONCAT44(uVar7,uVar9);
}



// ==== FUN_00445620 @ 00445620 size=72

void FUN_00445620(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00468000;
  pcVar2 = DAT_00468000;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



