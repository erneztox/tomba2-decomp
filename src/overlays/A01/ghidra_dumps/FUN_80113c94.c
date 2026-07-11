// FUN_80113c94

void FUN_80113c94(void)

{
  int unaff_s1;
  
  *(short *)(unaff_s1 + 0x40) = *(short *)(unaff_s1 + 0x70) + 0x5a;
  *(char *)(unaff_s1 + 6) = *(char *)(unaff_s1 + 6) + '\x01';
  FUN_8011cca0();
  return;
}

