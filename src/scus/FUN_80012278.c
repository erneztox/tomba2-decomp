
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_80012278(void)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(DAT_80025454) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return 0;
  }
}

