// FUN_080342fc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080342fc(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0012d398();
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0004d650(0x52,1);
  return 1;
}

