// FUN_8013b98c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_8013b98c(int param_1)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
    FUN_801406e4();
    return 0;
  }
}

