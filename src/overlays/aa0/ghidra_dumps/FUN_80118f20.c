// FUN_80118f20

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80118f20(void)

{
  int unaff_s2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(unaff_s2 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

