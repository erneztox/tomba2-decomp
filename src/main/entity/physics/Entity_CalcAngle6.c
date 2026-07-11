/**
 * @brief Entity angle calc variant 6: atan2 from entity to param2 target
 * @note Original: func_8001F9DC at 0x8001F9DC
 */
// Entity_CalcAngle6



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_CalcAngle6(int param_1,int param_2)

{
  uint uVar1;
  s32 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)param_1->pos_y -
                ((uint)param_2->pos_y + (uint)param_2->draw_x)) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)param_1->pos_z -
                ((uint)param_2->pos_z + (uint)*(u16 *)(param_2 + 100))) * 0x10000)
          >> 0x10;
  uVar1 = Math_SqrtGTE(iVar4 * iVar4 + iVar3 * iVar3);
  uVar2 = 0;
  if ((int)(uVar1 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) {
    if ((int)param_1->bounds_max_y + (int)param_2->bounds_max_y <
        (int)(((uint)*(u16 *)(param_1 + 0x32) -
              ((uint)*(u16 *)(param_2 + 0x32) + (uint)param_2->angle_delta)) +
              (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff)) {
      uVar2 = 0;
    }
    else {
      _g_AngleTarget = Math_Atan2(-iVar3,iVar4);
      uVar2 = 1;
    }
  }
  return uVar2;
}
