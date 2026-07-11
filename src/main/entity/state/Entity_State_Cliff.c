/**
 * @brief Entity cliff state: edge detection + reaction
 * @note Original: func_80062A30 at 0x80062A30
 */
// Entity_State_Cliff



#include "tomba.h"
void Entity_State_Cliff(int param_1,int param_2,uint param_3)

{
  s16 uVar1;
  s16 sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == 3) {
    uVar3 = Entity_CollisionGround();
    if ((uVar3 & 1) == 0) {
      return;
    }
    param_1->velocity_y = 0;
    param_1->angle_offset = 0;
    *(u8 *)(param_1 + 0x148) = 0;
    param_2->collision_state = 0;
    param_1->action_flag = 0;
    param_1->state_ptr = 0;
    param_1->behavior_state = 0;
    param_1->action_state = 0;
LAB_80062d68:
    Entity_LoadAnimIfChanged(param_1,2,3);
    return;
  }
  if ((param_3 & 4) == 0) {
    if (param_1->state_165 == '\0') {
      uVar3 = param_3 & 1;
    }
    else {
      uVar3 = (param_3 & 1) + 3;
    }
    uVar3 = (uint)(char)(&DAT_800a4700)[uVar3];
  }
  else {
    sVar2 = param_1->velocity_y + 4;
    param_1->velocity_y = sVar2;
    if (0x1d < sVar2) {
      param_1->velocity_y = 0x1e;
    }
    uVar3 = (uint)param_1->velocity_y;
  }
  if ((param_3 & 1) != 0) {
    iVar4 = param_1->speed2 + uVar3;
    param_1->speed2 = (s16)iVar4;
    if (((param_3 & 0x80) == 0) &&
       ((param_2->kind != '\x17' || (param_2->sub_anim_id == '\x02')))) {
      if ((int)param_2->bounds_max_y - (int)param_2->bounds_min_y <
          (int)param_1->speed2) {
        param_1->speed2 = param_2->bounds_max_y - param_2->bounds_min_y;
      }
    }
    else {
      iVar5 = 0;
      if (param_1->entity_flags < 0) {
        iVar5 = 0x50;
      }
      if (iVar5 + ((int)param_2->bounds_max_y - (int)param_2->bounds_min_y) +
          (int)param_1->target_angle < iVar4 * 0x10000 >> 0x10) {
        param_1->velocity_y = 0;
        param_1->angle_offset = 0;
        *(u8 *)(param_1 + 0x148) = 0;
        param_2->collision_state = 0;
        param_1->action_flag = 0;
        param_1->state_ptr = 0;
        param_1->anim_counter = 0;
        param_1->speed2 = param_1->speed2 + 0x2c;
        Entity_ResetActionState(param_1,0);
        if (param_2->kind != '\x17') {
          return;
        }
        param_1->velocity_y = param_2->velocity_y;
        sVar2 = param_1->speed2 + 0x2c;
        param_1->speed2 = sVar2;
        if ((param_1->entity_flags & 0x60) == 0) {
          return;
        }
        param_1->speed2 = sVar2 + (s16)((param_2->velocity_y & 0x1f00) >> 5);
        return;
      }
    }
    if ((param_3 & 0x40) != 0) {
      return;
    }
    uVar3 = Entity_CollisionGround(param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
    param_2->collision_state = 0;
    param_1->action_flag = 0;
    param_1->state_ptr = 0;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    if (param_3 == 0x85) {
      param_1->direction = '\x01' - param_1->direction;
      Entity_ResetState_2(param_1);
      param_1->behavior_state = 0x35;
      return;
    }
    param_1->velocity_y = 0;
    param_1->angle_offset = 0;
    *(u8 *)(param_1 + 0x148) = 0;
    param_1->behavior_state = 0;
    goto LAB_80062d68;
  }
  param_1->type_flags = 0;
  uVar1 = param_1->speed2;
  if ((param_2->kind == '\x17') && (param_2->sub_anim_id != '\x02')) {
    if ((param_3 & 2) != 0) {
      param_1->speed2 =
           (param_1->speed2 + -0x30) -
           (s16)(char)((u16)param_2->velocity_y >> 8);
      goto LAB_80062b98;
    }
    sVar2 = param_1->speed2 +
            ((s16)uVar3 - (s16)(char)((u16)param_2->velocity_y >> 8));
  }
  else {
    sVar2 = param_1->speed2 + (s16)uVar3;
  }
  param_1->speed2 = sVar2;
LAB_80062b98:
  iVar4 = Entity_SubState(param_1,1);
  if (iVar4 != 0) {
    param_1->speed2 = uVar1;
  }
  if (-(int)param_2->bounds_min_y <= (int)param_1->speed2) {
    return;
  }
  param_1->speed2 = -param_2->bounds_min_y;
  return;
}
