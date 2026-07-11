// FUN_08030270

void FUN_08030270(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x6c);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x56) = 0xacd;
    *(undefined2 *)(param_1 + 0x58) = 0xc5c;
    *(undefined2 *)(param_1 + 0x2e) = 0x224d;
    *(undefined2 *)(param_1 + 0x32) = 0xea80;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0x325e;
  }
  return;
}

