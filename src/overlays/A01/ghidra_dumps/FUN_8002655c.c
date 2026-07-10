// FUN_8002655c

void FUN_8002655c(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    FUN_80075cec(0xffffffff);
    FUN_80075cec(0x47ff);
    switch(DAT_1f800236) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 9:
      DAT_1f800236 = 0;
      *(undefined2 *)(param_1 + 8) = 0x1f;
      uVar2 = 8;
      goto LAB_80026630;
    case 5:
    case 6:
      *(undefined2 *)(param_1 + 8) = 0x7f;
      uVar2 = 2;
LAB_80026630:
      *(undefined2 *)(param_1 + 10) = uVar2;
      *(undefined1 *)(param_1 + 3) = 1;
      break;
    case 7:
    case 8:
      DAT_1f800236 = 0;
    case 0:
      *(undefined2 *)(param_1 + 8) = 0x1f;
      *(undefined2 *)(param_1 + 10) = 8;
      *(undefined1 *)(param_1 + 3) = 0;
    }
    FUN_8007e9c8(0xffffff,*(undefined1 *)(param_1 + 3),4);
    FUN_80050970();
    break;
  case 1:
    uVar3 = (int)*(short *)(param_1 + 10) * (int)*(short *)(param_1 + 8) & 0xff;
    FUN_8007e9c8(uVar3 << 0x10 | uVar3 << 8 | uVar3,*(undefined1 *)(param_1 + 3),4);
    sVar1 = *(short *)(param_1 + 8);
    *(short *)(param_1 + 8) = sVar1 + -1;
    if (sVar1 == 1) {
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      DAT_800bf80f = 0;
    }
    break;
  case 2:
    if ((DAT_800bf849 == '\0') && (DAT_800ed06d == '\0')) {
      if (DAT_800bf80f == 2) {
        FUN_80026470();
        *(undefined2 *)(param_1 + 8) = 0x1f;
        *(undefined2 *)(param_1 + 10) = 8;
        *(undefined1 *)(param_1 + 3) = 0;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      }
      else if (DAT_800bf80f == 4) {
        FUN_80026470();
        *(undefined2 *)(param_1 + 8) = 0x1f;
        *(undefined2 *)(param_1 + 10) = 8;
        *(undefined1 *)(param_1 + 3) = 1;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      }
    }
    break;
  case 3:
    uVar3 = *(short *)(param_1 + 8) * -8 & 0xff;
    FUN_8007e9c8(uVar3 << 0x10 | uVar3 << 8 | uVar3,*(undefined1 *)(param_1 + 3),4);
    if ((DAT_800bf80f & 0x80) == 0) {
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + -1;
    }
    if (*(short *)(param_1 + 8) == 0) {
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      DAT_800bf80f = 0;
      FUN_80026510();
    }
    break;
  case 4:
    FUN_8007e9c8(0xffffff,*(undefined1 *)(param_1 + 3),4);
    if (DAT_800bf80f != 0) {
      if (DAT_800bf80f == 1) {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      else if (DAT_800bf80f == 3) {
        *(undefined1 *)(param_1 + 3) = 1;
      }
      FUN_800264bc();
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined2 *)(param_1 + 8) = 0x1f;
      *(undefined2 *)(param_1 + 10) = 8;
    }
  }
  return;
}

