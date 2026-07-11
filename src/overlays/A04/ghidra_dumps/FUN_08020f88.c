// FUN_08020f88

void FUN_08020f88(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(2,3,1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80119b34;
    *(undefined1 *)(iVar1 + 2) = 0;
    *(undefined1 *)(iVar1 + 3) = param_2;
    *(int *)(param_1 + 0x10) = iVar1;
    *(int *)(iVar1 + 0x10) = param_1;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  }
  return;
}

