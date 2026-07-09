// FUN_80112f68

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80112f68(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x8007778c();
  if (iVar1 != 0) {
    func_0x80077b5c(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 5)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0x11 < DAT_800bf9e0) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
  return;
}

