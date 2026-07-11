/**
 * @brief Entity angle calc variant 7: tests entity[0x17E] flags before atan2
 * @note Original: func_8001FC50 at 0x8001FC50
 */
// Entity_CalcAngle7



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8001fc50(int param_1,int param_2)

{
  u16 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((((int)param_1->entity_flags & 0x8200U) == 0) && (param_1->state_flag145 == '\0')) {
    iVar4 = (int)(((uint)param_2->pos_y - (uint)param_1->pos_y) * 0x10000)
            >> 0x10;
    iVar3 = (int)(((uint)param_2->pos_z - (uint)param_1->pos_z) * 0x10000)
            >> 0x10;
    uVar2 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
    if (((int)(uVar2 & 0xffff) <= (int)param_2->bounds_min_x + (int)param_1->bounds_min_x)
       && ((((int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 0x32)) +
                   (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff)
             <= (int)param_1->bounds_max_y + (int)param_2->bounds_max_y &&
            (uVar1 = FUN_80085690(-iVar3,iVar4),
            ((uVar1 - param_1->draw_angle) + 0x580 & 0xfff) < 0x301)) &&
           (g_CurrentOverlay == '\0')))) {
      _DAT_1f80018c = uVar1 & 0xfff;
      param_2->move_mode = 1;
      _DAT_1f80018e = 0x4840;
      if (*(s8*)(param_1 + 0x61) != -0x80) {
        g_SFXState = 0x45;
      }
    }
  }
  return;
}
