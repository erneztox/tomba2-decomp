// FUN_0801766c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801766c(void)

{
  func_0x0002288c(&DAT_800e7e80);
  if (DAT_800e7e80 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x080176ac */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef6578))();
    return;
  }
  func_0x00022760(&DAT_800e7e80);
  func_0x0010f1cc(&DAT_800e7e80);
  if (_DAT_800e7fd8 < 2) {
    func_0x0010f75c(&DAT_800e7e80);
  }
  func_0x00022554();
  func_0x0010fbec();
  func_0x0010ff6c();
  func_0x0010e0fc();
  func_0x0010e9ac();
  func_0x0010edb0();
  if (DAT_800bf816 != '\0') {
    func_0x0010aea8(&DAT_800e7e80);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_1f800137 == '\0') {
    func_0x0010b024(&DAT_800e7e80);
  }
  return;
}

