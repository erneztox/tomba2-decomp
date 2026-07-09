// FUN_80132378

/* WARNING: Control flow encountered bad instruction data */

void FUN_80132378(void)

{
  undefined2 in_v0;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 6) = in_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

