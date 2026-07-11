// FUN_8010fb88

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010fb88(void)

{
  int in_v0;
  int unaff_s0;
  
  if (*(short *)(unaff_s0 + 0x62) != in_v0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(unaff_s0 + 5)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(unaff_s0 + 0x2b) == '\x02') {
      *(undefined1 *)(unaff_s0 + 5) = 4;
    }
    return;
  }
  FUN_80121b18();
  return;
}

