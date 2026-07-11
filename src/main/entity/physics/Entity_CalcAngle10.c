/**
 * @brief Entity angle calc variant 10: checks g_ActionMode flag first
 * @note Original: func_80022060 at 0x80022060
 */
// Entity_CalcAngle10



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80022060(int param_1,u8 *param_2)

{
  s32 bVar1;
  u16 uVar2;
  int iVar3;
  int iVar4;
  
  if (g_ActionMode == '\0') {
    iVar4 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
            >> 0x10;
    iVar3 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
            >> 0x10;
    uVar2 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
    bVar1 = false;
    if (((int)(uint)uVar2 <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) &&
       (bVar1 = false,
       (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 0x32)) +
             (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
       (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
      _g_GTE_Work8C = (int)(s16)uVar2;
      _g_AngleTarget = FUN_80085690(-iVar3,iVar4);
      bVar1 = true;
    }
    if (bVar1) {
      *param_2 = 2;
      param_2->state = 2;
      param_2->behavior_state = 0;
      param_2->action_state = 0;
      g_ActionState = 0;
    }
  }
  return;
}
