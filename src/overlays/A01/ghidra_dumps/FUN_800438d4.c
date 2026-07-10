// FUN_800438d4

undefined4 FUN_800438d4(int param_1,byte param_2,byte param_3)

{
  byte bVar1;
  
  switch((param_1 + 1) * 0x10000 >> 0x10) {
  case 0:
    goto switchD_80043900_caseD_0;
  case 1:
    if (param_2 != param_3) {
      return 2;
    }
    return 3;
  case 2:
    bVar1 = param_3;
    break;
  case 3:
    bVar1 = param_2;
    param_2 = param_3;
    break;
  case 4:
    if ((param_2 & param_3) != 0) {
      return 3;
    }
  default:
    return 2;
  }
  if (bVar1 < param_2) {
    return 2;
  }
switchD_80043900_caseD_0:
  return 3;
}

