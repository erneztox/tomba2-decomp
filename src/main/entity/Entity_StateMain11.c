/**
 * @brief Entity state main variant 11: g_ActionMode=1 (246L)
 * @note Original: func_8005F2F0 at 0x8005F2F0
 */
// Entity_StateMain11



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8005f2f0(u8 *param_1)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  
  param_1->flag_17B = 1;
  g_ActionMode = 1;
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
LAB_8005f3c0:
    param_1->action_state = param_1->action_state + 1;
    if (DAT_800bf81a != '\0') {
      param_1->sprite_cmd = g_SpriteParam1;
      DAT_800bf81a = '\0';
    }
    if (DAT_800bf81b != '\0') {
      param_1->sprite_param1 = g_SpriteParam2;
      DAT_800bf81b = '\0';
    }
    if (DAT_800bf81c != '\0') {
      param_1->sprite_param2 = g_SpriteParam3;
      FUN_80067fe4(param_1);
      DAT_800bf81c = '\0';
    }
    if (DAT_800bf81d != '\0') {
      g_ActionMode = 2;
      param_1->sprite_flags = param_1->sprite_flags & 0x7f;
      param_1->sprite_param3 = g_SpriteParam4;
      FUN_80067ef4(param_1);
      param_1->action_state = 3;
      *(u16 *)(param_1 + 0x7a) = param_1->rot_y & 0xfff;
      DAT_800bf81d = '\0';
      param_1[0x40] = 0x1e;
      param_1[0x41] = 0;
      FUN_8001cf2c();
    }
LAB_8005f4fc:
    if (param_1->kind != 0) {
      return;
    }
    FUN_80055d5c(param_1);
    FUN_8005444c(param_1);
    FUN_80056c00(param_1,1);
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      g_ActionMode = 1;
      return;
    }
    *param_1 = *param_1 | 6;
    g_CurrentOverlay = '\x02';
    DAT_800bf809 = 1;
    g_ActionTrigger = 0;
    FUN_80054198(param_1);
    FUN_80054d14(param_1,2,4);
    if (param_1->kind == 0) {
      FUN_80053d90(param_1);
      FUN_800551c4(param_1);
    }
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + 1;
    goto LAB_8005f3c0;
  }
  if (bVar1 == 2) {
    if (DAT_800bf80a == '\0') {
      DAT_800bf809 = 0;
      g_CurrentOverlay = '\0';
      *param_1 = 3;
      param_1[0x172] = 0xf;
      param_1[0x173] = 0;
      param_1->behavior_state = 0;
    }
    else {
      param_1->behavior_state = 0x12;
    }
    param_1->action_state = 0;
    param_1->sub_action = 0;
    FUN_80054d14(param_1,2,4);
    goto LAB_8005f4fc;
  }
  if (bVar1 != 3) {
    g_ActionMode = 1;
    return;
  }
  g_ActionMode = 2;
  param_1->flag_17A = 1;
  switchparam_1->sub_action {
  case 0:
    FUN_80076d68(param_1);
    if (param_1->timer1 != 0) {
      param_1->timer1 = param_1->timer1 + -1;
      return;
    }
    if ((DAT_800bf80a != '\x03') || (DAT_800bf80b != '_')) {
      if (param_1->kind == 0) {
        sVar2 = FUN_800776f8((int)((param_1->draw_angle + 0x400) * 0x10000) >> 0x10,
                             (int)param_1->rot_y,0x100);
        param_1->rot_y = sVar2;
        if ((int)sVar2 != ((int)param_1->draw_angle + 0x400U & 0xfff)) {
          return;
        }
      }
      else {
        sVar2 = FUN_800776f8((int)((_DAT_800e805a + 0x800) * 0x10000) >> 0x10,
                             (int)param_1->rot_y,0x100);
        param_1->rot_y = sVar2;
        if ((int)sVar2 != ((int)(s16)_DAT_800e805a + 0x800U & 0xfff)) {
          return;
        }
      }
    }
    goto switchD_8005f560_caseD_4;
  case 1:
    FUN_80076d68(param_1);
    if (_DAT_801fe0e0 != 0) {
      FUN_8001cf2c(param_1);
      return;
    }
    *(s16 *)(param_1 + 0x7c) = *(s16 *)(param_1 + 0x32);
    FUN_80054d14(param_1,99,8);
    param_1[0x4a] = 0;
    param_1[0x4b] = 0xe0;
    bVar1 = param_1->sub_action;
    param_1->state_flag145 = 1;
    goto code_r0x8005f890;
  case 2:
    FUN_80076d68(param_1);
    sVar2 = param_1->velocity_y;
    param_1->velocity_y = sVar2 + 0x300;
    if (-0x901 < (s16)(sVar2 + 0x300)) {
      param_1->sub_action = param_1->sub_action + 1;
      iVar3 = FUN_800310f4(0x1e,0);
      if (iVar3 != 0) {
        iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
      }
      FUN_80074590(0x37,0x16,0x1e);
      param_1->parent = iVar3;
    }
    goto LAB_8005f74c;
  case 3:
    FUN_80076d68(param_1);
    sVar2 = param_1->velocity_y;
    param_1->velocity_y = sVar2 + 0x300U;
    if (-1 < (int)((uint)(u16)(sVar2 + 0x300U) << 0x10)) {
      param_1->flags = 0;
      param_1->state_flag145 = 2;
      param_1->sub_action = param_1->sub_action + 1;
    }
LAB_8005f74c:
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
    break;
  case 4:
    goto switchD_8005f560_caseD_4;
  case 5:
    iVar3 = FUN_80044cd4(_DAT_800ed014,
                         *(uint *)(&DAT_800fb170 + (param_1->entity_flags & 0xf) * 8) >> 0xb,
                         *(int *)(&DAT_800fb170 + ((param_1->entity_flags & 0xf) << 3 | 4)) -
                         *(uint *)(&DAT_800fb170 + (param_1->entity_flags & 0xf) * 8));
    if (iVar3 == 0) {
      return;
    }
    goto switchD_8005f560_caseD_4;
  case 6:
    if (g_DMAFlag != '\0') {
      iVar3 = param_1->parent;
      if (iVar3 != 0) {
        iVar3->state = 2;
        iVar3->behavior_state = 0;
      }
      FUN_80057fd4(param_1);
      FUN_80054d14(param_1,100,8);
      param_1->flags = 1;
      if (g_CurrentOverlay != '\x01') {
        FUN_80074f24(g_GameState);
      }
      param_1->sub_action = param_1->sub_action + 1;
      if ((DAT_800bf80a == '\x03') && (DAT_800bf80b == '_')) {
        param_1->sub_action = 0xc;
        FUN_80054d14(param_1,0xe4,0);
      }
    }
    break;
  case 7:
    g_ActionMode = 1;
    FUN_80076d68(param_1);
switchD_8005f560_caseD_4:
    bVar1 = param_1->sub_action;
code_r0x8005f890:
    param_1->sub_action = bVar1 + 1;
    break;
  case 8:
    g_ActionMode = 1;
    FUN_80076d68(param_1);
    sVar2 = param_1->velocity_y;
    param_1->velocity_y = sVar2 + 0x300;
    if (0x1fff < (s16)(sVar2 + 0x300)) {
      param_1[0x4a] = 0;
      param_1[0x4b] = 0x20;
    }
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
    if ((*(s16 *)(param_1 + 0x7c) <= *(s16 *)(param_1 + 0x32)) || (param_1->collision_state != 0)) {
      FUN_8005314c(param_1);
      if (param_1->collision_state == 0) {
        *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x7c);
      }
      FUN_80054d14(param_1,0x65,6);
      param_1[0x40] = 8;
      param_1[0x41] = 0;
      param_1->state_flag145 = 0;
      param_1->sub_action = param_1->sub_action + 1;
      if ((param_1->sprite_param3 - 0x12 < 5) && ((u8)(&DAT_800a4542)[param_1->sprite_param3] >> 1 <= g_ItemMax))
      {
        FUN_8004ed94((int)*(s16 *)(&DAT_800a46e4 + (param_1->sprite_param3 - 0x12) * 2),0x41);
      }
    }
    break;
  case 9:
  case 10:
    g_ActionMode = 1;
    FUN_80076d68(param_1);
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 == 1) {
      param_1[0x40] = 8;
      param_1[0x41] = 0;
      param_1->sub_action = param_1->sub_action + 1;
      FUN_80054d14(param_1,2);
    }
    break;
  case 0xb:
    g_ActionMode = 1;
    FUN_80076d68(param_1);
    sVar2 = FUN_800776f8((int)*(s16 *)(param_1 + 0x7a),(int)param_1->rot_y,0x100);
    param_1->rot_y = sVar2;
    if (sVar2 == *(s16 *)(param_1 + 0x7a)) {
      param_1->action_state = 2;
      param_1->sub_action = 0;
    }
    break;
  case 0xc:
    g_ActionMode = 1;
    FUN_80076d68(param_1);
  }
  return;
}
