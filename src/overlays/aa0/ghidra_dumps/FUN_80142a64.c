// FUN_80142a64

/* WARNING: Control flow encountered bad instruction data */

void FUN_80142a64(void)

{
  int in_a3;
  undefined4 in_f4;
  
  *(undefined4 *)(in_a3 + -0xf9) = in_f4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

