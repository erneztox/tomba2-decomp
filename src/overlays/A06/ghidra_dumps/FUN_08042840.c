// FUN_08042840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08042840(int param_1)

{
  uint uVar1;
  
  uVar1 = func_0x00085690(-((int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(param_1 + 0x36)) *
                                 0x10000) >> 0x10),
                          (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000)
                          >> 0x10);
  func_0x00077768(uVar1 & 0xfff,(int)*(short *)(param_1 + 0x60),0);
  return;
}

