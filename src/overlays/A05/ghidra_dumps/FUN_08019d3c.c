// FUN_08019d3c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08019d3c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,0x80,5,3);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 0;
    *(undefined1 *)(iVar1 + 0x5e) = param_2;
    *(undefined4 *)(iVar1 + 0x1c) = 0x801128f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

