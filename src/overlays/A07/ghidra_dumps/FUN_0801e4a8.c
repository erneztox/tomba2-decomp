// FUN_0801e4a8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801e4a8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 8;
    *(undefined4 *)(iVar1 + 0x1c) = 0x80116b88;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

