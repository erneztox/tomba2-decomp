// FUN_08040e90

void FUN_08040e90(void)

{
  int iVar1;
  
  iVar1 = func_0x000310f4(0x60d,0);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return;
}

