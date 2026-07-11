// FUN_80116994

void FUN_80116994(int param_1)

{
  int in_v0;
  int unaff_s0;
  undefined1 unaff_s1;
  undefined1 unaff_s3;
  
  if (in_v0 == 0) {
    *(undefined1 *)(unaff_s0 + 0xbf) = unaff_s3;
    FUN_8011fa14();
    return;
  }
  if ((*(byte *)(param_1 + 0x191) & 2) == 0) {
    *(undefined1 *)(unaff_s0 + 0xbf) = unaff_s1;
    FUN_8011fa14();
    return;
  }
  *(undefined1 *)(unaff_s0 + 4) = 3;
  FUN_8011fa14();
  return;
}

