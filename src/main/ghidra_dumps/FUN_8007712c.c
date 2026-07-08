
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8007712c(int param_1,short param_2,short param_3,short param_4)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = FUN_80077fb0((int)param_2 * (int)param_2 + (int)param_3 * (int)param_3 +
                       (int)param_4 * (int)param_4);
  uVar4 = uVar4 & 0xffff;
  iVar5 = (int)_DAT_1f8000e8;
  iVar6 = (int)_DAT_1f8000ea;
  iVar7 = (int)_DAT_1f8000ec;
  *(undefined1 *)(param_1 + 1) = 0;
  if (DAT_800bf870 == '\x04') {
    _DAT_1f800084 = 2;
  }
  switch(_DAT_1f800084) {
  case 0:
    bVar2 = *(byte *)(param_1 + 0xc);
    if (bVar2 != 4) {
      if (bVar2 < 5) {
        if (bVar2 == 2) {
LAB_8007723c:
          if (uVar4 < 0x200) {
            return 0;
          }
          if (0x1400 < uVar4) {
            return 0;
          }
          iVar5 = iVar5 * param_2 + iVar6 * param_3 + iVar7 * param_4;
          iVar6 = (int)(uVar4 * 0x1000) >> 10;
          if (iVar6 == 0) {
            trap(0x1c00);
          }
          if ((iVar6 == -1) && (iVar5 == -0x80000000)) {
            trap(0x1800);
          }
          bVar3 = iVar5 / iVar6 < 0x370;
          break;
        }
      }
      else {
        if (bVar2 == 5) {
          bVar3 = uVar4 < 0x200;
          goto LAB_80077544;
        }
        if (bVar2 == 9) goto LAB_8007723c;
      }
      if (uVar4 < 0x200) {
        return 0;
      }
      bVar3 = uVar4 < 0x1801;
      goto LAB_80077550;
    }
    if (uVar4 < 0x200) {
      return 0;
    }
    if (0x1c00 < uVar4) {
      return 0;
    }
    iVar5 = iVar5 * param_2 + iVar6 * param_3 + iVar7 * param_4;
    iVar6 = (int)(uVar4 * 0x1000) >> 10;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    if ((iVar6 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    bVar3 = iVar5 / iVar6 < 0x358;
    break;
  case 1:
    if (uVar4 < 0x200) {
      return 0;
    }
    if (0x1c00 < uVar4) {
      return 0;
    }
    iVar5 = iVar5 * param_2 + iVar6 * param_3 + iVar7 * param_4;
    iVar6 = (int)(uVar4 * 0x1000) >> 10;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    if ((iVar6 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    bVar3 = iVar5 / iVar6 < 0x358;
    break;
  case 2:
    if (uVar4 < 0x300) {
      return 0;
    }
    if (0x1000 < uVar4) {
      return 0;
    }
    iVar5 = iVar5 * param_2 + iVar6 * param_3 + iVar7 * param_4;
    iVar6 = (int)(uVar4 * 0x1000) >> 10;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    if ((iVar6 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    bVar3 = iVar5 / iVar6 < 0x370;
    break;
  case 3:
    if (uVar4 < 0x200) {
      return 0;
    }
    if (0x1000 < uVar4) {
      return 0;
    }
    iVar5 = iVar5 * param_2 + iVar6 * param_3 + iVar7 * param_4;
    iVar6 = (int)(uVar4 * 0x1000) >> 10;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    if ((iVar6 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    bVar3 = iVar5 / iVar6 < 0x350;
    break;
  case 4:
    bVar3 = uVar4 < 0x400;
LAB_80077544:
    if (bVar3) {
      return 0;
    }
    bVar3 = uVar4 < 0x1a01;
LAB_80077550:
    if (!bVar3) {
      return 0;
    }
    iVar5 = iVar5 * param_2 + iVar6 * param_3 + iVar7 * param_4;
    iVar6 = (int)(uVar4 * 0x1000) >> 10;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    if ((iVar6 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    bVar3 = iVar5 / iVar6 < 0x368;
    break;
  default:
    goto switchD_800771f8_default;
  }
  if (bVar3) {
    return 0;
  }
switchD_800771f8_default:
  *(undefined1 *)(param_1 + 1) = 1;
  if (_DAT_1f800080 != 0) {
    return 1;
  }
  bVar2 = *(byte *)(param_1 + 0xc);
  if (bVar2 == 4) {
    if (_DAT_1f800150 < 0x28) {
      _DAT_1f800150 = _DAT_1f800150 + 1;
      piVar1 = (int *)(_DAT_1f800148 + -4);
      _DAT_1f800148 = _DAT_1f800148 + -4;
      *piVar1 = param_1;
    }
  }
  else {
    if (bVar2 < 5) {
      if (bVar2 != 2) {
        return 1;
      }
    }
    else {
      if (bVar2 == 5) {
        if (0x1b < _DAT_1f80015c) {
          return 1;
        }
        piVar1 = (int *)(_DAT_1f800154 + -4);
        _DAT_1f800154 = _DAT_1f800154 + -4;
        *piVar1 = param_1;
        _DAT_1f80015c = _DAT_1f80015c + 1;
        return 1;
      }
      if (bVar2 != 9) {
        return 1;
      }
    }
    if (_DAT_1f800144 < 0x18) {
      _DAT_1f800144 = _DAT_1f800144 + 1;
      piVar1 = (int *)(_DAT_1f80013c + -4);
      _DAT_1f80013c = _DAT_1f80013c + -4;
      *piVar1 = param_1;
    }
  }
  return 1;
}

