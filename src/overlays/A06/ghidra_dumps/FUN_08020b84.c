// FUN_08020b84

int FUN_08020b84(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801189e8;
    *(undefined1 *)(iVar1 + 3) = 7;
  }
  return iVar1;
}

