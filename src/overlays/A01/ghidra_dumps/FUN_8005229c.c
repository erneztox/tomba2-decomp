// FUN_8005229c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005229c(void)

{
  int iVar1;
  
  if (DAT_1f80019a == '\x01') {
    DAT_800ecf4e = 0;
  }
  if ((DAT_800fb167 == '\0') && (_DAT_800ecf4a != 0)) {
    if (DAT_800ecf4e == 1) {
      iVar1 = FUN_80087aec(0);
      if (iVar1 != 6) {
        return;
      }
      FUN_80087e2c(0,&DAT_800a3f98);
      DAT_800ecf4e = 2;
      return;
    }
    if (DAT_800ecf4e < 2) {
      if (DAT_800ecf4e != 0) {
        return;
      }
      if (_DAT_800ecf4c != 0) {
        _DAT_800ecf4c = 0;
        FUN_80087eac(0,&DAT_800ecf4c,2);
      }
      iVar1 = FUN_80087aec(0);
      if (iVar1 != 6) {
        return;
      }
      FUN_80087e2c(0,&DAT_800a3f98);
      return;
    }
    if (DAT_800ecf4e == 2) {
      if (DAT_800ecf4f != '\0') {
        DAT_800ecf4f = DAT_800ecf4f + -1;
        return;
      }
      _DAT_800ecf4c = 0;
      FUN_80087eac(0,&DAT_800ecf4c,2);
      DAT_800ecf4e = 3;
      DAT_800ecf4f = 0;
      return;
    }
    if (DAT_800ecf4e != 3) {
      return;
    }
  }
  else {
    if (DAT_800fb167 != '\x01') {
      return;
    }
    if (_DAT_800ecf4a == 0) {
      return;
    }
    if (_DAT_800ecf4c != 0) {
      _DAT_800ecf4c = 0;
      FUN_80087eac(0,&DAT_800ecf4c,2);
    }
  }
  iVar1 = FUN_80087aec(0);
  if (iVar1 == 6) {
    FUN_80087e2c(0,&DAT_800a3f98);
    DAT_800ecf4e = 0;
  }
  return;
}

