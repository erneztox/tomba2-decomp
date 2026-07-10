// FUN_8008d110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8008d110(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  short *psVar6;
  undefined4 local_18 [2];
  byte local_10 [8];
  
  if (_DAT_80102704 != 1) {
    if ((_DAT_801026f0 == 0) || ((*DAT_800ac3c4 & 0x1000000) == 0)) {
      iVar2 = FUN_80089b64(1,local_10);
      if (iVar2 != 5) {
        if ((local_10[0] & 4) == 0) {
          _DAT_80104b80 = _DAT_80102728 + _DAT_8010270c * 0x10;
          if (*_DAT_80104b80 == 0) {
            *DAT_800ac3a4 = 0;
            *DAT_800ac3b0 = 0;
            *DAT_800ac3a4 = 0;
            *DAT_800ac3b0 = 0x80;
            *DAT_800ac3b4 = 0x20943;
            *DAT_800ac3b8 = 0x1323;
            uVar5 = 0;
            if (_DAT_80102760 == 0) {
              do {
                puVar4 = (undefined1 *)((int)local_18 + uVar5);
                uVar5 = uVar5 + 1;
                *puVar4 = *DAT_800ac3ac;
              } while (uVar5 < 4);
              uVar5 = 0;
              do {
                uVar5 = uVar5 + 1;
              } while (uVar5 < 8);
            }
            if (_DAT_80102718 == 0) {
              FUN_8008da58(3,_DAT_80104b80,0,8,0x11000000,0,0);
            }
            else {
              FUN_8008da2c(_DAT_80104b80,_DAT_80102718 + _DAT_80102708 * 0x800,8,0);
            }
            puVar1 = DAT_800ac3b4;
            uVar5 = *DAT_800ac3d4;
            while ((uVar5 & 0x1000000) != 0) {
              uVar5 = *DAT_800ac3d4;
            }
            *(undefined4 *)(_DAT_80104b80 + 0xe) = local_18[0];
            *puVar1 = 0x20843;
            *DAT_800ac3b8 = 0x1325;
            if ((_DAT_80102720 == 1) && (_DAT_801026fc != 0)) {
              if (_DAT_801026fc != (ushort)_DAT_80104b80[4]) {
                *_DAT_80104b80 = 0;
                if (_DAT_80102718 == 0) {
                  return;
                }
                _DAT_80102708 = _DAT_80102708 + 1;
                return;
              }
              _DAT_80102720 = 0;
            }
            if ((*_DAT_80104b80 == 0x160) &&
               (((ushort)_DAT_80104b80[1] >> 10 & 0x1f) == _DAT_80102700)) {
              if (((int)_DAT_801026ec == (uint)(ushort)_DAT_80104b80[2]) &&
                 ((_DAT_801026e8 == 0 || (_DAT_801026e8 == (ushort)_DAT_80104b80[4])))) {
                if (_DAT_80104b80[2] == 0) {
                  _DAT_801026e8 = (uint)(ushort)_DAT_80104b80[4];
                  _DAT_801026ec = 0;
                  if ((_DAT_8010271c != 0) && (_DAT_8010271c <= _DAT_801026e8)) {
                    _DAT_801026e8 = 0;
                    _DAT_801026ec = 0;
                    FUN_8008cff0(_DAT_80102710,_DAT_8010270c - _DAT_80102710);
                    _DAT_8010270c = _DAT_80102710;
                    *_DAT_80104b80 = 0;
                    _DAT_80102720 = 1;
                    if (_DAT_80104b7c != (code *)0x0) {
                      (*_DAT_80104b7c)();
                    }
                    if (_DAT_80102718 != 0) {
                      _DAT_80102708 = _DAT_80102708 + 1;
                    }
                    DAT_800ac3ec = 7;
                    return;
                  }
                  if ((_DAT_8010272c - _DAT_8010270c) - 1U < (uint)(ushort)_DAT_80104b80[3]) {
                    if (_DAT_8010271c == 0) {
                      *_DAT_80104b80 = 1;
                      _DAT_80102720 = 1;
                      if (_DAT_80104b7c != (code *)0x0) {
                        (*_DAT_80104b7c)();
                      }
                      if (_DAT_80102718 != 0) {
                        _DAT_80102708 = _DAT_80102708 + 1;
                      }
                      DAT_800ac3ec = 8;
                      return;
                    }
                    if (*_DAT_80102728 != 0) {
                      *_DAT_80104b80 = 0;
                      if (_DAT_80102718 != 0) {
                        _DAT_80102708 = _DAT_80102708 + 1;
                      }
                      DAT_800ac3ec = 9;
                      return;
                    }
                    *_DAT_80104b80 = 1;
                    uVar5 = 0;
                    _DAT_8010270c = 0;
                    psVar6 = _DAT_80102728;
                    do {
                      uVar3 = *(undefined4 *)_DAT_80104b80;
                      _DAT_80104b80 = _DAT_80104b80 + 2;
                      uVar5 = uVar5 + 1;
                      *(undefined4 *)psVar6 = uVar3;
                      psVar6 = psVar6 + 2;
                    } while (uVar5 < 8);
                    _DAT_80104b80 = _DAT_80102728;
                  }
                  _DAT_80102710 = _DAT_8010270c;
                }
                DAT_800ac3ec = 10;
                _DAT_801026ec = _DAT_801026ec + 1;
                _DAT_80102724 = _DAT_80102728 + _DAT_8010272c * 0x10 + _DAT_8010270c * 0x3f0;
                uVar3 = 0x11000000;
                if (_DAT_801026f0 == 0) {
                  uVar3 = 0x11400100;
                  *DAT_800ac3b4 = 0x21020843;
                }
                else {
                  *DAT_800ac3b4 = 0x20943;
                  *DAT_800ac3b8 = 0x1323;
                }
                if ((ushort)_DAT_80104b80[3] - 1 == (uint)(ushort)_DAT_80104b80[2]) {
                  _DAT_80102704 = 1;
                  if (_DAT_80102718 == 0) {
                    FUN_8008da58(3,_DAT_80102724,0,0x1f8,uVar3,1,0);
                  }
                  else {
                    FUN_8008da2c(_DAT_80102724,_DAT_80102718 + _DAT_80102708 * 0x800 + 0x20,0x1f8,1)
                    ;
                    _DAT_80102708 = _DAT_80102708 + 1;
                  }
                  _DAT_801026ec = 0;
                  _DAT_801026e8 = 0;
                  _DAT_80102700 = _DAT_801026f8;
                }
                else if (_DAT_80102718 == 0) {
                  FUN_8008da58(3,_DAT_80102724,0,0x1f8,uVar3,0,0);
                }
                else {
                  FUN_8008da2c(_DAT_80102724,_DAT_80102718 + _DAT_80102708 * 0x800 + 0x20,0x1f8,0);
                  _DAT_80102708 = _DAT_80102708 + 1;
                }
                *DAT_800ac3b8 = 0x1325;
                *_DAT_80104b80 = 3;
                _DAT_8010270c = _DAT_8010270c + 1;
                if ((_DAT_80102718 != 0) && (_DAT_80102704 != 0)) {
                  FUN_8008cdc0();
                }
              }
              else {
                _DAT_801026e8 = 0;
                _DAT_801026ec = 0;
                FUN_8008cff0(_DAT_80102710,_DAT_8010270c - _DAT_80102710);
                _DAT_8010270c = _DAT_80102710;
                *_DAT_80104b80 = 0;
                if (_DAT_80102718 != 0) {
                  _DAT_80102708 = _DAT_80102708 + 1;
                }
                DAT_800ac3ec = 6;
              }
            }
            else {
              if (_DAT_80102718 != 0) {
                _DAT_80102708 = 0;
              }
              DAT_800ac3ec = 5;
              *_DAT_80104b80 = 0;
            }
          }
          else {
            if (_DAT_80102718 != 0) {
              _DAT_80102708 = _DAT_80102708 + 1;
            }
            DAT_800ac3ec = 4;
          }
        }
        else {
          DAT_800ac3ec = 3;
        }
      }
    }
    else {
      _DAT_801026f4 = 1;
      if (_DAT_80102718 != 0) {
        _DAT_80102708 = _DAT_80102708 + 1;
      }
      DAT_800ac3ec = 1;
    }
  }
  return;
}

