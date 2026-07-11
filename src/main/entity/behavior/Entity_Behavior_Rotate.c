/**
 * @brief Entity rotate behavior: uses angle approach, checks distance, advances state
 * @note Original: func_800663A8 at 0x800663A8
 */
// Entity_Behavior_Rotate



#include "tomba.h"
void FUN_800663a8(int param_1,int param_2)

{
  s8 cVar1;
  s16 uVar2;
  int iVar3;
  s32 uVar4;
  
  iVar3 = FUN_80077768((int)param_1->draw_angle,(uint)param_1->move_mode << 4,0);
  if (iVar3 == 0) {
    param_1->rot_z = 0xfd00;
    param_1->direction = 1;
    uVar2 = 0x1000;
  }
  else {
    param_1->rot_z = 0xfd00;
    uVar2 = 0xf000;
    param_1->direction = 0;
  }
  param_1->anim_counter = uVar2;
  cVar1 = param_1->direction + '\x02';
  param_1->behavior_flags = cVar1;
  *(s8*)(param_1 + 0x149) = cVar1;
  if (param_2 == 0) {
    uVar4 = 0x57;
  }
  else {
    uVar4 = 0x56;
  }
  FUN_80054d14(param_1,uVar4,0);
  param_1->velocity_y = 0xd800;
  param_1->sub_action = 0;
  param_1->timer1 = 0;
  param_1->state_flag145 = 1;
  param_1->collision_state = 0;
  param_1->action_state = param_1->action_state + '\x01';
  FUN_800551c4();
  return;
}
