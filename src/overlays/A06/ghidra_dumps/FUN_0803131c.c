// FUN_0803131c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0803131c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x7c) == 1) {
    uVar1 = 1;
    if (*(char *)(param_1 + 3) != '\x02') {
      iVar2 = func_0x0009a450();
      uVar1 = 0;
      if ((iVar2 % 3 & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else {
    uVar1 = 1;
    if (*(char *)(param_1 + 3) != '\x01') {
      iVar2 = func_0x0009a450();
      uVar1 = 1;
      if ((iVar2 % 3 & 1U) == 0) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

