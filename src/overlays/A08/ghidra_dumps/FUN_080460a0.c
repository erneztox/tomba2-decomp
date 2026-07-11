// FUN_080460a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080460a0(undefined1 *param_1)

{
  if ('\0' < (char)param_1[(byte)param_1[0x46] + 0x4e]) {
    if (_DAT_800bf4b0 != 0x52) {
      func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a299c);
      _DAT_800bf4b0 = 0x52;
    }
    if (_DAT_800bf4b2 != -1) {
      *_DAT_800bf4a8 = 0;
      _DAT_800bf4b2 = -1;
    }
    param_1[0x53] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_DAT_800bf4b0 != 0x51) {
    func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2998);
    _DAT_800bf4b0 = 0x51;
  }
  if (_DAT_800bf4b2 != -1) {
    *_DAT_800bf4a8 = 0;
    _DAT_800bf4b2 = -1;
  }
  param_1[3] = 0x65;
  *param_1 = 0x6c;
  return;
}

