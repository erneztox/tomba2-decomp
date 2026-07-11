// FUN_08030794

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030794(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
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
      *(undefined2 *)(param_1 + 0x80) = 0x40;
      *(undefined2 *)(param_1 + 0x82) = 0x80;
      *(undefined2 *)(param_1 + 0x84) = 500;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = 1;
      param_1[0xb] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x86) = 700;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

