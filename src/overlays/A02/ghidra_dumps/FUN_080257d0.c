// FUN_080257d0

void FUN_080257d0(int param_1)

{
  if (*(char *)(param_1 + 0x71) == -1) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      *(undefined1 *)(param_1 + 0x5e) = 1;
    }
    func_0x00041768(param_1,0,4);
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}

