/**
 * @brief Entity interact handler: checks input flags, triggers interaction
 * @note Original: func_80023320 at 0x80023320
 */
// Entity_Interact



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80023320(int param_1,uint param_2,uint param_3,uint param_4)

{
  s16 sVar1;
  s16 sVar2;
  s16 sVar3;
  
  if ((_g_FrameCounter != 0) && (g_CurrentOverlay == '\0')) {
    if ((param_4 & 0x100) == 0) {
      sVar1 = param_3->pos_x;
      sVar2 = *(s16 *)(param_3 + 0x30);
      sVar3 = *(s16 *)(param_3 + 0x34);
      _DAT_1f800208 = param_3 & 0x7fffffff;
      _DAT_1f800280 = param_2;
    }
    else {
      sVar1 = param_2->pos_y;
      sVar2 = *(s16 *)(param_2 + 0x32);
      sVar3 = param_2->pos_z;
      _DAT_1f800208 = param_2;
    }
    *(s16 *)(param_1 + 0x78) = param_1->target_angle;
    DAT_800e7fc6 = 4;
    DAT_1f80027b = 1;
    param_1->collision_state = 1;
    param_1->draw_x = param_1->pos_y - sVar1;
    param_1->angle_delta = *(s16 *)(param_1 + 0x32) - sVar2;
    *(s16 *)(param_1 + 100) = param_1->pos_z - sVar3;
    _DAT_1f800200 = param_1->pos_y;
    _DAT_1f800202 = *(s16 *)(param_1 + 0x32);
    _DAT_1f800204 = param_1->pos_z;
    DAT_1f80023a = (param_4 & 0x1000) == 0;
    FUN_80074590(0xc,0,0);
  }
  return;
}
