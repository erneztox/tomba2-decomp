// FUN_80139820

void FUN_80139820(void)

{
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  
  if (in_v1 != 0) {
    FUN_80142a64();
    return;
  }
  *(ushort *)(unaff_s1 + 2) = *(ushort *)(unaff_s1 + 2) & 0xfffb;
  *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
  func_0x8009a450();
  return;
}

