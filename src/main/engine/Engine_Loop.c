/**
 * @brief Engine main loop: processes events, updates state, calls subsystems
 * @note Original: func_8003F898 at 0x8003F898
 */
// Engine_Loop



#include "tomba.h"
void FUN_8003f898(int param_1)

{
  u8 auStack_58->sub_action;
  u8 local_51;
  s16 local_30;
  s16 local_2e;
  s16 local_2c;
  s16 local_28;
  s16 local_26;
  s16 local_24;
  s16 local_20;
  s16 local_1e;
  s16 local_1c;
  s16 local_18;
  s16 local_16;
  s16 local_14;
  
  if (*(s16 **)(param_1 + 0x38) != (s16 *)0x0) {
    FUN_8003b054(auStack_58,
                 param_1->sprite_data +
                 (int)*(s16 *)(param_1->sprite_data + **(s16 **)(param_1 + 0x38) * 4 + 2),0)
    ;
    local_51 = 0x2d;
    local_30 = param_1->draw_x;
    local_2e = param_1->angle_delta;
    local_2c = *(s16 *)(param_1 + 100);
    local_28 = *(s16 *)(param_1 + 0x66);
    local_26 = param_1->target_angle;
    local_24 = param_1->type_flags;
    local_20 = *(s16 *)(param_1 + 0x6c);
    local_1e = *(s16 *)(param_1 + 0x6e);
    local_1c = *(s16 *)(param_1 + 0x70);
    local_18 = param_1->event_id;
    local_16 = param_1->event_param;
    local_14 = *(s16 *)(param_1 + 0x76);
    FUN_80084660(&g_GTE_WorkF8);
    FUN_80084690(&g_GTE_WorkF8);
    FUN_8003b320(auStack_58,&local_30,0x10);
  }
  return;
}
