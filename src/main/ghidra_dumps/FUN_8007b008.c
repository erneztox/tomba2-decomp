
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007b008(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_800f2624;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
    *(undefined1 *)(iVar1 + 1) = 0;
    (**(code **)(iVar1 + 0x1c))();
    iVar1 = iVar2;
  }
  return;
}

