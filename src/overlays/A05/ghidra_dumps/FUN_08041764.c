// FUN_08041764

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08041764(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  func_0x000329e0(6,param_2,param_3,0);
  setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
  setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 0x30));
  iVar1 = func_0x000317cc(0xffffffce);
  if (iVar1 == 0) {
    _DAT_1f800090 = (int)*(short *)(param_1 + 0x5e);
    _DAT_1f800084 = _DAT_1f800084 * *(short *)(param_1 + 0x62) >> 8;
    _DAT_1f800088 = _DAT_1f800084;
    func_0x00027a4c(0x8013ffe4,_DAT_8013ffe0);
  }
  return;
}

