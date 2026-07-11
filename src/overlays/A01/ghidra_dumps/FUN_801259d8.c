// FUN_801259d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801259d8(int param_1)

{
  undefined4 in_zero;
  undefined4 in_at;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_stack_ffffffe4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(param_1 + 0x60);
  uVar3 = *(uint *)(param_1 + 0x70);
  if (iVar4 != 0) {
    uVar2 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
    uVar5 = CONCAT22((short)((uint)in_stack_ffffffe4 >> 0x10),*(undefined2 *)(param_1 + 0x36));
    setCopReg(2,in_zero,uVar2);
    setCopReg(2,in_at,uVar5);
    func_0x800329e0(6);
    iVar1 = func_0x800317cc(0xffffffce);
    if (iVar1 == 0) {
      _DAT_1f800088 = _DAT_1f800084 * (uVar3 >> 0x10) >> 8;
      _DAT_1f800084 = _DAT_1f800084 * (uVar3 & 0xffff) >> 8;
      setCopControlWord(2,0xa800,0);
      setCopControlWord(2,0xb000,0);
      setCopControlWord(2,0xb800,0);
      _DAT_1f800090 = *(undefined4 *)(param_1 + 0x6c);
      uVar2 = func_0x80027a4c(iVar4,**(undefined4 **)(param_1 + 0x68),0,0,uVar2,uVar5);
      *(undefined4 *)(param_1 + 100) = uVar2;
    }
  }
  return;
}

