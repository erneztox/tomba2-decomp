// FUN_080479c0

void FUN_080479c0(void)

{
  DAT_800bf4d6 = 0;
  if ((DAT_800bf4d9 != -1) && (DAT_800bf4d7 - 0x65 < 7)) {
                    /* WARNING: Could not emulate address calculation at 0x08047a08 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((DAT_800bf4d7 - 0x65) * 4 + -0x7fef5b30))();
    return;
  }
  func_0x0013e038(&DAT_800bf498);
  if (DAT_800bf498 - 100 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08047a9c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((DAT_800bf498 - 100) * 4 + -0x7fef5b10))();
    return;
  }
  func_0x0013f6e4(&DAT_800bf498);
  return;
}

