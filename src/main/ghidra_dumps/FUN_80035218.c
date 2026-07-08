
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80035218(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((DAT_800bf881 & 4) == 0) && ((_DAT_800bf89e & 0x200) == 0)) {
    if (DAT_800bf870 == '\t') goto LAB_80035294;
    if (DAT_800bf873 == '\0') goto LAB_800352ac;
    if ((param_2 == 0x98) || (iVar1 = 0xa7, param_2 == 0xa6)) goto LAB_80035294;
  }
  else {
    iVar1 = 0x5f;
  }
  if (param_2 != iVar1) {
LAB_800352ac:
    if (param_3 != 1) {
      if (param_2 - 0x5fU < 2) {
        return 0;
      }
      if (param_2 == 0x98) {
        _DAT_800bf83a = 0x80a;
      }
      else if (param_2 == 0xa6) {
        _DAT_800bf83a = 0x203;
      }
      else if (param_2 == 0xa7) {
        _DAT_800bf83a = 0x603;
      }
      DAT_800bf80a = 3;
      DAT_800bf80b = (undefined1)param_2;
      DAT_800bf809 = 1;
      FUN_8004dc84(param_2,3);
    }
    return 0;
  }
LAB_80035294:
  uVar2 = 1;
  if (param_3 != 1) {
    uVar2 = 4;
  }
  return uVar2;
}

