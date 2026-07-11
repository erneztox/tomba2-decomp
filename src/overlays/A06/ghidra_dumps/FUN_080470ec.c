// FUN_080470ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080470ec(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if (iVar3 == 0) {
    iVar3 = -0x7feb5a18;
  }
  func_0x000329e0(6);
  local_18 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
  local_14 = CONCAT22(local_14._2_2_,*(undefined2 *)(param_1 + 0x36));
  setCopReg(2,in_zero,local_18);
  setCopReg(2,extraout_at,local_14);
  iVar1 = func_0x000317cc(0xfffffff6);
  if (iVar1 == 0) {
    _DAT_1f800088 = _DAT_1f800084;
    _DAT_1f800090 = func_0x0009a450();
    _DAT_1f800090 = _DAT_1f800090 & 0x7ff;
    uVar2 = func_0x00027a4c(iVar3,_DAT_8014a5e4);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
  }
  return;
}

