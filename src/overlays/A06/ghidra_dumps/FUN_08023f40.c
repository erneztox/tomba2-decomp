// FUN_08023f40

void FUN_08023f40(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = func_0x00083f50((int)*(short *)(*(int *)(param_1 + 0xc4) + 8));
  iVar4 = (int)*(short *)(param_1 + 0x6a) << 0xc;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar4 == -0x80000000)) {
    trap(0x1800);
  }
  iVar3 = func_0x00083e80((int)*(short *)(*(int *)(param_1 + 0xc4) + 8));
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  sVar1 = (short)(iVar4 / iVar2) + (short)(iVar3 >> 6);
  *(short *)(*(int *)(param_1 + 200) + 4) = -sVar1;
  *(short *)(*(int *)(param_1 + 0xcc) + 4) = sVar1;
  return;
}

