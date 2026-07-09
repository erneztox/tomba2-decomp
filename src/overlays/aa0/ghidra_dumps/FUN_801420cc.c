// FUN_801420cc

/* WARNING: Control flow encountered bad instruction data */

void FUN_801420cc(undefined4 param_1,int param_2)

{
  undefined4 unaff_f20;
  
  *(undefined4 *)(param_2 + 0x102a) = unaff_f20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

