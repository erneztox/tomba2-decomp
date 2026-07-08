
int FUN_80085690(uint param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = (int)param_2 < 0;
  if (bVar1) {
    param_2 = -param_2;
  }
  bVar2 = (int)param_1 < 0;
  if (bVar2) {
    param_1 = -param_1;
  }
  if ((param_2 != 0) || (iVar3 = 0, param_1 != 0)) {
    if ((int)param_1 < (int)param_2) {
      iVar3 = (int)param_2 >> 10;
      if ((param_1 & 0x7fe00000) == 0) {
        iVar4 = (int)(param_1 << 10) / (int)param_2;
        if (param_2 == 0) {
          trap(0x1c00);
        }
        if ((param_2 == 0xffffffff) && (param_1 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar4 = (int)param_1 / iVar3;
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (param_1 == 0x80000000)) {
          trap(0x1800);
        }
      }
      iVar3 = (int)*(short *)(&DAT_800aa490 + iVar4 * 2);
    }
    else {
      iVar3 = (int)param_1 >> 10;
      if ((param_2 & 0x7fe00000) == 0) {
        iVar4 = (int)(param_2 << 10) / (int)param_1;
        if (param_1 == 0) {
          trap(0x1c00);
        }
        if ((param_1 == 0xffffffff) && (param_2 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar4 = (int)param_2 / iVar3;
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (param_2 == 0x80000000)) {
          trap(0x1800);
        }
      }
      iVar3 = 0x400 - *(short *)(&DAT_800aa490 + iVar4 * 2);
    }
    if (bVar1) {
      iVar3 = 0x800 - iVar3;
    }
    if (bVar2) {
      iVar3 = -iVar3;
    }
  }
  return iVar3;
}

