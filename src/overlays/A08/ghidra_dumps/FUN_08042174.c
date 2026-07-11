// FUN_08042174

/* WARNING: Control flow encountered bad instruction data */

void FUN_08042174(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    if (*(char *)(param_1 + 0x2b) != '\x03') {
      return;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x00042354(1,2);
    if (DAT_800bf928 == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040cdc(param_1,0x80148790,0x8014791c);
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      *(undefined1 *)(param_1 + 6) = 0;
      func_0x00042310();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

