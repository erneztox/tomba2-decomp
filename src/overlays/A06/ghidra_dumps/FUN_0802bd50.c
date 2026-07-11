// FUN_0802bd50

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802bd50(int param_1)

{
  if (*(char *)(param_1 + 0x5e) == '\0') {
    if (*(char *)(param_1 + 5) == '\0') {
      func_0x00124d70();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(param_1 + 0x29) != '\0') {
      *(char *)(param_1 + 0x2b) = *(char *)(param_1 + 0x29);
    }
    func_0x001248b4(param_1);
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  return;
}

