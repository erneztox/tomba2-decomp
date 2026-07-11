// FUN_8011f78c

void FUN_8011f78c(void)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  undefined1 *unaff_s3;
  
  *(undefined2 *)(unaff_s3 + 0x2e) = *(undefined2 *)(unaff_s1 + 0xc0);
  *(undefined2 *)(unaff_s3 + 0x32) = *(undefined2 *)(unaff_s0 + 2);
  *(undefined2 *)(unaff_s3 + 0x36) = *(undefined2 *)(unaff_s0 + 4);
  *(undefined2 *)(unaff_s3 + 0x56) = *(undefined2 *)(unaff_s2 + 0x56);
  func_0x800517f8();
  if (((*(short *)(unaff_s3 + 0xe) == 5) && ((DAT_800bfa06 & 1) == 0)) &&
     (iVar1 = func_0x80072ddc(), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801236cc;
    *(undefined1 *)(iVar1 + 3) = 0;
    *unaff_s3 = 3;
  }
  return;
}

