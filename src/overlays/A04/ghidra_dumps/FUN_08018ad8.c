// FUN_08018ad8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018ad8(void)

{
  func_0x00054198(&DAT_800e7e80);
  DAT_800bf816 = 1;
  _DAT_1f800184 = 0;
  if (DAT_800bf817 == 1) {
    DAT_800e7feb = 8;
    DAT_800e7e85 = 0x24;
    DAT_800e7e86 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf817 < 2) {
    if (DAT_800bf817 == 0) {
      DAT_800e7eaa = 0x2b;
      _DAT_800e7eae = 0x1280;
      _DAT_800e7eb2 = 0xe250;
      DAT_800e7feb = 0;
      DAT_800e7fc6 = 0;
      _DAT_800e7eb6 = 0x2799;
      func_0x00056d44(&DAT_800e7e80,0);
      DAT_800bf841 = 0;
      DAT_1f80019c = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (DAT_800bf817 == 2) {
    DAT_800e7feb = 8;
    DAT_800e7e85 = 0x24;
    DAT_800e7e86 = 5;
    DAT_1f80019c = 3;
    _DAT_1f800210 = _DAT_800e7fc0;
    func_0x00044bd4(0x801127ac,0x18,0);
    DAT_1f80019c = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

