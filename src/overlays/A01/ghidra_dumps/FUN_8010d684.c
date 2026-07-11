// FUN_8010d684

undefined4 FUN_8010d684(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = func_0x80083f50((int)*(short *)(param_1 + 0x58));
  iVar4 = *(short *)(param_1 + 0x4e) * iVar1 >> 0xc;
  iVar1 = func_0x80083e80((int)*(short *)(param_1 + 0x58));
  iVar1 = *(short *)(param_1 + 0x4e) * iVar1;
  if ((*(ushort *)(param_1 + 0x66) & 1) != 0) {
    iVar2 = func_0x80083f50((int)*(short *)(param_1 + 100));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - iVar2 * iVar4;
    func_0x80083e80((int)*(short *)(param_1 + 100));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
    uVar3 = FUN_8011671c();
    return uVar3;
  }
  iVar2 = func_0x80083f50((int)*(short *)(param_1 + 100));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar2 * iVar4;
  iVar2 = func_0x80083e80((int)*(short *)(param_1 + 100));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - iVar2 * iVar4;
  return 0;
}

