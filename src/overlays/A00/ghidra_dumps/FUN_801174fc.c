// FUN_801174fc

undefined4 FUN_801174fc(int param_1,uint param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_2 & 1) == 0) {
    iVar2 = (int)*(short *)(param_1 + 0x44);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar2;
    uVar3 = FUN_80120590();
    return uVar3;
  }
  iVar2 = (int)*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - (*(short *)(param_1 + 0x48) * iVar2) / 2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (*(short *)(param_1 + 0x4a) * iVar2) / 2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (*(short *)(param_1 + 0x4c) * iVar2) / 2;
  if ((param_2 & 2) == 0) {
    func_0x8004766c(param_1);
    func_0x80049250(param_1,0,200);
    if ((param_2 & 4) == 0) {
      func_0x8004954c(param_1,100,0);
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_2 + 0x2c);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_2 + 0x30);
      uVar1 = *(undefined2 *)(param_2 + 0x34);
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined2 *)(param_1 + 0x36) = uVar1;
      uVar3 = func_0x80051c8c();
      return uVar3;
    }
  }
  return 0;
}

