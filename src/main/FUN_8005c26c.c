
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005c26c(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x14a) & 1;
    FUN_80055284(param_1);
    *(undefined1 *)(param_1 + 0x16a) = 0;
    FUN_80053d0c(param_1);
    FUN_80053bf8(param_1,0);
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
    FUN_80054198(param_1);
    *(undefined2 *)(param_1 + 0x4a) = 0;
    if ((*(char *)(param_1 + 0x78) == '\x04') || (*(char *)(param_1 + 0x78) == '\a')) {
      FUN_8005b370(param_1,0);
      FUN_800551c4(param_1);
      *(undefined1 *)(param_1 + 6) = 2;
      *(undefined1 *)(param_1 + 0x144) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      return;
    }
    *(undefined1 *)(param_1 + 6) = 1;
  case 1:
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,6);
    if ((*(ushort *)(param_1 + 0x17e) & 0x40) != 0) {
      *(undefined1 *)(param_1 + 0x144) = 0;
    }
    iVar5 = FUN_80053bf8(param_1,0);
    if (iVar5 == 0) {
      FUN_80076d68(param_1);
      iVar5 = FUN_80055824();
      if (iVar5 == 0) {
        if (*(char *)(param_1 + 0x29) != '\0') {
          *(undefined2 *)(param_1 + 0x4a) = 0;
          *(undefined1 *)(param_1 + 0x144) = 0;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        }
      }
      else {
        *(undefined1 *)(param_1 + 6) = 3;
        *(undefined1 *)(param_1 + 0x144) = 0;
        *(undefined2 *)(param_1 + 0x4a) = 0;
        *(undefined1 *)(param_1 + 0x145) = 1;
      }
    }
    else {
      FUN_80076d68(param_1);
      if (*(char *)(param_1 + 0x29) != '\0') {
        *(undefined2 *)(param_1 + 0x4a) = 0;
        *(undefined1 *)(param_1 + 0x144) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        FUN_80053bf8(param_1);
      }
    }
    FUN_8005b370(param_1,1);
LAB_8005c7a0:
    FUN_800551c4(param_1);
    break;
  case 2:
    FUN_80076d68(param_1);
    if (*(char *)(param_1 + 0x78) != '\a') {
      FUN_80055e28(param_1,1);
      FUN_80055d5c(param_1);
      if (*(char *)(param_1 + 0x78) == '\x04') {
        FUN_8005b370(param_1,0);
        FUN_800551c4(param_1);
        *(undefined2 *)(param_1 + 0x6a) = 0;
        iVar5 = FUN_80049280(param_1,0,(int)*(short *)(param_1 + 0x62));
        if (iVar5 != 0) {
          *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
        }
      }
      else {
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
        FUN_8005444c(param_1);
        FUN_8005b370(param_1,1);
        FUN_800551c4(param_1);
        FUN_80056c00(param_1,1);
      }
      iVar5 = FUN_80055824();
      if (iVar5 == 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined1 *)(param_1 + 0x145) = 1;
      cVar2 = *(char *)(param_1 + 6) + '\x01';
      goto LAB_8005c884;
    }
    FUN_8005b370(param_1,0);
    goto LAB_8005c7a0;
  case 3:
    FUN_80074590(0x20,0,0);
    *(undefined2 *)(param_1 + 0x58) = 0;
    FUN_80054d14(param_1,*(byte *)(param_1 + 0x46) + 1,0);
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  case 4:
    if (*(char *)(param_1 + 0x78) == '\b') {
      FUN_80055e28(param_1,1);
      FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
      FUN_80056b48(param_1,1);
    }
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,2);
    if (*(char *)(param_1 + 0x78) == '\b') {
      FUN_8005b20c(param_1,0);
    }
    else {
      FUN_8005b370(param_1,1);
    }
    if ((DAT_800bf848 == '\0') &&
       ((iVar4 = FUN_80055824(), iVar4 != 0 || (*(char *)(param_1 + 0x29) != '\0')))) {
      if (*(char *)(param_1 + 0x78) == '\x04') {
        cVar2 = '\x06';
LAB_8005c79c:
        *(char *)(param_1 + 6) = cVar2;
      }
      else {
        iVar4 = FUN_8005c138(param_1,iVar5);
        if (iVar4 == 0) {
          *(undefined1 *)(iVar5 + 4) = 3;
        }
        cVar2 = '\t';
        if (*(char *)(param_1 + 0x78) != '\b') {
          cVar2 = *(char *)(param_1 + 6) + '\x01';
        }
        *(char *)(param_1 + 6) = cVar2;
        *(undefined1 *)(param_1 + 7) = 1;
        *(undefined1 *)(param_1 + 0x78) = 0;
        FUN_80054d14(param_1,0x26,0);
        *(undefined1 *)(param_1 + 0x145) = 1;
        *(undefined1 *)(param_1 + 0x29) = 0;
        *(undefined1 *)(param_1 + 0x144) = 0;
        *(undefined1 *)(param_1 + 0x148) = 0;
        *(undefined2 *)(param_1 + 0x4a) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0x20;
      }
    }
    goto LAB_8005c7a0;
  case 5:
    FUN_80055d5c(param_1);
    FUN_80076d68(param_1);
LAB_8005c7dc:
    sVar3 = *(short *)(param_1 + 0x58) + 0x200;
    *(short *)(param_1 + 0x58) = sVar3;
    if (0xfff < sVar3) {
      *(undefined2 *)(param_1 + 0x58) = 0x1000;
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 6) = 1;
      FUN_80054d14(param_1,0x15,3);
    }
    goto LAB_8005c828;
  case 6:
    FUN_80054d14(param_1,0x24,0);
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    uVar1 = *(undefined2 *)(&DAT_800a4694 + *(short *)(param_1 + 0x40) * 2);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(undefined2 *)(param_1 + 0x58) = uVar1;
    FUN_8005b20c();
    break;
  case 7:
    sVar3 = *(short *)(param_1 + 0x40) + 1;
    *(short *)(param_1 + 0x40) = sVar3;
    if (10 < sVar3) {
      *(undefined2 *)(param_1 + 0x40) = 10;
    }
    *(undefined2 *)(param_1 + 0x58) =
         *(undefined2 *)(&DAT_800a4694 + *(short *)(param_1 + 0x40) * 2);
    if ((*(short *)(param_1 + 0x42) == 0) &&
       (FUN_8005b20c(param_1,1), *(short *)(*(int *)(param_1 + 0x38) + 2) == 6)) {
      FUN_80074590(0x21,0,0);
      *(undefined1 *)(iVar5 + 5) = 3;
      *(undefined1 *)(iVar5 + 6) = 0;
      *(undefined2 *)(param_1 + 0x42) = 1;
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
    iVar5 = FUN_80076d68(param_1);
    if (iVar5 != 1) goto LAB_8005c7a0;
    FUN_80054d14(param_1,*(byte *)(param_1 + 0x46) + 1,0);
    *(undefined1 *)(param_1 + 0x145) = 1;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x144) = 0;
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    cVar2 = *(char *)(param_1 + 6) + '\x01';
    goto LAB_8005c79c;
  case 8:
    FUN_80055d5c(param_1);
    FUN_80076d68(param_1);
    if (1 < *(ushort *)(*(int *)(param_1 + 0x38) + 2)) goto LAB_8005c7dc;
LAB_8005c828:
    FUN_800574e0(param_1,8);
    FUN_80057c08(param_1,0);
    break;
  case 9:
    FUN_80055d5c(param_1);
    FUN_80076d68(param_1);
    sVar3 = *(short *)(param_1 + 0x58) + 0x200;
    *(short *)(param_1 + 0x58) = sVar3;
    if (sVar3 < 0x1000) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 3;
    cVar2 = '\a';
    *(undefined2 *)(param_1 + 0x58) = 0;
LAB_8005c884:
    *(char *)(param_1 + 6) = cVar2;
  }
  return;
}

