// FUN_080233c8

int FUN_080233c8(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,0,3,0x27);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8011bf60;
    *(undefined1 *)(iVar1 + 5) = param_2;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return iVar1;
}

