// FUN_8012fb58

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012fb58(void)

{
  int in_k0;
  undefined4 in_f0;
  
  *(undefined4 *)(in_k0 + 0x1c3f) = in_f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

