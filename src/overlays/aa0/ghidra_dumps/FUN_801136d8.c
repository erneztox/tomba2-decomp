// FUN_801136d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801136d8(int param_1)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < *(byte *)(param_1 + 5)) {
    func_0x80041098(param_1);
  }
  func_0x8004190c(param_1);
  return;
}

