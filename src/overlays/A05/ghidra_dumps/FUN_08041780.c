// FUN_08041780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08041780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar2;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  func_0x000329e0(6,param_2,param_3,0);
  setCopReg(2,in_zero,*(undefined4 *)(unaff_s0 + 0x2c));
  setCopReg(2,extraout_at,*(undefined4 *)(unaff_s0 + 0x30));
  iVar2 = func_0x000317cc(0xffffffce);
  uVar1 = _DAT_8013ffe0;
  if (iVar2 == 0) {
    _DAT_1f800090 = (int)*(short *)(unaff_s1 + 0xe);
    _DAT_1f800088 = *(int *)(unaff_s2 + 0x84) * (int)*(short *)(unaff_s1 + 0x12) >> 8;
    *(int *)(unaff_s2 + 0x84) = _DAT_1f800088;
    func_0x00027a4c(0x8013ffe4,uVar1);
  }
  return;
}

