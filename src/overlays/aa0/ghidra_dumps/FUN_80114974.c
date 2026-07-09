// FUN_80114974

int FUN_80114974(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = func_0x8007a980(3,9,0);
  if (iVar1 == 0) {
    iVar1 = FUN_8011d974();
    return iVar1;
  }
  *(undefined1 *)(iVar1 + 2) = 6;
  *(char *)(iVar1 + 3) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = 0x8011d578;
  if (param_2 == '\0') {
    *(int *)(iVar1 + 0x10) = param_1 + 0x60;
  }
  return iVar1;
}

