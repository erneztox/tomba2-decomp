// FUN_0002313c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002313c(undefined4 param_1,int param_2)

{
  int unaff_s0;
  undefined1 unaff_s1;
  
  *(undefined1 *)(unaff_s0 + 0x7a) = 0x13;
  FUN_00040d68(param_1,param_2 + 0x5b24);
  *(undefined1 *)(unaff_s0 + 0x70) = 2;
  *(undefined1 *)(unaff_s0 + 6) = unaff_s1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

