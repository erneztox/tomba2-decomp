// FUN_0802bdd4

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802bdd4(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    if (*(char *)(param_1 + 0x29) != '\0') {
      *(undefined1 *)(param_1 + 6) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 3;
    }
  }
  func_0x0012462c();
  return;
}

