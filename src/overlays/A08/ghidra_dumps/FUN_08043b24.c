// FUN_08043b24

void FUN_08043b24(int param_1)

{
  if (*(char *)(param_1 + 0x2b) == '\x03') {
    func_0x00042354(1,1);
    func_0x00040d68(param_1,0x800a3d90);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}

