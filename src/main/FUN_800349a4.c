
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800349a4(undefined4 param_1,uint param_2,int param_3)

{
  char cVar1;
  
  if (((((_DAT_800bf89e & 0x200) == 0) || ((&DAT_800a2be9)[param_2 * 0xc] != '\x02')) &&
      (((DAT_800bf881 & 4) == 0 ||
       ((((&DAT_800a2be9)[param_2 * 0xc] != '\x02' || (param_2 == 0x15)) &&
        ((&DAT_800a2be9)[param_2 * 0xc] != '\0')))))) &&
     ((((DAT_800bf881 & 2) == 0 && ((DAT_800bf881 & 1) == 0)) ||
      ((&DAT_800a2be9)[param_2 * 0xc] != '\0')))) {
    if (param_3 == 1) {
      return 0;
    }
    cVar1 = (&DAT_800a2be9)[param_2 * 0xc];
    if (cVar1 == '\0') {
      if (param_2 != DAT_800bf88c) {
        DAT_800bf81a = param_2 != DAT_800e7eec;
        DAT_800bf88c = (char)param_2;
        return 2;
      }
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          return 2;
        }
        if (param_2 != DAT_800bf88f) {
          DAT_800bf81d = param_2 != DAT_800e7eef;
          DAT_800bf88f = (char)param_2;
          return 2;
        }
        if (param_2 == DAT_800e7eef) {
          DAT_800bf88f = 0;
          DAT_800bf81d = 2;
        }
        else {
          DAT_800bf81d = 0;
          DAT_800bf88f = DAT_800e7eef;
        }
        return 3;
      }
      param_2 = param_2 - 10;
      if (param_2 != DAT_800bf88d) {
        DAT_800bf81b = param_2 != DAT_800e7eed;
        DAT_800bf88d = (char)param_2;
        return 2;
      }
    }
  }
  else if (param_3 == 1) {
    return 1;
  }
  return 4;
}

