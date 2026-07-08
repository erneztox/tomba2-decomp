
void FUN_80061c64(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  FUN_80076d68();
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    FUN_80055e28(param_1,1);
    FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,0);
    iVar4 = FUN_80057a68(param_1);
    if (iVar4 != 0) goto LAB_800620b0;
    if (DAT_800bf848 == '\0') {
      if (*(char *)(param_1 + 0x29) != '\0') {
        *(undefined1 *)(param_1 + 7) = 0;
        iVar4 = FUN_800532a0(param_1);
        if (iVar4 == 0) {
          *(undefined2 *)(param_1 + 0x50) = 0;
          *(undefined1 *)(param_1 + 0x148) = 0;
          *(undefined1 *)(param_1 + 0x29) = 0;
          *(undefined2 *)(param_1 + 0x58) = 0;
          *(undefined1 *)(param_1 + 0x145) = 1;
          *(undefined2 *)(param_1 + 0x4a) = 0xe400;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          FUN_80054d14(param_1,0xe6,2);
        }
        else {
          *(undefined1 *)(param_1 + 0x145) = 0;
        }
      }
      goto LAB_800620b0;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        FUN_80055e28(param_1,1);
        FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
        FUN_80056b48(param_1,1);
        FUN_80055d5c(param_1);
        FUN_800574e0(param_1,0);
        iVar4 = FUN_80057a68(param_1);
        if (iVar4 == 0) {
          iVar4 = FUN_80055634(param_1,0);
          if (iVar4 == 0) {
            if (*(char *)(param_1 + 0x145) == '\x02') {
              FUN_80054d14(param_1,0xe5,4);
              *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
            }
          }
          else {
            *(undefined1 *)(param_1 + 5) = 6;
            *(undefined1 *)(param_1 + 6) = 0;
          }
        }
      }
      goto LAB_800620b0;
    }
    if (bVar1 == 2) {
      FUN_80055e28(param_1,1);
      FUN_80055fbc(param_1,*(byte *)(param_1 + 0x14a) | 2);
      FUN_80056b48(param_1,1);
      FUN_80055d5c(param_1);
      uVar2 = *(short *)(param_1 + 0x4a) + 0x500;
      *(ushort *)(param_1 + 0x4a) = uVar2;
      if (0 < (int)((uint)uVar2 << 0x10)) {
        *(undefined1 *)(param_1 + 0x145) = 2;
        *(undefined1 *)(param_1 + 0x144) = 1;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      FUN_800541f4(param_1,1);
      FUN_80056c00(param_1,1);
      if (DAT_800bf848 == '\0') goto LAB_800620b0;
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_800620b0;
      FUN_80055e28(param_1,1);
      FUN_80055fbc(param_1,*(byte *)(param_1 + 0x14a) | 2);
      FUN_80056b48(param_1,1);
      FUN_80055d5c(param_1);
      sVar3 = *(short *)(param_1 + 0x4a) + 0x500;
      *(short *)(param_1 + 0x4a) = sVar3;
      if (0x3e00 < sVar3) {
        *(undefined2 *)(param_1 + 0x4a) = 0x3e00;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      FUN_8005444c(param_1);
      FUN_80056c00(param_1,1);
      if (DAT_800bf848 == '\0') {
        if (*(char *)(param_1 + 0x29) == '\0') {
          if (0x2fff < *(short *)(param_1 + 0x4a)) {
            *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x4a);
            FUN_80056d44(param_1,0);
            *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x50);
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x145) = 0;
          *(undefined2 *)(param_1 + 0x4a) = 0;
          *(undefined1 *)(param_1 + 0x148) = 0;
          *(undefined2 *)(param_1 + 0x50) = 0;
          if (*(byte *)(param_1 + 0x144) < 2) {
            *(undefined1 *)(param_1 + 0x144) = 0;
          }
          local_1c = *(undefined4 *)(param_1 + 0x30);
          if (*(char *)(param_1 + 0x147) == '\0') {
            local_20 = *(short *)(param_1 + 0x48) * -0x2800;
            local_18 = *(short *)(param_1 + 0x4c) * -0x2800;
          }
          else {
            local_20 = *(short *)(param_1 + 0x48) * 0x2800;
            local_18 = *(short *)(param_1 + 0x4c) * 0x2800;
          }
          local_20 = *(int *)(param_1 + 0x2c) + local_20;
          local_18 = *(int *)(param_1 + 0x34) + local_18;
          FUN_800538e0(param_1,&local_20,0);
          FUN_8005314c(param_1);
          if ((*(byte *)(param_1 + 0x149) & 2) == 0) {
            *(undefined1 *)(param_1 + 5) = 1;
          }
          else {
            FUN_80054198(param_1);
            *(undefined1 *)(param_1 + 5) = 0;
          }
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 7) = 0;
        }
        goto LAB_800620b0;
      }
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
    *(undefined1 *)(param_1 + 5) = 2;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0x144) = 0;
LAB_800620b0:
  FUN_800551c4(param_1);
  return;
}

