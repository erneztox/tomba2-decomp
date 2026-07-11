/**
 * @brief Entity title state: entity->behavior_state switch, title screen
 * @note Original: func_80049A60 at 0x80049A60
 */
// Entity_State_Title



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Title(u8 *param_1,int param_2)

{
  s8 cVar1;
  s16 sVar2;
  u16 uVar3;
  u8 bVar4;
  int iVar5;
  
  switchparam_1->behavior_state {
  case 0:
    param_1->velocity_y = 0xd000;
    param_1->angle_offset = 0x200;
    param_1->behavior_state = param_1->behavior_state + '\x01';
    if (param_2 == 0) {
      param_1[0x18] = 0;
    }
    else {
      param_1[0x18] = 0xff;
      param_1[0x19] = 0xff;
      param_1[0x1a] = 0xff;
    }
    break;
  case 1:
    sVar2 = param_1->velocity_y;
    uVar3 = param_1->velocity_y;
    param_1->velocity_y = (s16)((uint)uVar3 + (uint)param_1->angle_offset);
    param_1->pos_y_fixed = param_1->pos_y_fixed + sVar2 * 0x100;
    iVar5 = (int)(((uint)uVar3 + (uint)param_1->angle_offset) * 0x10000) >> 0x10;
    if (iVar5 < 0) {
      if (-0x1800 < iVar5) {
        *param_1 = 1;
      }
      Entity_PhysicsStep(param_1);
      iVar5 = Collision_Check3(param_1,0,(int)-param_1->bounds_min_y);
      if (iVar5 != 0) {
        *param_1 = 1;
        param_1->velocity_y = 0;
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
      break;
    }
    cVar1 = param_1->behavior_state;
    goto LAB_80049bc8;
  case 2:
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
    if (param_1->velocity_y < 0x3000) {
      param_1->velocity_y = param_1->velocity_y + param_1->angle_offset;
    }
    if (param_1->collision_state == '\0') {
      if ((param_1->alloc_flags & 0x80) == 0) {
        Entity_PhysicsStep(param_1);
        iVar5 = Collision_Check1(param_1,0,
                             (int)(((uint)param_1->bounds_max_y -
                                   (uint)param_1->bounds_min_y) * 0x10000) >> 0x10);
        if (iVar5 != 1) {
          if (iVar5 != 2) break;
          if ((((int)_DAT_1f8001a6 & 0x8000U) != 0) && (g_GameState != '\b')) {
            if ((g_GameState != '\x01') || (param_1->kind == '\0')) {
              param_1->behavior_state = 6;
            }
            break;
          }
        }
LAB_80049d18:
        param_1->behavior_state = 5;
      }
      else {
        if (DAT_800e7feb == '\b') {
          if (((g_ActionFlag != '\x01') || ((u16)g_HurtParam != param_1->type_flags)) ||
             ((int)*(s16 *)(param_1 + 0x32) +
              ((int)param_1->bounds_max_y - (int)param_1->bounds_min_y) <
              (int)_DAT_800bf812)) break;
          *(s16 *)(param_1 + 0x32) =
               _DAT_800bf812 - (param_1->bounds_max_y - param_1->bounds_min_y);
          goto LAB_80049d18;
        }
        Entity_PhysicsStep(param_1);
        iVar5 = Collision_Check1(param_1,0,
                             (int)(((uint)param_1->bounds_max_y -
                                   (uint)param_1->bounds_min_y) * 0x10000) >> 0x10);
        if (iVar5 == 0) break;
        param_1->behavior_state = 5;
      }
      param_1->velocity_y = 0;
      break;
    }
    cVar1 = param_1->behavior_state;
    param_1->velocity_y = 0;
LAB_80049bc8:
    param_1->behavior_state = cVar1 + '\x01';
    break;
  case 3:
    if ((((param_1->alloc_flags & 0x80) == 0) ||
        ((g_ActionFlag != '\0' && ((u16)g_HurtParam == param_1->type_flags)))) &&
       (param_1->collision_state == '\0')) {
      param_1->velocity_y = 0x2000;
      param_1->behavior_state = param_1->behavior_state + -1;
    }
    break;
  case 6:
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
    if (param_1->velocity_y < 0x3000) {
      param_1->velocity_y = param_1->velocity_y + param_1->angle_offset;
    }
    iVar5 = GTE_ProjectSprite1(param_1,(int)param_1->pos_y,(int)*(s16 *)(param_1 + 0x32),
                         (int)param_1->pos_z);
    if (iVar5 == 0) {
      param_1->state = STATE_DEAD;
    }
  }
  if (param_2 == 0) {
    if ((_g_FrameCounter2 & 0x1f) == 0) {
      bVar4 = param_1->sprite_flags | 0x20;
    }
    else {
      bVar4 = param_1->sprite_flags & 0xdf;
    }
  }
  else if ((_g_FrameCounter2 & 0x1f) == 0) {
    bVar4 = param_1->sprite_flags | 2;
  }
  else {
    bVar4 = param_1->sprite_flags & 0xfd;
  }
  param_1->sprite_flags = bVar4;
  return;
}
