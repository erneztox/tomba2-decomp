/**
 * @brief Entity target distance variant 2: different entity offset for target
 * @note Original: func_80024BD8 at 0x80024BD8
 */
// Entity_TargetDistance2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_TargetDistance2(int param_1,int param_2,int param_3)

{
  uint uVar1;
  s32 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)param_1->draw_pos_x - (uint)param_3->pos_x) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)param_1->draw_pos_z - (uint)*(u16 *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar1 = Math_SqrtGTE(iVar4 * iVar4 + iVar3 * iVar3);
  uVar2 = 0;
  if (((int)(uVar1 & 0xffff) <= param_2->bounds_min_x + _DAT_1f800088) &&
     (uVar2 = 0,
     (int)(((uint)param_1->draw_pos_y - (uint)*(u16 *)(param_3 + 0x30)) +
           (uint)param_2->bounds_min_y + (uint)param_1->target_angle & 0xffff) <=
     (int)param_2->bounds_max_y + ((int)((uint)param_1->target_angle << 0x10) >> 0xf))) {
    _g_GTE_Work8C = Math_Atan2(-iVar3,iVar4);
    uVar2 = 1;
    _g_GTE_Work84 = param_3;
    param_1->speed2 = *(s16 *)(param_1 + 0x32) - *(s16 *)(param_3 + 0x30);
  }
  return uVar2;
}
