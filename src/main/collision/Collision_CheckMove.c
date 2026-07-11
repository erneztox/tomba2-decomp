/**
 * @brief Collision move checker: computes new pos from collision
 * @note Original: func_8004720C at 0x8004720C
 */
// Collision_CheckMove



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_8004720c(ushort param_1,short param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  sVar2 = FUN_80048360();
  iVar7 = 1;
  uVar4 = 0;
  uVar1 = _DAT_1f8001e0->sub_type;
  uVar6 = (uint)_DAT_1f8001e0->kind;
  _DAT_1f8001ec = (ushort *)(_DAT_1f8001d8 + (uint)_DAT_1f8001e0->flags * 8);
  if (uVar6 != 0) {
    do {
      iVar3 = (int)sVar2;
      uVar5 = uVar4;
      if (param_2 == 0) {
        if ((*_DAT_1f8001ec & 1) == 0) {
          if ((*_DAT_1f8001ec & 2) == 0) goto LAB_80047300;
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
        if ((*_DAT_1f8001ec & param_1) != 0) {
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
      _DAT_1f8001ec = _DAT_1f8001ec + 4;
    } while ((int)uVar4 < (int)uVar6);
  }
  sVar2 = _DAT_1f8001c2;
  if (uVar4 == uVar6) {
    if (iVar7 != 0) {
      _DAT_1f8001a4 = 0;
    }
    _DAT_1f8001a6 = 0;
    iVar7 = 0;
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
    iVar7 = (int)(short)param_1;
  }
  return iVar7;
}
