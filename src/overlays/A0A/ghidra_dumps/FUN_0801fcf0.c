// FUN_0801fcf0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801fcf0(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(0,2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80118a5c;
    *(undefined1 *)(iVar1 + 2) = 0x4b;
    *(undefined1 *)(iVar1 + 3) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

