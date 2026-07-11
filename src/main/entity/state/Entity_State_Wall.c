/**
 * @brief Entity wall state: entity->sub_action state, wall collision
 * @note Original: func_8006483C at 0x8006483C
 */
// Entity_State_Wall



#include "tomba.h"
void Entity_State_Wall(int param_1,int param_2)

{
  u8 bVar1;
  s16 uVar2;
  u16 uVar3;
  s16 sVar4;
  int iVar5;
  
  bVar1 = param_1->sub_action;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return;
        }
        Entity_ApplyVelocity(param_1,1);
        Entity_PhysicsStep2(param_1);
        sVar4 = param_1->velocity_y + 0x360;
        param_1->velocity_y = sVar4;
        if (0x3e00 < sVar4) {
          param_1->velocity_y = 0x3e00;
        }
        param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
        Entity_AnimFrame(param_1);
        Entity_CollisionGround(param_1);
        return;
      }
      Entity_ApplyVelocity(param_1,1);
      Entity_PhysicsStep2(param_1);
      uVar3 = param_1->velocity_y + 0x580;
      param_1->velocity_y = uVar3;
      if (0 < (int)((uint)uVar3 << 0x10)) {
        param_1->state_flag145 = 2;
        param_1->sub_action = param_1->sub_action + '\x01';
        if (param_2 == 0) {
          param_1->state_flag144 = 1;
        }
        param_1->state_ptr = 0;
      }
      param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
      Entity_AnimFrame(param_1);
      goto LAB_80064b18;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->anim_counter = 0;
    param_1->collision_state = 0;
    param_1->rot_z = 0;
    param_1->state_flag145 = 1;
    param_1->velocity_y = 0;
    param_1->sub_action = param_1->sub_action + '\x01';
    if (param_1->anim_id == '\x1a') {
      if (param_1->entity_flags < 0) {
        *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + -0x20;
        iVar5 = Math_CosGTE((int)param_1->rot_y);
        param_1->pos_y = param_1->pos_y + (s16)(iVar5 * -0x23 >> 0xc);
        iVar5 = Math_Cos((int)param_1->rot_y);
        param_1->pos_z = param_1->pos_z - (s16)(iVar5 * -0x23 >> 0xc);
      }
      else {
        *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + -0x40;
        iVar5 = Math_CosGTE((int)param_1->rot_y);
        param_1->pos_y = param_1->pos_y + (s16)(iVar5 * -0x46 >> 0xc);
        iVar5 = Math_Cos((int)param_1->rot_y);
        param_1->pos_z = param_1->pos_z - (s16)(iVar5 * -0x46 >> 0xc);
      }
    }
    Entity_LoadAnimIfChanged(param_1,0x19,0);
  }
  if (param_1->entity_flags < 0) {
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + -0x20;
    iVar5 = Math_CosGTE((int)param_1->rot_y);
    param_1->pos_y = param_1->pos_y + (s16)(iVar5 * 5 >> 0xc);
    iVar5 = Math_Cos((int)param_1->rot_y);
    iVar5 = iVar5 * 5;
  }
  else {
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + -0x40;
    iVar5 = Math_CosGTE((int)param_1->rot_y);
    param_1->pos_y = param_1->pos_y + (s16)(iVar5 * 10 >> 0xc);
    iVar5 = Math_Cos((int)param_1->rot_y);
    iVar5 = iVar5 * 10;
  }
  param_1->pos_z = param_1->pos_z - (s16)(iVar5 >> 0xc);
  Entity_AnimFrame(param_1);
  if (1 < *(u16 *)(param_1->anim_data + 2)) {
    param_1->sub_action = param_1->sub_action + '\x01';
    if (param_1->direction == '\0') {
      uVar2 = 0xc00;
    }
    else {
      uVar2 = 0xf400;
    }
    param_1->anim_counter = uVar2;
  }
LAB_80064b18:
  Entity_SubState(param_1,1);
  return;
}
