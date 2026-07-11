// FUN_80145674

/* WARNING: Control flow encountered bad instruction data */

void FUN_80145674(void)

{
  undefined4 *in_zero;
  
  *in_zero = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

