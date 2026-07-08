
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005b63c(int param_1)

{
  undefined2 uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  
  puVar9 = *(undefined1 **)(param_1 + 0x10);
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x14a) & 1;
    FUN_80055284(param_1);
    *(undefined1 *)(param_1 + 0x16a) = 0;
    FUN_80053d0c(param_1);
    FUN_80053bf8(param_1,0);
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    iVar4 = FUN_8005b5e4(puVar9);
    if (iVar4 == 0) {
      if (*(char *)(param_1 + 0x181) != '\0') {
        *(undefined1 *)(param_1 + 0x181) = 1;
        *(undefined1 *)(param_1 + 6) = 2;
        *(undefined1 *)(param_1 + 0x144) = 0;
        return;
      }
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      goto switchD_8005b678_caseD_1;
    }
    *(undefined1 *)(param_1 + 6) = 8;
    *(undefined1 *)(param_1 + 0x145) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
    if (iVar4 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 2;
    }
    FUN_8005b370(param_1,uVar8);
    *(undefined2 *)(param_1 + 0x4a) = 0;
    break;
  case 1:
switchD_8005b678_caseD_1:
    FUN_80055e28(param_1,1);
    FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    if ((*(char *)(param_1 + 0x181) == '\0') &&
       (FUN_800574e0(param_1,6), (*(ushort *)(param_1 + 0x17e) & 0x40) != 0)) {
      *(undefined1 *)(param_1 + 0x144) = 0;
    }
    iVar4 = FUN_80053bf8(param_1,0);
    if (iVar4 == 0) {
      FUN_80076d68(param_1);
      iVar4 = FUN_80055824();
      if (iVar4 == 0) {
        if (*(char *)(param_1 + 0x29) == '\0') {
          if (*(char *)(param_1 + 0x181) == '\0') goto LAB_8005b868;
        }
        else {
          *(undefined2 *)(param_1 + 0x4a) = 0;
        }
        *(undefined1 *)(param_1 + 0x144) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      else {
        *(undefined1 *)(param_1 + 6) = 3;
        *(undefined1 *)(param_1 + 0x144) = 0;
        *(undefined1 *)(param_1 + 0x181) = 0;
        *(undefined1 *)(param_1 + 0x145) = 1;
        *(undefined2 *)(param_1 + 0x4a) = 0;
      }
    }
    else {
      FUN_80076d68(param_1);
      if (*(char *)(param_1 + 0x29) == '\0') {
        if (*(char *)(param_1 + 0x181) == '\0') goto LAB_8005b868;
      }
      else {
        *(undefined2 *)(param_1 + 0x4a) = 0;
      }
      *(undefined1 *)(param_1 + 0x144) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      FUN_80053bf8(param_1);
    }
LAB_8005b868:
    FUN_8005b20c(param_1,0);
    break;
  case 2:
    if (*(char *)(param_1 + 0x181) == '\0') {
      FUN_80055e28(param_1,1);
      FUN_80055fbc(param_1,*(byte *)(param_1 + 0x14a) | 2);
      FUN_80056b48(param_1,1);
      FUN_80055d5c(param_1);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
      FUN_8005444c(param_1);
      if (*(char *)(param_1 + 0x78) == '\x06') {
        *(undefined1 *)(param_1 + 0x147) = 0;
      }
      FUN_800551c4(param_1);
      FUN_80056c00(param_1,1);
      FUN_80076d68(param_1);
      iVar4 = FUN_80055824();
      if (iVar4 != 0) {
        cVar5 = *(char *)(param_1 + 6);
        *(undefined1 *)(param_1 + 0x181) = 0;
        *(undefined1 *)(param_1 + 0x145) = 1;
        *(undefined2 *)(param_1 + 0x4a) = 0;
        goto LAB_8005ba0c;
      }
    }
    else {
      uVar7 = (uint)*(short *)(param_1 + 0x44);
      *(undefined1 *)(param_1 + 0x181) = 1;
      uVar6 = uVar7;
      if ((int)uVar7 < 0) {
        uVar6 = -uVar7;
      }
      *(undefined1 *)(param_1 + 0x144) = 0;
      if ((uVar6 & 0xffff) != 0) {
        sVar3 = (short)(uVar6 - 0x120);
        if ((int)((uVar6 - 0x120) * 0x10000) < 0) {
          sVar3 = 0;
        }
        if ((int)uVar7 < 1) {
          *(short *)(param_1 + 0x44) = -sVar3;
        }
        else {
          *(short *)(param_1 + 0x44) = sVar3;
        }
      }
      FUN_80055e28(param_1,1);
      if (DAT_800bf870 == '\0') {
        func_0x8010c89c(param_1,0);
      }
      else if (DAT_800bf870 == '\x06') {
        func_0x8011460c(param_1,0);
      }
      else if (DAT_800bf870 == '\b') {
        func_0x801120c4(param_1,0);
      }
      else if (DAT_800bf870 == '\x0e') {
        func_0x8010b408(param_1,0);
      }
      FUN_80076d68(param_1);
      iVar4 = FUN_80055824();
      if (iVar4 != 0) {
        cVar5 = *(char *)(param_1 + 6);
        *(undefined1 *)(param_1 + 0x145) = 1;
        *(undefined1 *)(param_1 + 0x181) = 0;
LAB_8005ba0c:
        *(char *)(param_1 + 6) = cVar5 + '\x01';
        return;
      }
    }
    goto LAB_8005bba0;
  case 3:
    FUN_80074590(0x20,0,0);
    *(undefined2 *)(param_1 + 0x58) = 0;
    FUN_80054d14(param_1,*(byte *)(param_1 + 0x46) + 1,0);
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  case 4:
    FUN_80055e28(param_1,1);
    FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,2);
    if ((DAT_800bf848 == '\0') &&
       ((iVar4 = FUN_80055824(), iVar4 != 0 || (*(char *)(param_1 + 0x29) != '\0')))) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      if (*(byte *)(param_1 + 0x78) == 9) {
        func_0x80113628(param_1,puVar9);
      }
      else if (*(byte *)(param_1 + 0x78) < 5) {
        *(undefined1 *)(param_1 + 0x78) = 0;
        if (puVar9[2] == '\x10') {
          puVar9[6] = puVar9[6] + '\x01';
        }
        else {
          puVar9[4] = 3;
        }
        iVar4 = FUN_8005b134(param_1,puVar9);
        if ((iVar4 == -1) || (iVar4 = FUN_800537b8(param_1,puVar9), iVar4 == 0)) {
          FUN_80054d14(param_1,0x26,0);
          *(undefined1 *)(param_1 + 0x145) = 1;
          *(undefined1 *)(param_1 + 7) = 1;
          *(undefined1 *)(param_1 + 6) = 7;
          *(undefined1 *)(param_1 + 0x29) = 0;
          *(undefined1 *)(param_1 + 0x144) = 0;
          *(undefined1 *)(param_1 + 0x148) = 0;
          *(undefined2 *)(param_1 + 0x4a) = 0;
          *(undefined2 *)(param_1 + 0x58) = 0x20;
        }
        else {
          *(undefined1 *)(param_1 + 0x78) = 3;
          *(int *)(param_1 + 0x10) = iVar4;
        }
      }
    }
    FUN_800551c4(param_1);
LAB_8005bba0:
    FUN_8005b20c(param_1,0);
    return;
  case 5:
    FUN_800541f4(param_1,0);
    if (((*(byte *)(param_1 + 0x14a) & 8) == 0) || (uVar8 = 0x24, 5 < *(byte *)(param_1 + 0x78))) {
      uVar8 = 0x22;
    }
    FUN_80054d14(param_1,uVar8,0);
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    uVar1 = *(undefined2 *)(&DAT_800a4694 + *(short *)(param_1 + 0x40) * 2);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(undefined2 *)(param_1 + 0x58) = uVar1;
    FUN_8005b20c();
    return;
  case 6:
    sVar3 = *(short *)(param_1 + 0x40) + 1;
    *(short *)(param_1 + 0x40) = sVar3;
    if (10 < sVar3) {
      *(undefined2 *)(param_1 + 0x40) = 10;
    }
    *(undefined2 *)(param_1 + 0x58) =
         *(undefined2 *)(&DAT_800a4694 + *(short *)(param_1 + 0x40) * 2);
    if (*(short *)(param_1 + 0x42) == 0) {
      FUN_8005b20c(param_1,1);
      sVar3 = 5;
      if (((*(byte *)(param_1 + 0x14a) & 8) != 0) && (*(byte *)(param_1 + 0x78) < 6)) {
        sVar3 = 6;
      }
      if (*(short *)(*(int *)(param_1 + 0x38) + 2) == sVar3) {
        FUN_80074590(0x21,0,0);
        if (*(byte *)(param_1 + 0x78) < 5) {
          puVar9[5] = 1;
        }
        else {
          puVar9[5] = 3;
          puVar9[6] = 0;
        }
        *(undefined2 *)(param_1 + 0x42) = 1;
        *(undefined1 *)(param_1 + 0x78) = 0;
      }
    }
    iVar4 = FUN_80076d68(param_1);
    if (iVar4 == 1) {
      FUN_80054d14(param_1,*(byte *)(param_1 + 0x46) + 1,0);
      *(undefined1 *)(param_1 + 0x145) = 1;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined1 *)(param_1 + 0x144) = 0;
      *(undefined1 *)(param_1 + 0x148) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined1 *)(param_1 + 7) = 1;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    break;
  case 7:
    FUN_80055e28(param_1,0);
    FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_80076d68(param_1);
    if ((1 < *(ushort *)(*(int *)(param_1 + 0x38) + 2)) &&
       (sVar3 = *(short *)(param_1 + 0x58) + 0x200, *(short *)(param_1 + 0x58) = sVar3,
       0xfff < sVar3)) {
      *(undefined2 *)(param_1 + 0x58) = 0x1000;
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 6) = 1;
      FUN_80054d14(param_1,0x15,3);
    }
    FUN_800574e0(param_1,8);
    FUN_80057c08(param_1,0);
    return;
  case 8:
    iVar4 = FUN_80076d68(param_1);
    if ((iVar4 == 1) || (puVar9[2] == '\x1b')) {
      iVar4 = FUN_80053bf8(param_1,0);
      if (iVar4 != 0) {
        FUN_80055d5c(param_1);
        FUN_80053bf8(param_1,1);
      }
      *(undefined1 *)(param_1 + 0x144) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    FUN_80055e28(param_1,1);
    iVar4 = FUN_8005b5e4(puVar9);
    goto joined_r0x8005bf5c;
  case 9:
    FUN_80076d68(param_1);
    FUN_80055e28(param_1,1);
    if ((*(short *)(param_1 + 0x16e) == *(short *)(param_1 + 0x170)) &&
       (iVar4 = FUN_80055824(), iVar4 != 0)) {
      *(char *)(param_1 + 0x14a) = *(char *)(param_1 + 0x147) + '\x02';
      iVar4 = FUN_8005b5e4(puVar9);
      if ((iVar4 == 2) || (iVar4 == 4)) {
        uVar2 = 5;
        if (iVar4 == 4) {
LAB_8005bf24:
          *(undefined1 *)(param_1 + 0x78) = uVar2;
        }
        else if (*(char *)(param_1 + 0x78) != '\t') {
          uVar2 = 1;
          goto LAB_8005bf24;
        }
        puVar9[6] = puVar9[6] + '\x01';
        cVar5 = '\x03';
      }
      else {
        cVar5 = *(char *)(param_1 + 6) + '\x01';
      }
      *(char *)(param_1 + 6) = cVar5;
    }
    iVar4 = FUN_8005b5e4(puVar9);
joined_r0x8005bf5c:
    uVar8 = 2;
    if (iVar4 < 3) {
      uVar8 = 0;
    }
    FUN_8005b370(param_1,uVar8);
    FUN_800551c4(param_1);
    *(undefined1 *)(param_1 + 0x29) = 1;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    iVar4 = FUN_80049280(param_1,0,(int)*(short *)(param_1 + 0x62));
    if (iVar4 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
    return;
  case 10:
    FUN_80074590(0x20,0,0);
    FUN_80054d14(param_1,*(byte *)(param_1 + 0x46) + 1,0);
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    puVar9[5] = 2;
    puVar9[6] = 0;
    *(undefined1 *)(param_1 + 0x78) = 0;
    iVar4 = FUN_8005b5e4(puVar9);
    if (iVar4 == 3) {
      *(undefined1 *)(param_1 + 6) = 0xc;
      *(undefined2 *)(param_1 + 0x4a) = 0xcd00;
      return;
    }
    if (puVar9[2] == '\x13') {
      *puVar9 = 0xb;
    }
    else {
      *puVar9 = 3;
    }
    *(undefined2 *)(param_1 + 0x4a) = 0xc500;
  case 0xb:
    FUN_80055e28(param_1,1);
    FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,1);
    if (*(char *)(param_1 + 0x145) == '\x02') {
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 6) = 1;
      FUN_80054d14(param_1,0x15,3);
    }
    break;
  case 0xc:
    FUN_80055e28(param_1,1);
    FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,1);
    if (*(char *)(param_1 + 0x145) == '\x02') {
      FUN_80054d14(param_1,0x26,0);
      *(undefined1 *)(param_1 + 5) = 0x10;
      *(undefined1 *)(param_1 + 6) = 5;
      *(undefined2 *)(param_1 + 0x58) = 0x20;
    }
    break;
  default:
    goto switchD_8005b678_default;
  }
  FUN_800551c4(param_1);
switchD_8005b678_default:
  return;
}

