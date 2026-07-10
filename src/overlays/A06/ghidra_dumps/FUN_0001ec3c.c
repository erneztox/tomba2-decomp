// FUN_0001ec3c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001ec3c(void)

{
  undefined1 unaff_s0;
  undefined1 *unaff_s1;
  
  *unaff_s1 = unaff_s0;
  unaff_s1[6] = 0;
  unaff_s1[5] = 3;
  unaff_s1[0x70] = unaff_s0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

