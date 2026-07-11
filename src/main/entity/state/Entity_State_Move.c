/**
 * @brief Entity move state: entity->action_state state 0->1->2, applies movement
 * @note Original: func_8005F1B0 at 0x8005F1B0
 */
// Entity_State_Move



#include "tomba.h"
void Entity_State_Move(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      Entity_ApplyVelocityMax(param_1);
      if (param_1->collision_state == '\0') {
        if (0x2700 < param_1->velocity_y) {
          param_1->state = 1;
          param_1->angle_offset = param_1->velocity_y;
          Entity_ResetActionState(param_1,0);
          param_1->velocity_y = param_1->angle_offset;
        }
      }
      else {
        Entity_StateDispatch(param_1);
        param_1->state_flag145 = 0;
        param_1->state_flag144 = 0;
        param_1->angle_offset = 0;
        *(u8 *)(param_1 + 0x148) = 0;
        param_1->state = 1;
        param_1->action_state = 0;
        param_1->sub_action = 0;
        iVar2 = Entity_CheckEventTrigger(param_1);
        if (iVar2 == 0) {
          param_1->anim_counter = 0;
          Entity_LoadAnimIfChanged(param_1,2,4);
          param_1->behavior_state = 0;
        }
      }
      Entity_State_Physics(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    Audio_PlaySoundEffect(0x23,0,0);
    Entity_StateSwitch(param_1);
    param_1->rot_z = 0;
    *(u8 *)(param_1 + 0x61) = 0;
    param_1->state_flag146 = 0;
    Entity_Behavior_Rotate(param_1,1);
  }
  Entity_ApplyGravity(param_1);
  return;
}
