// FUN_80123ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80123ef0(int param_1)

{
  short sVar1;
  
  sVar1 = func_0x80085690(-((int)(((uint)*(ushort *)(_DAT_1f800218 + 0x36) -
                                  (uint)*(ushort *)(param_1 + 10)) * 0x10000) >> 0x10),
                          (int)(((uint)*(ushort *)(_DAT_1f800218 + 0x2e) -
                                (uint)*(ushort *)(param_1 + 2)) * 0x10000) >> 0x10);
  return (int)sVar1;
}

