// FUN_80110efc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_80110efc(int param_1)

{
  char cVar1;
  
  cVar1 = DAT_800bf9de;
  if (*(char *)(param_1 + 7) != DAT_800bf9de) {
    *(char *)(param_1 + 7) = DAT_800bf9de;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(cVar1) {
    case '\x04':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}

