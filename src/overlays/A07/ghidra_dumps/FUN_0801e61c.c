// FUN_0801e61c

int FUN_0801e61c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80116b88;
    *(undefined1 *)(iVar1 + 3) = 9;
  }
  return iVar1;
}

