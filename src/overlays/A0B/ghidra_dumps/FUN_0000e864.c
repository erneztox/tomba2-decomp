// FUN_0000e864

void FUN_0000e864(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x5f) == '\0') {
    sVar1 = *(short *)(param_1 + 0x60);
    iVar3 = func_0x00083f50((int)sVar1);
    sVar2 = *(short *)(param_1 + 0x44);
    iVar4 = func_0x00083e80((int)sVar1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar3 * sVar2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -iVar4 * (int)*(short *)(param_1 + 0x44);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x1000;
  return;
}

