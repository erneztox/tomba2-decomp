// FUN_80123b34

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80123b34(void)

{
  int unaff_s3;
  
  *(undefined2 *)(unaff_s3 + 0x54) = 0;
  *(undefined2 *)(unaff_s3 + 0x58) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(unaff_s3 + 3)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

