/**
 * @brief Entity charge state: entity->action_state state machine, charging
 * @note Original: func_80064E48 at 0x80064E48
 */
// Entity_State_Charge



#include "tomba.h"
void Entity_State_Charge(int param_1)

{
  u8 bVar1;
  u8 uVar2;
  u16 uVar3;
  s16 sVar4;
  int iVar5;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1->state_flag144 = 0;
        Audio_PlaySoundEffect(0x1e,0,0);
        param_1->action_state = param_1->action_state + '\x01';
        param_1->action_flag = 0;
        param_1->state_ptr = 0;
        param_1->rot_z = param_1->rot_z & 0xfff;
        if (param_1->velocity_y < 0) {
          param_1->timer1 = 2;
        }
        else {
          param_1->timer1 = 3;
        }
      }
      else if (bVar1 != 3) goto LAB_80065050;
      if (param_1->rot_z != 0) {
        uVar3 = param_1->rot_z - 0x100;
        if (param_1->rot_z < 0x801) {
          param_1->rot_z = uVar3;
          if ((int)((uint)uVar3 << 0x10) < 0) {
            param_1->rot_z = 0;
          }
        }
        else {
          sVar4 = param_1->rot_z + 0x100;
          param_1->rot_z = sVar4;
          if (0xfff < sVar4) {
            param_1->rot_z = 0;
          }
        }
      }
      Entity_ApplyVelocity(param_1,1);
      Entity_PhysicsStep2(param_1);
      Entity_State_Combo(param_1,1);
      Entity_AnimFrame(param_1);
      if (param_1->timer1 != 0) {
        param_1->timer1 = param_1->timer1 + -1;
      }
      if ((param_1->velocity_y < -0xdff) || (param_1->timer1 != 0)) {
        iVar5 = Entity_CheckCollisionFlags(param_1,1);
        if (iVar5 != 0) {
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
      else {
        param_1->behavior_state = 2;
        param_1->action_state = 1;
      }
      goto LAB_80065050;
    }
    if (bVar1 != 0) goto LAB_80065050;
    param_1->action_state = param_1->action_state + '\x01';
    param_1->anim_param = 0;
    param_1->sub_action = 0;
    if (param_1->anim_counter < 0) {
      param_1->anim_counter = -param_1->anim_counter;
    }
    uVar2 = 8;
    if ((0x9ff < param_1->anim_counter) && (uVar2 = 0x10, 0xfff < param_1->anim_counter))
    {
      uVar2 = 0x20;
    }
    *(u8 *)(param_1 + 0x169) = uVar2;
    *(u8 *)(param_1 + 0x168) = *(u8 *)(param_1 + 0x169) >> 4;
  }
  Entity_PhysicsMain(param_1);
LAB_80065050:
  Entity_State_Physics(param_1);
  return;
}
