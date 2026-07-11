// FUN_0801c150

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801c150(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(1,3,1);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 2) = 0x10;
    *(undefined1 *)(iVar1 + 3) = 0xc;
    *(undefined4 *)(iVar1 + 0x1c) = 0x80114900;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

