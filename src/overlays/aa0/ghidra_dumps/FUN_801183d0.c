// FUN_801183d0

void FUN_801183d0(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  *(undefined2 *)(param_1 + 10) = param_4;
  if (*(short *)(param_1 + 10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0x1e;
  }
  return;
}

