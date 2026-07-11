/**
 * @brief UI dialog main: entity->state=1, full dialog state machine
 * @note Original: func_8004DF94 at 0x8004DF94
 */
// UI_DialogMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void UI_DialogMain(int param_1)

{
  u8 bVar1;
  int iVar2;
  s8 cVar3;
  s32 uVar4;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->state = 1;
      param_1->render_flags = 0x10;
      param_1->sprite_flags = 0;
      param_1->sub_anim_id = 0;
      param_1->target_rot_y = 0;
      param_1->draw_y = 0;
      return;
    }
    if (bVar1 == 2) {
      param_1->state = STATE_DEAD;
      g_CurrentOverlay = 0;
      DAT_800ed061 = DAT_800ed061 & 0xfd;
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    Entity_Dealloc(param_1);
    return;
  }
  switch((int)((param_1->draw_x - 0x66) * 0x10000) >> 0x10) {
  case 0:
    cVar3 = param_1->behavior_state;
    if (cVar3 == '\0') {
      iVar2 = Entity_WorldToScreen(param_1);
      if (iVar2 != 0) {
        param_1->timer2 = 0x10;
        param_1->behavior_state = param_1->behavior_state + '\x01';
        if ((_DAT_800bf880 & 0x800) != 0) {
          Entity_ActionDispatch(&g_CollisionEntity,2);
        }
      }
    }
    else {
LAB_8004e1fc:
      if (cVar3 == '\x01') {
        UI_UpdateElement_2(param_1);
      }
    }
    goto LAB_8004e240;
  case 1:
    cVar3 = param_1->behavior_state;
    if (cVar3 != '\0') goto LAB_8004e1fc;
    iVar2 = Entity_WorldToScreen(param_1);
    if (iVar2 != 0) {
      param_1->timer2 = 0x10;
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
    goto LAB_8004e240;
  case 2:
    cVar3 = param_1->behavior_state;
    if (cVar3 != '\0') goto LAB_8004e1fc;
    iVar2 = Entity_WorldToScreen(param_1);
    if (iVar2 != 0) {
      param_1->timer2 = 0x10;
      param_1->behavior_state = param_1->behavior_state + '\x01';
      if (((_DAT_800bf880 & 0x200) != 0) || ((_DAT_800bf880 & 0x100) != 0)) {
        Entity_ActionDispatch(&g_CollisionEntity,10);
      }
    }
LAB_8004e240:
    DAT_800ed061 = DAT_800ed061 | 2;
    goto switchD_8004e040_caseD_6;
  case 3:
    iVar2 = Entity_WorldToScreen(param_1);
    uVar4 = 2;
    goto joined_r0x8004e160;
  case 4:
    iVar2 = Entity_WorldToScreen(param_1);
    if (iVar2 == 0) goto switchD_8004e040_caseD_6;
    if ((_DAT_800bf880 & 0x100) == 0) {
      uVar4 = 8;
    }
    else {
      uVar4 = 9;
    }
    break;
  case 5:
    iVar2 = Entity_WorldToScreen(param_1);
    uVar4 = 10;
joined_r0x8004e160:
    if (iVar2 == 0) goto switchD_8004e040_caseD_6;
    break;
  default:
    goto switchD_8004e040_caseD_6;
  case 7:
    iVar2 = Entity_WorldToScreen(param_1);
    if (iVar2 == 0) goto switchD_8004e040_caseD_6;
    if ((_DAT_800bf880 & 0x400) == 0) {
      uVar4 = 6;
    }
    else {
      uVar4 = 7;
    }
    break;
  case 8:
    iVar2 = Entity_WorldToScreen(param_1);
    if (iVar2 == 0) goto switchD_8004e040_caseD_6;
    if ((_DAT_800bf880 & 0x3000) == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = 5;
    }
  }
  Entity_ActionDispatch(&g_CollisionEntity,uVar4);
  param_1->state = STATE_FINISH;
switchD_8004e040_caseD_6:
  param_1->flags = 1;
  return;
}
