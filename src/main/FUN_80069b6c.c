
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80069b6c(int param_1)

{
  if (0x1cc < (ushort)((*(short *)(_DAT_800e7f5c + 0x34) - *(short *)(param_1 + 0x36)) + 0xe6U)) {
    return false;
  }
  if ((ushort)((*(short *)(_DAT_800e7f5c + 0x2c) - *(short *)(param_1 + 0x2e)) + 0xe6U) < 0x1cd) {
    return (ushort)((*(short *)(_DAT_800e7f5c + 0x30) - *(short *)(param_1 + 0x32)) + 0xe6U) < 0x1cd
    ;
  }
  return false;
}

