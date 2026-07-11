// FUN_801215ec

int FUN_801215ec(undefined4 param_1)

{
  byte in_v0;
  int in_v1;
  undefined1 unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  *(undefined1 *)(unaff_s2 + 0x15c) = 0;
  *(undefined1 *)(unaff_s2 + 0x164) = unaff_s0;
  *(undefined4 *)(unaff_s2 + 0x10) = param_1;
  *(byte *)(unaff_s2 + 0x14a) = in_v0 | 2;
  return (uint)*(ushort *)(unaff_s1 + 0x80) + in_v1;
}

