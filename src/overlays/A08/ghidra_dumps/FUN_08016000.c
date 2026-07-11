// FUN_08016000

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016000(void)

{
  func_0x0002288c(&DAT_800e7e80);
  if (DAT_800e7e80 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08016040 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef6bb0))();
    return;
  }
  func_0x00022760(&DAT_800e7e80);
  func_0x0010e4cc(&DAT_800e7e80);
  if (_DAT_800e7fd8 < 2) {
    func_0x0010e7c0(&DAT_800e7e80);
  }
  func_0x00022554();
  func_0x0010ea88();
  func_0x0010ed98();
  func_0x0010e080();
  func_0x0010e2a4();
  func_0x0010e420();
  if ((DAT_800bf816 == '\0') || (DAT_800e7feb != '\b')) {
    func_0x0010b328(&DAT_800e7e80);
  }
  else if (((DAT_800e7fc5 & 1) == 0) &&
          ((int)_DAT_800bf812 - (int)_DAT_800e7ee2 <= (int)_DAT_800e7eb2)) {
    _DAT_800e7eb2 = _DAT_800bf812 - _DAT_800e7ee2;
    func_0x00022c78(&DAT_800e7e80);
    DAT_800e7ea9 = DAT_800e7ea9 | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((DAT_1f800137 == '\0') && (DAT_800bf80f == '\0')) {
    func_0x0010b104(&DAT_800e7e80);
  }
  return;
}

