// FUN_08032460

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08032460(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,0,5,3);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012b1b4;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

