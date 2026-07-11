// FUN_8011e980

void FUN_8011e980(void)

{
  int unaff_s0;
  int unaff_s1;
  
  if (0xe < *(short *)(unaff_s0 + 0x60)) {
    if (DAT_800bf80f == '\0') {
      func_0x80074590(0x83,0,0);
    }
    *(undefined2 *)(unaff_s0 + 0x60) = 0;
  }
  if (*(char *)(unaff_s0 + 0xbf) != '\0') {
    if (3 < (int)((uint)*(ushort *)(unaff_s1 + 0x4a) << 0x10) >> 0x1a) {
      *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + 1;
    }
    *(undefined1 *)(unaff_s0 + 0xbf) = 0;
  }
  return;
}

