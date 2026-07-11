// FUN_08029418

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_08029418(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0006fb0c(param_1,(int)*(short *)(param_1 + 0x60));
  _DAT_800bf844 = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x5e) = 2;
    *(byte *)(iVar1 + 0x5f) = *(byte *)(iVar1 + 0x5f) | 1;
  }
  return iVar1 != 0;
}

