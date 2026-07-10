// FUN_80123C14

void FUN_80123c14(void)

{
  undefined1 in_v0;
  int unaff_s2;
  int unaff_s3;
  
  *(undefined1 *)(unaff_s3 + 0xbf) = in_v0;
  *(undefined1 *)(*(int *)(unaff_s3 + 0xc0) + 0x3f) = 0;
  if (unaff_s2 + 1 < (int)(uint)*(byte *)(unaff_s3 + 8)) {
    FUN_8012cbb4();
    return;
  }
  return;
}

