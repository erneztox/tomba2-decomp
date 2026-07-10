// FUN_800993a0

int FUN_800993a0(int param_1)

{
  int iVar1;
  
  if ((DAT_800ac594 != 1) && (DAT_800ac638 != 1)) {
    iVar1 = FUN_80080840(DAT_800ac58c);
    if (param_1 == 1) {
      while (iVar1 == 0) {
        iVar1 = FUN_80080840(DAT_800ac58c);
      }
    }
    else if (iVar1 != 1) {
      return iVar1;
    }
    DAT_800ac638 = 1;
  }
  return 1;
}

