// FUN_08012c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012c30(void)

{
  uint uVar1;
  
  uVar1 = *(byte *)(_DAT_1f800138 + 0x6b) & 0x1f;
  func_0x0007e9c8(uVar1 << 0x13 | uVar1 << 0xb | uVar1 << 3,0,4);
  *(char *)(_DAT_1f800138 + 0x6b) = *(char *)(_DAT_1f800138 + 0x6b) + -1;
  return;
}

