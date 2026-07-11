// FUN_8013c944

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8013c944(int param_1)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    FUN_801406e4(param_1);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x14;
    return;
  }
}

