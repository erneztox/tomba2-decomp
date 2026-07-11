// FUN_080418a0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080418a0(void)

{
  char in_v0;
  int unaff_s1;
  
  *(char *)(unaff_s1 + 5) = in_v0 + -1;
  if (in_v0 == '\0') {
    *(undefined1 *)(unaff_s1 + 4) = 2;
  }
  *(undefined1 *)(unaff_s1 + 1) = 1;
  *(int *)(unaff_s1 + 0x50) = *(int *)(unaff_s1 + 0x50) + 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

