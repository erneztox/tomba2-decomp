// FUN_8010e4c4

void FUN_8010e4c4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x80051b70(param_1,1,2);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x80) = 0x28;
    *(undefined2 *)(param_1 + 0x82) = 0x50;
    *(undefined2 *)(param_1 + 0x84) = 0x4b;
    *(undefined2 *)(param_1 + 0x86) = 0x73;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (DAT_800bf9e5 == '\x04') {
      *(undefined1 *)(param_1 + 0x5e) = 1;
    }
  }
  return;
}

