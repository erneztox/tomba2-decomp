// FUN_80129984

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80129984(void)

{
  int in_v0;
  undefined2 in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x56) = in_v1;
  if (in_v0 == 0) {
    *(ushort *)(unaff_s0 + 0x58) = _DAT_1f8001a2 & 0xfff;
  }
  func_0x800518fc();
  return;
}

