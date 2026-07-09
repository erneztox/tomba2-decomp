// FUN_8011d880

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011d880(int param_1)

{
  func_0x80077b5c();
  FUN_801274bc(param_1);
  if ((*(char *)(param_1 + 1) != '\0') && ((_DAT_1f80017c & 0x1f) == 0)) {
    func_0x8009a450();
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

