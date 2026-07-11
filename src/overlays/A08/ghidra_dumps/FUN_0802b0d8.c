// FUN_0802b0d8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802b0d8(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077ebc(param_1);
    if (DAT_1f80027a != '\0') {
      return;
    }
    func_0x00123e60(param_1);
    func_0x000517f8(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
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
      func_0x00123bf0(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

