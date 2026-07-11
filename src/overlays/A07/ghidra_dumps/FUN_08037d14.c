// FUN_08037d14

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08037d14(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x0007778c();
  if (iVar1 != 0) {
    func_0x0004190c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

