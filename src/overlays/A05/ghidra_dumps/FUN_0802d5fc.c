// FUN_0802d5fc

void FUN_0802d5fc(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x200;
  if (param_2 == 0) {
    iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x52));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar2 * *(short *)(param_1 + 0x44) * 0x10;
  }
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x52));
  iVar3 = iVar2 * *(short *)(param_1 + 0x44) >> 4;
  iVar2 = *(short *)(param_1 + 0x4c) * iVar3;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar3;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar2;
  if ((*(byte *)(param_1 + 0x46) & 8) == 0) {
    uVar1 = func_0x00085690(-iVar2);
    *(undefined2 *)(param_1 + 0x56) = uVar1;
  }
  return;
}

