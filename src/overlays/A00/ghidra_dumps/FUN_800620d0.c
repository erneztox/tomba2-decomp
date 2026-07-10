// FUN_800620d0

void FUN_800620d0(int param_1)

{
  byte bVar1;
  short sVar2;
  
  FUN_80076d68();
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        DAT_800bf80e = 0;
        *(undefined1 *)(param_1 + 0x146) = 0;
        FUN_80053d90(param_1);
        FUN_80054198(param_1);
        FUN_80054d14(param_1,0xe1,4);
        FUN_80074590(0x39,0,0);
        *(undefined2 *)(param_1 + 0x40) = 0x1e;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        return;
      }
      if (bVar1 != 3) {
        return;
      }
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
    FUN_80054d14(param_1,0xe1,4);
    FUN_80074590(0x39,0,0);
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    FUN_800551c4(param_1);
  }
  FUN_80055d5c(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  FUN_8005444c(param_1);
  FUN_80056c00(param_1,1);
  if (*(short *)(param_1 + 0x40) == 0) {
    if (*(char *)(param_1 + 0x29) == '\0') {
      FUN_80056d44(param_1,0);
    }
    else {
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  else {
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
  }
  return;
}

