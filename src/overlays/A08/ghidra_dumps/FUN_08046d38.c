// FUN_08046d38

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08046d38(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[0x3e];
  if (bVar1 != 0) {
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
            *param_1 = 0x67;
            param_1[1] = 0;
            param_1[0x3f] = 0x68;
          }
          else {
            func_0x0013f03c(param_1);
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[0x50] = 0x1e;
      }
      else {
        if (bVar1 == 4) {
          if (_DAT_800bf4b0 != 0x32) {
            func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a291c);
            _DAT_800bf4b0 = 0x32;
          }
          if (_DAT_800bf4b2 != -1) {
            *_DAT_800bf4a8 = 0;
            _DAT_800bf4b2 = -1;
          }
          param_1[3] = 0x65;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[0x50] = 0x1e;
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

