// FUN_0803f49c

void FUN_0803f49c(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0007aae8();
  *(int *)(param_1 + 0xc4) = iVar1;
  *(undefined2 *)(iVar1 + 6) = 0xffff;
  **(undefined2 **)(param_1 + 0xc4) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = 0x400;
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = 0x1000;
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = 0x1000;
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3c) = 0x1000;
  func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0xc,0x20);
  *(undefined1 *)(param_1 + 8) = 2;
  *(undefined1 *)(param_1 + 9) = 2;
  return;
}

