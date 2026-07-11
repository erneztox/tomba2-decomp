// FUN_80119ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80119ea0(int param_1)

{
  short sVar1;
  
  sVar1 = func_0x80085690(-((int)(((uint)_DAT_800e7eb6 - (uint)*(ushort *)(param_1 + 0x36)) *
                                 0x10000) >> 0x10),
                          (int)(((uint)_DAT_800e7eae - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000)
                          >> 0x10);
  func_0x80077768((int)sVar1,(int)*(short *)(param_1 + 0x60),0);
  return;
}

