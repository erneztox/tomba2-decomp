// FUN_8011b8d8

/* WARNING: Control flow encountered bad instruction data */

void FUN_8011b8d8(void)

{
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  
  if (in_v0 != 0) {
    return;
  }
  func_0x80040b48(0x56);
  DAT_1f800137 = 2;
  if ((*(byte *)(unaff_s1 + 0x174) & 1) != 0) {
    *(undefined1 *)(unaff_s0 + 5) = 1;
    FUN_801248c0();
    return;
  }
  if ((*(byte *)(unaff_s1 + 0x174) & 2) == 0) {
    *(undefined1 *)(unaff_s0 + 5) = 5;
  }
  else {
    *(undefined1 *)(unaff_s0 + 5) = 4;
    *(undefined1 *)(unaff_s1 + 5) = 0x39;
    *(undefined1 *)(unaff_s1 + 6) = 2;
  }
  *(undefined1 *)(unaff_s1 + 0x29) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

