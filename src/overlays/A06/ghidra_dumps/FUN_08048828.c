// FUN_08048828

/* WARNING: Control flow encountered bad instruction data */

void FUN_08048828(int param_1)

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
  iVar1 = func_0x0004b3f4(param_1,*(undefined1 *)(param_1 + 0x5e));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 4) = 3;
    DAT_800bfa4a = DAT_800bfa4a + '\x01';
  }
  return;
}

