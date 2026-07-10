// FUN_00002c1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c1c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (int)_DAT_8011bb00;
  iVar6 = (int)_DAT_8011bafe;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar1 = iVar1 + 0x1d;
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  iVar6 = iVar6 + 0x17;
  if (param_3 < 0) {
    iVar1 = -iVar1;
  }
  iVar2 = func_0x00083f50(param_3);
  iVar3 = func_0x00083e80(param_3);
  iVar4 = func_0x00083e80(param_3);
  iVar5 = func_0x00083f50(param_3);
  iVar2 = (iVar1 * iVar2 + iVar6 * iVar3 >> 0xc) - iVar1;
  iVar6 = (-iVar1 * iVar4 + iVar6 * iVar5 >> 0xc) - iVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + (iVar2 * *(short *)(param_2 + 4) >> 0xc);
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (iVar2 * *(short *)(param_2 + 10) >> 0xc);
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + (iVar2 * *(short *)(param_2 + 0x10) >> 0xc);
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + (iVar6 * *(short *)(param_2 + 2) >> 0xc);
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (iVar6 * *(short *)(param_2 + 8) >> 0xc);
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + (iVar6 * *(short *)(param_2 + 0xe) >> 0xc);
  iVar1 = (int)_DAT_8011bafe;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar1 = -(int)*(short *)(param_1 + 0x8a) - (iVar1 + 0x17);
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + (iVar1 * *(short *)(param_2 + 2) >> 0xc);
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (iVar1 * *(short *)(param_2 + 8) >> 0xc);
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + (iVar1 * *(short *)(param_2 + 0xe) >> 0xc);
  return;
}

