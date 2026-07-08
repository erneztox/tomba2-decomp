
/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Control flow encountered bad instruction data */

void FUN_8002b7c0(void)

{
  int in_at;
  
  if (in_at != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

