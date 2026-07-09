// FUN_8011ff18

void FUN_8011ff18(void)

{
  undefined1 in_v1;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined1 *)(unaff_s0 + 0x70) = in_v1;
  *(ushort *)(*(int *)(unaff_s1 + 0xc4) + 10) =
       *(short *)(*(int *)(unaff_s1 + 0xc4) + 10) - 0x20U & 0xfff;
  func_0x800517f8();
  return;
}

