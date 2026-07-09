// FUN_80144534

/* WARNING: Control flow encountered bad instruction data */

void FUN_80144534(void)

{
  int in_v0;
  
  if (in_v0 == 0) {
    trap(0xf);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

