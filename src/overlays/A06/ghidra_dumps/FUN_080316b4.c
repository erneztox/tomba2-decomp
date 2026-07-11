// FUN_080316b4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080316b4(int param_1)

{
  undefined2 in_v0;
  
  *(undefined2 *)(param_1 + 0x56) = in_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

