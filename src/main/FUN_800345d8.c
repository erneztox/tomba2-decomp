
void FUN_800345d8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = param_1;
  do {
    if (uVar2 == *(byte *)(param_1 + 8)) {
      *(undefined1 *)(iVar1 + 0xc) = 0;
      *(undefined1 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 0x14) = 100;
    }
    else {
      *(undefined1 *)(iVar1 + 0xc) = 2;
      *(undefined1 *)(iVar1 + 0x10) = 3;
      *(undefined1 *)(iVar1 + 0x14) = 0x84;
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)uVar2 < 4);
  return;
}

