// FUN_08042958

void FUN_08042958(int param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = func_0x00083e80((int)param_2);
  iVar2 = func_0x00083f50((int)param_2);
  iVar2 = (iVar2 << 0x10) >> 0x14;
  iVar3 = (int)param_3;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar3 * (iVar1 >> 4) * 0x100;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar3 * iVar2 * *(short *)(param_1 + 0x48);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar3 * iVar2 * *(short *)(param_1 + 0x4c);
  return;
}

