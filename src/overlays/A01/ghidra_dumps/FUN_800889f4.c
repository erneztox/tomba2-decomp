// FUN_800889f4

undefined4 FUN_800889f4(int param_1)

{
  if (*(char *)(param_1 + 0x53) == '\0') {
    (*DAT_800abe3c)();
  }
  else {
    if (*(char *)(param_1 + 0x46) == '\x02') {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x46) = 0xfe;
  }
  return 0;
}

