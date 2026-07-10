// FUN_8005fa84

void FUN_8005fa84(byte *param_1)

{
  byte bVar1;
  
  DAT_1f800137 = 2;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x40] = 0x1e;
  param_1[0x41] = 0;
  *param_1 = *param_1 | 6;
  if (DAT_800bfa47 == -0x80) {
    DAT_800bf80a = 4;
    bVar1 = 10;
  }
  else {
    if (DAT_800bf80b == '`') {
      param_1[6] = 4;
      FUN_80054d14(param_1,2,6);
      return;
    }
    if (((DAT_800bf80b == -0x68) || (DAT_800bf80b == -0x5a)) || (bVar1 = 3, DAT_800bf80b == -0x59))
    {
      DAT_800bf80a = 4;
      param_1[6] = 4;
      FUN_80054d14(param_1,2,6);
      return;
    }
  }
  param_1[6] = bVar1;
  return;
}

