// FUN_080488a0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080488a0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = func_0x00049e54(param_1,1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return;
}

