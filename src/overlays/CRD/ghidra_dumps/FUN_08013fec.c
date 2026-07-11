// FUN_08013fec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013fec(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[0x3e];
  if (bVar1 == 0) {
    return;
  }
  if (bVar1 != 2) {
    if (bVar1 < 3) {
      if (bVar1 == 1) {
        if (param_1[(byte)param_1[0x46] + 0x4e] == -1) {
          if (_DAT_800bf4b0 != 0x30) {
            func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2914);
            _DAT_800bf4b0 = 0x30;
          }
          if (_DAT_800bf4b2 != -1) {
            *_DAT_800bf4a8 = 0;
            _DAT_800bf4b2 = -1;
          }
          *param_1 = 3;
          param_1[2] = 0;
          param_1[1] = 0;
          param_1[0x3f] = 0xc;
        }
        else {
          func_0x0018d74c(param_1);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (bVar1 == 4) {
      if ((param_1[0x3c] & 1) != 0) {
        if (_DAT_800bf4b0 != 0x33) {
          func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2920);
          _DAT_800bf4b0 = 0x33;
        }
        if (_DAT_800bf4b2 != 0x32) {
          func_0x0009a5b0(_DAT_800bf4a8,_DAT_800a291c);
          _DAT_800bf4b2 = 0x32;
        }
        param_1[0x53] = 1;
        *param_1 = 4;
        param_1[2] = 0;
        param_1[1] = 0;
        halt_baddata();
      }
      if (_DAT_800bf4b0 != 0x32) {
        func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a291c);
        _DAT_800bf4b0 = 0x32;
      }
      if (_DAT_800bf4b2 != -1) {
        *_DAT_800bf4a8 = 0;
        _DAT_800bf4b2 = -1;
      }
      param_1[3] = 1;
      *param_1 = 0xe;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_DAT_800bf4b0 != 0x35) {
    func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2928);
    _DAT_800bf4b0 = 0x35;
  }
  if (_DAT_800bf4b2 != -1) {
    *_DAT_800bf4a8 = 0;
    _DAT_800bf4b2 = -1;
  }
  param_1[0x50] = 0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

