// FUN_08027f9c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08027f9c(int param_1)

{
  if (*(char *)(param_1 + 0x71) == -1) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040d68(param_1,0x80133f90);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}

