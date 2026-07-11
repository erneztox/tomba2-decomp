// FUN_080428bc

/* WARNING: Control flow encountered bad instruction data */

void FUN_080428bc(undefined4 param_1)

{
  int unaff_s1;
  
  func_0x00074590(param_1,0xfffffff6,0);
  DAT_800bfa43 = 4;
  *(undefined1 *)(unaff_s1 + 0x78) = 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

