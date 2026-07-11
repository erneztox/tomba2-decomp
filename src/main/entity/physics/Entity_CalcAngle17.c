/**
 * @brief Entity angle calc variant 17: different entity offset format
 * @note Original: func_80020C34 at 0x80020C34
 */
// Entity_CalcAngle17



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80020c34(int param_1,int param_2)

{
  u16 uVar1;
  int iVar2;
  int iVar3;
  s32 uVar4;
  int iVar5;
  s16 sVar6;
  int iVar7;
  s16 sVar8;
  
  iVar7 = (uint)param_1->pos_y - (uint)param_2->pos_y;
  iVar2 = iVar7 * 0x10000 >> 0x10;
  iVar5 = (uint)param_1->pos_z - (uint)param_2->pos_z;
  iVar3 = iVar5 * 0x10000 >> 0x10;
  uVar1 = FUN_80084080(iVar2 * iVar2 + iVar3 * iVar3);
  uVar4 = 0xffffffff;
  if ((int)(uint)uVar1 <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) {
    iVar3 = (uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 0x32);
    sVar6 = (s16)iVar3;
    iVar2 = (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y;
    sVar8 = (s16)iVar2;
    if ((int)param_1->bounds_max_y + (int)param_2->bounds_max_y <
        (int)(iVar3 + iVar2 & 0xffffU)) {
      uVar4 = 0xffffffff;
    }
    else {
      if (iVar3 * 0x10000 < 0) {
        sVar6 = -sVar6;
      }
      else {
        sVar8 = (param_2->bounds_max_y - param_2->bounds_min_y) +
                (param_1->bounds_max_y - param_1->bounds_min_y);
      }
      if (((int)param_1->bounds_min_x + (int)param_2->bounds_min_x) - (int)(s16)uVar1 <
          (int)sVar8 - (int)sVar6) {
        _g_AngleTarget = FUN_80085690(-(int)(s16)iVar5,(int)(s16)iVar7);
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
        if (0 < iVar3 * 0x10000) {
          uVar4 = 3;
        }
      }
    }
  }
  return uVar4;
}
