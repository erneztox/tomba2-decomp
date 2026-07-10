// FUN_00007ce4

/* WARNING: Control flow encountered bad instruction data */

void FUN_00007ce4(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf8f9 == -1) {
      return;
    }
    func_0x00040c00(0x45);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007add0();
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      func_0x00110afc(param_1,3 < DAT_800bf871);
      func_0x000752b4(0);
      func_0x00075d24(0x1fff);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

