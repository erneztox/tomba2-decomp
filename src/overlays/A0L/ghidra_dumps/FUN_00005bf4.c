// FUN_00005bf4

bool FUN_00005bf4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80111744;
    *(undefined1 *)(iVar1 + 3) = 5;
    *(char *)(iVar1 + 0x5e) = *(char *)(param_1 + 0xbf) + -1;
  }
  return iVar1 != 0;
}

