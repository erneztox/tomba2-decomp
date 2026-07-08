
undefined4 FUN_80041fcc(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 5) != '\x03') {
      return 0;
    }
    *(undefined1 *)(param_1 + 5) = 10;
  }
  return 1;
}

