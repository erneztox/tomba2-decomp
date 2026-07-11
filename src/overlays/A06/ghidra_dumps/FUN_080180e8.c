// FUN_080180e8

void FUN_080180e8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_2;
  if (0 < (int)(*(byte *)(param_2 + 8) - 1)) {
    do {
      iVar1 = func_0x00023870(param_1,param_2,*(undefined4 *)(iVar3 + 0xc0));
      iVar2 = iVar2 + 1;
      if (iVar1 != 0) {
        return;
      }
      iVar3 = iVar3 + 4;
    } while (iVar2 < (int)(*(byte *)(param_2 + 8) - 1));
  }
  return;
}

