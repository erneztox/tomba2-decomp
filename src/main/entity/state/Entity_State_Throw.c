/**
 * @brief Entity throw state: entity->action_state=0, spawns projectile
 * @note Original: func_80066DE8 at 0x80066DE8
 */
// Entity_State_Throw



#include "tomba.h"
void FUN_80066de8(undefined1 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (param_1->action_state == '\0') {
    param_1->timer_172 = 0x78;
    FUN_80074590(0x23,0,0);
    param_1->rot_z = 0;
    FUN_80053d90(param_1);
    param_1->state_flag146 = 0;
    param_1[0x61] = 0;
    iVar2 = FUN_80077768((int)param_1->draw_angle,(uint)(byte)param_1->move_mode << 4,0);
    uVar1 = 0xf000;
    if (iVar2 == 0) {
      param_1->direction = 1;
      uVar1 = 0x1000;
    }
    else {
      param_1->direction = 0;
    }
    param_1->anim_counter = uVar1;
    param_1->behavior_flags = param_1->direction + '\x02';
    param_1[0x149] = param_1->direction + '\x02';
    FUN_80054d14(param_1,0x56,0);
    param_1->velocity_y = 0xe000;
    param_1->sub_action = 0;
    param_1->collision_state = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  FUN_80076d68(param_1);
  FUN_80056b48(param_1,1);
  FUN_80055d5c(param_1);
  FUN_800574e0(param_1,0x11);
  param_1->state_flag144 = 0;
  iVar2 = FUN_800665f4(param_1);
  if (iVar2 == 0) {
    if (param_1->collision_state == '\0') {
      if (0x2800 < param_1->velocity_y) {
        *param_1 = 3;
        param_1->timer_172 = 0x1e;
        param_1->state = 1;
        param_1->angle_offset = param_1->velocity_y;
        FUN_80056d44(param_1,0);
        param_1->velocity_y = param_1->angle_offset;
      }
    }
    else {
      *param_1 = 3;
      param_1->timer_172 = 0x1e;
      param_1->angle_offset = 0;
      param_1[0x148] = 0;
      param_1->state = 1;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      iVar2 = FUN_8005344c();
      if (iVar2 == 0) {
        param_1->anim_counter = 0;
        FUN_80054d14(param_1,2,0);
        param_1->behavior_state = 0;
      }
    }
    FUN_800551c4(param_1);
  }
  return;
}
