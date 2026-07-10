// FUN_00023a04

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00023a74) */

void FUN_00023a04(void)

{
  uint in_v0;
  undefined1 in_v1;
  int unaff_s1;
  
  if (in_v0 < 0x1e) {
    return;
  }
  *(undefined1 *)(unaff_s1 + 6) = in_v1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

