// FUN_80123318

undefined4 FUN_80123318(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x8007a980(2,4,0);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 2) = 0x20;
    *(undefined1 *)(iVar1 + 3) = 2;
    *(undefined **)(iVar1 + 0x1c) = &DAT_8012bba4;
    uVar2 = FUN_8012c2f4();
    return uVar2;
  }
  return 0;
}

