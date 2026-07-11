// FUN_0801bf88

void FUN_0801bf88(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,3,0x10);
  *(undefined4 *)(iVar1 + 0x1c) = 0x80114900;
  *(undefined1 *)(iVar1 + 3) = 3;
  *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
  *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  func_0x00042354(1,1);
  return;
}

