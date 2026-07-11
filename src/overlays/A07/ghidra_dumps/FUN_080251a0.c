// FUN_080251a0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080251a0(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      func_0x0011e310(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0011dff8(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x0011e36c(param_1);
      func_0x000518fc(param_1);
      *(undefined1 *)(param_1 + 0x2b) = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x0011e248(param_1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

