// FUN_0801b8a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b8a4(void)

{
  DAT_800e806c = 0x80;
  func_0x00054198(&DAT_800e7e80);
  DAT_800bf816 = 1;
  _DAT_1f800184 = 0;
  DAT_800e7e85 = 0x24;
  DAT_800e7e86 = 0;
  if (DAT_800bf817 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0801b910 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800bf817 * 4 + -0x7fef67a0))();
    return;
  }
  DAT_800e7feb = 0;
  func_0x00074f24(DAT_800bf870);
  return;
}

