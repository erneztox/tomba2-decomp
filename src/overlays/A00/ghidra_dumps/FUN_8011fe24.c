// FUN_8011fe24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011fe24(void)

{
  short in_v0;
  short sVar1;
  int unaff_s0;
  
  *(short *)(unaff_s0 + 0x4a) = in_v0 + -2;
  if ((short)(in_v0 + -2) < -0x4f) {
    *(undefined2 *)(unaff_s0 + 0x4a) = 0xffb0;
  }
  sVar1 = *(short *)(unaff_s0 + 0x50) + *(short *)(unaff_s0 + 0x4a);
  *(short *)(unaff_s0 + 0x50) = sVar1;
  if ((int)sVar1 <= _DAT_800bf82a + -0x500) {
    func_0x80074af0(*(undefined4 *)(unaff_s0 + 0x80));
    *(undefined1 *)(unaff_s0 + 0x70) = 2;
    FUN_80128f48();
    return;
  }
  func_0x80041098();
  func_0x80070e60();
  func_0x8004190c();
  return;
}

