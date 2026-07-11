// FUN_8010fb74

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010fb74(int param_1)

{
  if (*(short *)(param_1 + 0x62) != 200) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 5)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x2b) == '\x02') {
      *(undefined1 *)(param_1 + 5) = 4;
    }
    return;
  }
  FUN_80121b18();
  return;
}

