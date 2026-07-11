// FUN_0802f40c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802f40c(void)

{
  int iVar1;
  int unaff_s2;
  
  iVar1 = *(int *)(unaff_s2 + 0xc4);
  *(undefined2 *)(*(int *)(unaff_s2 + 200) + 8) = 0;
  *(undefined2 *)(iVar1 + 8) = 0;
  *(undefined1 *)(unaff_s2 + 5) = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

