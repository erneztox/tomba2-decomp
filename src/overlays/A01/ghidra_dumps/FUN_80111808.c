// FUN_80111808

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80111808(void)

{
  undefined4 in_v1;
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 5) = 2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(in_v1) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

