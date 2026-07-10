// FUN_000024b0

int FUN_000024b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,3,3,0x1a);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8010b2d4;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
  }
  return iVar1;
}

