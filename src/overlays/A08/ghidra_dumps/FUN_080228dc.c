// FUN_080228dc

/* WARNING: Control flow encountered bad instruction data */

void FUN_080228dc(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x32) = 0xfeb6;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if (0x23 < *(byte *)(param_1 + 5)) {
    return;
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

