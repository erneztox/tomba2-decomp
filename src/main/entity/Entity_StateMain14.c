/**
 * @brief Entity state main variant 14: extended dispatch (385L)
 * @note Original: func_8005B63C at 0x8005B63C
 */
// Entity_StateMain14



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8005b63c(int param_1)

{
  undefined2 uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  
  puVar9 = *(undefined1 **)(param_1 + 0x10);
  switch(param_1->action_state) {
  case 0:
    param_1->direction = param_1->behavior_flags & 1;
    FUN_80055284(param_1);
    param_1->flag_16A = 0;
    FUN_80053d0c(param_1);
    FUN_80053bf8(param_1,0);
    param_1->state_flag146 = 0;
    param_1->velocity_y = 0;
    iVar4 = FUN_8005b5e4(puVar9);
    if (iVar4 == 0) {
      if (*(char *)(param_1 + 0x181) != '\0') {
        *(undefined1 *)(param_1 + 0x181) = 1;
        param_1->action_state = 2;
        param_1->state_flag144 = 0;
        return;
      }
      param_1->action_state = param_1->action_state + '\x01';
      goto switchD_8005b678_caseD_1;
    }
    param_1->action_state = 8;
    param_1->state_flag145 = 0;
    param_1->anim_counter = 0;
    if (iVar4 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 2;
    }
    FUN_8005b370(param_1,uVar8);
    param_1->velocity_y = 0;
    break;
  case 1:
switchD_8005b678_caseD_1:
    FUN_80055e28(param_1,1);
    FUN_80055fbc(param_1,param_1->behavior_flags);
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    if ((*(char *)(param_1 + 0x181) == '\0') &&
       (FUN_800574e0(param_1,6), (param_1->entity_flags & 0x40) != 0)) {
      param_1->state_flag144 = 0;
    }
    iVar4 = FUN_80053bf8(param_1,0);
    if (iVar4 == 0) {
      FUN_80076d68(param_1);
      iVar4 = FUN_80055824();
      if (iVar4 == 0) {
        if (param_1->collision_state == '\0') {
          if (*(char *)(param_1 + 0x181) == '\0') goto LAB_8005b868;
        }
        else {
          param_1->velocity_y = 0;
        }
        param_1->state_flag144 = 0;
        param_1->action_state = param_1->action_state + '\x01';
      }
      else {
        param_1->action_state = 3;
        param_1->state_flag144 = 0;
        *(undefined1 *)(param_1 + 0x181) = 0;
        param_1->state_flag145 = 1;
        param_1->velocity_y = 0;
      }
    }
    else {
      FUN_80076d68(param_1);
      if (param_1->collision_state == '\0') {
        if (*(char *)(param_1 + 0x181) == '\0') goto LAB_8005b868;
      }
      else {
        param_1->velocity_y = 0;
      }
      param_1->state_flag144 = 0;
      param_1->action_state = param_1->action_state + '\x01';
      FUN_80053bf8(param_1);
    }
LAB_8005b868:
    FUN_8005b20c(param_1,0);
    break;
  case 2:
    if (*(char *)(param_1 + 0x181) == '\0') {
      FUN_80055e28(param_1,1);
      FUN_80055fbc(param_1,param_1->behavior_flags | 2);
      FUN_80056b48(param_1,1);
      FUN_80055d5c(param_1);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
      FUN_8005444c(param_1);
      if (param_1->sub_state == '\x06') {
        param_1->direction = 0;
      }
      FUN_800551c4(param_1);
      FUN_80056c00(param_1,1);
      FUN_80076d68(param_1);
      iVar4 = FUN_80055824();
      if (iVar4 != 0) {
        cVar5 = param_1->action_state;
        *(undefined1 *)(param_1 + 0x181) = 0;
        param_1->state_flag145 = 1;
        param_1->velocity_y = 0;
        goto LAB_8005ba0c;
      }
    }
    else {
      uVar7 = (uint)param_1->anim_counter;
      *(undefined1 *)(param_1 + 0x181) = 1;
      uVar6 = uVar7;
      if ((int)uVar7 < 0) {
        uVar6 = -uVar7;
      }
      param_1->state_flag144 = 0;
      if ((uVar6 & 0xffff) != 0) {
        sVar3 = (short)(uVar6 - 0x120);
        if ((int)((uVar6 - 0x120) * 0x10000) < 0) {
          sVar3 = 0;
        }
        if ((int)uVar7 < 1) {
          param_1->anim_counter = -sVar3;
        }
        else {
          param_1->anim_counter = sVar3;
        }
      }
      FUN_80055e28(param_1,1);
      if (DAT_800bf870 == '\0') {
        func_0x8010c89c(param_1,0);
      }
      else if (DAT_800bf870 == '\x06') {
        func_0x8011460c(param_1,0);
      }
      else if (DAT_800bf870 == '\b') {
        func_0x801120c4(param_1,0);
      }
      else if (DAT_800bf870 == '\x0e') {
        func_0x8010b408(param_1,0);
      }
      FUN_80076d68(param_1);
      iVar4 = FUN_80055824();
      if (iVar4 != 0) {
        cVar5 = param_1->action_state;
        param_1->state_flag145 = 1;
        *(undefined1 *)(param_1 + 0x181) = 0;
LAB_8005ba0c:
        param_1->action_state = cVar5 + '\x01';
        return;
      }
    }
    goto LAB_8005bba0;
  case 3:
    FUN_80074590(0x20,0,0);
    param_1->rot_z = 0;
    FUN_80054d14(param_1,param_1->anim_id + 1,0);
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
  case 4:
    FUN_80055e28(param_1,1);
    FUN_80055fbc(param_1,param_1->behavior_flags);
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,2);
    if ((DAT_800bf848 == '\0') &&
       ((iVar4 = FUN_80055824(), iVar4 != 0 || (param_1->collision_state != '\0')))) {
      param_1->action_state = param_1->action_state + '\x01';
      if (param_1->sub_state == 9) {
        func_0x80113628(param_1,puVar9);
      }
      else if (param_1->sub_state < 5) {
        param_1->sub_state = 0;
        if (puVar9->kind == '\x10') {
          puVar9->action_state = puVar9->action_state + '\x01';
        }
        else {
          puVar9->state = 3;
        }
        iVar4 = FUN_8005b134(param_1,puVar9);
        if ((iVar4 == -1) || (iVar4 = FUN_800537b8(param_1,puVar9), iVar4 == 0)) {
          FUN_80054d14(param_1,0x26,0);
          param_1->state_flag145 = 1;
          param_1->sub_action = 1;
          param_1->action_state = 7;
          param_1->collision_state = 0;
          param_1->state_flag144 = 0;
          *(undefined1 *)(param_1 + 0x148) = 0;
          param_1->velocity_y = 0;
          param_1->rot_z = 0x20;
        }
        else {
          param_1->sub_state = 3;
          param_1->parent = iVar4;
        }
      }
    }
    FUN_800551c4(param_1);
LAB_8005bba0:
    FUN_8005b20c(param_1,0);
    return;
  case 5:
    FUN_800541f4(param_1,0);
    if (((param_1->behavior_flags & 8) == 0) || (uVar8 = 0x24, 5 < param_1->sub_state)) {
      uVar8 = 0x22;
    }
    FUN_80054d14(param_1,uVar8,0);
    param_1->timer1 = 0;
    param_1->timer2 = 0;
    uVar1 = *(undefined2 *)(&DAT_800a4694 + param_1->timer1 * 2);
    param_1->action_state = param_1->action_state + '\x01';
    param_1->rot_z = uVar1;
    FUN_8005b20c();
    return;
  case 6:
    sVar3 = param_1->timer1 + 1;
    param_1->timer1 = sVar3;
    if (10 < sVar3) {
      param_1->timer1 = 10;
    }
    param_1->rot_z =
         *(undefined2 *)(&DAT_800a4694 + param_1->timer1 * 2);
    if (param_1->timer2 == 0) {
      FUN_8005b20c(param_1,1);
      sVar3 = 5;
      if (((param_1->behavior_flags & 8) != 0) && (param_1->sub_state < 6)) {
        sVar3 = 6;
      }
      if (*(short *)(param_1->anim_data + 2) == sVar3) {
        FUN_80074590(0x21,0,0);
        if (param_1->sub_state < 5) {
          puVar9->behavior_state = 1;
        }
        else {
          puVar9->behavior_state = 3;
          puVar9->action_state = 0;
        }
        param_1->timer2 = 1;
        param_1->sub_state = 0;
      }
    }
    iVar4 = FUN_80076d68(param_1);
    if (iVar4 == 1) {
      FUN_80054d14(param_1,param_1->anim_id + 1,0);
      param_1->state_flag145 = 1;
      param_1->collision_state = 0;
      param_1->state_flag144 = 0;
      *(undefined1 *)(param_1 + 0x148) = 0;
      param_1->velocity_y = 0;
      param_1->sub_action = 1;
      param_1->action_state = param_1->action_state + '\x01';
    }
    break;
  case 7:
    FUN_80055e28(param_1,0);
    FUN_80055fbc(param_1,param_1->behavior_flags);
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_80076d68(param_1);
    if ((1 < *(ushort *)(param_1->anim_data + 2)) &&
       (sVar3 = param_1->rot_z + 0x200, param_1->rot_z = sVar3,
       0xfff < sVar3)) {
      param_1->rot_z = 0x1000;
      param_1->behavior_state = 2;
      param_1->action_state = 1;
      FUN_80054d14(param_1,0x15,3);
    }
    FUN_800574e0(param_1,8);
    FUN_80057c08(param_1,0);
    return;
  case 8:
    iVar4 = FUN_80076d68(param_1);
    if ((iVar4 == 1) || (puVar9->kind == '\x1b')) {
      iVar4 = FUN_80053bf8(param_1,0);
      if (iVar4 != 0) {
        FUN_80055d5c(param_1);
        FUN_80053bf8(param_1,1);
      }
      param_1->state_flag144 = 0;
      param_1->action_state = param_1->action_state + '\x01';
    }
    FUN_80055e28(param_1,1);
    iVar4 = FUN_8005b5e4(puVar9);
    goto joined_r0x8005bf5c;
  case 9:
    FUN_80076d68(param_1);
    FUN_80055e28(param_1,1);
    if ((param_1->timer_main == param_1->timer_170) &&
       (iVar4 = FUN_80055824(), iVar4 != 0)) {
      param_1->behavior_flags = param_1->direction + '\x02';
      iVar4 = FUN_8005b5e4(puVar9);
      if ((iVar4 == 2) || (iVar4 == 4)) {
        uVar2 = 5;
        if (iVar4 == 4) {
LAB_8005bf24:
          param_1->sub_state = uVar2;
        }
        else if (param_1->sub_state != '\t') {
          uVar2 = 1;
          goto LAB_8005bf24;
        }
        puVar9->action_state = puVar9->action_state + '\x01';
        cVar5 = '\x03';
      }
      else {
        cVar5 = param_1->action_state + '\x01';
      }
      param_1->action_state = cVar5;
    }
    iVar4 = FUN_8005b5e4(puVar9);
joined_r0x8005bf5c:
    uVar8 = 2;
    if (iVar4 < 3) {
      uVar8 = 0;
    }
    FUN_8005b370(param_1,uVar8);
    FUN_800551c4(param_1);
    param_1->collision_state = 1;
    param_1->type_flags = 0;
    iVar4 = FUN_80049280(param_1,0,(int)param_1->angle_delta);
    if (iVar4 == 0) {
      return;
    }
    param_1->type_flags = _DAT_1f8001a6;
    return;
  case 10:
    FUN_80074590(0x20,0,0);
    FUN_80054d14(param_1,param_1->anim_id + 1,0);
    param_1->sub_action = 0;
    param_1->rot_z = 0;
    param_1->action_state = param_1->action_state + '\x01';
    puVar9->behavior_state = 2;
    puVar9->action_state = 0;
    param_1->sub_state = 0;
    iVar4 = FUN_8005b5e4(puVar9);
    if (iVar4 == 3) {
      param_1->action_state = 0xc;
      param_1->velocity_y = 0xcd00;
      return;
    }
    if (puVar9->kind == '\x13') {
      *puVar9 = 0xb;
    }
    else {
      *puVar9 = 3;
    }
    param_1->velocity_y = 0xc500;
  case 0xb:
    FUN_80055e28(param_1,1);
    FUN_80055fbc(param_1,param_1->behavior_flags);
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,1);
    if (param_1->state_flag145 == '\x02') {
      param_1->behavior_state = 2;
      param_1->action_state = 1;
      FUN_80054d14(param_1,0x15,3);
    }
    break;
  case 0xc:
    FUN_80055e28(param_1,1);
    FUN_80055fbc(param_1,param_1->behavior_flags);
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,1);
    if (param_1->state_flag145 == '\x02') {
      FUN_80054d14(param_1,0x26,0);
      param_1->behavior_state = 0x10;
      param_1->action_state = 5;
      param_1->rot_z = 0x20;
    }
    break;
  default:
    goto switchD_8005b678_default;
  }
  FUN_800551c4(param_1);
switchD_8005b678_default:
  return;
}
