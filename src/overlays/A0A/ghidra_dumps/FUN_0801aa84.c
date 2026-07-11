// FUN_0801aa84

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801aa84(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 != 0) {
    func_0x000329e0(6);
    setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
    setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 0x30));
    iVar1 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
    if (iVar1 != 0) {
      func_0x00031780(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f800088 = _DAT_1f800084;
    uVar2 = func_0x0009a450();
    _DAT_1f800090 = -(uVar2 & 0x1ff);
    uVar3 = func_0x00027a4c(iVar4,_DAT_8011c110);
    *(undefined4 *)(param_1 + 0x38) = uVar3;
  }
  return;
}

