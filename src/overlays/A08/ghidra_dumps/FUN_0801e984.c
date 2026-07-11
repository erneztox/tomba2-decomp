// FUN_0801e984

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e984(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  undefined4 local_58;
  undefined4 local_54;
  short local_50;
  short sStack_4e;
  short local_4c;
  short local_48;
  short local_46;
  short local_44;
  int local_40;
  int local_3c;
  int local_38;
  short *local_34;
  int local_30;
  
  setCopControlWord(2,0xd800,6);
  setCopControlWord(2,0xe000,0);
  uVar7 = 0;
  sVar11 = -0x2970;
  iVar10 = 0;
  sVar9 = 0;
  local_40 = -0x7febc3a4;
  uVar4 = (uint)_DAT_1f80017c % 6;
  do {
    if ((uVar7 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = -iVar10;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    local_58 = CONCAT22(sVar11,sVar9 + 0x33ca);
    local_54 = CONCAT22(local_54._2_2_,(short)(iVar1 >> 3) + 0x1e0f);
    func_0x000318a0(&local_58,0x800a1cd4,param_1 + 0x48);
    setCopReg(2,in_zero,local_58);
    setCopReg(2,extraout_at,local_54);
    iVar1 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
    if (iVar1 == 0) {
      _DAT_1f800090 = 0;
      _DAT_1f800084 = _DAT_1f800084 << 2;
      _DAT_1f800088 = _DAT_1f800084;
      func_0x000328bc(param_1,local_40 + uVar4 * 8);
    }
    uVar4 = uVar4 + 1;
    if (5 < (int)uVar4) {
      uVar4 = 0;
    }
    sVar11 = sVar11 + 0x28;
    iVar10 = iVar10 + 0x21f;
    sVar9 = sVar9 + 0x88;
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 8);
  if (0x23 < *(byte *)(param_1 + 5)) {
    setCopControlWord(2,0xd800,6);
    setCopControlWord(2,0xe000,0);
    iVar1 = 0;
    iVar10 = 0;
    local_40 = -0x7febc3a4;
    uVar4 = (uint)_DAT_1f80017c % 6;
    do {
      iVar2 = -iVar10;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      local_58 = CONCAT22((short)(iVar2 >> 3) + -0x21ff,0x2dc2);
      local_54 = CONCAT22(local_54._2_2_,0x2134);
      func_0x000318a0(&local_58,0x800a1cd4,param_1 + 0x48);
      setCopReg(2,in_zero,local_58);
      setCopReg(2,extraout_at_00,local_54);
      iVar2 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
      if (iVar2 == 0) {
        _DAT_1f800090 = 0;
        _DAT_1f800084 = _DAT_1f800084 << 1;
        _DAT_1f800088 = _DAT_1f800084;
        func_0x000328bc(param_1,local_40 + uVar4 * 8);
      }
      uVar4 = uVar4 + 1;
      if (5 < (int)uVar4) {
        uVar4 = 0;
      }
      iVar1 = iVar1 + 1;
      iVar10 = iVar10 + 0x677;
    } while (iVar1 < 8);
  }
  uVar4 = 0x12d687;
  setCopControlWord(2,0xd800,6);
  setCopControlWord(2,0xe000,0);
  uVar7 = 0;
  local_34 = &local_50;
  iVar10 = 0;
  local_40 = -0x7ff62a04;
  local_38 = 0x66666667;
  local_30 = 0;
  do {
    uVar5 = uVar4 & 0x3f;
    uVar6 = uVar4 * 5 + 1;
    iVar8 = uVar6 * 5 + 1;
    iVar1 = iVar8 * 5 + 1;
    uVar4 = iVar1 * 5 + 1;
    local_3c = 0x30 - (uVar6 & 0x3f);
    iVar2 = (int)((iVar1 + (uint)_DAT_1f80017c * 0x100 & 0xfff) * 0xd) >> 0xc;
    iVar1 = uVar5 * iVar2;
    if ((uVar7 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_46 = (short)uVar7 * 0x20 + -0x28da;
    local_48 = ((short)(int)((longlong)iVar10 * (longlong)local_38 >> 0x22) -
               (short)(iVar10 >> 0x1f)) + 0x33c8;
    local_44 = ((short)(int)((longlong)local_30 * (longlong)local_38 >> 0x22) -
               (short)(local_30 >> 0x1f)) + 0x1e0b;
    iVar3 = func_0x00083f50(iVar8);
    local_50 = local_48 + (short)(iVar3 * iVar1 >> 0xc);
    iVar8 = func_0x00083e80(iVar8);
    local_4c = local_44 + (short)(iVar8 * iVar1 >> 0xc);
    sStack_4e = local_46 + ((short)local_3c + (short)iVar2 * 3) * (short)iVar2;
    func_0x000318a0(local_34,0x800a1cd4,param_1 + 0x48);
    setCopReg(2,in_zero,*(undefined4 *)local_34);
    setCopReg(2,extraout_at_01,*(undefined4 *)(local_34 + 2));
    iVar1 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
    if (iVar1 == 0) {
      _DAT_1f800090 = 0;
      _DAT_1f800088 = _DAT_1f800084;
      func_0x00027a4c(local_40 + iVar2 * 0x10,_DAT_8009d5f8);
    }
    iVar10 = iVar10 + 0x440;
    uVar7 = uVar7 + 1;
    local_30 = local_30 + -0x21f;
  } while ((int)uVar7 < 10);
  return;
}

