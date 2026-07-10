// FUN_8006dcf4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006dcf4(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x74) & 4) != 0) goto LAB_8006ded8;
  if ((DAT_800e7ee1 == 0) || (iVar2 = 0x300, (DAT_800e7ee1 & 1) != 0)) {
    switch(DAT_800e7fe4) {
    case 0:
    case 4:
      iVar2 = 0x140;
      if (DAT_800e7fc5 != '\0') {
        uVar3 = (uint)_DAT_800e7eca;
        if ((short)_DAT_800e7eca < 0) {
          uVar3 = -uVar3;
        }
        if (DAT_800e7fe5 == '\0') {
          iVar2 = uVar3 - 0x3a80;
        }
        else {
          iVar2 = uVar3 - 0x4000;
        }
        iVar2 = 0x140 - ((iVar2 << 0x10) >> 0x15);
      }
      break;
    case 1:
    case 0xb:
      iVar2 = 700;
      if ((*(char *)(_DAT_800e7fd8 + 0xc) == '\x04') &&
         (iVar2 = 0x44c, *(char *)(_DAT_800e7fd8 + 2) == '\0')) goto switchD_8006dd4c_caseD_3;
      break;
    default:
      return;
    case 3:
switchD_8006dd4c_caseD_3:
      iVar2 = 700;
      break;
    case 9:
      iVar2 = -0x140;
      break;
    case 0xc:
      iVar2 = (uint)_DAT_800e7eb2 - (uint)_DAT_1f800202;
      if (500 < iVar2 * 0x10000 >> 0x10) {
        iVar2 = 500;
      }
    }
  }
  iVar4 = (((_DAT_1f8000d4 >> 0x10) + iVar2) - (uint)*(ushort *)(param_1 + 0x26)) -
          (uint)_DAT_1f8000e2;
  if ((iVar4 + 10U & 0xffff) < 0x15) {
    _DAT_1f8000d4 =
         CONCAT22(*(ushort *)(param_1 + 0x26) + (_DAT_1f8000e2 - (short)iVar2),_DAT_1f8000d4);
    *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 2;
  }
  else {
    _DAT_1f8000d4 = _DAT_1f8000d4 - (iVar4 * 0x10000 >> 3);
  }
  if ((*(byte *)(param_1 + 0x74) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x74) & 8) == 0) {
      return;
    }
    bVar1 = *(short *)(param_1 + 0x4a) < _DAT_1f8000d6;
  }
  else {
    bVar1 = _DAT_1f8000d6 < *(short *)(param_1 + 0x4a);
  }
  if (bVar1) {
    return;
  }
  _DAT_1f8000d4 = CONCAT22(*(undefined2 *)(param_1 + 0x4a),_DAT_1f8000d4);
LAB_8006ded8:
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 2;
  return;
}

