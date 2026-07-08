
void FUN_8005d16c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  FUN_80055e28(param_1,0);
  if ((*(byte *)(param_1 + 0x6c) - 1 < 2) && (*(char *)(param_1 + 6) != '\x02')) {
    if ((*(char *)(param_1 + 0x16b) == '\0') && (*(char *)(param_1 + 0x61) == '\0')) {
      FUN_80054650(param_1,0);
    }
    else {
      *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xfb;
    }
  }
  else {
    FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
    FUN_80056b48(param_1,1);
  }
  FUN_80055d5c(param_1);
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0x181) = 0;
      DAT_1f800252 = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined1 *)(param_1 + 0xbf) = 0;
      *(undefined1 *)(param_1 + 0xbe) = 0;
      *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x14a) & 1;
      FUN_800551c4(param_1);
      if (*(char *)(param_1 + 0x175) == '\0') {
        *(undefined1 *)(param_1 + 0x146) = 1;
        FUN_80053670(param_1,0,0);
        FUN_8005490c(param_1,0,0);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      else {
        *(undefined1 *)(param_1 + 0x146) = 2;
        FUN_80053670(param_1,1,0);
        FUN_8005490c(param_1,1,1);
        *(undefined1 *)(param_1 + 6) = 2;
      }
      if (*(byte *)(param_1 + 0x6c) - 1 < 2) {
        return;
      }
      FUN_800574e0(param_1,0);
      return;
    }
    if (bVar1 != 2) {
      return;
    }
    *(undefined1 *)(param_1 + 0x181) = 0;
    FUN_80076d68(param_1);
    FUN_800574e0(param_1,0);
    *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x14a) & 1;
    FUN_8005490c(param_1,1,1);
    FUN_800551c4(param_1);
    if (*(char *)(param_1 + 0x29) == '\0') {
      iVar2 = FUN_80055704(param_1,1);
      if (iVar2 != -1) {
        if (iVar2 != 0) {
          return;
        }
        DAT_1f800252 = 0;
        *(undefined1 *)(param_1 + 0x146) = 3;
        FUN_80053670(param_1,0,8);
        FUN_8005490c(param_1,0,0);
        *(undefined1 *)(param_1 + 0xbe) = 0;
        *(undefined1 *)(param_1 + 6) = 1;
        return;
      }
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 6) = 1;
      goto LAB_8005d510;
    }
    iVar2 = FUN_800532a0(param_1);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 5) = 5;
      *(undefined1 *)(param_1 + 7) = 0;
      *(byte *)(param_1 + 0x149) = *(byte *)(param_1 + 0x149) & 1 | 2;
      return;
    }
    goto LAB_8005d488;
  }
  iVar2 = 0;
  if (*(char *)(param_1 + 0x79) != '\x02') {
    iVar2 = FUN_80076d68(param_1);
  }
  if (*(byte *)(param_1 + 0x6c) - 1 < 2) {
    if (DAT_1f800252 != '\0') {
      if ((*(ushort *)(param_1 + 0x17e) & 0x40) != 0) {
        *(undefined1 *)(param_1 + 0x178) = 0xc;
      }
      goto LAB_8005d368;
    }
  }
  else {
LAB_8005d368:
    FUN_800574e0(param_1,0);
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_8005376c(param_1);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_80055704(param_1,0);
    if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x146) = 2;
      FUN_80053670(param_1,1,0);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      return;
    }
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined1 *)(param_1 + 6) = 1;
LAB_8005d510:
    *(undefined1 *)(param_1 + 0x146) = 0;
    FUN_80054d14(param_1,0x14,2);
    return;
  }
  iVar2 = FUN_800532a0(param_1);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 5) = 5;
    *(byte *)(param_1 + 0x149) = *(byte *)(param_1 + 0x149) & 1 | 2;
    *(undefined1 *)(param_1 + 7) = 0;
    bVar1 = *(byte *)(param_1 + 0x14a) & 0xe;
    *(byte *)(param_1 + 0x14a) = bVar1;
    *(byte *)(param_1 + 0x14a) = bVar1 | *(byte *)(param_1 + 0x147);
    return;
  }
LAB_8005d488:
  *(undefined1 *)(param_1 + 0x146) = 0;
  return;
}

