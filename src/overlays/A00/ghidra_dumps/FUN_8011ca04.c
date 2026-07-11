// FUN_8011ca04

void FUN_8011ca04(int param_1)

{
  short sVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  if (*(short *)(unaff_s2 + 0x6c) == *(short *)(unaff_s2 + 0x7a)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (int)*(short *)(unaff_s1 + 0x36);
    FUN_8012eb18();
    return;
  }
  if (*(short *)(*(int *)(unaff_s2 + (uint)*(byte *)(unaff_s0 + 0x5f) * 4 + 0xc0) + 0xc) == 0x800) {
    *(ushort *)(unaff_s2 + 0x7a) = *(ushort *)(unaff_s2 + 0x7a) | 4;
  }
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  sVar1 = (*(short *)(unaff_s0 + 0x4a) >> 5) + 100;
  *(short *)(unaff_s0 + 0x84) = sVar1;
  *(short *)(unaff_s0 + 0x86) = sVar1 * 2;
  FUN_80125c1c();
  return;
}

