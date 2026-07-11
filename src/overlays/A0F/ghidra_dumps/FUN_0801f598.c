// FUN_0801f598

int FUN_0801f598(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,4,3,0x24);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801183c8;
    *(undefined1 *)(iVar1 + 3) = 1;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
  }
  return iVar1;
}

