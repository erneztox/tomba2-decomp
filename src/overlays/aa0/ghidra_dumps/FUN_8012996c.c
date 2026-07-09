// FUN_8012996c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012996c(void)

{
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x56) = _DAT_1f8001a0;
  if (1 < *(byte *)(unaff_s0 + 3) - 3) {
    *(ushort *)(unaff_s0 + 0x58) = _DAT_1f8001a2 & 0xfff;
  }
  func_0x800518fc();
  return;
}

