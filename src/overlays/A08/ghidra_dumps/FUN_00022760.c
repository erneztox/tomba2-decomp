// FUN_00022760

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022760(void)

{
  int in_v1;
  int unaff_s0;
  
  *(undefined1 *)(in_v1 + -0x5b9) = 0x81;
  FUN_00040c00();
  *(undefined1 *)(unaff_s0 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

