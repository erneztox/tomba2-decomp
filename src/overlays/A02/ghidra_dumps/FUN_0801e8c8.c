// FUN_0801e8c8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801e8c8(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    if (DAT_800bf8be == -1) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else {
      func_0x001169d8();
    }
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    func_0x00116c14();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

