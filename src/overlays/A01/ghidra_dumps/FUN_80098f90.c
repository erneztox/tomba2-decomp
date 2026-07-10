// FUN_80098f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80098f90(int param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  
  iVar1 = DAT_800ac604;
  param_2 = param_2 & 0xffffff;
  uVar2 = (ushort)param_2;
  uVar3 = (ushort)(param_2 >> 0x10);
  if (param_1 == 0) {
    if ((DAT_800ac5f0 & 1) == 0) {
      *(ushort *)(DAT_800ac604 + 0x18c) = uVar2;
      *(ushort *)(iVar1 + 0x18e) = uVar3;
      DAT_800ac590 = DAT_800ac590 & ~param_2;
    }
    else {
      DAT_800ac5bc = DAT_800ac5bc | 1;
      DAT_800ac5b8 = DAT_800ac5b8 & ~param_2;
      if ((_DAT_80105ec8 & param_2) != 0) {
        _DAT_80105ec8 = _DAT_80105ec8 & (ushort)~param_2;
      }
      _DAT_80105ecc = uVar2;
      _DAT_80105ece = uVar3;
      if (((uint)_DAT_80105eca & param_2 >> 0x10) != 0) {
        _DAT_80105eca = _DAT_80105eca & ~uVar3;
      }
    }
  }
  else if (param_1 == 1) {
    if ((DAT_800ac5f0 & 1) == 0) {
      DAT_800ac590 = DAT_800ac590 | param_2;
      *(ushort *)(DAT_800ac604 + 0x188) = uVar2;
      *(ushort *)(iVar1 + 0x18a) = uVar3;
    }
    else {
      DAT_800ac5bc = DAT_800ac5bc | 1;
      DAT_800ac5b8 = DAT_800ac5b8 | param_2;
      if ((_DAT_80105ecc & param_2) != 0) {
        _DAT_80105ecc = _DAT_80105ecc & ~uVar2;
      }
      _DAT_80105ec8 = uVar2;
      _DAT_80105eca = uVar3;
      if (((uint)_DAT_80105ece & param_2 >> 0x10) != 0) {
        _DAT_80105ece = _DAT_80105ece & ~uVar3;
      }
    }
  }
  return;
}

