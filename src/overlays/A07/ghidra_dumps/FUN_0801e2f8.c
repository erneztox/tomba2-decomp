// FUN_0801e2f8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801e2f8(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    if (DAT_800bfa3c == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x000517f8();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

