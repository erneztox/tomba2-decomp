// FUN_80115ac4

void FUN_80115ac4(int param_1)

{
  if (*(char *)(param_1 + 0x71) == -1) {
    func_0x80041768(param_1,5,4);
    func_0x80040d68(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fec9884));
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(*(byte *)(param_1 + 0x5e) + 0x801367d0);
  }
  return;
}

