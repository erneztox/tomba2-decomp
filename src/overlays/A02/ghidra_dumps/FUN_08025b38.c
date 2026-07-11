// FUN_08025b38

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08025b38(undefined1 *param_1)

{
  byte bVar1;
  
  if (param_1[0x71] != -1) {
    if (param_1[0x71] == '\0') {
      param_1[0x70] = 1;
      param_1[6] = param_1[6] + '\x01';
    }
    if (param_1[0x5e] == '\x03') {
      bVar1 = param_1[6];
      if (bVar1 == 3) {
        DAT_800e806c = 8;
      }
      else {
        if (bVar1 < 4) {
          if (bVar1 == 1) {
            *(undefined2 *)(_DAT_800bf844 + 0x56) = *(undefined2 *)(param_1 + 0x56);
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 != 4) {
          halt_baddata();
        }
      }
      func_0x0006cba8(param_1 + 0x2c);
      _DAT_800e7ed6 =
           func_0x00085690((int)_DAT_1f800164 - (int)*(short *)(param_1 + 0x36),
                           (int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160);
      _DAT_800e7ed6 = _DAT_800e7ed6 & 0xfff;
    }
    return;
  }
  bVar1 = param_1[0x5e];
  *param_1 = 1;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00040d68(param_1,0x8012b130);
        param_1[5] = 0;
      }
      else {
        param_1[5] = 0;
      }
    }
    else {
      if (bVar1 == 2) goto LAB_0011ebf0;
      if (bVar1 == 3) {
        param_1[0x5e] = 0xff;
        DAT_800bfa04 = DAT_800bfa04 + '\x01';
        func_0x00040cdc(param_1,0x80139240,0x8012af40);
        func_0x00041718(param_1,0,0);
        param_1[5] = 3;
        param_1[6] = 0;
        halt_baddata();
      }
      param_1[5] = 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[0x5e] = 2;
LAB_0011ebf0:
  func_0x00041768(param_1,0,8);
  func_0x00040d68(param_1,0x8012b100);
  *(undefined1 **)(param_1 + 0x14) = &DAT_8012af14;
  param_1[0x5f] = DAT_8012af14;
  param_1[0x7b] = DAT_8012af16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

