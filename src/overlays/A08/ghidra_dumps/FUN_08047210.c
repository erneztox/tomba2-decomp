// FUN_08047210

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08047210(undefined1 *param_1)

{
  if (param_1[0x3e] != '\0') {
    if (param_1[0x3e] == '\x01') {
      func_0x00074590(0x90,0,0);
      if (_DAT_800bf4b0 != 0x55) {
        func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a29a8);
        _DAT_800bf4b0 = 0x55;
      }
      if (_DAT_800bf4b2 != -1) {
        *_DAT_800bf4a8 = 0;
        _DAT_800bf4b2 = -1;
      }
      param_1[0x50] = 0x14;
      param_1[1] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_800bf4b0 != 0x54) {
      func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a29a4);
      _DAT_800bf4b0 = 0x54;
    }
    if (_DAT_800bf4b2 != -1) {
      *_DAT_800bf4a8 = 0;
      _DAT_800bf4b2 = -1;
    }
    param_1[0x50] = 0x1e;
    param_1[0x44] = 0;
    param_1[0x4b] = 0xfc;
    param_1[0x4a] = 0xfc;
    param_1[(byte)param_1[0x46] + 0x48] = 0;
    param_1[(byte)param_1[0x46] + 0x4e] = 0xff;
    param_1[3] = 100;
    param_1[0x46] = 0xff;
    param_1[0x47] = 0;
    *param_1 = 0x6d;
  }
  return;
}

