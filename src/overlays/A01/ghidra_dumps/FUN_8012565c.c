// FUN_8012565c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012565c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_ffffffec;
  undefined2 uVar4;
  undefined4 uVar3;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffec >> 0x10);
  func_0x800329e0(6);
  uVar2 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
  uVar3 = CONCAT22(uVar4,*(undefined2 *)(param_1 + 0x36));
  setCopReg(2,in_zero,uVar2);
  setCopReg(2,extraout_at,uVar3);
  iVar1 = func_0x800317cc(0);
  if (iVar1 != 0) {
    func_0x80031780(param_1);
    FUN_8012e68c();
    return;
  }
  _DAT_1f800090 = 0;
  _DAT_1f800088 = _DAT_1f800084;
  uVar2 = func_0x80027a4c(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x70),param_3,
                          param_4,uVar2,uVar3);
  *(undefined4 *)(param_1 + 100) = uVar2;
  return;
}

