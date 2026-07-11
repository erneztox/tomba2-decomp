// FUN_08046a00

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08046a00(int param_1)

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
    *(undefined4 *)(param_1 + 4) = 1;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if ((_DAT_1f80017c & 3) == 0) {
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    }
    bVar1 = *(char *)(param_1 + 6) + 1;
    *(byte *)(param_1 + 6) = bVar1;
    if (0xe < bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar1 = *(char *)(param_1 + 7) + 2;
    *(byte *)(param_1 + 7) = bVar1;
    if (0xf < bVar1) {
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 2) {
      *(undefined1 *)(param_1 + 4) = 2;
      halt_baddata();
    }
    bVar1 = *(char *)(param_1 + 7) + 4;
    *(byte *)(param_1 + 7) = bVar1;
    if ((int)((uint)bVar1 << 0x18) < 0) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

