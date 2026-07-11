// FUN_080237b8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080237b8(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if (DAT_800bf873 == '\0') {
      bVar1 = *(byte *)(param_1 + 5);
      if (bVar1 == 3) {
        func_0x0011c4bc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 4) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        func_0x0011c148(param_1);
        halt_baddata();
      }
      if (bVar1 != 4) {
        halt_baddata();
      }
      func_0x0011c974(param_1);
      func_0x0011ca98(param_1);
      func_0x0011c260(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
    if (*(char *)(param_1 + 1) == '\0') {
      return;
    }
    func_0x000518fc(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x0011c890(param_1);
    }
  }
  else if (bVar1 == 2) {
    func_0x0011c9c4(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

