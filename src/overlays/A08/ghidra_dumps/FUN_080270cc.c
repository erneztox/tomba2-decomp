// FUN_080270cc

void FUN_080270cc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,4,0x4f);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80122544;
    *(undefined1 *)(iVar1 + 3) = 2;
  }
  return;
}

