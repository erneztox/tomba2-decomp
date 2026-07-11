// FUN_08024474

/* WARNING: Control flow encountered bad instruction data */

void FUN_08024474(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c();
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624();
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x80) = 0x10e;
      *(undefined2 *)(param_1 + 0x82) = 500;
      *(undefined2 *)(param_1 + 0x84) = 100;
      param_1[4] = 1;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x86) = 200;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

