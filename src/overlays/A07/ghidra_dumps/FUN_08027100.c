// FUN_08027100

/* WARNING: Control flow encountered bad instruction data */

void FUN_08027100(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x5e) == '\0') {
    if (*(char *)(param_1 + 1) == '\0') {
      return;
    }
    iVar1 = func_0x0011ef34(param_1);
    if (iVar1 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x5e) = 1;
  }
  else if (*(char *)(param_1 + 0x5e) == '\x01') {
    if (*(char *)(param_1 + 1) == '\0') {
      func_0x0007addc(param_1);
      *(undefined1 *)(param_1 + 0x5e) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

