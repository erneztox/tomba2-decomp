// FUN_8011b6a8

void FUN_8011b6a8(void)

{
  undefined2 uVar1;
  ushort in_v0;
  int unaff_s1;
  int unaff_s2;
  undefined1 unaff_s3;
  
  *(ushort *)(unaff_s1 + 0x2e) = *(short *)(unaff_s2 + 0x2c) + ((in_v0 & 3) - 1) * 0x28;
  *(undefined2 *)(unaff_s1 + 0x32) = *(undefined2 *)(unaff_s2 + 0x30);
  uVar1 = *(undefined2 *)(unaff_s2 + 0x34);
  *(undefined1 *)(unaff_s1 + 0x5e) = unaff_s3;
  *(undefined1 *)(unaff_s1 + 5) = 0;
  *(undefined1 *)(unaff_s1 + 6) = 0;
  *(undefined2 *)(unaff_s1 + 0x36) = uVar1;
  FUN_80124698();
  return;
}

