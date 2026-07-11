/**
 * @brief Entity angle calc variant 5: atan2 with different entity offsets
 * @note Original: func_80021800 at 0x80021800
 */
// Entity_CalcAngle5



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_CalcAngle5(int param_1,int param_2)

{
  s32 bVar1;
  u16 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
          >> 0x10;
  uVar2 = Math_SqrtGTE(iVar4 * iVar4 + iVar3 * iVar3);
  bVar1 = false;
  if (((int)(uint)uVar2 <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) &&
     (bVar1 = false,
     (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 0x32)) +
           (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
     (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _g_GTE_Work8C = (int)(s16)uVar2;
    _g_AngleTarget = Math_Atan2(-iVar3,iVar4);
    bVar1 = true;
  }
  if (bVar1) {
    Entity_InitFull(param_1,param_2,0,0x100);
    param_2->move_mode = 1;
    g_State182 = 0;
  }
  return;
}
