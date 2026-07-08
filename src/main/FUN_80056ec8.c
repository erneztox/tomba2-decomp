
void FUN_80056ec8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x104);
  *(undefined2 *)(iVar1 + 10) = 0x280;
  *(undefined2 *)(iVar1 + 0x38) = 0x200;
  *(undefined2 *)(iVar1 + 0x3a) = 0x200;
  *(undefined2 *)(iVar1 + 0x3c) = 0x200;
  iVar1 = *(int *)(param_1 + 0x108);
  *(undefined2 *)(iVar1 + 10) = 0xd80;
  *(undefined2 *)(iVar1 + 0x38) = 0x200;
  *(undefined2 *)(iVar1 + 0x3a) = 0x200;
  *(undefined2 *)(iVar1 + 0x3c) = 0x200;
  iVar1 = FUN_800310f4(0x22,0);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return;
}

