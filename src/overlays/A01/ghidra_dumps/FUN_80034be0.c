// FUN_80034be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80034be0(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((((DAT_800bf873 == '\0') && ((DAT_800bf881 & 4) == 0)) && ((_DAT_800bf89e & 0x200) == 0)) &&
     ((DAT_800bf870 != '\a' || (DAT_800bfae6 == '\0')))) {
    if (param_3 == 1) {
      return 0;
    }
    if (param_2 == DAT_800bf88e) {
      if (param_2 == DAT_800e7eee) {
        DAT_800bf81c = 2;
      }
      else {
        DAT_800bf81c = 0;
      }
      DAT_800bf88e = 0;
      return 0;
    }
    DAT_800bf81c = param_2 != DAT_800e7eee;
    DAT_800bf88e = (byte)param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (param_3 != 1) {
      return 4;
    }
  }
  return uVar1;
}

