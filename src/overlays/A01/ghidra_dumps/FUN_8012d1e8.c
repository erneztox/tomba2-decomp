// FUN_8012d1e8

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012d1e8(void)

{
  trap(0x3fe);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

