// FUN_08035934

/* WARNING: Control flow encountered bad instruction data */

void FUN_08035934(void)

{
  int in_v0;
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  
  iVar1 = *(int *)(unaff_s1 + 4) + in_v0 * -0x60;
  *(int *)(unaff_s1 + 4) = iVar1;
  *(int *)(unaff_s0 + 0x30) = *(short *)(unaff_s0 + 0x66) * 0x10000 + iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

