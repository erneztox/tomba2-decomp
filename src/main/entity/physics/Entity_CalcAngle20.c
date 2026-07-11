/**
 * @brief Entity angle calc variant 20: atan2 with complex offset
 * @note Original: func_8001F650 at 0x8001F650
 */
// Entity_CalcAngle20



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_8001f650(u8 *param_1,int param_2,int param_3)

{
  s16 sVar1;
  s16 sVar2;
  s16 sVar3;
  s32 bVar4;
  s8 cVar5;
  uint uVar6;
  s32 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)(((uint)param_1->pos_y - (uint)param_3->pos_x) * 0x10000)
          >> 0x10;
  iVar8 = (int)(((uint)param_1->pos_z - (uint)*(u16 *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar6 = FUN_80084080(iVar9 * iVar9 + iVar8 * iVar8);
  bVar4 = false;
  if (((int)(uVar6 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x)
     && (bVar4 = false,
        (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_3 + 0x30)) +
              (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
        (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
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
           param_3->pos_x + (s16)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
      param_1->pos_z =
           *(s16 *)(param_3 + 0x34) -
           (s16)(iVar9 * ((int)param_1->bounds_min_x + (int)sVar3) >> 0xc);
    }
    param_1[0x60] = 1;
    cVar5 = FUN_80077768((int)_g_AngleTarget,(int)param_1->draw_angle,1);
    param_1->input_flags = cVar5 + 2U;
    if (param_1->action_flag == 0) {
      uVar7 = 1;
      if (((param_1[0x149] & 4) == 0) && (uVar7 = 1, param_1->direction == (cVar5 + 2U & 1))) {
        param_1[0x44] = 0;
        param_1[0x45] = 0;
      }
    }
    else {
      uVar7 = 2;
    }
  }
  return uVar7;
}
