/**
 * @brief Entity angle calc variant 16: atan2 with XZ distance validation
 * @note Original: func_8001F830 at 0x8001F830
 */
// Entity_CalcAngle16



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_8001f830(u8 *param_1,int param_2)

{
  s16 sVar1;
  s16 sVar2;
  s16 sVar3;
  s32 bVar4;
  s8 cVar5;
  u16 uVar6;
  s32 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
          >> 0x10;
  iVar8 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
          >> 0x10;
  uVar6 = FUN_80084080(iVar9 * iVar9 + iVar8 * iVar8);
  bVar4 = false;
  if (((int)(uint)uVar6 <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) &&
     (bVar4 = false,
     (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 0x32)) +
           (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
     (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _g_GTE_Work8C = (int)(s16)uVar6;
    _g_AngleTarget = FUN_80085690(-iVar8,iVar9);
    bVar4 = true;
  }
  uVar7 = 0;
  if (bVar4) {
    if ((*param_1 & 4) == 0) {
      iVar8 = FUN_80083f50(_g_AngleTarget);
      sVar1 = param_1->bounds_min_x;
      sVar2 = param_2->bounds_min_x;
      iVar9 = FUN_80083e80(_g_AngleTarget);
      sVar3 = param_2->bounds_min_x;
      param_1->pos_y =
           param_2->pos_y + (s16)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
      param_1->pos_z =
           param_2->pos_z -
           (s16)(iVar9 * ((int)param_1->bounds_min_x + (int)sVar3) >> 0xc);
    }
    cVar5 = FUN_80077768((int)_g_AngleTarget,(int)param_1->draw_angle,1);
    uVar7 = 1;
    param_1->input_flags = cVar5 + 2;
  }
  return uVar7;
}
