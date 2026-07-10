// FUN_8003511c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_8003511c(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 0x59) {
    if (((short)(ushort)DAT_800bf87d <= _DAT_800e7fee) && (DAT_800bf87f <= DAT_800bf87e)) {
      if (param_3 == 1) {
        return true;
      }
      return (bool)4;
    }
    if (param_3 == 1) {
      return false;
    }
    FUN_8004d650(0x59,1);
    param_2 = 0x59;
  }
  else {
    if (param_2 < 0x59) {
      return true;
    }
    if (param_2 >= 0x5d) {
      return param_2 < 0x5d;
    }
    if ((short)(ushort)DAT_800bf87d <= _DAT_800e7fee) {
      if (param_3 != 1) {
        return (bool)4;
      }
      return true;
    }
    if (param_3 == 1) {
      return false;
    }
    FUN_8004d650(param_2,1);
  }
  FUN_8004dc84(param_2,0);
  return false;
}

