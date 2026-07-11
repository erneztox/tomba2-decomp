// FUN_08018c6c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018c6c(void)

{
  DAT_800bf816 = 0;
  DAT_800e806c = 0;
  _DAT_1f800184 = 0;
  DAT_800e7e85 = 0x24;
  DAT_800e7feb = 0;
  if (DAT_800bf817 == '\0') {
    DAT_800bf841 = 0;
    DAT_800e7e86 = 3;
    DAT_800e7e87 = 1;
    func_0x00053d90(&DAT_800e7e80);
    DAT_800e7eaa = 10;
    _DAT_800e7eae = 0x1280;
    _DAT_800e7eb2 = 0xdf28;
    _DAT_800e7eb6 = 0x277e;
    _DAT_800e7eea = 0;
    DAT_800e7fe4 = 4;
    DAT_800e7fc7 = 1;
    func_0x00055284(&DAT_800e7e80);
    func_0x00054d14(&DAT_800e7e80,0x1a,0);
    _DAT_800e8014 = CONCAT22(_DAT_800e7eb2,_DAT_800e8014);
    _DAT_800e8020 = 0;
    _DAT_1f8000e0 = _DAT_800e8014;
    func_0x0006d950(0x800e8008,0x800e8010);
    func_0x0006e0f0(0x800e8008);
    func_0x0006e918(0x800e8008);
    _DAT_1f8000d6 = 0xd9b8;
  }
  else {
    if (DAT_800bf817 == '\x01') {
      _DAT_1f8000da = 0x2b18;
      _DAT_800e7eb2 = 0xd3f4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf817 != '\x02') {
      DAT_800e7e86 = 0;
      DAT_800e7e87 = 0;
      func_0x00054198(&DAT_800e7e80);
      DAT_800e7feb = 0;
      return;
    }
    DAT_800e7e86 = 5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

