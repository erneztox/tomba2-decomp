// FUN_8013911c

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013911c(int param_1,int param_2)

{
  int unaff_s0;
  
  *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + param_2;
  *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + param_1;
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

