// FUN_8011b82c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_8011b82c(int param_1)

{
  if ((DAT_800bf816 != '\0') && (DAT_800bf817 == *(char *)(param_1 + 3))) {
    return 0x3c14;
  }
  *(undefined2 *)(param_1 + 0x36) = 0x3b81;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return 0x80110000;
  }
}

