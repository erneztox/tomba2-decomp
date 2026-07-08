
void FUN_8004b354(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  *(undefined1 *)(param_1 + 0x19) = 0xff;
  *(undefined1 *)(param_1 + 0x1a) = 0xff;
  return;
}

