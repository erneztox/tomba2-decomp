// FUN_0801bd2c

void FUN_0801bd2c(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x26);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    iVar1 = func_0x00072ddc(param_1,0x81,3,0x10);
    *(undefined4 *)(iVar1 + 0x1c) = 0x80114900;
    *(undefined1 *)(iVar1 + 3) = 1;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(short *)(iVar1 + 0x32) = *(short *)(param_1 + 0x32) + 0x136;
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  }
  return;
}

