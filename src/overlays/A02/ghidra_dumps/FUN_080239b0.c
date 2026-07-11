// FUN_080239b0

void FUN_080239b0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(3,9,0);
  *(undefined1 *)(iVar1 + 2) = 1;
  *(undefined1 *)(iVar1 + 3) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = 0x8011c52c;
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  return;
}

