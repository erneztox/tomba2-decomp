// FUN_0801a39c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a39c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x00112ff8(param_1);
    *(undefined1 *)(param_1 + 1) = 1;
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
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined2 *)(param_1 + 0x40) = 0x20;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

