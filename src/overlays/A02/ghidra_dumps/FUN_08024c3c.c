// FUN_08024c3c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08024c3c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar1 = func_0x0007778c(param_1);
    if (iVar1 == 0) {
      return;
    }
    func_0x00076d68(param_1);
    if (DAT_1f800137 != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x2b) != '\x03') {
      return;
    }
    func_0x00042354(1,1);
    *(undefined1 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    iVar1 = func_0x0011cd14(param_1);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

