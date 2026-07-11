// FUN_08033168

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08033168(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,5,5);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = param_2;
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012be08;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

