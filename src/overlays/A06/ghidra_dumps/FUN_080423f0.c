// FUN_080423f0

undefined4 FUN_080423f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,2,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801189e8;
    *(undefined1 *)(iVar1 + 3) = 0xc;
  }
  return 1;
}

