// FUN_080276e0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080276e0(int param_1)

{
  if (*(char *)(param_1 + 0x71) != -1) {
    return;
  }
  if (*(char *)(param_1 + 0x5e) != '\0') {
    if (*(char *)(param_1 + 0x5e) != '\x03') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_800bf901 = DAT_800bf901 + '\x01';
  *(char *)(param_1 + 0x5e) = *(char *)(param_1 + 0x5e) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

