// FUN_80122fa4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80122fa4(void)

{
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 0x2b) = 0;
  func_0x8007778c();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(unaff_s0 + 3)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    *(undefined1 *)(unaff_s0 + 0x2b) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}

