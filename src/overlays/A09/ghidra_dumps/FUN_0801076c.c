// FUN_0801076c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801076c(void)

{
  func_0x0002288c(&DAT_800e7e80);
  if (DAT_800e7e80 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x080107ac */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef7060))();
    return;
  }
  if (_DAT_800e7fd8 < 2) {
    func_0x00109398(&DAT_800e7e80);
  }
  func_0x001095b8();
  return;
}

