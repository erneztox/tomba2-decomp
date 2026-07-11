// FUN_80113d18

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80113d18(int param_1)

{
  if ((((*(char *)(param_1 + 0xbf) == '\0') && (*(int *)(param_1 + 0x10) != 0)) &&
      (*(char *)(param_1 + 0x2b) == '\0')) && (*(char *)(*(int *)(param_1 + 0x10) + 0x2b) != '\0'))
  {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_8011de34(param_1,0,0xc,3);
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0x3c;
    *(undefined2 *)(param_1 + 100) = 0;
    FUN_8011cf80();
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

