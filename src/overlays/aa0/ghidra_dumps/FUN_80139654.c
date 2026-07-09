// FUN_80139654

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_80139654(int param_1)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
    FUN_801406e4();
    return 0;
  }
}

