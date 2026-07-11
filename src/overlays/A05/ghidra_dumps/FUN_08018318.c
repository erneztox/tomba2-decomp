// FUN_08018318

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018318(void)

{
  char cVar1;
  
  cVar1 = DAT_800bf817;
  DAT_800bf816 = 0;
  DAT_800e806c = 0;
  _DAT_1f800184 = 0;
  DAT_800e7e85 = 0x24;
  DAT_800e7e87 = 0;
  if (DAT_800bf817 == '\0') {
    DAT_800e7e86 = '\0';
    _DAT_1f8000d2 = 0x43d0;
    _DAT_1f8000da = 0x22a0;
  }
  else {
    if (DAT_800bf817 == '\x01') {
      DAT_800bf841 = 0;
      DAT_800e7e86 = 3;
      func_0x00053d90(&DAT_800e7e80);
      _DAT_800e7eae = 0x3d80;
      _DAT_800e7eb2 = 0xdbfc;
      _DAT_800e7eb6 = 0x2c81;
      DAT_800e7eaa = cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf817 == '\x02') {
      _DAT_800e7eae = 0x3897;
      _DAT_800e7eb6 = 0x39fe;
      DAT_800e7e86 = '\0';
      _DAT_1f8000d2 = 0x401b;
      _DAT_1f8000d6 = 0xcef4;
      _DAT_1f8000da = 0x3a1a;
    }
    else if (DAT_800bf817 == '\x03') {
      DAT_800bf841 = 0;
      DAT_800e7e86 = DAT_800bf817;
      DAT_800e7e87 = 1;
      func_0x00053d90(&DAT_800e7e80);
      _DAT_800e7eae = 0x3a80;
      _DAT_800e7eb2 = 0xdef8;
      _DAT_800e7eb6 = 0x1c71;
      _DAT_800e7eea = 0;
      DAT_800e7fe4 = 4;
      DAT_800e7fc7 = 0;
      func_0x00055284(&DAT_800e7e80);
      func_0x00054d14(&DAT_800e7e80,0x1a,0);
      _DAT_800e8020 = 0;
      _DAT_800e8014 = CONCAT22(_DAT_800e7eb2,_DAT_800e8014);
      _DAT_1f8000e0 = _DAT_800e8014;
      func_0x0006d950(0x800e8008,0x800e8010);
      func_0x0006e0f0(0x800e8008);
      func_0x0006e918(0x800e8008);
    }
    else {
      if (DAT_800bf817 != '\x06') {
        DAT_800e7e86 = 0;
        func_0x00054198(&DAT_800e7e80);
        DAT_800e7feb = 0;
        return;
      }
      DAT_800e7e86 = '\0';
      _DAT_800e7eb6 = 0x1a5e;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

