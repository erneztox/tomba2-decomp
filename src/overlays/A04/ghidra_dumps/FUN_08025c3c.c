// FUN_08025c3c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08025c3c(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      func_0x0011e988(param_1);
    }
    func_0x0007778c(param_1);
    param_1[0x29] = 0;
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
      param_1[4] = 1;
      *param_1 = 1;
      if (param_1[3] == '\0') {
        *(undefined2 *)(param_1 + 0x80) = 0x40;
        *(undefined2 *)(param_1 + 0x82) = 0x80;
        *(undefined2 *)(param_1 + 0x84) = 200;
        *(undefined2 *)(param_1 + 0x86) = 400;
      }
      param_1[0x29] = 0;
      func_0x0004766c(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

