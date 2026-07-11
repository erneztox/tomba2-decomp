// FUN_08023d98

/* WARNING: Control flow encountered bad instruction data */

void FUN_08023d98(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar2 = func_0x0011ca24(param_1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077ebc(param_1);
    }
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      if (DAT_1f800137 == '\0') {
        func_0x0011bf84(param_1);
        halt_baddata();
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          func_0x0011ce70(param_1);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      func_0x0011c614(param_1);
    }
    func_0x0011cb44(param_1);
    if (*(char *)(param_1 + 1) == '\0') {
      return;
    }
    func_0x0011b958(param_1);
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
      func_0x0011bc18(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

