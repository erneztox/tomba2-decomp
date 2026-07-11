// FUN_08023fe4

/* WARNING: Control flow encountered bad instruction data */

void FUN_08023fe4(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0011d13c(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x0011d280(param_1);
    }
    else if (bVar1 == 3) {
      func_0x0007a624(param_1);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0007778c(param_1);
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 3) {
    func_0x0011cce8(param_1);
  }
  else if (bVar1 < 4) {
    if (bVar1 == 0) {
      func_0x0011c974(param_1);
    }
  }
  else if (bVar1 == 4) {
    func_0x0011d230(param_1);
    func_0x0011d354(param_1);
    func_0x0011ca8c(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x000518fc(param_1);
      halt_baddata();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

