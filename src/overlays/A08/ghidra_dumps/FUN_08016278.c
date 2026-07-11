// FUN_08016278

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016278(int param_1)

{
  if (((*(byte *)(param_1 + 0x145) & 1) == 0) &&
     ((int)_DAT_800bf812 - (int)*(short *)(param_1 + 0x62) <= (int)*(short *)(param_1 + 0x32))) {
    *(short *)(param_1 + 0x32) = _DAT_800bf812 - *(short *)(param_1 + 0x62);
    func_0x00022c78(param_1);
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x80;
  }
  return;
}

