// FUN_8006228c

void FUN_8006228c(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        DAT_800bf80e = 0;
        *(undefined1 *)(param_1 + 0x146) = 0;
        FUN_80053d90(param_1);
        FUN_80054198(param_1);
        FUN_80054d14(param_1,0xdf,4);
        FUN_80074590(0x3a,0,0);
        *(undefined2 *)(param_1 + 0x40) = 0x1e;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_80076d68(param_1);
      FUN_800551c4(param_1);
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) {
        return;
      }
      DAT_800bf80e = 1;
      *(undefined1 *)(param_1 + 4) = 4;
      *(undefined1 *)(param_1 + 5) = 0x20;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x146) = 0;
    FUN_80053d90(param_1);
    FUN_80054198(param_1);
    FUN_80054d14(param_1,0xe0,4);
    FUN_80074590(0x3a,0,0);
    *(undefined1 *)(param_1 + 0x167) = 0x1e;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined2 *)(param_1 + 0x40) = 7;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x147));
  FUN_80076d68(param_1);
  FUN_80056b48(param_1,0);
  FUN_80055d5c(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  FUN_8005444c(param_1);
  if ((*(char *)(param_1 + 0x29) != '\0') &&
     (sVar2 = *(short *)(param_1 + 0x40), *(short *)(param_1 + 0x40) = sVar2 + -1, sVar2 == 1)) {
    FUN_8005a714(param_1);
  }
  FUN_80056c00(param_1,1);
  FUN_800551c4(param_1);
  if (*(char *)(param_1 + 0x167) == '\0') {
    if (*(char *)(param_1 + 0x29) == '\0') {
      FUN_80056d44(param_1,0);
    }
    else {
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x167) = *(char *)(param_1 + 0x167) + -1;
  }
  return;
}

