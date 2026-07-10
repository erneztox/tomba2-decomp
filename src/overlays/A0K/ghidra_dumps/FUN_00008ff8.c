// FUN_00008ff8

void FUN_00008ff8(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    func_0x00074590(0x84,0,0);
  }
  func_0x000517f8(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

