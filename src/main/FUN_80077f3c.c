
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80077f3c(int param_1)

{
  _DAT_1f800080 = 0;
  _DAT_1f800084 = 3;
  FUN_8007712c(param_1,(int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)_DAT_1f8000d2) * 0x10000) >>
                       0x10,
               (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)_DAT_1f8000d6) * 0x10000) >> 0x10,
               (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)_DAT_1f8000da) * 0x10000) >> 0x10);
  return;
}

