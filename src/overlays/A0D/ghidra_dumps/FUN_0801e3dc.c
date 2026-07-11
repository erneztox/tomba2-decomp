// FUN_0801e3dc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801e3dc(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(1,2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80116ffc;
    *(undefined1 *)(iVar1 + 2) = 0x51;
    *(undefined1 *)(iVar1 + 3) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

