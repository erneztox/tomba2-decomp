/**
 * @brief Collectible/item entity behavior: handles pickup, bounce, score display
 * @note Original: func_8004C238 at 0x8004C238
 */
// Entity_Behavior_Collectible



#include "tomba.h"
#include "overlay.h"
void Entity_Behavior_Collectible(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->state = 1;
      switch(param_1->flag_5E) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        if ((param_1->alloc_flags & 0x7f) != 0) goto switchD_8004c2b8_caseD_a;
switchD_8004c2b8_caseD_6:
        Entity_SetupSpriteRender(param_1);
        return;
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        goto switchD_8004c2b8_caseD_6;
      case 10:
      case 0xb:
switchD_8004c2b8_caseD_a:
        Entity_InitFromTypeTable(param_1);
        return;
      default:
        return;
      }
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
          Inventory_SetFlag((int)param_1->angle_delta,1);
        }
        else {
          Inventory_SetBit((int)param_1->angle_delta,1);
        }
      }
      param_1->state = STATE_DEAD;
      return;
    }
    switch(param_1->sub_type) {
    case 0:
      iVar2 = UI_ElementUpdate(param_1,1);
      goto LAB_8004c8ac;
    case 1:
      iVar2 = UI_ElementUpdate(param_1,2);
      goto LAB_8004c8ac;
    default:
      iVar2 = Menu_ItemDispatch(param_1);
      goto LAB_8004c8ac;
    case 4:
      Game_AddScore(param_1,100);
      break;
    case 5:
      Game_AddScore(param_1,200);
      break;
    case 6:
      Game_AddScore(param_1,500);
      break;
    case 7:
      Game_AddScore(param_1,1000);
      break;
    case 8:
      Game_AddScore(param_1,5000);
      break;
    case 9:
      Game_AddScore(param_1,10000);
      break;
    case 10:
      Game_AddScore(param_1,20000);
      break;
    case 0xb:
      Game_AddScore(param_1,100000);
      break;
    case 0xf:
      iVar2 = Entity_SpawnItem2(param_1);
      goto LAB_8004c8ac;
    case 0x10:
      iVar2 = Entity_SpawnItem(param_1);
      goto LAB_8004c8ac;
    case 0x11:
      iVar2 = Entity_SpawnScorePopupEx(param_1);
LAB_8004c8ac:
      if (iVar2 == 0) {
        return;
      }
    }
    param_1->behavior_state = param_1->behavior_state + '\x01';
    return;
  }
  switch(param_1->flag_5E) {
  case 0:
    if ((param_1->alloc_flags & 0x80) == 0) {
      iVar2 = GTE_ProjectSprite2(param_1);
      if (iVar2 == 0) goto LAB_8004c378;
    }
    else if ((g_ActionFlag != '\0') && ((u16)g_HurtParam == param_1->type_flags)) {
      param_1->flags = 1;
LAB_8004c378:
      Sprite_Alloc3(param_1);
    }
    if (param_1->flags == '\0') goto switchD_8004c31c_default;
    Entity_Behavior_InitItem(param_1,0);
    goto LAB_8004c48c;
  case 1:
    if ((param_1->alloc_flags & 0x80) == 0) {
      iVar2 = GTE_ProjectSprite2(param_1);
      if (iVar2 == 0) goto LAB_8004c3f8;
    }
    else if ((g_ActionFlag != '\0') && ((u16)g_HurtParam == param_1->type_flags)) {
      param_1->flags = 1;
LAB_8004c3f8:
      Sprite_Alloc3(param_1);
    }
    Entity_State_Title(param_1,0);
    goto LAB_8004c48c;
  case 2:
    if ((param_1->alloc_flags & 0x80) == 0) {
      iVar2 = GTE_ProjectSprite2(param_1);
      if (iVar2 == 0) goto LAB_8004c468;
    }
    else if ((g_ActionFlag != '\0') && ((u16)g_HurtParam == param_1->type_flags)) {
      param_1->flags = 1;
LAB_8004c468:
      Sprite_Alloc3(param_1);
    }
    if (param_1->flags == '\0') goto switchD_8004c31c_default;
    Entity_Behavior_Talk(param_1,0);
LAB_8004c48c:
    Entity_AdvanceAnim3(param_1);
    param_1->collision_state = 0;
    break;
  case 3:
    if ((param_1->alloc_flags & 0x80) == 0) {
      iVar2 = GTE_ProjectSprite2(param_1);
      if (iVar2 == 0) goto LAB_8004c4f0;
    }
    else if ((g_ActionFlag != '\0') && ((u16)g_HurtParam == param_1->type_flags)) {
      param_1->flags = 1;
LAB_8004c4f0:
      Sprite_Alloc3(param_1);
    }
    if (param_1->flags != '\0') {
      Entity_Behavior_InitItem(param_1,1);
      goto LAB_8004c604;
    }
  default:
switchD_8004c31c_default:
    param_1->collision_state = 0;
    break;
  case 4:
    if ((param_1->alloc_flags & 0x80) == 0) {
      iVar2 = GTE_ProjectSprite2(param_1);
      if (iVar2 == 0) goto LAB_8004c570;
    }
    else if ((g_ActionFlag != '\0') && ((u16)g_HurtParam == param_1->type_flags)) {
      param_1->flags = 1;
LAB_8004c570:
      Sprite_Alloc3(param_1);
    }
    Entity_State_Title(param_1,1);
LAB_8004c604:
    GTE_LoadScaleCompose(param_1);
    param_1->collision_state = 0;
    break;
  case 5:
    if ((param_1->alloc_flags & 0x80) == 0) {
      iVar2 = GTE_ProjectSprite2(param_1);
      if (iVar2 == 0) goto LAB_8004c5e0;
    }
    else if ((g_ActionFlag != '\0') && ((u16)g_HurtParam == param_1->type_flags)) {
      param_1->flags = 1;
LAB_8004c5e0:
      Sprite_Alloc3(param_1);
    }
    if (param_1->flags != '\0') {
      Entity_Behavior_Talk(param_1,1);
      goto LAB_8004c604;
    }
    goto switchD_8004c31c_default;
  case 6:
    if (g_GameState == '\0') {
      Overlay_80118b10(param_1);
      param_1->collision_state = 0;
      break;
    }
    if (g_GameState == '\x06') {
      Overlay_80116288(param_1);
      param_1->collision_state = 0;
      break;
    }
    goto switchD_8004c31c_default;
  case 7:
    Overlay_80118db0(param_1);
    param_1->collision_state = 0;
    break;
  case 8:
    Overlay_80119350(param_1);
    param_1->collision_state = 0;
    break;
  case 9:
    if (g_GameState == '\0') {
      Overlay_80118f50(param_1);
      param_1->collision_state = 0;
      break;
    }
    if (g_GameState == '\x04') {
      Overlay_801193d4(param_1);
      param_1->collision_state = 0;
      break;
    }
    if (g_GameState == '\x05') {
      Overlay_80112f88(param_1);
      param_1->collision_state = 0;
      break;
    }
    if (g_GameState == '\x06') {
      Overlay_801160d4(param_1);
      param_1->collision_state = 0;
      break;
    }
    if (g_GameState == '\b') {
      Overlay_80116750(param_1);
      param_1->collision_state = 0;
      break;
    }
    goto switchD_8004c31c_default;
  case 10:
    Overlay_80119454(param_1);
    param_1->collision_state = 0;
    break;
  case 0xb:
    Overlay_801132b8(param_1);
    param_1->collision_state = 0;
    break;
  case 0xc:
    Overlay_801132f0(param_1);
    param_1->collision_state = 0;
    break;
  case 0xd:
    Overlay_801133f4(param_1);
    param_1->collision_state = 0;
    break;
  case 0xe:
    Overlay_80113490(param_1);
    param_1->collision_state = 0;
    break;
  case 0xf:
    Overlay_80119170(param_1);
    goto switchD_8004c31c_default;
  }
  param_1->move_mode = 0;
  return;
}
