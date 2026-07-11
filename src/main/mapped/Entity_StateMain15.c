/**
 * @brief Entity state main variant 15: mega state machine (458L)
 * @note Original: func_80060C60 at 0x80060C60
 */
// Entity_StateMain15



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80060c60(undefined1 *param_1)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  DAT_1f80027b = '\0';
  switch(param_1[6]) {
  case 0:
    DAT_1f80027b = '\x01';
    param_1[0x146] = 4;
    param_1[7] = 0;
    param_1[0x166] = 0;
    param_1[0x167] = 5;
    param_1[6] = param_1[6] + '\x01';
    _DAT_1f800238 = 0;
    if (DAT_1f80027c == 1) {
      param_1[0x168] = 0xf;
      *(undefined2 *)(param_1 + 0x4e) = 0x240;
      *(undefined2 *)(param_1 + 0x44) = 0xe;
    }
    else if ((DAT_1f80027c < 2) && (DAT_1f80027c == 0)) {
      param_1[0x168] = 0xf;
      *(undefined2 *)(param_1 + 0x4e) = 0x400;
      *(undefined2 *)(param_1 + 0x44) = 0x18;
    }
    else {
      param_1[0x168] = 0;
      *(undefined2 *)(param_1 + 0x4e) = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
    }
    cVar1 = param_1[0x164];
    if (((cVar1 == '\x01') || (cVar1 == '\t')) || (cVar1 == '\v')) {
      param_1[0x147] = '\x01' - param_1[0x147];
      FUN_80055284(param_1);
      FUN_80053d0c(param_1);
      *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x4e);
      FUN_80063b94(param_1,2);
    }
    FUN_80053d90(param_1);
    if (param_1[0x145] != '\0') {
      *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x4e);
      FUN_80063b94(param_1,2);
    }
    _DAT_1f800178 = *(ushort *)(param_1 + 0x56);
    DAT_1f800237 = param_1[0x147];
    FUN_800597ac(param_1);
    iVar11 = *(int *)(param_1 + 0xdc);
    iVar10 = (int)(((uint)_DAT_1f800200 - (uint)*(ushort *)(iVar11 + 0x2c)) * 0x10000) >> 0x10;
    iVar12 = (int)(((uint)_DAT_1f800204 - (uint)*(ushort *)(iVar11 + 0x34)) * 0x10000) >> 0x10;
    iVar8 = (int)(((uint)_DAT_1f800202 - (uint)*(ushort *)(iVar11 + 0x30)) * 0x10000) >> 0x10;
    *(ushort *)(param_1 + 0x14c) = *(ushort *)(iVar11 + 0x2c);
    *(undefined2 *)(param_1 + 0x14e) = *(undefined2 *)(iVar11 + 0x30);
    *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(iVar11 + 0x34);
    uVar5 = FUN_80077fb0(iVar10 * iVar10 + iVar12 * iVar12 + iVar8 * iVar8);
    _DAT_1f80020c = (uint)uVar5;
    if (_DAT_1f80020c < 0x80) {
      if (_DAT_1f80020c < 0x30) {
        _DAT_1f80020c = 0x30;
      }
      param_1[6] = 2;
    }
    else {
      if (param_1[0x145] == '\0') {
        sVar7 = uVar5 - 0xc0;
      }
      else {
        sVar7 = uVar5 - 0x60;
      }
      *(short *)(param_1 + 0x42) = sVar7;
      if (*(short *)(param_1 + 0x42) < 0x80) {
        *(undefined2 *)(param_1 + 0x42) = 0x80;
      }
      if (param_1[0x6c] == '\x02') {
        if (700 < *(short *)(param_1 + 0x42)) {
          uVar6 = 700;
LAB_80060f34:
          *(undefined2 *)(param_1 + 0x42) = uVar6;
        }
      }
      else if (0x280 < *(short *)(param_1 + 0x42)) {
        uVar6 = 0x280;
        goto LAB_80060f34;
      }
    }
    param_1[0x169] = 0;
    FUN_80060a80(param_1,1);
    param_1[0x164] = 0xc;
    if (param_1[0x145] != '\0') {
      *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x4e);
    }
    param_1[0x145] = 0;
    if (DAT_1f80027c == 1) {
      if (param_1[0x5f] != 0) {
        if (1 < DAT_1f800253) goto LAB_80061004;
        if (DAT_1f800237 == (param_1[0x5f] & 1)) {
          param_1[6] = 2;
        }
      }
    }
    else if ((DAT_1f80027c < 2) && (DAT_1f80027c == 0)) {
      if ((param_1[0x5f] != 0) && (DAT_1f800237 == (param_1[0x5f] & 1))) {
        param_1[6] = 2;
      }
    }
    else if (1 < DAT_1f800253) {
LAB_80061004:
      param_1[6] = 2;
    }
    break;
  case 1:
    DAT_1f80027b = '\x01';
    _DAT_1f80020c = _DAT_1f80020c - 0x20;
    if ((int)_DAT_1f80020c <= (int)*(short *)(param_1 + 0x42)) {
      _DAT_1f80020c = (int)*(short *)(param_1 + 0x42);
    }
    FUN_800597ac(param_1);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_1 + 0x2e) -
         (*(short *)(*(int *)(param_1 + 0xdc) + 0x2c) - *(short *)(param_1 + 0x14c));
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) -
         (*(short *)(*(int *)(param_1 + 0xdc) + 0x30) - *(short *)(param_1 + 0x14e));
    *(short *)(param_1 + 0x36) =
         *(short *)(param_1 + 0x36) -
         (*(short *)(*(int *)(param_1 + 0xdc) + 0x34) - *(short *)(param_1 + 0x150));
    FUN_80060a80(param_1,1);
    if (DAT_1f80027c == 1) {
      if ((param_1[0x5f] != 0) && ((1 < DAT_1f800253 || (DAT_1f800237 == (param_1[0x5f] & 1))))) {
        *(undefined2 *)(param_1 + 0x42) = _DAT_1f80020c;
      }
    }
    else if ((DAT_1f80027c < 2) && (DAT_1f80027c == 0)) {
      if ((param_1[0x5f] != 0) && (DAT_1f800237 == (param_1[0x5f] & 1))) {
        *(undefined2 *)(param_1 + 0x42) = _DAT_1f80020c;
      }
    }
    else if (1 < DAT_1f800253) {
      *(undefined2 *)(param_1 + 0x42) = _DAT_1f80020c;
    }
    if (_DAT_1f80020c != (int)*(short *)(param_1 + 0x42)) break;
    if (param_1[0x29] == '\0') {
      param_1[7] = 0;
      param_1[0x145] = 0;
      param_1[6] = param_1[6] + '\x01';
      *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x4e);
      FUN_80063b94(param_1,2);
      break;
    }
    goto LAB_800613dc;
  case 2:
    uVar6 = 0x700;
    if (param_1[0x147] == '\0') {
      uVar6 = 0x100;
    }
    *(undefined2 *)(param_1 + 0x14c) = uVar6;
    *(undefined2 *)(param_1 + 0x14e) = 0;
    param_1[6] = param_1[6] + '\x01';
  case 3:
    param_1[0x177] = param_1[0x177] | 1;
    FUN_80076d68(param_1);
    FUN_80055e28(param_1,0);
    iVar10 = 0x700;
    if ((param_1[0x14a] & 1) == 0) {
      iVar10 = 0x100;
    }
    sVar7 = FUN_800776f8(iVar10,(int)*(short *)(param_1 + 0x14c),0x100);
    *(short *)(param_1 + 0x14c) = sVar7;
    if (sVar7 == iVar10) {
      param_1[0x147] = param_1[0x14a] & 1;
      FUN_80055284(param_1);
      *(undefined2 *)(param_1 + 0x14e) = 0;
    }
    else if (param_1[0x147] == '\0') {
      *(short *)(param_1 + 0x14e) = sVar7;
    }
    else {
      *(short *)(param_1 + 0x14e) = sVar7 + -0x800;
    }
    if (param_1[0x29] == '\0') {
      if ((param_1[0x14a] & 4) == 0) {
        if ((param_1[0x14a] & 8) != 0) {
          _DAT_1f80020c = _DAT_1f80020c + 0xc;
          if (param_1[0x6c] == '\x02') {
            if (700 < (int)_DAT_1f80020c) {
              _DAT_1f80020c = 700;
            }
          }
          else if (0x280 < (int)_DAT_1f80020c) {
            _DAT_1f80020c = 0x280;
          }
        }
      }
      else if (DAT_1f800253 < 2) {
        uVar9 = _DAT_1f80020c - 4;
        if (0x2f < (int)_DAT_1f80020c) {
          uVar9 = _DAT_1f80020c - 0xc;
        }
        _DAT_1f80020c = uVar9;
        if ((int)uVar9 < 0) {
          _DAT_1f80020c = 0;
        }
      }
    }
    bVar2 = (int)_DAT_1f80020c < 0x30;
    if (bVar2) {
      param_1[0x168] = 0;
      param_1[0x169] = 0;
    }
    FUN_80060544(param_1,bVar2);
    FUN_80060a80(param_1,0);
    if ((((param_1[0x146] == '\0') || (DAT_1f80023a == '\0')) || (_DAT_1f80020c != 0)) ||
       (param_1[0x167] != '\x04')) {
      if (param_1[0x29] != '\0') {
LAB_800613dc:
        FUN_8005314c(param_1);
        param_1[0x146] = 0;
        param_1[0x145] = 0;
      }
    }
    else {
      param_1[0x169] = 0;
      *param_1 = 2;
      param_1[6] = param_1[6] + '\x01';
      DAT_1f80027b = '\x02';
    }
    break;
  case 4:
    DAT_1f80027b = '\x02';
    _DAT_1f80020c = _DAT_1f80020c + 0x20;
    if (400 < (int)_DAT_1f80020c) {
      _DAT_1f80020c = 400;
    }
    FUN_80076d68(param_1);
    uVar9 = *(ushort *)(param_1 + 0x140) + 0x400 & 0xfff;
    sVar7 = FUN_800776f8(uVar9,(int)*(short *)(param_1 + 0x56),0x100);
    *(short *)(param_1 + 0x56) = sVar7;
    if ((int)sVar7 == uVar9) {
      if (DAT_1f800237 == 0) {
        _DAT_1f800178 = _DAT_1f800178 + 0x400;
      }
      else {
        _DAT_1f800178 = _DAT_1f800178 - 0x400;
      }
      _DAT_1f800178 = _DAT_1f800178 & 0xfff;
      DAT_1f800237 = param_1[0x147];
      param_1[6] = param_1[6] + '\x01';
    }
    FUN_80060544(param_1,1);
    FUN_80060a80(param_1,2);
    break;
  case 5:
    DAT_1f80027b = '\x02';
    _DAT_1f80020c = _DAT_1f80020c + 0x20;
    if (400 < (int)_DAT_1f80020c) {
      _DAT_1f80020c = 400;
    }
    FUN_80076d68(param_1);
    FUN_80060544(param_1,2);
    FUN_80060a80(param_1,2);
    if (param_1[0x169] != '\0') {
      param_1[0x164] = 0;
      param_1[0x146] = 0;
      param_1[6] = param_1[6] + '\x01';
      uVar3 = _DAT_1f800204;
      uVar5 = _DAT_1f800200;
      iVar12 = (int)(short)_DAT_1f800200;
      iVar10 = (int)(short)_DAT_1f800204;
      param_1[7] = 0;
      *(ushort *)(param_1 + 0x7a) = uVar5;
      *(undefined2 *)(param_1 + 0x4a) = 0xd800;
      *(undefined2 *)(param_1 + 0x40) = 0xc;
      *(ushort *)(param_1 + 0x7e) = uVar3;
      *(short *)(param_1 + 0x4e) = (short)((iVar12 - *(short *)(param_1 + 0x2e)) / 0xc);
      *(short *)(param_1 + 0x52) = (short)((iVar10 - *(short *)(param_1 + 0x36)) / 0xc);
      FUN_80054d14(param_1,0xe9,0);
      *(undefined2 *)(param_1 + 0x58) = 0;
    }
    break;
  case 6:
    DAT_1f80027b = '\x02';
    FUN_80076d68(param_1);
    FUN_800574e0(param_1,0x11);
    if (param_1[0x29] == '\0') {
LAB_8006160c:
      if (*(short *)(param_1 + 0x40) != 0) {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
        *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + *(short *)(param_1 + 0x4e);
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + *(short *)(param_1 + 0x52);
        if (*(short *)(param_1 + 0x40) != 0) break;
        *param_1 = 3;
        *(undefined2 *)(param_1 + 0x172) = 4;
        *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x7a);
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x7e);
        bVar4 = FUN_80055e28(param_1,0);
        param_1[0x147] = bVar4 & 1;
        FUN_80054198(param_1);
        FUN_80055d5c(param_1);
      }
    }
    else if (*(short *)(param_1 + 0x40) != 0) {
      *(undefined2 *)(param_1 + 0x40) = 1;
      goto LAB_8006160c;
    }
    if (param_1[0x147] == '\0') {
      uVar9 = (uint)*(ushort *)(param_1 + 0x140);
    }
    else {
      uVar9 = *(ushort *)(param_1 + 0x140) + 0x800;
    }
    sVar7 = FUN_800776f8(uVar9 & 0xfff,(int)*(short *)(param_1 + 0x56),0xe0);
    *(short *)(param_1 + 0x56) = sVar7;
    if (((int)sVar7 == (uVar9 & 0xfff)) || (param_1[0x29] != '\0')) {
      if (param_1[0x29] == '\0') {
        *(undefined2 *)(param_1 + 0x40) = 8;
        param_1[6] = param_1[6] + '\x01';
      }
      else {
LAB_800617bc:
        FUN_8005314c(param_1);
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
      }
    }
    break;
  case 7:
    DAT_1f80027b = '\x02';
    FUN_80076d68(param_1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,0x11);
    FUN_80057c08(param_1,1);
    if (param_1[0x164] == '\0') {
      if (*(short *)(param_1 + 0x40) != 0) {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      }
      if ((param_1[0x29] != '\0') || (*(short *)(param_1 + 0x40) == 0)) {
        if (param_1[5] != '\x19') {
          return;
        }
        if (param_1[0x29] == '\0') {
          *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x4a);
          FUN_80056d44(param_1,0);
          *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x50);
          break;
        }
        goto LAB_800617bc;
      }
    }
  }
  if (param_1[5] != '\x19') {
    return;
  }
  if ((DAT_1f80027b != '\x02') && (param_1[0x146] == '\0')) {
    param_1[0x164] = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    FUN_80054198(param_1);
    if (param_1[0x29] == '\0') {
LAB_800618dc:
      FUN_80056d44(param_1,0);
      return;
    }
    param_1[5] = 0;
LAB_8006196c:
    param_1[6] = 0;
    param_1[7] = 0;
    return;
  }
  if (DAT_1f80027b != '\0') {
    return;
  }
  iVar10 = FUN_80055864();
  if (iVar10 == 0) {
    return;
  }
  FUN_80055e28(param_1,0);
  param_1[0x164] = 0;
  param_1[0x146] = 0;
  if (DAT_1f800237 == param_1[0x147]) {
    bVar4 = param_1[0x167] & 1;
  }
  else {
    bVar4 = param_1[0x167] & 1 ^ 1;
  }
  if (3 < (byte)param_1[0x167]) {
    *(undefined2 *)(param_1 + 0x44) = 0;
    param_1[0x146] = 0;
    param_1[0x164] = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    FUN_80054198(param_1);
    if (param_1[0x29] != '\0') {
      param_1[5] = 0;
      goto LAB_8006196c;
    }
    if ((int)_DAT_1f80020c < 0x41) goto LAB_800618dc;
    if ((int)_DAT_1f80020c < 200) {
      FUN_80055f48(param_1,0);
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) >> 1;
    }
    else {
      FUN_80055f48(param_1,0);
    }
    FUN_80074590(0x1d,0,0);
    param_1[5] = 2;
    param_1[0x181] = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    param_1[6] = 1;
    param_1[7] = 0;
    param_1[0x145] = 1;
    goto LAB_80061a60;
  }
  if (bVar4 == 0) {
LAB_800619b8:
    uVar6 = 0xe000;
    if (param_1[0x147] == '\0') {
      uVar6 = 0x2000;
    }
  }
  else {
    iVar10 = (int)*(short *)(param_1 + 0x58);
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    if (0xdf < iVar10) goto LAB_800619b8;
    uVar6 = 0xf000;
    if (param_1[0x147] == '\0') {
      uVar6 = 0x1000;
    }
  }
  *(undefined2 *)(param_1 + 0x44) = uVar6;
  if ((DAT_1f800253 < 2) && (0x40 < (int)_DAT_1f80020c)) {
    if ((int)_DAT_1f80020c < 200) {
      FUN_80055f48(param_1,0);
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) >> 1;
    }
    else {
      FUN_80055f48(param_1,0);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x4a) = 0;
  }
  param_1[0x145] = 1;
  param_1[5] = 8;
  param_1[6] = 2;
  param_1[7] = 0;
LAB_80061a60:
  FUN_80054d14(param_1,0x14,4);
  return;
}
