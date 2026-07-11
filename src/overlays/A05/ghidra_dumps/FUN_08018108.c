// FUN_08018108

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018108(void)

{
  func_0x00054198(&DAT_800e7e80);
  DAT_800bf816 = 1;
  _DAT_1f800184 = 0;
  if (DAT_800bf817 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0801815c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800bf817 * 4 + -0x7fef69b4))();
    return;
  }
  DAT_800e7feb = 8;
  DAT_800e7e85 = 0x24;
  DAT_800e7e86 = 0;
  _DAT_1f800210 = _DAT_800e7fc0;
  func_0x00074f24(DAT_800bf870);
  return;
}

