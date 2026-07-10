// FUN_80083E80

int FUN_80083e80(uint param_1)

{
  int iVar1;
  
  if ((int)param_1 < 0) {
    iVar1 = FUN_80083ebc(-param_1 & 0xfff);
    iVar1 = -iVar1;
  }
  else {
    iVar1 = FUN_80083ebc(param_1 & 0xfff);
  }
  return iVar1;
}

