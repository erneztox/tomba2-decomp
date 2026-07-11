// FUN_80113cb4

void FUN_80113cb4(void)

{
  short sVar1;
  int unaff_s1;
  
  sVar1 = *(short *)(unaff_s1 + 0x40);
  *(short *)(unaff_s1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    FUN_8011de34();
    FUN_8011dc4c();
    *(undefined1 *)(unaff_s1 + 0x5e) = 0;
    *(undefined2 *)(unaff_s1 + 0x6c) = 0xff;
    *(undefined1 *)(unaff_s1 + 5) = 0;
    *(undefined1 *)(unaff_s1 + 6) = 0;
  }
  return;
}

