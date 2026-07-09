// FUN_8010e150

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8010e150(void)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int in_v0;
  int iVar4;
  int iVar5;
  int in_v1;
  int extraout_v1;
  int iVar6;
  undefined1 *puVar7;
  ushort uVar8;
  int unaff_s0;
  undefined1 *puVar9;
  undefined1 *unaff_s1;
  int unaff_s2;
  
  if (in_v1 != in_v0) {
    return in_v0;
  }
  func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc0),1,0);
  *(undefined1 *)(unaff_s0 + 5) = 5;
  if ((0 < *(short *)(unaff_s1 + 0x82)) &&
     ((int)(((uint)*(ushort *)(extraout_v1 + 0x162) - (uint)*(ushort *)(unaff_s1 + 0x32)) * 0x10000)
      < 0)) {
    return 0;
  }
  sVar2 = (short)unaff_s2;
  if (unaff_s1[3] == '\0') {
    sVar1 = *(short *)(unaff_s1 + 0x6c);
    uVar8 = (_DAT_800e7ed6 - *(short *)(unaff_s1 + 0x56)) + 0x400U & 0xfff;
    if (sVar1 == 9) {
      iVar5 = FUN_80120298();
      return iVar5;
    }
    if (sVar1 < 10) {
      if (sVar1 != 4) {
        iVar5 = FUN_801202e4((int)sVar2);
        return iVar5;
      }
      puVar9 = (undefined1 *)0xd2;
      if ((0x7ff < uVar8) && (puVar9 = (undefined1 *)0x118, *(short *)(unaff_s1 + 0x56) < 0x800)) {
        iVar5 = FUN_801202dc();
        return iVar5;
      }
    }
    else {
      if (sVar1 == 0xd) {
        puVar9 = (undefined1 *)0x82;
        iVar5 = unaff_s2 * 0x10000;
        if (0x7ff < uVar8) {
          iVar5 = _DAT_00000198 + (iVar5 + 1) * 0x100;
          _DAT_0000019a = (short)((uint)iVar5 >> 0x10);
          iVar6 = (int)_DAT_0000019a;
          DAT_000001c6 = 2;
          _DAT_00000198 = iVar5;
          iVar5 = FUN_801322a8(iVar6);
          return iVar5;
        }
        goto LAB_80117344;
      }
      if (sVar1 != 0x11) {
        iVar5 = FUN_801202e4((int)sVar2);
        return iVar5;
      }
      puVar9 = (undefined1 *)0x0;
      if ((_DAT_1f800162 < -1999) && (puVar9 = (undefined1 *)0xa0, 0x7ff < uVar8)) {
        iVar5 = FUN_801202dc();
        return iVar5;
      }
    }
  }
  else {
    if (unaff_s1[3] != '\x01') {
      iVar5 = FUN_801202e4((int)sVar2);
      return iVar5;
    }
    puVar9 = &DAT_000000be;
  }
  iVar5 = unaff_s2 << 0x10;
LAB_80117344:
  iVar5 = iVar5 >> 0x10;
  iVar6 = (int)(short)puVar9;
  if (iVar5 < iVar6) {
    iVar5 = FUN_80120364();
    return iVar5;
  }
  if (iVar5 < iVar6 * 2) {
    iVar5 = FUN_80120364();
    return iVar5;
  }
  if (iVar5 < iVar6 * 3) {
    iVar5 = func_0x8009a450();
    return iVar5;
  }
  iVar4 = 0;
  puVar7 = &DAT_80150000;
  while( true ) {
    *(short *)(iVar4 + 0x3a) = (short)(iVar6 * 2);
    iVar5 = iVar5 + 1;
    if ((int)(uint)(byte)puVar9[8] <= iVar5) break;
    iVar4 = *(int *)(puVar7 + 0xc4);
    puVar7 = puVar7 + 4;
  }
  *puVar9 = (char)unaff_s1;
  puVar9[0x29] = 0;
  puVar9[0x5e] = 0;
  puVar9[4] = 1;
  *(short *)(puVar9 + 0x32) = (short)puVar7 + 0x84;
  puVar9[3] = 0;
  iVar5 = FUN_8013a730(puVar9);
  *(int *)(puVar9 + 0x10) = iVar5;
  *(short *)(unaff_s1 + 0x40) = (short)(iVar5 - 1U);
  if ((iVar5 - 1U & 0xffff) == 0) {
    *unaff_s1 = 2;
    unaff_s1[6] = unaff_s1[6] + '\x01';
  }
  FUN_8013b024();
  uVar3 = func_0x800518fc();
  unaff_s1[0x29] = 0;
  unaff_s1[0x2b] = 0;
  *(undefined2 *)(puVar9 + 6) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

