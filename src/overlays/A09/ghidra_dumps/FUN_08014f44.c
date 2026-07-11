// FUN_08014f44

/* WARNING: Control flow encountered bad instruction data */

void FUN_08014f44(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (0x1000U - *(int *)(param_1 + 0x58) >> 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

