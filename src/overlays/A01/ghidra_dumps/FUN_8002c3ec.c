// FUN_8002c3ec

void FUN_8002c3ec(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    sVar2 = FUN_8009a450();
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0x50) = 0x101010;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(short *)(param_1 + 0x4c) = *(short *)(param_1 + 0x4c) + sVar2;
  }
  if (*(byte *)(param_1 + 7) < 0x11) {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
    switch(*(undefined1 *)(param_1 + 7)) {
    case 0:
      *(undefined **)(param_1 + 0x54) = &DAT_800a0700;
      break;
    case 1:
      *(undefined **)(param_1 + 0x54) = &DAT_800a06dc;
      break;
    case 2:
      *(undefined **)(param_1 + 0x54) = &DAT_800a06b8;
      break;
    case 3:
      *(undefined **)(param_1 + 0x54) = &DAT_800a0694;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x58) = 1;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x58) = 2;
      break;
    default:
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    FUN_8002b278(param_1);
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  return;
}

