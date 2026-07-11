// FUN_801119e8

undefined4 FUN_801119e8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x80072ddc(param_1,1,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801156a4;
    *(undefined1 *)(iVar1 + 3) = 8;
  }
  return 1;
}

