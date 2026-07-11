// FUN_08046a64

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08046a64(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)param_1[0x4a] < 3;
  if ((byte)param_1[0x4b] < 3) {
    bVar1 = bVar1 | 2;
  }
  if (bVar1 == 0) {
    param_1[0x44] = 0;
    if (_DAT_800bf4b0 != 0x31) {
      func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2918);
      _DAT_800bf4b0 = 0x31;
    }
    if (_DAT_800bf4b2 != -1) {
      *_DAT_800bf4a8 = 0;
      _DAT_800bf4b2 = -1;
    }
  }
  else {
    if (param_1[0x44] == '\0') {
      param_1[0x44] = 1;
    }
    if ((((_DAT_800e7e68 & 0x80) != 0) && ((bVar1 & 1) != 0)) && (param_1[0x44] != '\x01')) {
      func_0x00074590(0x15,0,0);
      param_1[0x44] = 1;
    }
    if ((((_DAT_800e7e68 & 0x20) != 0) && ((bVar1 & 2) != 0)) && (param_1[0x44] != '\x02')) {
      func_0x00074590(0x15,0,0);
      param_1[0x44] = 2;
    }
    if ((param_1[0x44] & bVar1) == 0) {
      param_1[0x44] = bVar1;
    }
    if (_DAT_800bf4b0 != -1) {
      *_DAT_800bf4a4 = 0;
      _DAT_800bf4b0 = -1;
    }
    if (_DAT_800bf4b2 != 0x36) {
      func_0x0009a5b0(_DAT_800bf4a8,_DAT_800a292c);
      _DAT_800bf4b2 = 0x36;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if ((_DAT_800e7e68 & 0x2000) != 0) {
    func_0x0001cba8(param_1,0);
    func_0x0001cba8(param_1,1);
    *(undefined2 *)(_DAT_1f800138 + 0x50) = 2;
  }
  if ((_DAT_800e7e68 & 0x1000) != 0) {
    func_0x0001cba8(param_1,0);
    func_0x0001cba8(param_1,1);
    *(undefined2 *)(_DAT_1f800138 + 0x50) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((_DAT_800e7e68 & 0x4000) != 0) && (param_1[0x44] != '\0')) {
    func_0x00074590(0x11,0,0);
    param_1[0x46] = param_1[0x44] + -1;
    param_1[0x45] = param_1[0x44];
    if (_DAT_800bf4b0 != 0x30) {
      func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2914);
      _DAT_800bf4b0 = 0x30;
    }
    if (_DAT_800bf4b2 != -1) {
      *_DAT_800bf4a8 = 0;
      _DAT_800bf4b2 = -1;
    }
    *param_1 = 0x66;
    param_1[1] = 0;
    param_1[0x3f] = 0x6a;
  }
  return;
}

