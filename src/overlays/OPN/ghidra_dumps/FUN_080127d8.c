// FUN_080127d8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080127d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 1;
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012da04;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

