
/* WARNING: Control flow encountered bad instruction data */

void FUN_80023040(void)

{
  undefined1 *in_zero;
  
  *in_zero = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

