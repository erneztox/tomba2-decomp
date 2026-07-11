// FUN_8012464c

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012464c(undefined4 param_1)

{
  int unaff_s1;
  
  func_0x80074590(param_1,0,0);
  func_0x80027144(*(undefined4 *)(*(int *)(unaff_s1 + 200) + 0x40));
  func_0x80074590(0xc,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

