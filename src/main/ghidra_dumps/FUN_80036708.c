
bool FUN_80036708(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_800365f0(param_1,1);
    if (iVar1 == 0) {
      return iVar2 != 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return true;
}

