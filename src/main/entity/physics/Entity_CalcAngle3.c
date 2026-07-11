/**
 * @brief Entity angle calc variant 3: atan2 from entity pos to target with offset
 * @note Original: func_800240FC at 0x800240FC
 */
// Entity_CalcAngle3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800240fc(int param_1,int param_2)

{
  uint uVar1;
  s32 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
          >> 0x10;
  uVar1 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
  uVar2 = 0;
  if ((int)(uVar1 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) {
    if ((int)(s16)param_1->bounds_max_y + (int)param_2->bounds_max_y <
        (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 0x32)) +
              (((uint)param_2->bounds_min_y + (uint)param_1->bounds_max_y) -
              (uint)param_1->bounds_min_y) & 0xffff)) {
      uVar2 = 0;
    }
    else {
      _g_AngleTarget = FUN_80085690(-iVar3,iVar4);
      uVar2 = 1;
    }
  }
  return uVar2;
}
