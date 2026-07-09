// FUN_8013d450

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013d450(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_1f800137 != '\0') {
      return;
    }
    FUN_80145674();
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
      DAT_800bf823 = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

