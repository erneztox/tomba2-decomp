// FUN_8011bc3c

void FUN_8011bc3c(void)

{
  undefined4 in_v0;
  int unaff_s0;
  
  *(undefined4 *)(unaff_s0 + 0x2c) = in_v0;
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x4a) * 0x100;
  *(short *)(unaff_s0 + 0x4a) = *(short *)(unaff_s0 + 0x4a) + *(short *)(unaff_s0 + 0x50);
  func_0x8009a450();
  return;
}

