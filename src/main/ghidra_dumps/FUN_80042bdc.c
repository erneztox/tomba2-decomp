
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80042bdc(int param_1)

{
  short sVar1;
  short sVar2;
  
  if (*(short *)(param_1 + 0x72) == 0) {
    FUN_8006e1c0(1);
  }
  else {
    DAT_800e806c = 1;
  }
  _DAT_800e8076 = 0x130;
  _DAT_800e8040 = (int)_DAT_1f800160 << 0x10;
  _DAT_800e8044 = (_DAT_1f800162 + -0x8c) * 0x10000;
  _DAT_800e8048 = (int)_DAT_1f800164 << 0x10;
  sVar1 = *(short *)(param_1 + 0x74);
  if (sVar1 != 1) {
    if (sVar1 < 2) {
      sVar2 = 0x180;
      if (sVar1 == 0) {
        sVar2 = 0x240;
      }
      goto LAB_80042cac;
    }
    if (sVar1 != 2) {
      sVar2 = 0x180;
      if (sVar1 == 3) {
        sVar2 = -0x180;
      }
      goto LAB_80042cac;
    }
  }
  sVar2 = 0x180;
LAB_80042cac:
  if ((*(short *)(param_1 + 0x74) < 2) && (DAT_800e7fc7 != '\0')) {
    sVar2 = -sVar2;
  }
  _DAT_800e8078 = sVar2 + _DAT_800e7fc0 + _DAT_800e805a;
  _DAT_800e8074 = *(short *)(param_1 + 0x76);
  if (_DAT_800e8074 == 0) {
    _DAT_800e8074 = 0x480;
  }
  DAT_800e806e = 0;
  return 1;
}

