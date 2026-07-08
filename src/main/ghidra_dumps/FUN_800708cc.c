
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800708cc(int param_1)

{
  *(undefined2 *)(param_1 + 0x44) = 0x400;
  _DAT_800bf826 = *(undefined2 *)(param_1 + 0x2e);
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 0x4e) = _DAT_800bf826;
  _DAT_800bf82a = *(undefined2 *)(param_1 + 0x32);
  *(undefined2 *)(param_1 + 0x50) = _DAT_800bf82a;
  _DAT_800bf82e = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0x52) = _DAT_800bf82e;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 5) = 2;
  return;
}

