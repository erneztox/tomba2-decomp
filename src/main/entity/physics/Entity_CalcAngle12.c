/**
 * @brief Entity angle calc variant 12: atan2 with entity[0x2E]/[0x36] offsets
 * @note Original: func_800216B4 at 0x800216B4
 */
// Entity_CalcAngle12



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800216b4(int param_1,int param_2,s32 param_3)

{
  s32 bVar1;
  u16 uVar2;
  s32 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
          >> 0x10;
  iVar5 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
          >> 0x10;
  uVar2 = FUN_80084080(iVar6 * iVar6 + iVar5 * iVar5);
  bVar1 = false;
  if (((int)(uint)uVar2 <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) &&
     (bVar1 = false,
     (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 0x32)) +
           (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
     (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _g_GTE_Work8C = (int)(s16)uVar2;
    _g_AngleTarget = FUN_80085690(-iVar5,iVar6);
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = FUN_8001e860(param_1,param_2,0,param_3);
    param_2->move_mode = 1;
    if ((uVar4 & 0x80) == 0) {
      g_State182 = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
