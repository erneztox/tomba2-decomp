// FUN_8011314c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011314c(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  
  sVar2 = func_0x80085690(-((int)(((uint)_DAT_800e7eb6 - (uint)*(ushort *)(param_1 + 0x36)) *
                                 0x10000) >> 0x10),
                          (int)(((uint)_DAT_800e7eae - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000)
                          >> 0x10);
  uVar1 = func_0x80077768((int)sVar2,(int)*(short *)(param_1 + 0x60),0);
  *(undefined1 *)(param_1 + 0xbe) = uVar1;
  return;
}

