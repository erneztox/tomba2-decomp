// FUN_8010fcd8

void FUN_8010fcd8(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s2;
  
  bVar1 = *(byte *)(unaff_s0 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        FUN_80118d84();
        return;
      }
      *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x4a) * 0x100;
      *(short *)(unaff_s0 + 0x4a) = *(short *)(unaff_s0 + 0x4a) + *(short *)(unaff_s0 + 0x50);
      if (*(int *)(unaff_s2 + 0x30) + -0x8c < (int)*(short *)(unaff_s0 + 0x32)) {
        *(undefined1 *)(unaff_s0 + 5) = 1;
        *(undefined1 *)(unaff_s0 + 6) = 0;
        FUN_80118d84();
        return;
      }
      goto switchD_8010fbd8_default;
    }
    if (bVar1 != 0) {
      FUN_80118d84();
      return;
    }
    *(undefined2 *)(unaff_s0 + 0x4a) = 0xf800;
    *(undefined1 *)(unaff_s0 + 6) = 1;
    *(undefined2 *)(unaff_s0 + 0x50) = 0x180;
  }
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x4a) * 0x100;
  *(short *)(unaff_s0 + 0x4a) = *(short *)(unaff_s0 + 0x4a) + *(short *)(unaff_s0 + 0x50);
  if (*(int *)(unaff_s2 + 0x30) + -0x8c < (int)*(short *)(unaff_s0 + 0x32)) {
    *(undefined2 *)(unaff_s0 + 0x4a) = 0xf800;
    *(undefined2 *)(unaff_s0 + 0x50) = 0x300;
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    FUN_80118d84();
    return;
  }
switchD_8010fbd8_default:
  if (*(char *)(unaff_s0 + 0x2b) == '\x02') {
    *(undefined1 *)(unaff_s0 + 5) = 4;
  }
  return;
}

