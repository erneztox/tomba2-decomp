// FUN_080209fc

void FUN_080209fc(int param_1)

{
  int iVar1;
  
  func_0x00051b70(param_1,0xc,0x2a);
  *(undefined2 *)(param_1 + 0x56) = 0x800;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  if (DAT_800bf8d5 == -1) {
    *(undefined2 *)(param_1 + 0x32) = 0xde88;
    *(undefined1 *)(param_1 + 5) = 99;
  }
  iVar1 = func_0x00072ddc(param_1,1,4,0x17);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80120fb4;
    *(undefined1 *)(iVar1 + 3) = 0;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  }
  return;
}

