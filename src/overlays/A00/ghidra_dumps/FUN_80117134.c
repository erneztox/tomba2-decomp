// FUN_80117134

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80117134(undefined1 *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined1 *puVar9;
  undefined1 *unaff_s0;
  
  puVar7 = &DAT_800e7e80;
  puVar9 = param_1;
  if (((int)_DAT_800e7ffe & 0x8200U) != 0) goto LAB_801171ac;
  puVar7 = (undefined1 *)(uint)DAT_800e7eaa;
  puVar9 = (undefined1 *)(uint)(*(ushort *)(param_1 + 0x6e) >> 8);
  if ((puVar7 < (undefined1 *)(*(ushort *)(param_1 + 0x6e) & 0xff)) || (puVar9 < puVar7)) {
    return 0;
  }
  if (*(short *)(param_1 + 0x68) == 0) goto LAB_801171ac;
  iVar4 = (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
  iVar5 = (int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
  iVar4 = func_0x80084080(iVar4 * iVar4 + iVar5 * iVar5);
  sVar2 = (short)iVar4;
  if ((sVar2 < *(short *)(param_1 + 0x82)) &&
     ((int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) * 0x10000) < 0)) {
    return 0;
  }
  if (param_1[3] == '\0') {
    sVar1 = *(short *)(param_1 + 0x6c);
    uVar8 = (_DAT_800e7ed6 - *(short *)(param_1 + 0x56)) + 0x400U & 0xfff;
    if (sVar1 == 9) {
      uVar6 = FUN_80120298();
      return uVar6;
    }
    if (sVar1 < 10) {
      if (sVar1 != 4) {
        uVar6 = FUN_801202e4((int)sVar2);
        return uVar6;
      }
      unaff_s0 = (undefined1 *)0xd2;
      if ((0x7ff < uVar8) && (unaff_s0 = (undefined1 *)0x118, *(short *)(param_1 + 0x56) < 0x800)) {
        uVar6 = FUN_801202dc();
        return uVar6;
      }
      goto LAB_80117340;
    }
    if (sVar1 != 0xd) {
      if (sVar1 != 0x11) {
        uVar6 = FUN_801202e4((int)sVar2);
        return uVar6;
      }
      unaff_s0 = (undefined1 *)0x0;
      if (((short)_DAT_1f800162 < -1999) && (unaff_s0 = (undefined1 *)0xa0, 0x7ff < uVar8)) {
        uVar6 = FUN_801202dc();
        return uVar6;
      }
      goto LAB_80117340;
    }
    unaff_s0 = (undefined1 *)0x82;
    iVar4 = iVar4 * 0x10000;
    if (0x7ff < uVar8) {
      iVar4 = _DAT_00000198 + (iVar4 + 1) * 0x100;
      _DAT_0000019a = (short)((uint)iVar4 >> 0x10);
      iVar5 = (int)_DAT_0000019a;
      DAT_000001c6 = 2;
      _DAT_00000198 = iVar4;
      uVar6 = FUN_801322a8(iVar5);
      return uVar6;
    }
  }
  else {
    if (param_1[3] != '\x01') {
      uVar6 = FUN_801202e4((int)sVar2);
      return uVar6;
    }
    unaff_s0 = &DAT_000000be;
LAB_80117340:
    iVar4 = iVar4 << 0x10;
  }
  puVar9 = (undefined1 *)(iVar4 >> 0x10);
  iVar4 = (int)(short)unaff_s0;
  param_2 = iVar4 * 2;
  if ((int)puVar9 < iVar4) {
    uVar6 = FUN_80120364();
    return uVar6;
  }
  if ((int)puVar9 < param_2) {
    uVar6 = FUN_80120364();
    return uVar6;
  }
  puVar7 = &DAT_80150000;
  if ((int)puVar9 < iVar4 * 3) {
    uVar6 = func_0x8009a450();
    return uVar6;
  }
LAB_801171ac:
  iVar4 = 0;
  while( true ) {
    *(short *)(iVar4 + 0x3a) = (short)param_2;
    puVar9 = puVar9 + 1;
    if ((int)(uint)(byte)unaff_s0[8] <= (int)puVar9) break;
    iVar4 = *(int *)(puVar7 + 0xc4);
    puVar7 = puVar7 + 4;
  }
  *unaff_s0 = (char)param_1;
  unaff_s0[0x29] = 0;
  unaff_s0[0x5e] = 0;
  unaff_s0[4] = 1;
  *(short *)(unaff_s0 + 0x32) = (short)puVar7 + 0x84;
  unaff_s0[3] = 0;
  iVar4 = FUN_8013a730(unaff_s0);
  *(int *)(unaff_s0 + 0x10) = iVar4;
  *(short *)(param_1 + 0x40) = (short)(iVar4 - 1U);
  if ((iVar4 - 1U & 0xffff) == 0) {
    *param_1 = 2;
    param_1[6] = param_1[6] + '\x01';
  }
  FUN_8013b024(param_1,0x1f);
  uVar3 = func_0x800518fc(param_1);
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  *(undefined2 *)(unaff_s0 + 6) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

