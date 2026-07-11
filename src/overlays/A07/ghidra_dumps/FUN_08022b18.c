// FUN_08022b18

/* WARNING: Control flow encountered bad instruction data */

void FUN_08022b18(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0011b7cc();
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
      func_0x0011b650();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

