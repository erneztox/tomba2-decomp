// FUN_8006c988

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006c988(int param_1)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = _DAT_1f8000d6;
  switch(*(undefined1 *)(param_1 + 0x76)) {
  case 1:
    *(short *)(param_1 + 0x86) = _DAT_1f8000d2;
    *(short *)(param_1 + 0x88) = _DAT_1f8000d6;
    sVar1 = _DAT_1f8000da;
    *(undefined1 *)(param_1 + 0x76) = 2;
    *(short *)(param_1 + 0x8a) = sVar1;
    break;
  case 2:
    uVar2 = FUN_8009a450();
    _DAT_1f8000d2 = *(short *)(param_1 + 0x86) + -0x10 + (uVar2 & 0x1f);
    uVar2 = FUN_8009a450();
    _DAT_1f8000da = *(short *)(param_1 + 0x8a) + -0x10 + (uVar2 & 0x1f);
    uVar2 = FUN_8009a450();
    _DAT_1f8000d6 = *(short *)(param_1 + 0x88) + -8 + (uVar2 & 0xf);
    FUN_800521f4(0,0,0x81,2);
    break;
  case 3:
    _DAT_1f8000d2 = *(short *)(param_1 + 0x86);
    _DAT_1f8000d6 = *(short *)(param_1 + 0x88);
    _DAT_1f8000da = *(short *)(param_1 + 0x8a);
    goto LAB_8006cb90;
  case 4:
    *(undefined1 *)(param_1 + 0x76) = 5;
    *(short *)(param_1 + 0x88) = sVar1;
    break;
  case 5:
    uVar2 = FUN_8009a450();
    _DAT_1f8000d6 = *(short *)(param_1 + 0x88) + -0x20 + (uVar2 & 0x3f);
    FUN_800521f4(0,0,0xf1,2);
    break;
  case 6:
    *(undefined1 *)(param_1 + 0x76) = 7;
    *(short *)(param_1 + 0x88) = sVar1;
  case 7:
    if (*(char *)(param_1 + 100) == '\0') {
      uVar2 = FUN_8009a450();
      uVar2 = uVar2 & 0x3f;
      _DAT_1f8000d6 = *(short *)(param_1 + 0x88) + -0x20;
LAB_8006cb84:
      _DAT_1f8000d6 = _DAT_1f8000d6 + uVar2;
      FUN_800521f4(0,0,0x81,2);
    }
LAB_8006cb90:
    *(undefined1 *)(param_1 + 0x76) = 0;
    break;
  case 8:
    *(undefined1 *)(param_1 + 0x76) = 9;
    *(short *)(param_1 + 0x88) = sVar1;
  case 9:
    if (*(char *)(param_1 + 100) == '\0') {
      uVar2 = FUN_8009a450();
      uVar2 = uVar2 & 0x1f;
      _DAT_1f8000d6 = *(short *)(param_1 + 0x88) + -0x10;
      goto LAB_8006cb84;
    }
    goto LAB_8006cb90;
  }
  return;
}

