// FUN_0801e3a8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801e3a8(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,2,3,0x10);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 6;
    *(undefined4 *)(iVar1 + 0x1c) = 0x80116b88;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined1 *)(iVar1 + 0x5e) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

