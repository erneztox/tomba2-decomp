
void FUN_8005aee4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1;
  FUN_80055e28(param_1,1);
  FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
  FUN_80056b48(param_1,1);
  FUN_80055d5c(param_1);
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar2 = FUN_80076d68(param_1);
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
        FUN_8005444c(param_1);
        iVar3 = FUN_800532a0(param_1);
        if (((iVar3 == 0) && (iVar4 = FUN_80055390(param_1), iVar4 == 0)) &&
           (iVar3 = FUN_800558b4(param_1), iVar3 == 0)) {
          bVar1 = *(byte *)(param_1 + 0x14a) & 0xe;
          *(byte *)(param_1 + 0x14a) = bVar1;
          *(byte *)(param_1 + 0x14a) = bVar1 | *(byte *)(param_1 + 0x147);
          if ((*(byte *)(param_1 + 0x149) & 2) == 0) {
            *(undefined1 *)(param_1 + 5) = 1;
            *(undefined1 *)(param_1 + 6) = 0;
            FUN_80054e80(param_1,1);
            FUN_800538e0(param_1,param_1 + 0x2c,0);
          }
          else if (iVar2 == 1) {
            *(undefined1 *)(param_1 + 5) = 0;
            *(undefined1 *)(param_1 + 6) = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            if (*(char *)(param_1 + 0x165) == '\0') {
              FUN_80054d14(param_1,2,6);
            }
            else {
              FUN_80054d14(param_1,0x11,2);
            }
          }
        }
        if ((((*(byte *)(param_1 + 0x29) & 0x80) != 0) &&
            (iVar2 = FUN_80055c30(param_1), iVar2 == 0)) && (iVar4 == 0)) {
          FUN_800559f4(param_1);
        }
        FUN_80056c00(param_1,0);
      }
      goto LAB_8005b110;
    }
    if (bVar1 != 0) goto LAB_8005b110;
    FUN_80074590(0x1d,0,0);
    *(undefined2 *)(param_1 + 0x58) = 0;
    FUN_80054d14(param_1,0x14,2);
    if (*(char *)(param_1 + 0x181) == '\0') {
      FUN_800538e0(param_1,param_1 + 0x2c,0);
    }
    else {
      *(undefined1 *)(param_1 + 0x181) = 0;
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  FUN_80076d68(param_1);
  FUN_800574e0(param_1,0);
  FUN_80057c08(param_1,0);
LAB_8005b110:
  FUN_800551c4(param_1);
  return;
}

