// FUN_8013d524

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8013d524(undefined2 param_1)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_1) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

