// FUN_08026b7c

int FUN_08026b7c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(3,2,0);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 2) = 0x2e;
    *(undefined1 *)(iVar1 + 3) = param_2;
    *(undefined4 *)(iVar1 + 0x1c) = 0x8011f7a4;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return iVar1;
}

