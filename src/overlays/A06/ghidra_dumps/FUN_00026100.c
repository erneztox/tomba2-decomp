// FUN_00026100

/* WARNING: Control flow encountered bad instruction data */

void FUN_00026100(undefined4 param_1,int param_2)

{
  int unaff_s0;
  undefined1 unaff_s2;
  
  func_0x00077c40(param_1,param_2 + -0x2684,1);
  *(undefined1 *)(unaff_s0 + 5) = unaff_s2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

