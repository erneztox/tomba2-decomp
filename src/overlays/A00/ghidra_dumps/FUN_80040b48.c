// FUN_80040b48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80040b48(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_800e7fee == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if (*(char *)(param_1 + -0x7ff4074c) == '\0') {
      *(undefined1 *)(param_1 + -0x7ff4074c) = 1;
      _DAT_800bf8a8 = _DAT_800bf8a8 + 1;
      iVar2 = FUN_80040a58(param_1,0);
      _DAT_800bf874 = _DAT_800bf874 + iVar2;
      (&DAT_800ed06e)[DAT_800ed06d] = (char)param_1;
      (&DAT_800ed074)[DAT_800ed06d] = 0;
      uVar1 = 1;
      DAT_800ed06d = DAT_800ed06d + 1;
    }
  }
  return uVar1;
}

