// FUN_08018a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018a00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  int iVar2;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = 0;
  func_0x000329e0(6,param_2,param_3,0);
  setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
  setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 0x30));
  iVar1 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
  if (iVar1 == 0) {
    iVar1 = func_0x00083e80((int)*(short *)(param_1 + 0x48));
    iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
    iVar1 = (iVar1 >> 3) + (iVar2 >> 8);
    if (iVar1 < 0x10) {
      iVar1 = 0x10;
    }
    _DAT_1f800084 = _DAT_1f800084 * iVar1 >> 8;
    _DAT_1f800088 = _DAT_1f800084;
    func_0x0002847c(0x8011bfa0,*(undefined1 *)((*(byte *)(param_1 + 5) >> 1) + 0x8011c034),0);
    func_0x0002847c(0x8011bf58,*(undefined1 *)((*(byte *)(param_1 + 6) >> 1) + 0x8011c034),0);
  }
  return;
}

