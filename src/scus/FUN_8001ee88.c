
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8001ee88(int param_1)

{
  int unaff_s7;
  
  if (param_1 == 0x25) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(char *)(unaff_s7 + 1)) {
    case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      param_1 = (int)*(char *)(unaff_s7 + 1);
    }
  }
  FUN_8001ed8c(param_1);
  FUN_8001e67c();
  return;
}

