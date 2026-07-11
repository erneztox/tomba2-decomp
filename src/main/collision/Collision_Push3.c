/**
 * @brief Collision push variant 3: computes push from normal
 * @note Original: func_8004602C at 0x8004602C
 */
// Collision_Push3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8004602c(ushort param_1,short param_2,short param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort local_30;
  
  iVar4 = (int)param_2;
  local_30 = 0x700;
  if (iVar4 == 0) {
    local_30 = param_1;
  }
  uVar5 = 0;
  sVar2 = FUN_80048360();
  uVar7 = (uint)_DAT_1f8001e0->kind;
  _DAT_1f8001ec = (ushort *)(_DAT_1f8001d8 + (uint)_DAT_1f8001e0->flags * 8);
  uVar1 = _DAT_1f8001e0->sub_type;
  if (uVar7 != 0) {
    do {
      uVar6 = uVar5;
      if (((*_DAT_1f8001ec & param_1) != 0) && ((*_DAT_1f8001ec & local_30) != 0)) {
        iVar3 = FUN_800462e4((int)sVar2,uVar1 >> 8,iVar4,(int)param_3);
        if ((iVar4 != 0) && (iVar3 < 0)) {
          _DAT_1f8001be = _DAT_1f8001be + 0x14;
          iVar3 = FUN_800462e4((int)sVar2,uVar1 >> 8,iVar4,(int)param_3);
          _DAT_1f8001be = _DAT_1f8001be + -0x14;
        }
        uVar6 = uVar7;
        if (iVar3 != 1) {
          if (iVar3 < 2) {
            uVar6 = uVar5;
            if (iVar3 == 0) {
              return 0;
            }
          }
          else {
            uVar6 = uVar5;
            if (iVar3 == 2) {
              param_1 = param_1 | 0x8000;
              uVar6 = uVar7;
            }
          }
        }
      }
      uVar5 = uVar6 + 1;
      _DAT_1f8001ec = _DAT_1f8001ec + 4;
    } while ((int)uVar5 < (int)uVar7);
  }
  sVar2 = _DAT_1f8001c2;
  if (uVar5 == uVar7) {
    iVar4 = 0;
  }
  else {
    if ((*_DAT_1f8001e0 & 4) != 0) {
      _DAT_1f8001c2 = _DAT_1f8001c6;
      _DAT_1f8001c6 = sVar2;
    }
    if ((*_DAT_1f8001e0 & 1) != 0) {
      _DAT_1f8001c6 = 0x3f - _DAT_1f8001c6;
    }
    if ((*_DAT_1f8001e0 & 2) != 0) {
      _DAT_1f8001c2 = 0x3f - _DAT_1f8001c2;
    }
    if (param_2 != 0) {
      if (((_DAT_1f8001a6 & 0x400) == 0) || ((int)_DAT_1f8001a4 <= _DAT_1f8001be + -0x20)) {
        _DAT_1f8001c4 = 0;
        _DAT_1f8001a6 = _DAT_1f8001a6 & 0xfbff;
      }
      else {
        _DAT_1f8001c4 = _DAT_1f8001a4 - _DAT_1f8001be;
      }
    }
    iVar4 = (int)(short)param_1;
  }
  return iVar4;
}
