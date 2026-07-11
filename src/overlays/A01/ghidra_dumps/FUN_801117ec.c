// FUN_801117ec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801117ec(int param_1)

{
  undefined1 in_v0;
  undefined4 in_v1;
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 5) = in_v0;
  if (*(char *)(param_1 + 3) == '\0') {
    *(undefined1 *)(unaff_s1 + 5) = 2;
  }
  else {
    *(undefined1 *)(unaff_s1 + 5) = 3;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(in_v1) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

