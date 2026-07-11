// FUN_0801a5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a5a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffec;
  undefined2 uVar5;
  undefined4 uVar4;
  
  uVar5 = (undefined2)((uint)in_stack_ffffffec >> 0x10);
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 != 0) {
    func_0x000329e0(6);
    uVar3 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
    uVar4 = CONCAT22(uVar5,*(undefined2 *)(param_1 + 0x36));
    setCopReg(2,in_zero,uVar3);
    setCopReg(2,extraout_at,uVar4);
    iVar1 = func_0x000317cc(0xffffffec);
    if (iVar1 == 0) {
      _DAT_1f800090 = 0;
      _DAT_1f800088 = _DAT_1f800084;
      func_0x00027a4c(iVar2,_DAT_8011c6f0,_DAT_1f800084,param_4,uVar3,uVar4);
    }
  }
  return;
}

