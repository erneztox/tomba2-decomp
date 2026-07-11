/**
 * @brief Main player/character state machine with 8 entity-type dispatch + 6 sub-states
 * @note Original: func_80040558 at 0x80040558
 */
// Entity_Behavior_PlayerController



#include "tomba.h"
void FUN_80040558(u8 *param_1)

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
        FUN_8007a624(param_1);
        return;
      }
      switchparam_1->behavior_state {
      case 1:
        if ((param_1->sub_type == '\0') && (DAT_800bfad1 == '\0')) {
          FUN_80040b48(0x38);
        }
        if (param_1->flag_5E != '\x02') goto LAB_8004099c;
        *(u8 *)(param_1->parent + 0x5e) = 1;
        break;
      case 2:
        FUN_8003fe00(param_1);
        break;
      case 3:
        FUN_8003fed8(param_1);
      }
      if (param_1->flag_5E == '\x02') {
        param_1->flags = *(u8 *)(param_1->parent + 1);
        func_0x8012866c(param_1);
        FUN_80077e7c(param_1);
        return;
      }
LAB_8004099c:
      if ((g_ActionFlag == '\0') || ((u16)g_HurtParam != param_1->type_flags)) {
        if ((param_1->alloc_flags & 0x80) != 0) {
          return;
        }
        if (g_GameState == '\b') {
          iVar3 = func_0x8012e168(param_1);
        }
        else {
          iVar3 = FUN_8007778c(param_1);
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
        FUN_80077e7c(param_1);
      }
      FUN_800517f8(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (param_1->behavior_state == '\0') {
      iVar3 = FUN_80040410(param_1,param_1->sub_type);
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
      FUN_8003fbc4(param_1);
      break;
    case 1:
      FUN_8003fc00(param_1);
      break;
    case 2:
      func_0x801286f4(param_1);
      break;
    default:
      goto switchD_80040648_caseD_3;
    case 4:
      FUN_8003fc78(param_1);
      break;
    case 5:
      func_0x80120188(param_1);
      break;
    case 6:
      iVar3 = FUN_8003fc8c(param_1);
      goto LAB_800406b8;
    case 7:
      iVar3 = func_0x801146e8(param_1);
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
    FUN_8003fd10(param_1);
    break;
  case 1:
    FUN_8003fed8(param_1);
    break;
  case 2:
    FUN_8003ffcc(param_1);
    break;
  case 3:
    FUN_8004022c(param_1);
    break;
  case 4:
    FUN_80040390(param_1);
    break;
  case 5:
    func_0x80114934(param_1);
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
      func_0x8012866c(param_1);
      FUN_80077e7c(param_1);
      param_1->collision_state = 0;
      goto LAB_800408cc;
    }
    break;
  case 5:
    func_0x801201e0(param_1);
    break;
  case 7:
    func_0x8012b118(param_1);
switchD_800407d0_caseD_0:
    if ((g_ActionFlag == '\0') || ((u16)g_HurtParam != param_1->type_flags)) {
      if ((param_1->alloc_flags & 0x80) == 0) {
        if (g_GameState == '\b') {
          iVar3 = func_0x8012e168(param_1);
        }
        else {
          iVar3 = FUN_8007778c(param_1);
        }
        if (iVar3 != 0) goto LAB_80040878;
      }
    }
    else if ((param_1->alloc_flags & 0x80) != 0) {
      param_1->flags = 1;
      FUN_80077e7c(param_1);
LAB_80040878:
      FUN_800517f8(param_1);
      param_1->collision_state = 0;
      goto LAB_800408cc;
    }
  }
  param_1->collision_state = 0;
LAB_800408cc:
  param_1->input_flags = 0;
  return;
}
