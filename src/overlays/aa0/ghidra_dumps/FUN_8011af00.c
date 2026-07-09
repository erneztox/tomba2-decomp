// FUN_8011af00

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011af00(int param_1)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    func_0x80077b5c(param_1);
    return;
  }
}

