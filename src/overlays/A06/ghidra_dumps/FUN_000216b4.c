// FUN_000216b4

/* WARNING: Control flow encountered bad instruction data */

void FUN_000216b4(int param_1)

{
  undefined2 in_v0;
  
  *(undefined2 *)(param_1 + 0x56) = in_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

