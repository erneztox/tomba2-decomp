// FUN_08012e1c

int FUN_08012e1c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,0,3,0x1e);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8010bc8c;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
  }
  return iVar1;
}

