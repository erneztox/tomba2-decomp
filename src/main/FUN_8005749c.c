
void FUN_8005749c(int param_1)

{
  if (*(char *)(param_1 + 0x146) != '\0') {
    *(undefined2 *)(param_1 + 0x58) = 0;
  }
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x167) = 0;
  *(undefined1 *)(param_1 + 0x145) = 1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  return;
}

