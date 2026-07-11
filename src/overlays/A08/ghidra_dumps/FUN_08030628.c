// FUN_08030628

void FUN_08030628(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x6b);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x56) = 0x4fc;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (DAT_800bf93e == -1) {
      *(undefined1 *)(param_1 + 5) = 10;
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xf6;
    }
  }
  return;
}

