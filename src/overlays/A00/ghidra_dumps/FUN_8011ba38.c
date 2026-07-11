// FUN_8011ba38

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011ba38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    func_0x8009a450(param_1,*(undefined4 *)(param_1 + 0x10),param_3,param_4,0x1460001d,0x1f80);
    return;
  }
}

