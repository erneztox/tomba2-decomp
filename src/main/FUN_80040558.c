
void FUN_80040558(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return;
        }
        FUN_8007a624(param_1);
        return;
      }
      switch(param_1[5]) {
      case 1:
        if ((param_1[3] == '\0') && (DAT_800bfad1 == '\0')) {
          FUN_80040b48(0x38);
        }
        if (param_1[0x5e] != '\x02') goto LAB_8004099c;
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 1;
        break;
      case 2:
        FUN_8003fe00(param_1);
        break;
      case 3:
        FUN_8003fed8(param_1);
      }
      if (param_1[0x5e] == '\x02') {
        param_1[1] = *(undefined1 *)(*(int *)(param_1 + 0x10) + 1);
        func_0x8012866c(param_1);
        FUN_80077e7c(param_1);
        return;
      }
LAB_8004099c:
      if ((DAT_800bf816 == '\0') || ((ushort)DAT_800bf817 != *(ushort *)(param_1 + 0x6a))) {
        if ((param_1[0x28] & 0x80) != 0) {
          return;
        }
        if (DAT_800bf870 == '\b') {
          iVar3 = func_0x8012e168(param_1);
        }
        else {
          iVar3 = FUN_8007778c(param_1);
        }
        if (iVar3 == 0) {
          return;
        }
      }
      else {
        if ((param_1[0x28] & 0x80) == 0) {
          return;
        }
        param_1[1] = 1;
        FUN_80077e7c(param_1);
      }
      FUN_800517f8(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (param_1[5] == '\0') {
      iVar3 = FUN_80040410(param_1,param_1[3]);
      if (iVar3 != 0) {
        param_1[5] = param_1[5] + '\x01';
      }
      *(undefined2 *)(param_1 + 0x80) = 0x40;
      *(undefined2 *)(param_1 + 0x82) = 0x80;
      param_1[0x29] = 0;
      param_1[0x2b] = 0;
      param_1[0x5f] = 0;
      *(undefined2 *)(param_1 + 0x84) = 0x96;
      *(undefined2 *)(param_1 + 0x86) = 0x96;
      param_1[0x46] = 0;
      return;
    }
    if (param_1[5] != '\x01') {
      return;
    }
    switch(param_1[0x5e]) {
    case 0:
      FUN_8003fbc4(param_1);
      break;
    case 1:
      FUN_8003fc00(param_1);
      break;
    case 2:
      func_0x801286f4(param_1);
      break;
    default:
      goto switchD_80040648_caseD_3;
    case 4:
      FUN_8003fc78(param_1);
      break;
    case 5:
      func_0x80120188(param_1);
      break;
    case 6:
      iVar3 = FUN_8003fc8c(param_1);
      goto LAB_800406b8;
    case 7:
      iVar3 = func_0x801146e8(param_1);
LAB_800406b8:
      if (iVar3 == 0) {
        return;
      }
switchD_80040648_caseD_3:
    }
    param_1[4] = 1;
    param_1[5] = 0;
    *param_1 = 1;
    param_1[0x29] = 0;
    return;
  }
  if (DAT_800bf870 == '\x12') {
    if (DAT_800bfa59 == '\0') {
      return;
    }
  }
  else if ((DAT_800bf870 == '\x06') && (DAT_800bf871 == '\x13')) {
    return;
  }
  switch(param_1[5]) {
  case 0:
    FUN_8003fd10(param_1);
    break;
  case 1:
    FUN_8003fed8(param_1);
    break;
  case 2:
    FUN_8003ffcc(param_1);
    break;
  case 3:
    FUN_8004022c(param_1);
    break;
  case 4:
    FUN_80040390(param_1);
    break;
  case 5:
    func_0x80114934(param_1);
  }
  switch(param_1[0x5e]) {
  case 0:
  case 1:
  case 3:
  case 4:
  case 6:
    goto switchD_800407d0_caseD_0;
  case 2:
    cVar2 = *(char *)(*(int *)(param_1 + 0x10) + 1);
    param_1[1] = cVar2;
    if (cVar2 != '\0') {
      func_0x8012866c(param_1);
      FUN_80077e7c(param_1);
      param_1[0x29] = 0;
      goto LAB_800408cc;
    }
    break;
  case 5:
    func_0x801201e0(param_1);
    break;
  case 7:
    func_0x8012b118(param_1);
switchD_800407d0_caseD_0:
    if ((DAT_800bf816 == '\0') || ((ushort)DAT_800bf817 != *(ushort *)(param_1 + 0x6a))) {
      if ((param_1[0x28] & 0x80) == 0) {
        if (DAT_800bf870 == '\b') {
          iVar3 = func_0x8012e168(param_1);
        }
        else {
          iVar3 = FUN_8007778c(param_1);
        }
        if (iVar3 != 0) goto LAB_80040878;
      }
    }
    else if ((param_1[0x28] & 0x80) != 0) {
      param_1[1] = 1;
      FUN_80077e7c(param_1);
LAB_80040878:
      FUN_800517f8(param_1);
      param_1[0x29] = 0;
      goto LAB_800408cc;
    }
  }
  param_1[0x29] = 0;
LAB_800408cc:
  param_1[0x5f] = 0;
  return;
}

