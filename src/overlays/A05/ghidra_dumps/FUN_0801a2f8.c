// FUN_0801a2f8

void FUN_0801a2f8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x0004c0e4(param_1,param_2 + 6,0);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  }
  return;
}

