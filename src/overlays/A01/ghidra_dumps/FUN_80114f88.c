// FUN_80114f88

int FUN_80114f88(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = func_0x80076d68();
  FUN_8011d9e4(param_1,param_2 + 1);
  if (*(short *)(param_1 + (param_2 + 1) * 2 + 0x60) != 2) {
    *(undefined2 *)(param_1 + param_2 * 2 + 0x60) = 0;
    iVar3 = FUN_8011dfc4();
    return iVar3;
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x38) + 4);
  iVar3 = param_1 + param_2 * 2;
  if ((int)((uint)uVar1 << 0x10) >> 0x14 != (int)*(short *)(iVar3 + 0x60)) {
    func_0x80051b04(*(undefined4 *)(param_1 + 200),0x15);
    *(short *)(iVar3 + 0x60) = (short)uVar1 >> 4;
  }
  return (int)sVar2;
}

