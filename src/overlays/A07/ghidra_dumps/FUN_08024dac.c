// FUN_08024dac

/* WARNING: Control flow encountered bad instruction data */

void FUN_08024dac(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x71) == -1) {
    bVar1 = *(byte *)(param_1 + 0x5e);
    if (bVar1 == 2) {
      func_0x0004d4f4((int)*(short *)(param_1 + 0x60),1);
      *(undefined1 *)(param_1 + 0x5e) = 1;
    }
    else {
      if (bVar1 < 3) {
        if (bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 == 3) {
        halt_baddata();
      }
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}

