// FUN_8012233c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_8012233c(void)

{
  int iVar1;
  
  iVar1 = func_0x8007a980(1,4,0);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 2) = 0x1d;
    *(undefined1 *)(iVar1 + 3) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012af08;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

