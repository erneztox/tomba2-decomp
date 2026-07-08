
void FUN_80088a88(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x37) = 0x4c;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(undefined1 *)(param_1 + 0x24) = param_2;
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}

