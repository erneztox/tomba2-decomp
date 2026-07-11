/**
 * @brief Engine main loop: processes events, updates state, calls subsystems
 * @note Original: func_8003F898 at 0x8003F898
 */
// Engine_Loop



#include "tomba.h"
void FUN_8003f898(int param_1)

{
  undefined1 auStack_58->sub_action;
  undefined1 local_51;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  
  if (*(short **)(param_1 + 0x38) != (short *)0x0) {
    FUN_8003b054(auStack_58,
                 param_1->sprite_data +
                 (int)*(short *)(param_1->sprite_data + **(short **)(param_1 + 0x38) * 4 + 2),0)
    ;
    local_51 = 0x2d;
    local_30 = param_1->draw_x;
    local_2e = param_1->angle_delta;
    local_2c = *(undefined2 *)(param_1 + 100);
    local_28 = *(undefined2 *)(param_1 + 0x66);
    local_26 = param_1->target_angle;
    local_24 = param_1->type_flags;
    local_20 = *(undefined2 *)(param_1 + 0x6c);
    local_1e = *(undefined2 *)(param_1 + 0x6e);
    local_1c = *(undefined2 *)(param_1 + 0x70);
    local_18 = param_1->event_id;
    local_16 = param_1->event_param;
    local_14 = *(undefined2 *)(param_1 + 0x76);
    FUN_80084660(&DAT_1f8000f8);
    FUN_80084690(&DAT_1f8000f8);
    FUN_8003b320(auStack_58,&local_30,0x10);
  }
  return;
}
