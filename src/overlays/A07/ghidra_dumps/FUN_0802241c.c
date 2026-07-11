// FUN_0802241c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802241c(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      func_0x0011b10c(param_1);
    }
    func_0x0007778c(param_1);
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
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[4] = 1;
    *param_1 = 1;
    if (param_1[3] == '\0') {
      *(undefined2 *)(param_1 + 0x80) = 0x9c;
      *(undefined2 *)(param_1 + 0x82) = 0x138;
      *(undefined2 *)(param_1 + 0x84) = 200;
      *(undefined2 *)(param_1 + 0x86) = 300;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  param_1[0x29] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

