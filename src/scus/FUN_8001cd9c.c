
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8001cd9c(void)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  short *psVar6;
  undefined4 *puVar7;
  undefined4 local_18 [2];
  byte local_10 [8];
  
  uVar3 = 1;
  if (_DAT_80039e7c != 1) {
    if ((_DAT_80039e68 != 0) && ((*DAT_80026cd8 & 0x1000000) != 0)) {
      _DAT_80039e6c = 1;
      if (_DAT_80039e90 != 0) {
        _DAT_80039e80 = _DAT_80039e80 + 1;
      }
      DAT_80026d00 = 1;
      uVar3 = FUN_8001cea8();
      return uVar3;
    }
    uVar3 = FUN_80018ff0(1,local_10);
    if (uVar3 != 5) {
      uVar3 = (uint)local_10[0];
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
            puVar5 = (undefined1 *)((int)local_18 + uVar3);
            uVar3 = uVar3 + 1;
            *puVar5 = *DAT_80026cc0;
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
        puVar7 = (undefined4 *)0x8;
        FUN_8001cee4(3,_DAT_8003c2f8,0,8,0x11000000,0,0);
        puVar2 = DAT_80026cc8;
        uVar3 = *DAT_80026ce8;
        while ((uVar3 & 0x1000000) != 0) {
          uVar3 = *DAT_80026ce8;
        }
        *(undefined4 *)(_DAT_8003c2f8 + 0xe) = local_18[0];
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
            psVar6 = _DAT_80039ea0;
            do {
              uVar4 = *(undefined4 *)_DAT_8003c2f8;
              _DAT_8003c2f8 = _DAT_8003c2f8 + 2;
              uVar3 = uVar3 + 1;
              *(undefined4 *)psVar6 = uVar4;
              psVar6 = psVar6 + 2;
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
            uVar3 = FUN_8001cdb0();
            return uVar3;
          }
          FUN_8001cee4(3,_DAT_80039e9c,0,0x1f8,0x11400100,1,0);
          _DAT_80039e78 = _DAT_80039e70;
          _DAT_80039e64 = 0;
          _DAT_80039e60 = 0;
          uVar3 = _DAT_80039e70;
        }
        else {
          if (_DAT_80039e90 == 0) {
            FUN_8001cee4(3,_DAT_80039e9c,0,0x1f8,0x11400100,0,0);
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
  }
  return uVar3;
}

