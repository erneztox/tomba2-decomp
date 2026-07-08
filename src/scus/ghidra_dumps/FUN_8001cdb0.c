
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8001cdb0(undefined4 param_1)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  short *psVar7;
  undefined4 *puVar8;
  ushort uStack00000022;
  undefined4 in_stack_00000028;
  byte in_stack_00000030;
  
  if ((_DAT_80039e68 != 0) && ((*DAT_80026cd8 & 0x1000000) != 0)) {
    if (_DAT_80039e90 != 0) {
      _DAT_80039e80 = _DAT_80039e80 + 1;
    }
    DAT_80026d00 = param_1;
    _DAT_80039e6c = param_1;
    uVar3 = FUN_8001cea8();
    return uVar3;
  }
  iVar4 = FUN_80018ff0(param_1,&stack0x00000030);
  if (iVar4 == 5) {
    return 5;
  }
  uStack00000022 = (ushort)in_stack_00000030;
  uVar3 = (uint)uStack00000022;
  while( true ) {
    if ((uVar3 & 4) != 0) {
      DAT_80026d00 = 3;
      uVar3 = FUN_8001cea8();
      return uVar3;
    }
    _DAT_8003c2f8 = _DAT_80039ea0 + _DAT_80039e84 * 0x10;
    if (*_DAT_8003c2f8 != 0) {
      if (_DAT_80039e90 != 0) {
        _DAT_80039e80 = _DAT_80039e80 + 1;
      }
      DAT_80026d00 = 4;
      uVar3 = FUN_8001cea8();
      return uVar3;
    }
    *DAT_80026cb8 = 0;
    *DAT_80026cc4 = 0;
    *DAT_80026cb8 = 0;
    *DAT_80026cc4 = 0x80;
    *DAT_80026cc8 = 0x20943;
    *DAT_80026ccc = 0x1323;
    uVar3 = 0;
    if (_DAT_80039ed8 == 0) {
      do {
        puVar6 = (undefined1 *)((int)&stack0x00000028 + uVar3);
        uVar3 = uVar3 + 1;
        *puVar6 = *DAT_80026cc0;
      } while (uVar3 < 4);
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
      } while (uVar3 < 8);
    }
    if (_DAT_80039e90 != 0) {
      FUN_8001ceb8(_DAT_8003c2f8,_DAT_80039e90 + _DAT_80039e80 * 0x800,8,0);
      uVar3 = FUN_8001c7f4();
      return uVar3;
    }
    puVar8 = (undefined4 *)0x8;
    FUN_8001cee4(3,_DAT_8003c2f8,0);
    puVar2 = DAT_80026cc8;
    uVar3 = *DAT_80026ce8;
    while ((uVar3 & 0x1000000) != 0) {
      uVar3 = *DAT_80026ce8;
    }
    *(undefined4 *)(_DAT_8003c2f8 + 0xe) = in_stack_00000028;
    *puVar2 = 0x20843;
    *DAT_80026ccc = 0x1325;
    if ((_DAT_80039e98 == 1) && (_DAT_80039e74 != 0)) {
      if (_DAT_80039e74 != (ushort)_DAT_8003c2f8[4]) {
        *_DAT_8003c2f8 = 0;
        if (_DAT_80039e90 == 0) {
          return 0;
        }
        _DAT_80039e80 = _DAT_80039e80 + 1;
        uVar3 = FUN_8001cea8();
        return uVar3;
      }
      _DAT_80039e98 = 0;
    }
    if ((*_DAT_8003c2f8 != 0x160) || (((ushort)_DAT_8003c2f8[1] >> 10 & 0x1f) != _DAT_80039e78))
    break;
    if (((int)_DAT_80039e64 != (uint)(ushort)_DAT_8003c2f8[2]) ||
       ((_DAT_80039e60 != 0 && (_DAT_80039e60 != (ushort)_DAT_8003c2f8[4])))) {
      _DAT_80039e60 = 0;
      _DAT_80039e64 = 0;
      FUN_8001c47c(_DAT_80039e88,_DAT_80039e84 - _DAT_80039e88);
      _DAT_80039e84 = _DAT_80039e88;
      *_DAT_8003c2f8 = 0;
      if (_DAT_80039e90 != 0) {
        _DAT_80039e80 = _DAT_80039e80 + 1;
      }
      DAT_80026d00 = 6;
      uVar3 = FUN_8001cea8();
      return uVar3;
    }
    if (_DAT_8003c2f8[2] == 0) {
      _DAT_80039e60 = (uint)(ushort)_DAT_8003c2f8[4];
      _DAT_80039e64 = 0;
      if ((_DAT_80039e94 != 0) && (_DAT_80039e94 <= _DAT_80039e60)) {
        _DAT_80039e60 = 0;
        _DAT_80039e64 = 0;
        FUN_8001c47c(_DAT_80039e88,_DAT_80039e84 - _DAT_80039e88);
        _DAT_80039e84 = _DAT_80039e88;
        *_DAT_8003c2f8 = 0;
        _DAT_80039e98 = 1;
        if (_DAT_8003c2f4 != (code *)0x0) {
          (*_DAT_8003c2f4)();
        }
        if (_DAT_80039e90 != 0) {
          _DAT_80039e80 = _DAT_80039e80 + 1;
        }
        DAT_80026d00 = 7;
        uVar3 = FUN_8001cea8();
        return uVar3;
      }
      if ((_DAT_80039ea4 - _DAT_80039e84) - 1 < (uint)(ushort)_DAT_8003c2f8[3]) {
        if (_DAT_80039e94 == 0) {
          *_DAT_8003c2f8 = 1;
          _DAT_80039e98 = 1;
          if (_DAT_8003c2f4 != (code *)0x0) {
            (*_DAT_8003c2f4)();
          }
          if (_DAT_80039e90 != 0) {
            _DAT_80039e80 = _DAT_80039e80 + 1;
          }
          DAT_80026d00 = 8;
          uVar3 = FUN_8001cea8();
          return uVar3;
        }
        if (*_DAT_80039ea0 != 0) {
          *_DAT_8003c2f8 = 0;
          if (_DAT_80039e90 != 0) {
            _DAT_80039e80 = _DAT_80039e80 + 1;
          }
          DAT_80026d00 = 9;
          uVar3 = FUN_8001cea8();
          return uVar3;
        }
        *_DAT_8003c2f8 = 1;
        uVar3 = 0;
        _DAT_80039e84 = 0;
        psVar7 = _DAT_80039ea0;
        do {
          uVar5 = *(undefined4 *)_DAT_8003c2f8;
          _DAT_8003c2f8 = _DAT_8003c2f8 + 2;
          uVar3 = uVar3 + 1;
          *(undefined4 *)psVar7 = uVar5;
          psVar7 = psVar7 + 2;
        } while (uVar3 < 8);
        _DAT_8003c2f8 = _DAT_80039ea0;
      }
      _DAT_80039e88 = _DAT_80039e84;
    }
    DAT_80026d00 = 10;
    _DAT_80039e64 = _DAT_80039e64 + 1;
    _DAT_80039e9c = _DAT_80039ea0 + _DAT_80039ea4 * 0x10 + _DAT_80039e84 * 0x3f0;
    if (_DAT_80039e68 != 0) {
      *DAT_80026cc8 = 0x20943;
      puVar2 = DAT_80026ccc;
      *DAT_80026ccc = 0x1323;
      psVar7 = (short *)((int)puVar2 + 0x1323);
      sVar1 = *psVar7;
      if (sVar1 == 2) {
        *psVar7 = 4;
        *puVar8 = _DAT_80039ea0 + _DAT_80039ea4 * 0x10 + _DAT_80039e8c * 0x3f0;
        psRam11000000 = psVar7;
      }
      return (uint)(sVar1 != 2);
    }
    *DAT_80026cc8 = 0x21020843;
    if ((ushort)_DAT_8003c2f8[3] - 1 == (uint)(ushort)_DAT_8003c2f8[2]) {
      _DAT_80039e7c = 1;
      if (_DAT_80039e90 != 0) {
        FUN_8001ceb8(_DAT_80039e9c,_DAT_80039e90 + _DAT_80039e80 * 0x800 + 0x20,0x1f8,1);
        _DAT_80039e80 = _DAT_80039e80 + 1;
        uVar3 = FUN_8001cdb0();
        return uVar3;
      }
      FUN_8001cee4(3,_DAT_80039e9c,0,0x1f8);
      _DAT_80039e78 = _DAT_80039e70;
      _DAT_80039e64 = 0;
      _DAT_80039e60 = 0;
      uVar3 = _DAT_80039e70;
    }
    else {
      if (_DAT_80039e90 == 0) {
        FUN_8001cee4(3,_DAT_80039e9c,0,0x1f8);
        *DAT_80026ccc = 0x1325;
        *_DAT_8003c2f8 = 3;
        _DAT_80039e84 = _DAT_80039e84 + 1;
        if (_DAT_80039e90 == 0) {
          return _DAT_80039e84;
        }
        if (_DAT_80039e7c == 0) {
          return 0;
        }
        uVar3 = FUN_8001c24c();
        return uVar3;
      }
      FUN_8001ceb8(_DAT_80039e9c,_DAT_80039e90 + _DAT_80039e80 * 0x800 + 0x20,0x1f8,0);
      uVar3 = _DAT_80039e80 + 1;
      _DAT_80039e80 = uVar3;
    }
  }
  if (_DAT_80039e90 != 0) {
    _DAT_80039e80 = 0;
    uVar3 = FUN_8001c948();
    return uVar3;
  }
  DAT_80026d00 = 5;
  *_DAT_8003c2f8 = 0;
  uVar3 = FUN_8001cea8();
  return uVar3;
}

