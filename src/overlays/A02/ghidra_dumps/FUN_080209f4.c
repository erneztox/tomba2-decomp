// FUN_080209f4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080209f4(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    if (DAT_800bf8be != -1) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    func_0x00076d68();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

