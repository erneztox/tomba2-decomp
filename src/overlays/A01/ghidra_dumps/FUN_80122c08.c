// FUN_80122c08

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80122c08(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_1[3]) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      func_0x800517f8(param_1);
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(param_1[3]) {
      case 0:
        goto switchD_80122fd8_caseD_0;
      default:
        *param_1 = 1;
        param_1[0x29] = 0;
        param_1[0x2b] = 0;
        param_1[4] = param_1[4] + '\x01';
        halt_baddata();
      }
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x8007a624(param_1);
      return;
    }
    func_0x8007778c(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_1[3]) {
    case 0:
switchD_80122fd8_caseD_0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

