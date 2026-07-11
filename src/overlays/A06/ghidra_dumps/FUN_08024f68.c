// FUN_08024f68

/* WARNING: Control flow encountered bad instruction data */

void FUN_08024f68(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if (DAT_800bf873 == '\0') {
      bVar1 = *(byte *)(param_1 + 5);
      if (bVar1 == 3) {
        func_0x0011dc6c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 4) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        func_0x0011d8f8(param_1);
        halt_baddata();
      }
      if (bVar1 != 4) {
        halt_baddata();
      }
      func_0x0011e124(param_1);
      func_0x0011e248(param_1);
      func_0x0011da10(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
    if (*(char *)(param_1 + 1) == '\0') {
      return;
    }
    func_0x000518fc(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x0011e040(param_1);
    }
  }
  else if (bVar1 == 2) {
    func_0x0011e174(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

