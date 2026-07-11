/**
 * @brief Entity float state: entity->action_state state machine, buoyancy
 * @note Original: func_800645E0 at 0x800645E0
 */
// Entity_State_Float



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
void Entity_State_Float(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        Entity_AnimFrame(param_1);
        Entity_PhysicsUpdate(param_1,1);
        Entity_BehaviorDispatcher(param_1,param_1->behavior_flags);
        Entity_ApplyVelocity(param_1,1);
        Entity_PhysicsStep2(param_1);
        Entity_State_Combo(param_1,0);
        sVar2 = param_1->timer1;
        param_1->timer1 = sVar2 + -1;
        if (sVar2 == 1) {
          param_1->behavior_state = 2;
          param_1->action_state = 1;
        }
        else {
          iVar3 = Entity_CheckCollisionFlags(param_1,0);
          if (iVar3 == 0) {
            if (param_1->collision_state != '\0') {
              param_1->sub_action = 0;
              if ((*(u8 *)(param_1 + 0x149) & 2) == 0) {
                param_1->behavior_state = 1;
                param_1->action_state = 0;
                Entity_StateMain(param_1,1);
              }
              else {
                param_1->behavior_state = 2;
                param_1->action_state = 2;
                Entity_LoadAnimIfChanged(param_1,0x17,1);
              }
            }
          }
          else {
            param_1->state_flag144 = 0;
            param_1->action_state = 0;
            if (param_1->collision_state == '\0') {
              param_1->behavior_state = 6;
            }
            else {
              param_1->behavior_state = 5;
              param_1->sub_action = 0;
            }
          }
        }
        Entity_State_Physics(param_1);
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      Overlay_8010aa20(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->sub_action = 2;
    param_1->speed = 0;
    param_1->flag_5E = 0;
    param_1->rot_z = 0;
    param_1->velocity_y = 0;
    param_1->action_state = param_1->action_state + '\x01';
    param_1->behavior_flags = param_1->direction + '\x02';
    *(s8*)(param_1 + 0x149) = param_1->direction + '\x02';
  }
  iVar3 = Entity_OverlayDispatch2(param_1,0);
  if ((iVar3 == 0) && (1 < param_1->sub_action)) {
    if ((_g_PadState & _g_InputMask) == 0) {
      if (((*(s8*)(param_1->state_ptr + 0xc) != '\x05') &&
          (iVar3 = Entity_CheckCollisionFlags(param_1,0), iVar3 != 0)) && (param_1->behavior_state == '\x04')) {
        Entity_SetStateTo9(param_1);
      }
    }
    else {
      Entity_State_Jump(param_1);
    }
  }
  return;
}
