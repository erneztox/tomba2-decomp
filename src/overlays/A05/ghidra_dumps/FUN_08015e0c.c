// FUN_08015e0c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08015e0c(undefined1 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x000240fc();
  if (iVar1 != 0) {
    *param_1 = 2;
    param_1[4] = 2;
    param_1[6] = 0;
    if (*(char *)(param_2 + 0x5e) == '\0') {
      param_1[5] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[5] = 2;
  }
  return;
}

