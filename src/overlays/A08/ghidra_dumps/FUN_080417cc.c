// FUN_080417cc

/* WARNING: Control flow encountered bad instruction data */

void FUN_080417cc(int param_1)

{
  undefined1 in_v0;
  
  *(undefined1 *)(param_1 + 0x78) = in_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

