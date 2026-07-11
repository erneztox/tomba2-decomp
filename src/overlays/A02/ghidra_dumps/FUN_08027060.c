// FUN_08027060

int FUN_08027060(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0007a980(3,9,0);
  *(undefined1 *)(iVar1 + 2) = 0x15;
  *(undefined1 *)(iVar1 + 3) = 7;
  *(undefined4 *)(iVar1 + 0x1c) = 0x8011d4e8;
  *(undefined2 *)(iVar1 + 0x2e) = 0x38a4;
  *(undefined2 *)(iVar1 + 0x32) = 0xf2f4;
  *(undefined2 *)(iVar1 + 0x36) = 0x2d8a;
  uVar2 = func_0x001150ec(iVar1);
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  return iVar1;
}

