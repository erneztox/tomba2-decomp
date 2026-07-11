// FUN_80116110

/* WARNING: Control flow encountered bad instruction data */

void FUN_80116110(int param_1)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    func_0x80041098(param_1);
    func_0x8004190c(param_1);
    return;
  }
}

