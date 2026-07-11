/**
 * @brief Collision push variant 3: computes push from normal
 * @note Original: func_8004602C at 0x8004602C
 */
// Collision_Push3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int Collision_Push3(u16 param_1,s16 param_2,s16 param_3)

{
  u16 uVar1;
  s16 sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  u16 local_30;
  
  iVar4 = (int)param_2;
  local_30 = 0x700;
  if (iVar4 == 0) {
    local_30 = param_1;
  }
  uVar5 = 0;
  sVar2 = Collision_CheckResult();
  uVar7 = (uint)_g_CollisionResult->kind;
  _g_CollisionData = (u16 *)(_DAT_1f8001d8 + (uint)_g_CollisionResult->flags * 8);
  uVar1 = _g_CollisionResult->sub_type;
  if (uVar7 != 0) {
    do {
      uVar6 = uVar5;
      if (((*_g_CollisionData & param_1) != 0) && ((*_g_CollisionData & local_30) != 0)) {
        iVar3 = Collision_Main((int)sVar2,uVar1 >> 8,iVar4,(int)param_3);
        if ((iVar4 != 0) && (iVar3 < 0)) {
          _DAT_1f8001be = _DAT_1f8001be + 0x14;
          iVar3 = Collision_Main((int)sVar2,uVar1 >> 8,iVar4,(int)param_3);
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
      _g_CollisionData = _g_CollisionData + 4;
    } while ((int)uVar5 < (int)uVar7);
  }
  sVar2 = _g_CollisionFlag;
  if (uVar5 == uVar7) {
    iVar4 = 0;
  }
  else {
    if ((*_g_CollisionResult & 4) != 0) {
      _g_CollisionFlag = _g_CollisionFlag2;
      _g_CollisionFlag2 = sVar2;
    }
    if ((*_g_CollisionResult & 1) != 0) {
      _g_CollisionFlag2 = 0x3f - _g_CollisionFlag2;
    }
    if ((*_g_CollisionResult & 2) != 0) {
      _g_CollisionFlag = 0x3f - _g_CollisionFlag;
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
    iVar4 = (int)(s16)param_1;
  }
  return iVar4;
}
