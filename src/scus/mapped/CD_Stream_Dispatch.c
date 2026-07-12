/**
 * @brief CD/XA stream dispatch / state loop
 * @note Original: func_8001CEE4 at 0x8001CEE4
 */
// CD_Stream_Dispatch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8001cee4(void)

{
  short sVar1;
  undefined4 *puVar2;
  undefined1 *in_v0;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  short *psVar6;
  undefined4 *puVar7;
  undefined4 in_stack_00000028;
  
  while( true ) {
    **(undefined1 **)(in_v0 + 0x6cc4) = 0;
    *DAT_80026cb8 = 0;
    *DAT_80026cc4 = 0x80;
    *DAT_80026cc8 = 0x20943;
    *DAT_80026ccc = 0x1323;
    uVar5 = 0;
    if (_DAT_80039ed8 == 0) {
      do {
        puVar4 = (undefined1 *)((int)&stack0x00000028 + uVar5);
        uVar5 = uVar5 + 1;
        *puVar4 = *DAT_80026cc0;
      } while (uVar5 < 4);
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 1;
      } while (uVar5 < 8);
    }
    if (_DAT_80039e90 != 0) {
      FUN_8001ceb8(_DAT_8003c2f8,_DAT_80039e90 + _DAT_80039e80 * 0x800,8,0);
      uVar5 = FUN_8001c7f4();
      return uVar5;
    }
    puVar7 = (undefined4 *)0x8;
    FUN_8001cee4(3,_DAT_8003c2f8,0);
    puVar2 = DAT_80026cc8;
    uVar5 = *DAT_80026ce8;
    while ((uVar5 & 0x1000000) != 0) {
      uVar5 = *DAT_80026ce8;
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
        uVar5 = FUN_8001cea8();
        return uVar5;
      }
      _DAT_80039e98 = 0;
    }
    if ((*_DAT_8003c2f8 != 0x160) || (((ushort)_DAT_8003c2f8[1] >> 10 & 0x1f) != _DAT_80039e78)) {
      if (_DAT_80039e90 != 0) {
        _DAT_80039e80 = 0;
        uVar5 = FUN_8001c948();
        return uVar5;
      }
      DAT_80026d00 = 5;
      *_DAT_8003c2f8 = 0;
      uVar5 = FUN_8001cea8();
      return uVar5;
    }
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
      uVar5 = FUN_8001cea8();
      return uVar5;
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
        uVar5 = FUN_8001cea8();
        return uVar5;
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
          uVar5 = FUN_8001cea8();
          return uVar5;
        }
        if (*_DAT_80039ea0 != 0) {
          *_DAT_8003c2f8 = 0;
          if (_DAT_80039e90 != 0) {
            _DAT_80039e80 = _DAT_80039e80 + 1;
          }
          DAT_80026d00 = 9;
          uVar5 = FUN_8001cea8();
          return uVar5;
        }
        *_DAT_8003c2f8 = 1;
        uVar5 = 0;
        _DAT_80039e84 = 0;
        psVar6 = _DAT_80039ea0;
        do {
          uVar3 = *(undefined4 *)_DAT_8003c2f8;
          _DAT_8003c2f8 = _DAT_8003c2f8 + 2;
          uVar5 = uVar5 + 1;
          *(undefined4 *)psVar6 = uVar3;
          psVar6 = psVar6 + 2;
        } while (uVar5 < 8);
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
      psVar6 = (short *)((int)puVar2 + 0x1323);
      sVar1 = *psVar6;
      if (sVar1 == 2) {
        *psVar6 = 4;
        *puVar7 = _DAT_80039ea0 + _DAT_80039ea4 * 0x10 + _DAT_80039e8c * 0x3f0;
        psRam11000000 = psVar6;
      }
      return (uint)(sVar1 != 2);
    }
    *DAT_80026cc8 = 0x21020843;
    if ((ushort)_DAT_8003c2f8[3] - 1 == (uint)(ushort)_DAT_8003c2f8[2]) {
      _DAT_80039e7c = 1;
      if (_DAT_80039e90 != 0) {
        FUN_8001ceb8(_DAT_80039e9c,_DAT_80039e90 + _DAT_80039e80 * 0x800 + 0x20,0x1f8,1);
        _DAT_80039e80 = _DAT_80039e80 + 1;
        uVar5 = FUN_8001cdb0();
        return uVar5;
      }
      FUN_8001cee4(3,_DAT_80039e9c,0,0x1f8);
      _DAT_80039e78 = _DAT_80039e70;
      _DAT_80039e64 = 0;
      _DAT_80039e60 = 0;
      uVar5 = _DAT_80039e70;
    }
    else {
      if (_DAT_80039e90 == 0) {
        FUN_8001cee4(3,_DAT_80039e9c,0,0x1f8);
        *DAT_80026ccc = 0x1325;
        *_DAT_8003c2f8 = 3;
        _DAT_80039e84 = _DAT_80039e84 + 1;
        uVar5 = _DAT_80039e84;
        if ((_DAT_80039e90 != 0) && (uVar5 = 0, _DAT_80039e7c != 0)) {
          uVar5 = FUN_8001c24c();
        }
        return uVar5;
      }
      FUN_8001ceb8(_DAT_80039e9c,_DAT_80039e90 + _DAT_80039e80 * 0x800 + 0x20,0x1f8,0);
      uVar5 = _DAT_80039e80 + 1;
      _DAT_80039e80 = uVar5;
    }
    if ((uVar5 & 4) != 0) break;
    _DAT_8003c2f8 = _DAT_80039ea0 + _DAT_80039e84 * 0x10;
    if (*_DAT_8003c2f8 != 0) {
      if (_DAT_80039e90 != 0) {
        _DAT_80039e80 = _DAT_80039e80 + 1;
      }
      DAT_80026d00 = 4;
      uVar5 = FUN_8001cea8();
      return uVar5;
    }
    *DAT_80026cb8 = 0;
    in_v0 = &LAB_80020000;
  }
  DAT_80026d00 = 3;
  uVar5 = FUN_8001cea8();
  return uVar5;
}
