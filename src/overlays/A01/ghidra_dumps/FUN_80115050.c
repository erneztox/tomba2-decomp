// FUN_80115050

void FUN_80115050(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x8003116c(0x201,param_1 + 0x2c,0);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x10) = param_1;
    *(int *)(param_1 + 0x10) = iVar1;
    *(undefined1 *)(iVar1 + 7) = 0;
    *(short *)(iVar1 + 0x2e) = *(short *)(iVar1 + 0x2e) + -0x30;
  }
  return;
}

