// FUN_80083f50

int FUN_80083f50(uint param_1)

{
  int iVar1;
  
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  param_1 = param_1 & 0xfff;
  if (param_1 < 0x801) {
    if (param_1 < 0x401) {
      iVar1 = (int)*(short *)(&DAT_800a5af0 + (0x400 - param_1) * 2);
    }
    else {
      iVar1 = -(int)*(short *)(&DAT_800a52f0 + param_1 * 2);
    }
  }
  else if (param_1 < 0xc01) {
    iVar1 = -(int)*(short *)(&DAT_800a5af0 + (0xc00 - param_1) * 2);
  }
  else {
    iVar1 = (int)*(short *)(&DAT_800a42f0 + param_1 * 2);
  }
  return iVar1;
}

