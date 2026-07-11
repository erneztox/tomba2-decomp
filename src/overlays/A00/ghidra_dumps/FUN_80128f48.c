// FUN_80128f48

void FUN_80128f48(void)

{
  int unaff_s1;
  
  *(ushort *)(*(int *)(unaff_s1 + 0xc4) + 10) =
       *(short *)(*(int *)(unaff_s1 + 0xc4) + 10) - 0x20U & 0xfff;
  func_0x800517f8();
  return;
}

