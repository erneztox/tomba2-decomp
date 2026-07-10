// FUN_000044f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000044f4(int param_1)

{
  if ((*(char *)(param_1 + 5) == '\0') && (func_0x00041098(), *(char *)(param_1 + 0x70) == -1)) {
    DAT_800bf839 = 3;
    _DAT_800bf83a = 0x1503;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  func_0x0010d0c0(param_1);
  return;
}

