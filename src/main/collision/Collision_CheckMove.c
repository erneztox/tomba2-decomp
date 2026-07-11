/**
 * @brief Collision move checker: computes new pos from collision
 * @note Original: func_8004720C at 0x8004720C
 */
// Collision_CheckMove



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_8004720c(u16 param_1,s16 param_2)

{
  u16 uVar1;
  s16 sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  sVar2 = FUN_80048360();
  iVar7 = 1;
  uVar4 = 0;
  uVar1 = _g_CollisionResult->sub_type;
  uVar6 = (uint)_g_CollisionResult->kind;
  _g_CollisionData = (u16 *)(_DAT_1f8001d8 + (uint)_g_CollisionResult->flags * 8);
  if (uVar6 != 0) {
    do {
      iVar3 = (int)sVar2;
      uVar5 = uVar4;
      if (param_2 == 0) {
        if ((*_g_CollisionData & 1) == 0) {
          if ((*_g_CollisionData & 2) == 0) goto LAB_80047300;
          iVar3 = FUN_800459d0(iVar3);
        }
        else {
          iVar3 = FUN_80045810(iVar3,iVar7);
          iVar7 = 0;
        }
        if (iVar3 != -1) {
          return iVar3;
        }
      }
      else {
LAB_80047300:
        if ((*_g_CollisionData & param_1) != 0) {
          iVar3 = FUN_800462e4(iVar3,uVar1 >> 8,0,(int)param_2);
          uVar5 = uVar6;
          if (iVar3 != 1) {
            if (iVar3 < 2) {
              uVar5 = uVar4;
              if (iVar3 == 0) {
                return 0;
              }
            }
            else {
              uVar5 = uVar4;
              if (iVar3 == 2) {
                param_1 = param_1 | 0x8000;
                uVar5 = uVar6;
              }
            }
          }
        }
      }
      uVar4 = uVar5 + 1;
      _g_CollisionData = _g_CollisionData + 4;
    } while ((int)uVar4 < (int)uVar6);
  }
  sVar2 = _g_CollisionFlag;
  if (uVar4 == uVar6) {
    if (iVar7 != 0) {
      _DAT_1f8001a4 = 0;
    }
    _DAT_1f8001a6 = 0;
    iVar7 = 0;
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
    iVar7 = (int)(s16)param_1;
  }
  return iVar7;
}
