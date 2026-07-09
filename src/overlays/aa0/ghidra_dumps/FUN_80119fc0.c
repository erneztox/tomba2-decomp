// FUN_80119fc0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_80119fc0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x80072ddc(param_1,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 7;
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012da04;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(iVar1 + 6)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      return 0x80110000;
    }
  }
  return 0;
}

