// FUN_080208d8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080208d8(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (DAT_800bfa22 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x000517f8(param_1);
      func_0x0004b374(param_1,1);
    }
    else {
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bfa22 == '\0') {
        *(undefined1 *)(param_1 + 5) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 5) = 2;
      }
    }
  }
  else if (bVar1 == 2) {
    func_0x00116e48(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

