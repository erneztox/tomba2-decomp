// FUN_08023334

void FUN_08023334(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80116b88;
    *(undefined1 *)(iVar1 + 3) = 5;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  }
  return;
}

