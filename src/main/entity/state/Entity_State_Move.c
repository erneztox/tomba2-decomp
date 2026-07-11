/**
 * @brief Entity move state: entity->action_state state 0->1->2, applies movement
 * @note Original: func_8005F1B0 at 0x8005F1B0
 */
// Entity_State_Move



#include "tomba.h"
void FUN_8005f1b0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      FUN_80066538(param_1);
      if (param_1->collision_state == '\0') {
        if (0x2700 < param_1->velocity_y) {
          param_1->state = 1;
          param_1->angle_offset = param_1->velocity_y;
          FUN_80056d44(param_1,0);
          param_1->velocity_y = param_1->angle_offset;
        }
      }
      else {
        FUN_8005314c(param_1);
        param_1->state_flag145 = 0;
        param_1->state_flag144 = 0;
        param_1->angle_offset = 0;
        *(undefined1 *)(param_1 + 0x148) = 0;
        param_1->state = 1;
        param_1->action_state = 0;
        param_1->sub_action = 0;
        iVar2 = FUN_8005344c(param_1);
        if (iVar2 == 0) {
          param_1->anim_counter = 0;
          FUN_80054d14(param_1,2,4);
          param_1->behavior_state = 0;
        }
      }
      FUN_800551c4(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    FUN_80074590(0x23,0,0);
    FUN_80053d90(param_1);
    param_1->rot_z = 0;
    *(undefined1 *)(param_1 + 0x61) = 0;
    param_1->state_flag146 = 0;
    FUN_800663a8(param_1,1);
  }
  FUN_80066478(param_1);
  return;
}
