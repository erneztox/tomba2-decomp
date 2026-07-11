// FUN_08021474

void FUN_08021474(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  func_0x00051b70(param_1,0xc,0x1c);
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar1 + 0x2e);
  *(short *)(param_1 + 0x32) = *(short *)(iVar1 + 0x32) + -0x50;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar1 + 0x36);
  func_0x0004b354(param_1,1);
  *(undefined2 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xba) = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  return;
}

