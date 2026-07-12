/**
 * @brief Main CD/XA stream state processor
 * @note Original: func_8001D4AC at 0x8001D4AC
 */
// CD_Stream_StateMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8001d4ac(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_v0;
  uint uVar4;
  undefined1 *puVar5;
  short *in_v1;
  short *psVar6;
  undefined4 in_stack_00000028;
  
  while( true ) {
    _DAT_80039e9c = in_v1 + (in_v0 - param_2) * 0x10;
    if (_DAT_80039e68 != 0) {
      *DAT_80026cc8 = 0x20943;
      puVar2 = DAT_80026ccc;
      *DAT_80026ccc = 0x1323;
      psVar6 = (short *)((int)puVar2 + 0x1323);
      sVar1 = *psVar6;
      if (sVar1 == 2) {
        *psVar6 = 4;
        *param_4 = _DAT_80039ea0 + _DAT_80039ea4 * 0x10 + _DAT_80039e8c * 0x3f0;
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
        uVar4 = FUN_8001cdb0();
        return uVar4;
      }
      FUN_8001cee4(3,_DAT_80039e9c,0,0x1f8);
      _DAT_80039e78 = _DAT_80039e70;
      _DAT_80039e64 = 0;
      _DAT_80039e60 = 0;
      uVar4 = _DAT_80039e70;
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
        uVar4 = FUN_8001c24c();
        return uVar4;
      }
      FUN_8001ceb8(_DAT_80039e9c,_DAT_80039e90 + _DAT_80039e80 * 0x800 + 0x20,0x1f8,0);
      uVar4 = _DAT_80039e80 + 1;
      _DAT_80039e80 = uVar4;
    }
    if ((uVar4 & 4) != 0) {
      DAT_80026d00 = 3;
      uVar4 = FUN_8001cea8();
      return uVar4;
    }
    _DAT_8003c2f8 = _DAT_80039ea0 + _DAT_80039e84 * 0x10;
    if (*_DAT_8003c2f8 != 0) break;
    *DAT_80026cb8 = 0;
    *DAT_80026cc4 = 0;
    *DAT_80026cb8 = 0;
    *DAT_80026cc4 = 0x80;
    *DAT_80026cc8 = 0x20943;
    *DAT_80026ccc = 0x1323;
    uVar4 = 0;
    if (_DAT_80039ed8 == 0) {
      do {
        puVar5 = (undefined1 *)((int)&stack0x00000028 + uVar4);
        uVar4 = uVar4 + 1;
        *puVar5 = *DAT_80026cc0;
      } while (uVar4 < 4);
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
      } while (uVar4 < 8);
    }
    if (_DAT_80039e90 != 0) {
      FUN_8001ceb8(_DAT_8003c2f8,_DAT_80039e90 + _DAT_80039e80 * 0x800,8,0);
      uVar4 = FUN_8001c7f4();
      return uVar4;
    }
    param_4 = (undefined4 *)0x8;
    FUN_8001cee4(3,_DAT_8003c2f8,0);
    puVar2 = DAT_80026cc8;
    uVar4 = *DAT_80026ce8;
    while ((uVar4 & 0x1000000) != 0) {
      uVar4 = *DAT_80026ce8;
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
        uVar4 = FUN_8001cea8();
        return uVar4;
      }
      _DAT_80039e98 = 0;
    }
    if ((*_DAT_8003c2f8 != 0x160) || (((ushort)_DAT_8003c2f8[1] >> 10 & 0x1f) != _DAT_80039e78)) {
      if (_DAT_80039e90 != 0) {
        _DAT_80039e80 = 0;
        uVar4 = FUN_8001c948();
        return uVar4;
      }
      DAT_80026d00 = 5;
      *_DAT_8003c2f8 = 0;
      uVar4 = FUN_8001cea8();
      return uVar4;
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
      uVar4 = FUN_8001cea8();
      return uVar4;
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
        uVar4 = FUN_8001cea8();
        return uVar4;
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
          uVar4 = FUN_8001cea8();
          return uVar4;
        }
        if (*_DAT_80039ea0 != 0) {
          *_DAT_8003c2f8 = 0;
          if (_DAT_80039e90 != 0) {
            _DAT_80039e80 = _DAT_80039e80 + 1;
          }
          DAT_80026d00 = 9;
          uVar4 = FUN_8001cea8();
          return uVar4;
        }
        *_DAT_8003c2f8 = 1;
        uVar4 = 0;
        _DAT_80039e84 = 0;
        psVar6 = _DAT_80039ea0;
        do {
          uVar3 = *(undefined4 *)_DAT_8003c2f8;
          _DAT_8003c2f8 = _DAT_8003c2f8 + 2;
          uVar4 = uVar4 + 1;
          *(undefined4 *)psVar6 = uVar3;
          psVar6 = psVar6 + 2;
        } while (uVar4 < 8);
        _DAT_8003c2f8 = _DAT_80039ea0;
      }
      _DAT_80039e88 = _DAT_80039e84;
    }
    DAT_80026d00 = 10;
    _DAT_80039e64 = _DAT_80039e64 + 1;
    in_v1 = _DAT_80039ea0 + _DAT_80039ea4 * 0x10;
    in_v0 = _DAT_80039e84 << 6;
    param_2 = _DAT_80039e84;
  }
  if (_DAT_80039e90 != 0) {
    _DAT_80039e80 = _DAT_80039e80 + 1;
  }
  DAT_80026d00 = 4;
  uVar4 = FUN_8001cea8();
  return uVar4;
}
