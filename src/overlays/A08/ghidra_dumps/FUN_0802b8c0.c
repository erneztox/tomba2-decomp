// FUN_0802b8c0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802b8c0(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_800bf816 == '\0') {
      param_1[4] = 3;
    }
    else {
      bVar1 = param_1[5];
      if (bVar1 == 1) {
        if (param_1[0x5e] == '\0') {
          if (DAT_800bf8f8 == -1) {
            *param_1 = 2;
            param_1[5] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          param_1[5] = 0;
        }
      }
      else if (((bVar1 < 2) && (bVar1 == 0)) && (param_1[0x2b] == '\x03')) {
        DAT_800e7e84 = 4;
        DAT_800e7e85 = 0x21;
        DAT_800e7e86 = 0;
        DAT_800e7ee1 = 0;
        func_0x00042354(1,2);
        param_1[0x5e] = 1;
        param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[1] = 1;
      func_0x00077ebc(param_1);
      func_0x00051c8c(param_1);
      param_1[0x2b] = 0;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      func_0x00051b70(param_1,0xc,0x23);
      *(undefined2 *)(param_1 + 0x2e) = 0x2d04;
      *(undefined2 *)(param_1 + 0x32) = 0xf070;
      *(undefined2 *)(param_1 + 0x36) = 0x19ee;
      *(undefined2 *)(param_1 + 0x56) = 0xfd28;
      *(undefined2 *)(param_1 + 0x80) = 0x3ac;
      *(undefined2 *)(param_1 + 0x82) = 0x758;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0x100;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[0x2b] = 0;
      param_1[4] = param_1[4] + '\x01';
      if (DAT_800bf8f8 == -1) {
        param_1[5] = 2;
        *(undefined2 *)(param_1 + 0x54) = 0xfc00;
      }
      else {
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x54) = 0;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

