// FUN_00003858

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003858(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar8 = 0x12d687;
  local_40[0] = _DAT_80109068;
  local_40[1] = _DAT_8010906c;
  local_40[2] = _DAT_80109070;
  local_40[3] = _DAT_80109074;
  func_0x000329e0(6);
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar1 = func_0x00083f50((int)_DAT_800e7ed6);
  iVar2 = func_0x00083e80((int)_DAT_800e7ed6);
  iVar5 = *(int *)(param_1 + 0x50) * 10;
  uVar7 = 0;
  iVar12 = (int)_DAT_1f800160;
  iVar11 = (int)_DAT_1f800162;
  iVar10 = (int)_DAT_1f800164;
  do {
    uVar9 = iVar8 * _DAT_80115894 + 1;
    iVar6 = iVar12 + (iVar8 + (iVar1 * 2 * iVar5 >> 0xc) & 0x3fffU) + -0x2000;
    iVar3 = iVar11 + (uVar9 & 0x3fff) + -0x2000;
    iVar8 = uVar9 * _DAT_80115894 + 1;
    local_30 = CONCAT22((short)iVar3,(short)iVar6);
    iVar4 = iVar10 + (iVar8 + (iVar2 * 2 * iVar5 >> 0xc) & 0x3fffU) + -0x2000;
    local_2c = CONCAT22(local_2c._2_2_,(short)iVar4);
    iVar8 = iVar8 * _DAT_80115894 + 1;
    _DAT_1f800090 =
         func_0x00078240((iVar6 * 0x10000 >> 0x10) - (int)_DAT_1f8000d2,
                         (iVar3 * 0x10000 >> 0x10) - (int)_DAT_1f8000d6,
                         (iVar4 * 0x10000 >> 0x10) - (int)_DAT_1f8000da);
    _DAT_1f800090 = _DAT_1f800090 >> 3;
    setCopReg(2,in_zero,local_30);
    setCopReg(2,extraout_at,local_2c);
    iVar3 = func_0x000317cc(0);
    if (iVar3 == 0) {
      _DAT_1f800084 = _DAT_1f800084 << 1;
      _DAT_1f800088 = _DAT_1f800084;
      func_0x0002847c(local_40[uVar7 & 3],0,0);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x40);
  return;
}

