// FUN_80111860

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80111990) */
/* WARNING: Removing unreachable block (ram,0x80123a60) */
/* WARNING: Removing unreachable block (ram,0x80123a68) */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80111860(undefined1 param_1)

{
  undefined4 extraout_v1;
  int unaff_s0;
  int unaff_s1;
  
  if (unaff_s0 != 0) {
    FUN_8011a924();
    return;
  }
  if (*(char *)(unaff_s1 + 0x2b) == '\x03') {
    *(undefined1 *)(unaff_s1 + 6) = param_1;
    FUN_8011a8bc();
    return;
  }
  func_0x8007778c();
  func_0x8004190c();
  func_0x800518fc();
  *(undefined1 *)(unaff_s1 + 0x2b) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(extraout_v1) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

