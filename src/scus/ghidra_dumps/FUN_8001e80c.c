
void FUN_8001e80c(int param_1)

{
  int iVar1;
  
  if ((DAT_80026d18 != 1) && (DAT_80026dbc != 1)) {
    iVar1 = FUN_8001e0bc(DAT_80026d10);
    if (param_1 == 1) {
      if (iVar1 == 0) {
        do {
          iVar1 = FUN_8001e0bc(DAT_80026d10);
        } while (iVar1 == 0);
        FUN_8001e094();
        return;
      }
    }
    else if (iVar1 != 1) {
      return;
    }
    DAT_80026dbc = 1;
    return;
  }
  FUN_8001e09c();
  return;
}

