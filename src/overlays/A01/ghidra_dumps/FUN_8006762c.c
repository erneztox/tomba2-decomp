// FUN_8006762c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006762c(int param_1)

{
  char cVar1;
  short sVar2;
  
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    if (DAT_800bfad7 == '\0') {
      FUN_8006625c(param_1);
    }
  case 0xb:
    FUN_80058304(param_1,2);
    FUN_80053d90(param_1);
    FUN_80074590(0x24,0,0);
    DAT_800bf80d = 1;
    *(undefined1 *)(param_1 + 6) = 6;
    goto switchD_80067664_default;
  case 1:
  case 6:
    _DAT_1f8001a4 = _DAT_1f80019e;
    if (DAT_800bf870 == '\0') {
      func_0x8010caec(param_1);
    }
    else if (DAT_800bf870 == '\x06') {
      if ((_DAT_800bfe56 & 0x40) == 0) {
        FUN_80074590(0x8b,0,0);
      }
      func_0x801147cc(param_1);
    }
    else if (DAT_800bf870 == '\b') {
      func_0x8011370c(param_1);
    }
    else if (DAT_800bf870 == '\r') {
      func_0x8010acc0(param_1);
    }
    else if (DAT_800bf870 == '\x0e') {
      func_0x8010b4f4(param_1);
    }
    *(undefined1 *)(param_1 + 0x145) = 0;
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined1 *)(param_1 + 0x61) = 0;
    FUN_80054198(param_1);
    FUN_80054d14(param_1,0x71,0);
    FUN_800551c4(param_1);
    *(undefined2 *)(param_1 + 0x4a) = 0x2400;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x40) = 10;
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    return;
  case 2:
  case 7:
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      DAT_800e806c = 8;
      _DAT_800e8042 = _DAT_1f800160;
      _DAT_800e8046 = _DAT_1f800162;
      _DAT_800e804a = _DAT_1f800164;
      cVar1 = *(char *)(param_1 + 6);
      *(undefined2 *)(param_1 + 0x40) = 0x14;
code_r0x800678c0:
      *(char *)(param_1 + 6) = cVar1 + '\x01';
    }
    break;
  case 3:
  case 8:
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      FUN_800662d8(param_1,*(char *)(param_1 + 6) == '\b');
      DAT_800bf80d = 2;
      DAT_800bf80f = '\x02';
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      FUN_8005245c();
    }
    break;
  case 4:
  case 9:
    if (DAT_800bf80f == '\0') {
      DAT_800bf80d = 3;
      cVar1 = *(char *)(param_1 + 6);
      goto code_r0x800678c0;
    }
    break;
  case 5:
  case 10:
    break;
  default:
    goto switchD_80067664_default;
  }
  FUN_800674f4(param_1);
  FUN_80076d68(param_1);
switchD_80067664_default:
  return;
}

