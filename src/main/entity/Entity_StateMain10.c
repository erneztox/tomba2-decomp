/**
 * @brief Entity state main variant 10: entity->action_state switch (239L)
 * @note Original: func_80065A54 at 0x80065A54
 */
// Entity_StateMain10



#include "tomba.h"
void FUN_80065a54(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  undefined2 uVar4;
  
  switchparam_1->action_state {
  case 0:
    FUN_80053d90(param_1);
    if (DAT_1f800137 == '\x01') {
      DAT_800bf80e = '\0';
      uVar4 = 0xe;
LAB_80065b04:
      param_1->timer1 = uVar4;
    }
    else {
      if (DAT_800bf870 == '\x01') {
        uVar4 = 0x26;
        goto LAB_80065b04;
      }
      if (DAT_800bf870 == '\x06') {
        uVar4 = 0x1c;
        if (param_1->collision_dir != '\t') goto LAB_80065b04;
        param_1->timer1 = 6;
      }
      else {
        param_1->timer1 = 0x1c;
      }
    }
    param_1->state_flag146 = 0;
    param_1->direction = DAT_800bf81f >> 4;
    param_1->action_state = param_1->action_state + '\x01';
    FUN_80054198(param_1);
    param_1->velocity_y = 0;
    FUN_80054d14(param_1,4,0);
    uVar4 = 0xf000;
    if (param_1->direction == '\0') {
      uVar4 = 0x1000;
    }
    break;
  case 1:
    FUN_80076d68(param_1);
    if (param_1->state_flag145 == '\0') {
      FUN_80056b48(param_1,0);
      FUN_80055d5c(param_1);
      FUN_80065478(param_1,1);
    }
    else {
      FUN_80056b48(param_1,1);
      FUN_80055d5c(param_1);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
      FUN_8005444c(param_1);
      FUN_80056c00(param_1,1);
    }
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 != 1) goto LAB_80065f70;
    cVar3 = param_1->action_state + '\x01';
    goto LAB_80065f6c;
  case 2:
    *param_1 = 3;
    param_1->timer_172 = 0x1e;
    param_1->behavior_state = 0;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    FUN_80054198(param_1);
    FUN_80054d14(param_1,2,3);
    if (DAT_1f800137 == '\x01') {
      DAT_800bf80e = DAT_1f800137;
    }
    goto LAB_80066090;
  case 3:
    bVar1 = param_1->sub_action;
    if (bVar1 == 1) {
      param_1->timer1 = 1;
      param_1->sub_action = param_1->sub_action + '\x01';
      return;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->timer1 = 0x14;
      param_1->sub_action = 2;
      return;
    }
    if (bVar1 != 2) {
      return;
    }
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    param_1->behavior_state = 7;
    *param_1 = 3;
    param_1->action_state = 2;
    param_1->sub_action = 0;
    param_1->timer_172 = 0x1e;
    return;
  case 4:
    bVar1 = param_1->sub_action;
    if (bVar1 == 1) {
      FUN_80076d68(param_1);
      FUN_80056b48(param_1,0);
      FUN_80055d5c(param_1);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
      FUN_8005444c(param_1);
      FUN_80056c00(param_1,1);
      sVar2 = param_1->timer1;
      param_1->timer1 = sVar2 + -1;
      if (sVar2 == 1) {
        param_1->sub_action = param_1->sub_action + '\x01';
      }
      goto LAB_80065f70;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      FUN_80053d90(param_1);
      param_1->timer1 = 0x1c;
      param_1->sub_action = param_1->sub_action + '\x01';
      FUN_80054198(param_1);
      FUN_80054d14(param_1,4,0);
      uVar4 = 0xf000;
      if (param_1->direction == '\0') {
        uVar4 = 0x1000;
      }
      break;
    }
    if (bVar1 != 2) {
      return;
    }
    *param_1 = 3;
    param_1->timer_172 = 0x1e;
    param_1->behavior_state = 0;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    FUN_80054198(param_1);
    FUN_80054d14(param_1,2,3);
    if (DAT_1f800137 == '\x02') {
      DAT_1f800137 = '\0';
    }
    goto LAB_80066090;
  case 5:
    FUN_80053d90(param_1);
    if (DAT_1f800137 == '\x01') {
      DAT_800bf80e = '\0';
    }
    param_1->timer1 = 0x26;
    param_1->state_flag146 = 0;
    param_1->direction = DAT_800bf81f >> 4;
    FUN_80054198(param_1);
    param_1->velocity_y = 0;
    FUN_80054d14(param_1,4,0);
    uVar4 = 0xf800;
    if (param_1->direction == '\0') {
      uVar4 = 0x800;
    }
    param_1->anim_counter = uVar4;
    FUN_800551c4(param_1);
    param_1->action_state = 1;
    return;
  case 6:
    FUN_80053d90(param_1);
    if (DAT_1f800137 == '\x01') {
      DAT_800bf80e = '\0';
    }
    param_1->timer1 = 0x25;
    param_1->state_flag146 = 0;
    param_1->direction = DAT_800bf81f >> 4;
    param_1->action_state = param_1->action_state + '\x01';
    FUN_80054198(param_1);
    param_1->velocity_y = 0;
    FUN_80054d14(param_1,4,0);
    uVar4 = 0xf000;
    if (param_1->direction == '\0') {
      uVar4 = 0x1000;
    }
    break;
  case 7:
    FUN_80076d68(param_1);
    FUN_80056b48(param_1,0);
    FUN_80055d5c(param_1);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    FUN_8005444c(param_1);
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    cVar3 = '\x02';
    if (sVar2 != 1) goto LAB_80065f70;
LAB_80065f6c:
    param_1->action_state = cVar3;
LAB_80065f70:
    FUN_800551c4(param_1);
    if (((int)param_1->timer1 % 7 & 0xffffU) != 0) {
      return;
    }
    FUN_80074590(0,5,0);
    return;
  case 8:
    FUN_80053d90(param_1);
    param_1->timer1 = 0x1c;
    param_1->state_flag146 = 0;
    bVar1 = DAT_800bf81f;
    param_1->action_state = 1;
    param_1->direction = bVar1 >> 4;
    FUN_80054198(param_1);
    param_1->velocity_y = 0;
    FUN_80054d14(param_1,4,0);
    uVar4 = 0xf000;
    if (param_1->direction == '\0') {
      uVar4 = 0x1000;
    }
    break;
  case 9:
    param_1->timer1 = 0x14;
    FUN_80053d90(param_1);
    param_1->state_flag146 = 0;
    bVar1 = DAT_800bf81f;
    param_1->action_state = 1;
    param_1->direction = bVar1 >> 4;
    FUN_80054198(param_1);
    param_1->velocity_y = 0;
    FUN_80054d14(param_1,4,0);
    uVar4 = 0xf000;
    if (param_1->direction == '\0') {
      uVar4 = 0x1000;
    }
    break;
  default:
    goto switchD_80065a90_default;
  }
  param_1->anim_counter = uVar4;
LAB_80066090:
  FUN_800551c4(param_1);
switchD_80065a90_default:
  return;
}
