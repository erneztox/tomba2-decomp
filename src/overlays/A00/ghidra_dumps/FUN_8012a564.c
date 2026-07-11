// FUN_8012a564

void FUN_8012a564(int param_1)

{
  if (*(char *)(param_1 + 0x29) == '\0') {
    FUN_80133610(param_1,1);
    *(undefined1 *)(param_1 + 5) = 3;
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x6c) = 1;
  }
  return;
}

