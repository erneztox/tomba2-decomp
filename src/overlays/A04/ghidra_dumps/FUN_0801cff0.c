// FUN_0801cff0

void FUN_0801cff0(void)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(2,3,1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801196c8;
    *(undefined1 *)(iVar1 + 2) = 0;
    *(undefined1 *)(iVar1 + 3) = 1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return;
}

