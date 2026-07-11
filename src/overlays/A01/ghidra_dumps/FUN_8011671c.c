// FUN_8011671c

void FUN_8011671c(void)

{
  undefined2 in_v0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  
  *(undefined2 *)(unaff_s0 + 0x58) = in_v0;
  *(char *)(unaff_s1 + 6) = *(char *)(unaff_s1 + 6) + '\x01';
  *(undefined2 *)(unaff_s1 + 0x36) = *(undefined2 *)(unaff_s0 + 4);
  *(undefined2 *)(unaff_s1 + 0x56) = *(undefined2 *)(unaff_s3 + 0x56);
  func_0x800517f8();
  return;
}

