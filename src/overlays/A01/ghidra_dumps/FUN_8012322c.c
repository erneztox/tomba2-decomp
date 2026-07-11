// FUN_8012322c

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012322c(void)

{
  undefined1 in_v0;
  undefined1 *unaff_s0;
  
  *unaff_s0 = in_v0;
  unaff_s0[4] = in_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

