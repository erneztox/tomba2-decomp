// FUN_08022574

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022574(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x000329e0(6);
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
    setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 0x30));
    iVar1 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
    if (iVar1 == 0) {
      iVar1 = func_0x00083e80(*(undefined4 *)(param_1 + 0x50));
      _DAT_1f800090 = *(int *)(param_1 + 0x58);
      _DAT_1f800088 = (int)(_DAT_1f800084 * iVar1 * 2) >> 0xc;
      _DAT_1f800084 = _DAT_1f800084 * (0x1000 - _DAT_1f800090) >> 0xc;
      uVar2 = func_0x000328bc(param_1,uVar2);
    }
    *(undefined4 *)(param_1 + 0x38) = uVar2;
  }
  return;
}

