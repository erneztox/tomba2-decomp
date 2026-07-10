// FUN_00026a68

/* WARNING: Control flow encountered bad instruction data */

void FUN_00026a68(void)

{
  undefined1 in_v0;
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 6) = in_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

