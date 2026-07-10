// FUN_800645e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800645e0(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_80076d68(param_1);
        FUN_80055e28(param_1,1);
        FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
        FUN_80056b48(param_1,1);
        FUN_80055d5c(param_1);
        FUN_800574e0(param_1,0);
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        if (sVar2 == 1) {
          *(undefined1 *)(param_1 + 5) = 2;
          *(undefined1 *)(param_1 + 6) = 1;
        }
        else {
          iVar3 = FUN_80055634(param_1,0);
          if (iVar3 == 0) {
            if (*(char *)(param_1 + 0x29) != '\0') {
              *(undefined1 *)(param_1 + 7) = 0;
              if ((*(byte *)(param_1 + 0x149) & 2) == 0) {
                *(undefined1 *)(param_1 + 5) = 1;
                *(undefined1 *)(param_1 + 6) = 0;
                FUN_80054e80(param_1,1);
              }
              else {
                *(undefined1 *)(param_1 + 5) = 2;
                *(undefined1 *)(param_1 + 6) = 2;
                FUN_80054d14(param_1,0x17,1);
              }
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x144) = 0;
            *(undefined1 *)(param_1 + 6) = 0;
            if (*(char *)(param_1 + 0x29) == '\0') {
              *(undefined1 *)(param_1 + 5) = 6;
            }
            else {
              *(undefined1 *)(param_1 + 5) = 5;
              *(undefined1 *)(param_1 + 7) = 0;
            }
          }
        }
        FUN_800551c4(param_1);
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      func_0x8010aa20(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 7) = 2;
    *(undefined2 *)(param_1 + 0x154) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(char *)(param_1 + 0x14a) = *(char *)(param_1 + 0x147) + '\x02';
    *(char *)(param_1 + 0x149) = *(char *)(param_1 + 0x147) + '\x02';
  }
  iVar3 = FUN_800633b0(param_1,0);
  if ((iVar3 == 0) && (1 < *(byte *)(param_1 + 7))) {
    if ((_DAT_800e7e68 & _DAT_1f800172) == 0) {
      if (((*(char *)(*(int *)(param_1 + 0x158) + 0xc) != '\x05') &&
          (iVar3 = FUN_80055634(param_1,0), iVar3 != 0)) && (*(char *)(param_1 + 5) == '\x04')) {
        FUN_800645cc(param_1);
      }
    }
    else {
      FUN_80064524(param_1);
    }
  }
  return;
}

