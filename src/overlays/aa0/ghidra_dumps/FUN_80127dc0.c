// FUN_80127dc0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80127dc0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(*(int *)(param_1 + ((param_2 << 0x10) >> 0xe) + 0xc0) + 0x3e)) {
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 * 0x10000 >> 0x10 < 4);
  return;
}

