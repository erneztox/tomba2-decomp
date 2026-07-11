// FUN_80116df8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80116df8(undefined4 param_1,undefined2 param_2)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_2) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

