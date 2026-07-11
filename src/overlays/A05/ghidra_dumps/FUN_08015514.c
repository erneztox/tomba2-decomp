// FUN_08015514

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015514(void)

{
  func_0x0002288c(&DAT_800e7e80);
  func_0x0010d0c4();
  if (DAT_800e7e80 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0801555c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef6a58))();
    return;
  }
  func_0x00022760(&DAT_800e7e80);
  func_0x0010d490(&DAT_800e7e80);
  if ((_DAT_800e7fd8 < 2) || (DAT_800e7fe4 == '\n')) {
    func_0x0010d720(&DAT_800e7e80);
  }
  func_0x00022554();
  func_0x0010db50();
  func_0x0010ddac();
  func_0x0010b930();
  func_0x0010c6e0();
  func_0x0010d308();
  func_0x0010a854(&DAT_800e7e80);
  _DAT_80140e3c = &DAT_80140e38;
  _DAT_80140e38 = 0;
  return;
}

