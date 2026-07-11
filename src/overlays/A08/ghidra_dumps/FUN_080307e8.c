// FUN_080307e8

int FUN_080307e8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801280d0;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined1 *)(iVar1 + 3) = 0x16;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return iVar1;
}

