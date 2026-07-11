// FUN_8011e500

void FUN_8011e500(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x80051b70(param_1,0xc,3);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x40;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
  return;
}

