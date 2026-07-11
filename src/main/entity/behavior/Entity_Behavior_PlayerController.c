/**
 * @brief Main player/character state machine with 8 entity-type dispatch + 6 sub-states
 * @note Original: func_80040558 at 0x80040558
 */
// Entity_Behavior_PlayerController



#include "tomba.h"
#include "overlay.h"
void Entity_Behavior_PlayerController(u8 *param_1)

{
  u8 bVar1;
  s8 cVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return;
        }
        Entity_Dealloc(param_1);
        return;
      }
      switchparam_1->behavior_state {
      case 1:
        if ((param_1->sub_type == '\0') && (DAT_800bfad1 == '\0')) {
          Event_TriggerCollectible(0x38);
        }
        if (param_1->flag_5E != '\x02') goto LAB_8004099c;
        *(u8 *)(param_1->parent + 0x5e) = 1;
        break;
      case 2:
        Entity_AnimMode(param_1);
        break;
      case 3:
        Entity_Behavior_ShakeSFX(param_1);
      }
      if (param_1->flag_5E == '\x02') {
        param_1->flags = *(u8 *)(param_1->parent + 1);
        Overlay_8012866c(param_1);
        Sprite_Alloc2(param_1);
        return;
      }
LAB_8004099c:
      if ((g_ActionFlag == '\0') || ((u16)g_HurtParam != param_1->type_flags)) {
        if ((param_1->alloc_flags & 0x80) != 0) {
          return;
        }
        if (g_GameState == '\b') {
          iVar3 = Overlay_8012e168(param_1);
        }
        else {
          iVar3 = GTE_ProjectSprite2(param_1);
        }
        if (iVar3 == 0) {
          return;
        }
      }
      else {
        if ((param_1->alloc_flags & 0x80) == 0) {
          return;
        }
        param_1->flags = 1;
        Sprite_Alloc2(param_1);
      }
      Entity_UpdateMatrix(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (param_1->behavior_state == '\0') {
      iVar3 = Entity_AllocSubEntities(param_1,param_1->sub_type);
      if (iVar3 != 0) {
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
      param_1->bounds_min_x = 0x40;
      param_1->bounds_size = 0x80;
      param_1->collision_state = 0;
      param_1->move_mode = 0;
      param_1->input_flags = 0;
      param_1->bounds_min_y = 0x96;
      param_1->bounds_max_y = 0x96;
      param_1->anim_id = 0;
      return;
    }
    if (param_1->behavior_state != '\x01') {
      return;
    }
    switchparam_1->flag_5E {
    case 0:
      Entity_PhysicsFull(param_1);
      break;
    case 1:
      Entity_PhysicsClimb(param_1);
      break;
    case 2:
      Overlay_801286f4(param_1);
      break;
    default:
      goto switchD_80040648_caseD_3;
    case 4:
      Entity_SetAngleFromState(param_1);
      break;
    case 5:
      Overlay_80120188(param_1);
      break;
    case 6:
      iVar3 = Entity_PhysicsIfMatch(param_1);
      goto LAB_800406b8;
    case 7:
      iVar3 = Overlay_801146e8(param_1);
LAB_800406b8:
      if (iVar3 == 0) {
        return;
      }
switchD_80040648_caseD_3:
    }
    param_1->state = 1;
    param_1->behavior_state = 0;
    *param_1 = 1;
    param_1->collision_state = 0;
    return;
  }
  if (g_GameState == '\x12') {
    if (DAT_800bfa59 == '\0') {
      return;
    }
  }
  else if ((g_GameState == '\x06') && (g_LevelId == '\x13')) {
    return;
  }
  switchparam_1->behavior_state {
  case 0:
    Entity_Behavior_Shake(param_1);
    break;
  case 1:
    Entity_Behavior_ShakeSFX(param_1);
    break;
  case 2:
    Entity_State_Grab(param_1);
    break;
  case 3:
    Entity_Behavior_Explosion(param_1);
    break;
  case 4:
    Entity_Behavior_ParticleBurst(param_1);
    break;
  case 5:
    Overlay_80114934(param_1);
  }
  switchparam_1->flag_5E {
  case 0:
  case 1:
  case 3:
  case 4:
  case 6:
    goto switchD_800407d0_caseD_0;
  case 2:
    cVar2 = *(s8*)(param_1->parent + 1);
    param_1->flags = cVar2;
    if (cVar2 != '\0') {
      Overlay_8012866c(param_1);
      Sprite_Alloc2(param_1);
      param_1->collision_state = 0;
      goto LAB_800408cc;
    }
    break;
  case 5:
    Overlay_801201e0(param_1);
    break;
  case 7:
    Overlay_8012b118(param_1);
switchD_800407d0_caseD_0:
    if ((g_ActionFlag == '\0') || ((u16)g_HurtParam != param_1->type_flags)) {
      if ((param_1->alloc_flags & 0x80) == 0) {
        if (g_GameState == '\b') {
          iVar3 = Overlay_8012e168(param_1);
        }
        else {
          iVar3 = GTE_ProjectSprite2(param_1);
        }
        if (iVar3 != 0) goto LAB_80040878;
      }
    }
    else if ((param_1->alloc_flags & 0x80) != 0) {
      param_1->flags = 1;
      Sprite_Alloc2(param_1);
LAB_80040878:
      Entity_UpdateMatrix(param_1);
      param_1->collision_state = 0;
      goto LAB_800408cc;
    }
  }
  param_1->collision_state = 0;
LAB_800408cc:
  param_1->input_flags = 0;
  return;
}
