// FUN_80040c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80040c00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (_DAT_800e7fee == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = *(char *)(param_1 + -0x7ff4074c);
    if (cVar1 == '\0') {
      _DAT_800bf8a8 = _DAT_800bf8a8 + 1;
      cVar1 = *(char *)(param_1 + -0x7ff4074c);
    }
    if (cVar1 == -1) {
      uVar2 = 0;
    }
    else {
      *(undefined1 *)(param_1 + -0x7ff4074c) = 0xff;
      _DAT_800bf8aa = _DAT_800bf8aa + 1;
      iVar3 = FUN_80040a58(param_1,1);
      _DAT_800bf874 = _DAT_800bf874 + iVar3;
      (&DAT_800ed06e)[DAT_800ed06d] = (char)param_1;
      (&DAT_800ed074)[DAT_800ed06d] = 1;
      uVar2 = 1;
      DAT_800ed06d = DAT_800ed06d + 1;
    }
  }
  return uVar2;
}

