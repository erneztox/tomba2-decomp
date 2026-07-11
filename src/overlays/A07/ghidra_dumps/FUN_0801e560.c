// FUN_0801e560

void FUN_0801e560(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = func_0x00083f50((int)*(short *)(iVar2 + 0x56));
  *(short *)(param_1 + 0x2e) =
       *(short *)(*(int *)(iVar2 + 0xc0) + 0x2c) + (short)(iVar1 * 0x32 >> 0xc);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0x30);
  iVar1 = func_0x00083e80((int)*(short *)(iVar2 + 0x56));
  *(short *)(param_1 + 0x36) =
       *(short *)(*(int *)(iVar2 + 0xc0) + 0x34) - (short)(iVar1 * 0x32 >> 0xc);
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar2 + 0x56);
  func_0x0007778c();
  return;
}

