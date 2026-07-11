// FUN_8010cfd4

int FUN_8010cfd4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x80072ddc(param_1,2,4,0x12);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801156a4;
    *(undefined1 *)(iVar1 + 3) = 7;
  }
  return iVar1;
}

