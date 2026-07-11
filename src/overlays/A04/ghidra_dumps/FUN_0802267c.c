// FUN_0802267c

void FUN_0802267c(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x12);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x30;
    *(undefined1 *)(param_1 + 0x46) = 0;
  }
  return;
}

