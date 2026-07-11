// FUN_0801a7e4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a7e4(void)

{
  DAT_800e806c = 0x80;
  if (DAT_800e8001 != '\0') {
    func_0x00054198(&DAT_800e7e80);
    DAT_800e7e80 = 7;
    DAT_800e8001 = 1;
    DAT_800e7e85 = 0x2c;
    DAT_800bf80e = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00054198(&DAT_800e7e80);
  DAT_800e7e85 = 0x24;
  DAT_800e7e86 = 0;
  DAT_800bf816 = 1;
  _DAT_1f800184 = 0;
  DAT_800e7feb = 0;
  _DAT_1f800210 = _DAT_800e7fc0;
  if (DAT_800bf817 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0801a894 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800bf817 * 4 + -0x7fef6a94))();
    return;
  }
  func_0x00074f24(DAT_800bf870);
  return;
}

