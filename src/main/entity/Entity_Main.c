/**
 * @brief Entity main: primary entity update loop (205L)
 * @note Original: func_8004AAC4 at 0x8004AAC4
 */
// Entity_Main



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
void Entity_Main(u8 *param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if ((param_1->alloc_flags & 0x80) == 0) {
      iVar2 = GTE_ProjectSprite2(param_1);
      if (iVar2 == 0) goto LAB_8004aba0;
    }
    else {
      if (g_ActionFlag == '\0') {
        return;
      }
      if ((u16)g_HurtParam != param_1->type_flags) {
        return;
      }
      param_1->flags = 1;
LAB_8004aba0:
      Sprite_Alloc3(param_1);
    }
    switchparam_1->flag_5E {
    case 0:
      if (param_1->behavior_state == '\0') {
        param_1->behavior_state = 1;
        *param_1 = 1;
        param_1[0x18] = 0;
      }
      if ((_g_FrameCounter2 & 0x1f) == 0) {
        bVar1 = param_1->sprite_flags | 0x20;
      }
      else {
LAB_8004ac1c:
        bVar1 = param_1->sprite_flags & 0xdf;
      }
      goto LAB_8004ac28;
    case 1:
      Entity_State_Title(param_1,0);
      break;
    case 2:
      if (param_1->behavior_state == '\0') {
        param_1->behavior_state = 1;
        *param_1 = 1;
        Entity_MoveToward(param_1,(int)param_1->bounds_max_y - (int)param_1->bounds_min_y,0,0);
        param_1[0x18] = 0;
      }
      if ((_g_FrameCounter2 & 0x1f) != 0) goto LAB_8004ac1c;
      bVar1 = param_1->sprite_flags | 0x20;
LAB_8004ac28:
      param_1->sprite_flags = bVar1;
      break;
    case 3:
      if (param_1->behavior_state == '\0') {
        param_1->behavior_state = 1;
        *param_1 = 1;
        param_1[0x18] = 0xff;
        param_1[0x19] = 0xff;
        param_1[0x1a] = 0xff;
      }
      if ((_g_FrameCounter2 & 0x1f) == 0) {
        bVar1 = param_1->sprite_flags | 2;
      }
      else {
LAB_8004ad74:
        bVar1 = param_1->sprite_flags & 0xfd;
      }
      goto LAB_8004ad80;
    case 4:
      Entity_State_Title(param_1,1);
      goto LAB_8004ad84;
    case 5:
      if (param_1->behavior_state == '\0') {
        param_1->behavior_state = 1;
        *param_1 = 1;
        Entity_MoveToward(param_1,(int)param_1->bounds_max_y - (int)param_1->bounds_min_y,0,0);
        param_1[0x18] = 0xff;
        param_1[0x19] = 0xff;
        param_1[0x1a] = 0xff;
      }
      if ((_g_FrameCounter2 & 0x1f) != 0) goto LAB_8004ad74;
      bVar1 = param_1->sprite_flags | 2;
LAB_8004ad80:
      param_1->sprite_flags = bVar1;
LAB_8004ad84:
      GTE_LoadScaleCompose(param_1);
      param_1->collision_state = 0;
      goto LAB_8004add8;
    case 6:
      if (g_GameState == '\x02') {
        Overlay_80128034(param_1,0);
      }
      else if (g_GameState == '\a') {
        Overlay_8012ab88(param_1,0);
      }
      break;
    default:
      goto switchD_8004abd0_default;
    }
    Entity_AdvanceAnim3(param_1);
switchD_8004abd0_default:
    param_1->collision_state = 0;
LAB_8004add8:
    param_1->move_mode = 0;
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return;
    }
    param_1->state = 1;
    if ((param_1->alloc_flags & 0x7f) == 0) {
      Entity_SetupSpriteRender(param_1);
      return;
    }
    Entity_InitFromTypeTable(param_1);
    return;
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      return;
    }
    Entity_Dealloc(param_1);
    return;
  }
  if (param_1->behavior_state != '\0') {
    if (param_1->behavior_state != '\x01') {
      return;
    }
    if (param_1->draw_x != 0) {
      if ((*(u16 *)(param_1 + 100) & 4) == 0) {
        Inventory_SetFlag((int)param_1->angle_delta,0);
      }
      else {
        Inventory_SetBit((int)param_1->angle_delta,0);
      }
    }
    param_1->state = STATE_DEAD;
    return;
  }
  switchparam_1->sub_type {
  case 0:
    iVar2 = UI_ElementUpdate(param_1,1);
    goto LAB_8004b054;
  case 1:
    iVar2 = UI_ElementUpdate(param_1,2);
    goto LAB_8004b054;
  default:
    iVar2 = Menu_ItemDispatch(param_1);
    goto LAB_8004b054;
  case 4:
    _DAT_800bf874 = _DAT_800bf874 + 100;
    Entity_SpawnChild2(param_1,100,0);
    break;
  case 5:
    _DAT_800bf874 = _DAT_800bf874 + 200;
    Entity_SpawnChild2(param_1,200,0);
    break;
  case 6:
    _DAT_800bf874 = _DAT_800bf874 + 500;
    Entity_SpawnChild2(param_1,500,0);
    break;
  case 7:
    _DAT_800bf874 = _DAT_800bf874 + 1000;
    Entity_SpawnChild2(param_1,1000,0);
    break;
  case 8:
    _DAT_800bf874 = _DAT_800bf874 + 5000;
    Entity_SpawnChild2(param_1,5000,0);
    break;
  case 9:
    _DAT_800bf874 = _DAT_800bf874 + 10000;
    Entity_SpawnChild2(param_1,10000,0);
    break;
  case 10:
    _DAT_800bf874 = _DAT_800bf874 + 20000;
    Entity_SpawnChild2(param_1,20000,0);
    break;
  case 0xb:
    _DAT_800bf874 = _DAT_800bf874 + 100000;
    Entity_SpawnChild2(param_1,100000,0);
    break;
  case 0xf:
    iVar2 = Entity_SpawnItem2(param_1);
    goto LAB_8004b054;
  case 0x10:
    iVar2 = Entity_SpawnItem(param_1);
LAB_8004b054:
    if (iVar2 == 0) {
      return;
    }
    break;
  case 0x11:
    iVar2 = Entity_SpawnNoPos(0x1f,0xffffff74);
    if (iVar2 != 0) {
      iVar2->alloc_flags = iVar2->alloc_flags | 0x80;
      iVar2->pos_x = param_1->pos_y;
      iVar2->pos_y = *(s16 *)(param_1 + 0x32);
      *(s16 *)(iVar2 + 0x30) = param_1->pos_z;
    }
    Audio_PlaySoundEffect(0x28,0,0);
    DAT_800bf820 = 1;
  }
  param_1->behavior_state = param_1->behavior_state + '\x01';
  return;
}
