// FUN_8012a964

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_8012a964(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x8007a980(1,2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8013362c;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined1 *)(iVar1 + 2) = 0x1a;
    *(undefined1 *)(iVar1 + 3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

