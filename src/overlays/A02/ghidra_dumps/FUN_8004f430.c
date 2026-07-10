// FUN_8004f430

void FUN_8004f430(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    FUN_8004f378();
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}

