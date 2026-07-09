// FUN_80113068

void FUN_80113068(void)

{
  ushort uVar1;
  int unaff_s0;
  
  if (0x10 < DAT_800bf9e0) {
    func_0x80077b38();
    *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
    FUN_8011c064();
    return;
  }
  uVar1 = *(short *)(unaff_s0 + 0x40) - 1;
  *(ushort *)(unaff_s0 + 0x40) = uVar1;
  if ((int)((uint)uVar1 << 0x10) < 1) {
    *(undefined1 *)(unaff_s0 + 5) = 0;
  }
  if (0x11 < DAT_800bf9e0) {
    *(undefined1 *)(unaff_s0 + 4) = 3;
  }
  return;
}

