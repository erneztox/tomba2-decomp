/**
 * @brief Entity behavior setter variant 2: entity->flags=1, tests entity->anim_id
 * @note Original: func_80068E68 at 0x80068E68
 */
// Entity_BehaviorSet2



#include "tomba.h"
void FUN_80068e68(int param_1)

{
  uint uVar1;
  
  param_1->flags = 1;
  if ((param_1->anim_id & 8) == 0) {
    if ((param_1->anim_id & 1) == 0) {
      *(undefined2 *)(param_1 + 0xbe) = 0;
      param_1->anim_id = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0xbe) = 0x800;
      param_1->anim_id = 1;
    }
    param_1->type_flags = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0xbe) = 0x400;
    param_1->anim_id = 8;
    param_1->type_flags = 0x400;
  }
  param_1->target_angle = param_1->rot_y;
  param_1->timer1 = 0x78;
  param_1->timer2 = 0x1e;
  param_1->anim_counter = 0x6e;
  param_1->bounds_size = 200;
  param_1->bounds_max_y = 200;
  param_1->scale_x = 0x1000;
  param_1->scale_y = 0x1000;
  param_1->scale_z = 0x1000;
  param_1->bounds_min_x = 100;
  param_1->bounds_min_y = 100;
  param_1->move_mode = 2;
  param_1->flag_5E = 0;
  param_1->input_flags = 0;
  if ((param_1->sub_type & 0x80) == 0) {
    uVar1 = param_1->sub_type & 0x7f;
    FUN_80077c40(param_1,*(undefined4 *)(&DAT_800a4a00 + uVar1 * 4),(&DAT_800a4a44)[uVar1]);
  }
  FUN_80069858(param_1,0,1);
  if ((param_1->sub_type & 0x80) == 0) {
    FUN_800518fc(param_1);
  }
  else {
    FUN_800517f8(param_1);
  }
  param_1->state = param_1->state + '\x01';
  return;
}
