// FUN_8004df94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004df94(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 0xb) = 0x10;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      return;
    }
    if (bVar1 == 2) {
      *(undefined1 *)(param_1 + 4) = 3;
      DAT_1f800137 = 0;
      DAT_800ed061 = DAT_800ed061 & 0xfd;
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    FUN_8007a624(param_1);
    return;
  }
  switch((int)((*(ushort *)(param_1 + 0x60) - 0x66) * 0x10000) >> 0x10) {
  case 0:
    cVar3 = *(char *)(param_1 + 5);
    if (cVar3 == '\0') {
      iVar2 = FUN_8004daec(param_1);
      if (iVar2 != 0) {
        *(undefined2 *)(param_1 + 0x42) = 0x10;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        if ((_DAT_800bf880 & 0x800) != 0) {
          FUN_80058304(&DAT_800e7e80,2);
        }
      }
    }
    else {
LAB_8004e1fc:
      if (cVar3 == '\x01') {
        FUN_8004dd90(param_1);
      }
    }
    goto LAB_8004e240;
  case 1:
    cVar3 = *(char *)(param_1 + 5);
    if (cVar3 != '\0') goto LAB_8004e1fc;
    iVar2 = FUN_8004daec(param_1);
    if (iVar2 != 0) {
      *(undefined2 *)(param_1 + 0x42) = 0x10;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    goto LAB_8004e240;
  case 2:
    cVar3 = *(char *)(param_1 + 5);
    if (cVar3 != '\0') goto LAB_8004e1fc;
    iVar2 = FUN_8004daec(param_1);
    if (iVar2 != 0) {
      *(undefined2 *)(param_1 + 0x42) = 0x10;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      if (((_DAT_800bf880 & 0x200) != 0) || ((_DAT_800bf880 & 0x100) != 0)) {
        FUN_80058304(&DAT_800e7e80,10);
      }
    }
LAB_8004e240:
    DAT_800ed061 = DAT_800ed061 | 2;
    goto switchD_8004e040_caseD_6;
  case 3:
    iVar2 = FUN_8004daec(param_1);
    uVar4 = 2;
    goto joined_r0x8004e160;
  case 4:
    iVar2 = FUN_8004daec(param_1);
    if (iVar2 == 0) goto switchD_8004e040_caseD_6;
    if ((_DAT_800bf880 & 0x100) == 0) {
      uVar4 = 8;
    }
    else {
      uVar4 = 9;
    }
    break;
  case 5:
    iVar2 = FUN_8004daec(param_1);
    uVar4 = 10;
joined_r0x8004e160:
    if (iVar2 == 0) goto switchD_8004e040_caseD_6;
    break;
  default:
    goto switchD_8004e040_caseD_6;
  case 7:
    iVar2 = FUN_8004daec(param_1);
    if (iVar2 == 0) goto switchD_8004e040_caseD_6;
    if ((_DAT_800bf880 & 0x400) == 0) {
      uVar4 = 6;
    }
    else {
      uVar4 = 7;
    }
    break;
  case 8:
    iVar2 = FUN_8004daec(param_1);
    if (iVar2 == 0) goto switchD_8004e040_caseD_6;
    if ((_DAT_800bf880 & 0x3000) == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = 5;
    }
  }
  FUN_80058304(&DAT_800e7e80,uVar4);
  *(undefined1 *)(param_1 + 4) = 2;
switchD_8004e040_caseD_6:
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

