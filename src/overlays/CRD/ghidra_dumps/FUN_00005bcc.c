// FUN_00005bcc

void FUN_00005bcc(void)

{
  DAT_800bf4d6 = 0;
  func_0x0018f660(&DAT_800bf498);
  func_0x0018a1e8(&DAT_800bf498);
  if (DAT_800bf498 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x00005c18 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800bf498 * 4 + -0x7fe75e5c))();
    return;
  }
  func_0x0018f854(&DAT_800bf498);
  return;
}

