// FUN_8010e228

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8010e228(void)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_v1;
  int iVar7;
  undefined1 *puVar8;
  ushort uVar9;
  int unaff_s0;
  undefined1 *puVar10;
  undefined1 *unaff_s1;
  int unaff_s2;
  
  *(undefined1 *)(unaff_s0 + 1) = 1;
  func_0x80077efc();
  if (DAT_800bf9e0 != '\x15') {
    return 0x15;
  }
  func_0x8004b0d8();
  *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
  if ((0 < *(short *)(unaff_s1 + 0x82)) &&
     ((int)(((uint)*(ushort *)(extraout_v1 + 0x162) - (uint)*(ushort *)(unaff_s1 + 0x32)) * 0x10000)
      < 0)) {
    return 0;
  }
  sVar2 = (short)unaff_s2;
  if (unaff_s1[3] == '\0') {
    sVar1 = *(short *)(unaff_s1 + 0x6c);
    uVar9 = (_DAT_800e7ed6 - *(short *)(unaff_s1 + 0x56)) + 0x400U & 0xfff;
    if (sVar1 == 9) {
      uVar5 = FUN_80120298();
      return uVar5;
    }
    if (sVar1 < 10) {
      if (sVar1 != 4) {
        uVar5 = FUN_801202e4((int)sVar2);
        return uVar5;
      }
      puVar10 = (undefined1 *)0xd2;
      if ((0x7ff < uVar9) && (puVar10 = (undefined1 *)0x118, *(short *)(unaff_s1 + 0x56) < 0x800)) {
        uVar5 = FUN_801202dc();
        return uVar5;
      }
    }
    else {
      if (sVar1 == 0xd) {
        puVar10 = (undefined1 *)0x82;
        iVar6 = unaff_s2 * 0x10000;
        if (0x7ff < uVar9) {
          iVar6 = _DAT_00000198 + (iVar6 + 1) * 0x100;
          _DAT_0000019a = (short)((uint)iVar6 >> 0x10);
          iVar7 = (int)_DAT_0000019a;
          DAT_000001c6 = 2;
          _DAT_00000198 = iVar6;
          uVar5 = FUN_801322a8(iVar7);
          return uVar5;
        }
        goto LAB_80117344;
      }
      if (sVar1 != 0x11) {
        uVar5 = FUN_801202e4((int)sVar2);
        return uVar5;
      }
      puVar10 = (undefined1 *)0x0;
      if ((_DAT_1f800162 < -1999) && (puVar10 = (undefined1 *)0xa0, 0x7ff < uVar9)) {
        uVar5 = FUN_801202dc();
        return uVar5;
      }
    }
  }
  else {
    if (unaff_s1[3] != '\x01') {
      uVar5 = FUN_801202e4((int)sVar2);
      return uVar5;
    }
    puVar10 = &DAT_000000be;
  }
  iVar6 = unaff_s2 << 0x10;
LAB_80117344:
  iVar6 = iVar6 >> 0x10;
  iVar7 = (int)(short)puVar10;
  if (iVar6 < iVar7) {
    uVar5 = FUN_80120364();
    return uVar5;
  }
  if (iVar6 < iVar7 * 2) {
    uVar5 = FUN_80120364();
    return uVar5;
  }
  if (iVar6 < iVar7 * 3) {
    uVar5 = func_0x8009a450();
    return uVar5;
  }
  iVar4 = 0;
  puVar8 = &DAT_80150000;
  while( true ) {
    *(short *)(iVar4 + 0x3a) = (short)(iVar7 * 2);
    iVar6 = iVar6 + 1;
    if ((int)(uint)(byte)puVar10[8] <= iVar6) break;
    iVar4 = *(int *)(puVar8 + 0xc4);
    puVar8 = puVar8 + 4;
  }
  *puVar10 = (char)unaff_s1;
  puVar10[0x29] = 0;
  puVar10[0x5e] = 0;
  puVar10[4] = 1;
  *(short *)(puVar10 + 0x32) = (short)puVar8 + 0x84;
  puVar10[3] = 0;
  iVar6 = FUN_8013a730(puVar10);
  *(int *)(puVar10 + 0x10) = iVar6;
  *(short *)(unaff_s1 + 0x40) = (short)(iVar6 - 1U);
  if ((iVar6 - 1U & 0xffff) == 0) {
    *unaff_s1 = 2;
    unaff_s1[6] = unaff_s1[6] + '\x01';
  }
  FUN_8013b024();
  uVar3 = func_0x800518fc();
  unaff_s1[0x29] = 0;
  unaff_s1[0x2b] = 0;
  *(undefined2 *)(puVar10 + 6) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

