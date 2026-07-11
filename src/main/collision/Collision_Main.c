/**
 * @brief Collision main: full collision detection pipeline
 * @note Original: func_800462E4 at 0x800462E4
 */
// Collision_Main



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_800462e4(int param_1,ushort param_2,short param_3,short param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  ushort uVar8;
  
  bVar2 = false;
  if ((short)_DAT_1f8001ec->kind < 1) {
    uVar8 = _DAT_1f8001ec->flags;
    _DAT_1f8001a4 = uVar8 + _DAT_1f8001ec->kind;
  }
  else {
    _DAT_1f8001a4 = _DAT_1f8001ec->flags;
    uVar8 = _DAT_1f8001a4 + _DAT_1f8001ec->kind;
  }
  uVar1 = *_DAT_1f8001ec;
  uVar6 = (ushort)param_1;
  if ((uVar1 & 0x80) == 0) {
    if ((short)uVar8 < _DAT_1f8001be) {
      return 0;
    }
    if (_DAT_1f8001be < (short)_DAT_1f8001a4) {
      return 0xffffffff;
    }
    if ((uVar1 & 0x20) == 0) {
      if ((uVar1 & 0x40) == 0) {
        if ((*_DAT_1f8001e0 & 8) == 0) {
          _DAT_1f8001c6 = 0;
          _DAT_1f8001c2 = uVar6;
        }
        else {
          _DAT_1f8001c2 = 0;
          _DAT_1f8001c6 = uVar6;
        }
      }
      else {
        _DAT_1f8001c2 = 0x3f;
        _DAT_1f8001c6 = param_2;
      }
      uVar5 = 1;
    }
    else {
      if ((uVar1 & 0x40) == 0) {
        if ((*_DAT_1f8001e0 & 8) == 0) {
          _DAT_1f8001c2 = uVar6 - 1;
          if (param_2 == 0) {
            _DAT_1f8001c6 = 0;
          }
          else {
            _DAT_1f8001c6 = 0xffff;
          }
        }
        else {
          _DAT_1f8001c2 = 0xffff;
          _DAT_1f8001c6 = uVar6 - 1;
        }
      }
      else {
        _DAT_1f8001c2 = 0x40;
        _DAT_1f8001c6 = param_2 + 1;
      }
      uVar5 = 2;
    }
    _DAT_1f8001a6 = *_DAT_1f8001ec;
    uVar8 = _DAT_1f8001ec->sub_type;
    goto LAB_80046740;
  }
  if ((uVar1 & 0x40) == 0) {
    if ((short)uVar8 < _DAT_1f8001be) {
      return 0;
    }
    if ((short)_DAT_1f8001a4 <= _DAT_1f8001be) {
      if ((*_DAT_1f8001e0 & 8) == 0) {
        iVar4 = (int)(short)_DAT_1f8001ec->kind * ((int)(short)_DAT_1f8001c2 - (int)(short)uVar6);
        iVar7 = (int)(short)(uVar6 ^ 0x3f);
        iVar3 = iVar4 / iVar7;
        if (iVar7 == 0) {
          trap(0x1c00);
        }
        if ((iVar7 == -1) && (iVar4 == -0x80000000)) {
          trap(0x1800);
        }
        uVar8 = _DAT_1f8001ec->flags;
      }
      else {
        uVar8 = _DAT_1f8001ec->flags;
        iVar3 = (int)(short)_DAT_1f8001ec->kind * (int)(short)_DAT_1f8001c2 >> 6;
      }
      if ((int)(((uint)uVar8 + iVar3) * 0x10000) >> 0x10 < (int)_DAT_1f8001be) goto LAB_80046530;
      goto LAB_80046538;
    }
  }
  else {
    if ((short)uVar8 < _DAT_1f8001be) {
      return 0;
    }
    if ((short)_DAT_1f8001a4 <= _DAT_1f8001be) {
      if ((*_DAT_1f8001e0 & 8) == 0) {
        iVar4 = (int)(short)_DAT_1f8001ec->kind * ((int)(short)_DAT_1f8001c2 - (int)(short)uVar6);
        iVar7 = (int)(short)(uVar6 ^ 0x3f);
        iVar3 = iVar4 / iVar7;
        if (iVar7 == 0) {
          trap(0x1c00);
        }
        if ((iVar7 == -1) && (iVar4 == -0x80000000)) {
          trap(0x1800);
        }
        uVar8 = _DAT_1f8001ec->flags;
      }
      else {
        uVar8 = _DAT_1f8001ec->flags;
        iVar3 = (int)(short)_DAT_1f8001ec->kind * (int)(short)_DAT_1f8001c2 >> 6;
      }
      if ((int)_DAT_1f8001be < (int)(((uint)uVar8 + iVar3) * 0x10000) >> 0x10) {
LAB_80046530:
        if (param_4 == 0) {
          return 0;
        }
      }
LAB_80046538:
      bVar2 = true;
    }
  }
  if (!bVar2) {
    return 0xffffffff;
  }
  if (((param_3 == 0) || ((_DAT_1f8001a6 & 0x400) == 0)) ||
     ((int)(short)_DAT_1f8001a4 <= _DAT_1f8001be + -0x20)) {
    _DAT_1f8001c4 = _DAT_1f8001be - _DAT_1f8001ec->flags;
  }
  else {
    _DAT_1f8001c4 = _DAT_1f8001a4 - _DAT_1f8001ec->flags;
  }
  if ((*_DAT_1f8001e0 & 8) == 0) {
    iVar7 = (int)(short)(uVar6 ^ 0x3f);
    iVar4 = (int)(short)_DAT_1f8001ec->kind;
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (_DAT_1f8001c4 * iVar7 == -0x80000000)) {
      trap(0x1800);
    }
    param_1 = param_1 + (_DAT_1f8001c4 * iVar7) / iVar4;
    iVar4 = (int)(short)param_2 * (param_1 * 0x10000 >> 0x10);
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if ((iVar7 == -1) && (iVar4 == -0x80000000)) {
      trap(0x1800);
    }
    _DAT_1f8001c2 = (ushort)param_1;
    _DAT_1f8001c6 = (ushort)(iVar4 / iVar7);
  }
  else {
    iVar4 = (int)(short)_DAT_1f8001ec->kind;
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && ((int)_DAT_1f8001c4 << 6 == -0x80000000)) {
      trap(0x1800);
    }
    _DAT_1f8001c2 = (ushort)(((int)_DAT_1f8001c4 << 6) / iVar4);
    _DAT_1f8001c6 =
         uVar6 + (short)(((int)(short)param_2 - (int)(short)uVar6) * (int)(short)_DAT_1f8001c2 >> 6)
    ;
  }
  uVar5 = 1;
  _DAT_1f8001a6 = *_DAT_1f8001ec;
  uVar8 = _DAT_1f8001ec->sub_type;
LAB_80046740:
  _DAT_1f8001e8 = _DAT_1f8001dc + (uint)uVar8 * 3;
  return uVar5;
}
