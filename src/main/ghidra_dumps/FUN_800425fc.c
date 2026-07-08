
undefined4 FUN_800425fc(int param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
    FUN_80070798();
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x01') {
      return 0;
    }
    if (DAT_800bf843 == '\0') {
      return 1;
    }
  }
  return 0;
}

