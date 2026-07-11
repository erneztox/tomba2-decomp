// FUN_0801aa00

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801aa00(void)

{
  char cVar1;
  
  DAT_800bf816 = 0;
  DAT_800e806c = 0;
  DAT_800e800b = 0;
  _DAT_1f800184 = 0;
  if (DAT_800e8001 == '\0') {
    DAT_800e7e85 = 0x24;
    DAT_800e7e86 = 0;
    DAT_800e7e87 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_800e7e80 = 7;
  DAT_800e8001 = 1;
  DAT_800bf80e = 0;
  DAT_800e7e85 = 0x2c;
  DAT_800e7e86 = '\0';
  func_0x00054198(&DAT_800e7e80);
  if (DAT_800bf817 == '\0') {
    _DAT_800e7eae = 0x1e5b;
  }
  else {
    if (DAT_800bf817 != '\x01') {
      cVar1 = DAT_800bf817;
      if (DAT_800bf817 != '\x05') {
        if (DAT_800bf817 == '\a') {
          _DAT_800e7eae = 0x3680;
          halt_baddata();
        }
        if (DAT_800bf817 != '\b') {
          if (DAT_800bf817 == '\t') {
            _DAT_800e7eae = 0x31be;
            _DAT_800e7eb6 = 0x19fc;
          }
          DAT_800e7feb = 0;
          return;
        }
        _DAT_1f8000d2 = 0x3ae2;
        _DAT_1f8000d6 = 0xd6bd;
        _DAT_1f8000da = 0x9e4;
        cVar1 = DAT_800e7e86;
      }
      DAT_800e7e86 = cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_800e7eae = 0x1aa7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

