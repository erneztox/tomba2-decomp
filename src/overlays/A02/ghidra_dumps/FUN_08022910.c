// FUN_08022910

void FUN_08022910(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(3,4,0);
  *(undefined1 *)(iVar1 + 2) = 0x25;
  *(undefined1 *)(iVar1 + 3) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = 0x8011b5c4;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  return;
}

