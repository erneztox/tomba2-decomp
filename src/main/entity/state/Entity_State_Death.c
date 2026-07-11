/**
 * @brief Entity death state: entity[6] switch, death animation
 * @note Original: func_80066878 at 0x80066878
 */
// Entity_State_Death



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80066878(int param_1)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    FUN_80074590(0x24,0,0);
    DAT_800bf80d = 1;
    *(undefined1 *)(param_1 + 0x145) = 0;
    *(undefined1 *)(param_1 + 0x146) = 0;
    FUN_80053d90(param_1);
    *(undefined1 *)(param_1 + 0x61) = 0;
    FUN_800663a8(param_1,0);
  case 1:
    FUN_80066478(param_1);
    *(undefined1 *)(param_1 + 0x144) = 0;
    break;
  case 2:
    FUN_80066538(param_1);
    *(undefined1 *)(param_1 + 0x144) = 0;
    if (*(char *)(param_1 + 0x29) == '\0') {
      uVar2 = *(ushort *)(param_1 + 0x6a) & 0xf00;
      if (((int)*(short *)(param_1 + 0x6a) & 0x8000U) == 0) {
        if (0x28 < *(short *)(param_1 + 0x40)) {
          *(undefined1 *)(param_1 + 5) = 7;
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 7) = 0;
        }
      }
      else if ((uVar2 == 0x100) || (uVar2 == 0x200)) {
        *(undefined1 *)(param_1 + 5) = 4;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      else if (uVar2 == 0x700) {
        *(undefined2 *)(param_1 + 0x40) = 3;
        *(undefined1 *)(param_1 + 5) = 5;
        *(undefined1 *)(param_1 + 6) = 1;
        *(undefined1 *)(param_1 + 7) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x145) = 0;
      uVar4 = FUN_8009a450();
      if ((uVar4 & 3) == 0) {
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined1 *)(param_1 + 6) = 7;
        FUN_80054d14(param_1,0xd1,4);
        DAT_800e806c = 8;
        _DAT_800e8042 = _DAT_1f800160;
        _DAT_800e8046 = _DAT_1f800162;
        _DAT_800e804a = _DAT_1f800164;
      }
      else {
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        FUN_80054d14(param_1,0x5a,0);
        if (*(short *)(param_1 + 0x17e) < 0) {
          *(undefined2 *)(param_1 + 0x62) = 0x20;
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x26;
        }
        else {
          *(undefined2 *)(param_1 + 0x62) = 0x40;
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x4c;
        }
      }
    }
    break;
  case 3:
    if (*(short *)(param_1 + 0x40) == 0) {
      uVar2 = *(short *)(param_1 + 0x58) - 0x200;
      *(ushort *)(param_1 + 0x58) = uVar2;
      if ((int)((uint)uVar2 << 0x10) < 0) {
        *(undefined2 *)(param_1 + 0x42) = 1;
      }
    }
    else {
      *(ushort *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) - 0x200U & 0xfff;
    }
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    FUN_8005444c(param_1);
    if (*(short *)(param_1 + 0x40) == 0) {
      if (*(short *)(param_1 + 0x42) == 1) {
        *(undefined2 *)(param_1 + 0x58) = 0;
        FUN_80054d14(param_1,0x58,4);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        FUN_8005245c();
        uVar3 = 0x8c;
        if (*(short *)(param_1 + 0x17e) < 0) {
          uVar3 = 0x46;
        }
        *(undefined2 *)(param_1 + 0x62) = uVar3;
        if (*(char *)(param_1 + 0x29) == '\0') {
          *(undefined2 *)(param_1 + 0x40) = 0x32;
        }
        else {
          *(undefined2 *)(param_1 + 0x40) = 0x78;
          FUN_800331d8(param_1,*(undefined4 *)(param_1 + 0xc4),0xffffff9c,0);
          *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 0x40;
          FUN_80074590(0x10,0,0);
        }
        DAT_800e806c = 8;
        _DAT_800e8042 = _DAT_1f800160;
        _DAT_800e8046 = _DAT_1f800162;
        _DAT_800e804a = _DAT_1f800164;
      }
    }
    else {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      uVar2 = *(ushort *)(param_1 + 0x6a) & 0xf00;
      if (((int)*(short *)(param_1 + 0x6a) & 0x8000U) != 0) {
        if ((uVar2 == 0x100) || (uVar2 == 0x200)) {
          *(undefined1 *)(param_1 + 5) = 4;
          *(undefined1 *)(param_1 + 6) = 1;
        }
        else if (uVar2 == 0x700) {
          *(undefined2 *)(param_1 + 0x40) = 3;
          *(undefined1 *)(param_1 + 5) = 5;
          *(undefined1 *)(param_1 + 6) = 1;
          *(undefined1 *)(param_1 + 7) = 0;
        }
      }
    }
    goto LAB_80066cd8;
  case 4:
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      FUN_800662d8(param_1,0);
      DAT_800bf80d = 2;
      DAT_800bf80f = '\x02';
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      FUN_8005245c();
    }
    FUN_80076d68(param_1);
    FUN_8005444c(param_1);
    if (((DAT_800bf816 == '\0') && (*(char *)(param_1 + 0x29) != '\0')) && (DAT_800bf870 != '\x04'))
    {
      _DAT_1f8000d6 = _DAT_1f8000d6 + -8;
    }
LAB_80066cd8:
    FUN_80056c00(param_1,1);
    break;
  case 5:
    if (DAT_800bf80f == '\0') {
      DAT_800bf80d = 3;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  case 6:
    FUN_80076d68(param_1);
    break;
  case 7:
    FUN_80076d68(param_1);
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x80;
    if (sVar1 == 1) {
      FUN_80054d14(param_1,0xd2,6);
      *(undefined2 *)(param_1 + 0x40) = 0x14;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    break;
  case 8:
    FUN_80076d68(param_1);
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      *(undefined1 *)(param_1 + 6) = 4;
      *(undefined2 *)(param_1 + 0x40) = 0x5a;
      FUN_800331d8(param_1,*(undefined4 *)(param_1 + 0xc4),0xffffff9c,0);
      *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 0x40;
      FUN_80074590(0x10,0,0);
    }
  }
  return;
}
