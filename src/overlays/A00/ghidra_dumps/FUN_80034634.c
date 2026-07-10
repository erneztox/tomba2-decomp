// FUN_80034634

void FUN_80034634(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_8007a624();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

