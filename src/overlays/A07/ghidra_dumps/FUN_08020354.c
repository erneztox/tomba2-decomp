// FUN_08020354

void FUN_08020354(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(iVar2 + 0xdc);
  iVar4 = *(int *)(iVar2 + 0xd0);
  sVar1 = *(short *)(iVar2 + 0x56);
  *(short *)(param_1 + 0x2e) = (short)((*(int *)(iVar3 + 0x2c) + *(int *)(iVar4 + 0x2c)) / 2);
  *(short *)(param_1 + 0x32) =
       (short)((*(int *)(iVar3 + 0x30) + *(int *)(iVar4 + 0x30)) / 2) + -0x78;
  *(short *)(param_1 + 0x36) = (short)((*(int *)(iVar3 + 0x34) + *(int *)(iVar4 + 0x34)) / 2);
  iVar2 = func_0x00083f50((int)sVar1);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)(iVar2 * -0x3c >> 0xc);
  iVar2 = func_0x00083e80((int)sVar1);
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - (short)(iVar2 * 0x3c >> 0xc);
  return;
}

