// FUN_80034ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80034ce0(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if (DAT_800bf873 != '\0') goto LAB_80034fe8;
  bVar2 = param_2 - 0x66U < 9;
  switch(param_2) {
  case 0x66:
    if (((DAT_800bf881 & 8) == 0) && ((short)(ushort)DAT_800bf87d <= (short)_DAT_800e7fee))
    goto LAB_80034fe8;
    if (param_3 != 1) {
      FUN_8004dc84(param_2,1);
      uVar3 = 0x66;
      goto LAB_80035054;
    }
    break;
  case 0x67:
    if (((_DAT_800bf89e & 0x200) == 0) && ((short)(ushort)DAT_800bf87d <= (short)_DAT_800e7fee))
    goto LAB_80034fe8;
    if (param_3 != 1) {
      if ((_DAT_800bf89e & 0x200) == 0) {
        FUN_8004dc84(param_2,1);
        FUN_8004d650(param_2,1);
        return false;
      }
      DAT_800bf81d = 0x82;
      FUN_8004d604(param_2,1);
      _DAT_800e7fee = (ushort)DAT_800bf87d;
      _DAT_800e7ff0 = _DAT_800e7fee;
      FUN_80072114(0,0x10);
LAB_80034d68:
      FUN_8004ed94(0x44,0x41);
    }
    break;
  case 0x68:
    if ((((DAT_800bf881 & 2) == 0) && ((DAT_800bf881 & 1) == 0)) &&
       ((short)(ushort)DAT_800bf87d <= (short)_DAT_800e7fee)) {
      if (param_3 != 1) {
        return (bool)4;
      }
      return true;
    }
    if (param_3 != 1) {
      FUN_8004dc84(param_2,1);
      uVar3 = 0x68;
LAB_80035054:
      FUN_8004d650(uVar3,1);
      return false;
    }
    break;
  case 0x69:
    bVar1 = DAT_800bf881 & 8;
LAB_80034fc0:
    if (bVar1 == 0) {
LAB_80034fe8:
      if (param_3 == 1) {
        return true;
      }
      return (bool)4;
    }
  case 0x6a:
  case 0x6e:
LAB_80034fcc:
    if (param_3 != 1) {
LAB_80034fd4:
      FUN_8004dc84(param_2,1);
      return false;
    }
    break;
  case 0x6b:
    if ((DAT_800bf881 & 2) == 0) {
      bVar1 = DAT_800bf881 & 1;
      goto LAB_80034fc0;
    }
    goto LAB_80034fcc;
  case 0x6c:
    if ((_DAT_800bf89e & 0x200) == 0) goto LAB_80034fe8;
    if (param_3 != 1) {
      DAT_800bf81d = 0x82;
      FUN_8004ed0c(param_2,1);
      goto LAB_80034d68;
    }
    break;
  case 0x6d:
    if ((((DAT_800bf816 != '\0') && (DAT_800bf84d != '\0')) || (DAT_800bf870 == '\x14')) ||
       (((DAT_800bf870 == '\x05' && ((_DAT_800bfe56 & 0x20) != 0)) && (_DAT_800bf850 < 0))))
    goto LAB_80034fe8;
    if (param_3 != 1) {
      if ((((_DAT_800bf89e & 0x200) == 0) && (DAT_800bf88f != '\x15')) && (DAT_800bf88f != '\0')) {
        if ((DAT_800e7eef == '\x15') || (DAT_800e7eef == '\0')) {
          DAT_800bf81d = 0;
          DAT_800bf88f = DAT_800e7eef;
        }
        else {
          DAT_800bf81d = 2;
          DAT_800bf88f = '\0';
        }
      }
      if (DAT_800e7eee != '\0') {
        DAT_800bf81c = 2;
      }
      if (DAT_800bfe55 != '\0') {
        DAT_800bfe55 = '\0';
        FUN_8004d6f4(0x58);
      }
      goto LAB_80034fd4;
    }
    break;
  default:
    goto switchD_80034d28_default;
  }
  bVar2 = false;
switchD_80034d28_default:
  return bVar2;
}

