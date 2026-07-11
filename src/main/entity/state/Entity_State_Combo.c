/**
 * @brief Entity combo state: chain attacks, timer-based
 * @note Original: func_800574E0 at 0x800574E0
 */
// Entity_State_Combo



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Combo(int param_1,uint param_2)

{
  u8 bVar1;
  s8 cVar2;
  u16 uVar3;
  s16 uVar4;
  int iVar5;
  s16 sVar6;
  int local_20;
  s32 local_1c;
  int local_18;
  
  bVar1 = param_1->sub_action;
  uVar3 = param_1->entity_flags;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      if ((uVar3 & 0x20) != 0) {
        Entity_AttackInit(param_1);
      }
      if (((((param_2 & 0x10) == 0) && (DAT_800bf848 == 0)) && (*(s8*)(param_1 + 0x61) == '\0'))
         && (((uVar3 & 0x40) != 0 || (*(s8*)(param_1 + 0x179) == '\x01')))) {
        iVar5 = Entity_State_Jump2(param_1,param_2);
        if (iVar5 != 0) {
          return;
        }
      }
      else {
        Entity_SubState(param_1,0);
        if (param_1->collision_state != '\0') goto LAB_8005797c;
        if ((uVar3 & 0x60) != 0) {
          if (param_2 != 8) {
            uVar4 = Math_ApproachAngle_2(0,(int)param_1->rot_z,0x40);
            param_1->rot_z = uVar4;
          }
          if ((uVar3 & 0x20) != 0) {
            if ((param_1->behavior_flags & 8) != 0) {
              *(s8*)(param_1 + 0x178) = *(s8*)(param_1 + 0x178) + '\x01';
            }
            cVar2 = *(s8*)(param_1 + 0x178) + '\x01';
            *(s8*)(param_1 + 0x178) = cVar2;
            if (cVar2 == -1) {
              *(u8 *)(param_1 + 0x178) = 0xff;
            }
          }
        }
        sVar6 = 0x360;
        if (((param_2 & 1) == 0) && (param_1->anim_id == -0x1b)) {
          sVar6 = 0x500;
        }
        sVar6 = param_1->velocity_y + sVar6;
        param_1->velocity_y = sVar6;
        if (0x3e00 < sVar6) {
          param_1->velocity_y = 0x3e00;
        }
        param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
        if (param_2 == 2) {
          if ((DAT_800bf848 != 0) && ((_g_PadState & _g_InputMask) != 0)) {
            param_1->sub_action = 0;
            param_1->state_flag145 = 1;
            Audio_PlaySoundEffect(0x1d,0,0);
            return;
          }
          cVar2 = Collision_Check2(param_1,0,((int)param_1->angle_delta << 0x11) >> 0x10);
          param_1->collision_state = cVar2;
          if (cVar2 != '\0') {
            return;
          }
        }
        else if (DAT_800bf848 == 0) {
          if (((-1 < param_1->velocity_y) && ((param_2 & 2) == 0)) &&
             (param_1->state_flag144 == '\0')) {
            param_1->state_flag144 = 1;
          }
        }
        else {
          if (param_1->state_flag144 == '\x01') {
            param_1->state_flag144 = 0;
          }
          if (((int)param_2 < 2) && ((_g_PadState & _g_InputMask) != 0)) goto LAB_80057908;
        }
        Entity_CollisionGround(param_1);
      }
      if (param_1->collision_state == '\0') {
        return;
      }
LAB_8005797c:
      *(u8 *)(param_1 + 0x148) = 0;
      param_1->angle_offset = 0;
      if (param_1->state_flag144 < 2) {
        param_1->state_flag144 = 0;
      }
      param_1->state_flag145 = 0;
      local_1c = param_1->pos_y_fixed;
      if (param_1->direction == '\0') {
        local_20 = param_1->normal_x * -0x2800;
        local_18 = param_1->normal_z * -0x2800;
      }
      else {
        local_20 = param_1->normal_x * 0x2800;
        local_18 = param_1->normal_z * 0x2800;
      }
      local_20 = *(int *)(param_1 + 0x2c) + local_20;
      local_18 = param_1->scale_y + local_18;
      Entity_Behavior_SpawnAtOffset(param_1,&local_20,0);
      Entity_StateDispatch(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    Entity_ResetStateFlags(param_1);
    if ((param_2 & 1) == 0) {
      Entity_SetAccel(param_1,1);
      if (param_1->state_165 != '\0') {
        param_1->velocity_y = param_1->velocity_y + -0x580;
      }
      if (param_1->sub_state == '\x06') {
        param_1->velocity_y = param_1->velocity_y + -0x1000;
      }
    }
  }
  Entity_SubState(param_1,0);
  Entity_Behavior_FollowParentY(param_1);
  if (((((param_2 & 0x10) == 0) && (DAT_800bf848 == 0)) && (*(s8*)(param_1 + 0x61) == '\0')) &&
     ((uVar3 & 0x60) != 0)) {
    Entity_State_Dash(param_1,param_2);
  }
  else {
    sVar6 = 0x360;
    if (((param_2 & 1) == 0) && ((uVar3 & 0x180) != 0)) {
      sVar6 = 0x120;
    }
    uVar3 = param_1->velocity_y + sVar6;
    param_1->velocity_y = uVar3;
    if (-1 < (int)((uint)uVar3 << 0x10)) {
      param_1->state_flag145 = 2;
      param_1->sub_action = param_1->sub_action + '\x01';
      if ((param_2 & 2) == 0) {
        param_1->state_flag144 = 1;
      }
    }
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
  }
  if ((param_2 & 1) == 0) {
    Entity_AttackCheck(param_1);
  }
  if ((DAT_800bf848 & 3) == 0) {
    return;
  }
  if (param_1->state_flag144 == '\x01') {
    param_1->state_flag144 = 0;
  }
  if ((1 < (int)param_2) || ((_g_PadState & _g_InputMask) == 0)) {
    param_1->sub_action = 2;
    param_1->state_flag145 = 2;
    return;
  }
LAB_80057908:
  param_1->sub_action = 0;
  param_1->state_flag145 = 1;
  Entity_LoadAnimIfChanged(param_1,0x14,4);
  Audio_PlaySoundEffect(0x1d,0,0);
  return;
}
