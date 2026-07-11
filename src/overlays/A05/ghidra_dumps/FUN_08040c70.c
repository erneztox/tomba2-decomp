// FUN_08040c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08040c70(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 local_50;
  undefined4 local_4c;
  int local_40 [6];
  
  uVar12 = 0;
  uVar6 = *(uint *)(param_1 + 0x54);
  local_40[2] = 0x80140014;
  local_40[3] = 0x80140008;
  local_40[0] = _DAT_80140010;
  local_40[1] = _DAT_80140004;
  func_0x000329e0(6);
  do {
    iVar7 = uVar6 * 5 + 1;
    iVar8 = iVar7 * 5 + 1;
    uVar9 = iVar8 * 5 + 1;
    uVar10 = uVar9 * 5 + 1;
    iVar5 = *(int *)(param_1 + 0x50);
    iVar4 = ((uVar6 & 3) + 3) * iVar5;
    uVar11 = uVar10 * 5 + 1;
    uVar6 = uVar11 * 5 + 1;
    local_40[4] = (uVar11 & 0x3ff) - 0x200;
    iVar3 = func_0x00083f50(iVar8);
    sVar1 = *(short *)(param_1 + 0x2c);
    iVar8 = func_0x00083e80(iVar8);
    sVar2 = (short)iVar5;
    local_4c = CONCAT22(local_4c._2_2_,*(short *)(param_1 + 0x30) + (short)(iVar8 * iVar4 >> 0xc));
    local_50 = CONCAT22(*(short *)(param_1 + 0x2e) + (sVar2 - ((ushort)iVar7 & 0x1f)) * sVar2,
                        sVar1 + (short)(iVar3 * iVar4 >> 0xc));
    setCopReg(2,in_zero,local_50);
    setCopReg(2,extraout_at,local_4c);
    iVar4 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
    if (iVar4 == 0) {
      _DAT_1f800088 = (int)(_DAT_1f800084 * ((uVar10 & 0x7f) + 0x3f)) >> 8;
      _DAT_1f800090 = local_40[4];
      _DAT_1f800084 = (int)(_DAT_1f800084 * ((uVar9 & 0x7f) + 0x3f)) >> 8;
      func_0x00027a4c(local_40[(uVar12 & 1) + 2],local_40[uVar12 & 1]);
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x16);
  return;
}

