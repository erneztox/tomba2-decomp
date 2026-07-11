/**
 * @brief Entity state main variant 7: complex dispatch (202L)
 * @note Original: func_8005C8A0 at 0x8005C8A0
 */
// Entity_StateMain7



#include "tomba.h"
void FUN_8005c8a0(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    if (param_1->behavior_state == '2') {
      *(undefined1 *)(param_1 + 0x181) = 1;
    }
    iVar6 = 0;
    if (param_1->sub_state2 != '\x02') {
      iVar6 = FUN_80076d68(param_1);
    }
    iVar5 = FUN_800557ec(param_1);
    if (iVar5 == 0) {
      if ((iVar6 == 0) || (iVar6 = FUN_8005376c(param_1), iVar6 != 0)) goto LAB_8005cc64;
      iVar6 = FUN_80055704(param_1,0);
      if (iVar6 == 2) {
        param_1->state_flag146 = 2;
        FUN_80053670(param_1,1,0);
        param_1->action_state = param_1->action_state + '\x01';
        goto LAB_8005cc64;
      }
      cVar2 = *(char *)(param_1 + 0x181);
      goto joined_r0x8005cac4;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) goto LAB_8005cc64;
      if (param_1->behavior_state == '2') {
        *(undefined1 *)(param_1 + 0x181) = 1;
      }
      FUN_80055e28(param_1,0);
      param_1->direction = param_1->behavior_flags & 1;
      if (*(char *)(param_1 + 0x181) == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = 2;
      }
      FUN_8005490c(param_1,1,uVar9);
      FUN_800551c4(param_1);
      iVar6 = FUN_800557ec(param_1);
      if (iVar6 != 0) {
        FUN_80074590(0x1d,0,0);
        param_1->behavior_state = 6;
        param_1->rot_z = 0;
        param_1->sub_action = 0;
        param_1->state_flag145 = 1;
        *(undefined1 *)(param_1 + 0x181) = 0;
        param_1->type_flags = 0;
      }
      iVar6 = FUN_80055704(param_1,1);
      if (iVar6 == 0) {
        DAT_1f800252 = 0;
        param_1->combat_flag = 0;
        param_1->state_flag146 = 3;
        FUN_80053670(param_1,0,8);
        if (*(char *)(param_1 + 0x181) == '\0') {
          uVar9 = 0;
        }
        else {
          uVar9 = 2;
        }
        FUN_8005490c(param_1,0,uVar9);
        param_1->gte_flags = 0;
        param_1->action_state = 1;
        goto LAB_8005cc64;
      }
      if (0 < iVar6) {
        if (iVar6 == 2) {
          FUN_80076d68(param_1);
        }
        goto LAB_8005cc64;
      }
      if (iVar6 != -1) goto LAB_8005cc64;
      cVar2 = *(char *)(param_1 + 0x181);
joined_r0x8005cac4:
      if (cVar2 == '\0') {
        FUN_80054d14(param_1,2,6);
        param_1->behavior_state = 0;
        param_1->action_state = 0;
        param_1->state_flag146 = 0;
      }
      else {
        FUN_80054d14(param_1,0xdc,6);
        param_1->behavior_state = 0x1d;
        param_1->action_state = 1;
        param_1->state_flag146 = 0;
        param_1->velocity_y = 0;
      }
      goto LAB_8005cc64;
    }
    if (bVar1 != 0) goto LAB_8005cc64;
    if (param_1->behavior_state == '2') {
      *(undefined1 *)(param_1 + 0x181) = 1;
      param_1->velocity_y = 0;
    }
    DAT_1f800252 = 0;
    param_1->combat_flag = 0;
    param_1->gte_flags = 0;
    FUN_80055e28(param_1,0);
    param_1->direction = param_1->behavior_flags & 1;
    *(byte *)(param_1 + 0x149) = *(byte *)(param_1 + 0x149) & 1 | 2;
    FUN_800551c4(param_1);
    if (param_1->flag_175 != '\0') {
      param_1->state_flag146 = 2;
      FUN_80053670(param_1,1,0);
      if (*(char *)(param_1 + 0x181) == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = 2;
      }
      FUN_8005490c(param_1,1,uVar9);
      param_1->action_state = 2;
      goto LAB_8005cc64;
    }
    param_1->state_flag146 = 1;
    FUN_80053670(param_1,0,0);
    if (*(char *)(param_1 + 0x181) == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = 2;
    }
    FUN_8005490c(param_1,0,uVar9);
    param_1->action_state = param_1->action_state + '\x01';
    iVar6 = FUN_800557ec(param_1);
    if (iVar6 == 0) goto LAB_8005cc64;
  }
  FUN_80074590(0x1d,0,0);
  param_1->behavior_state = 6;
  param_1->sub_action = 0;
  param_1->state_flag145 = 1;
  *(undefined1 *)(param_1 + 0x181) = 0;
  param_1->type_flags = 0;
LAB_8005cc64:
  if (param_1->state_flag145 != '\x01') {
    if (*(char *)(param_1 + 0x181) == '\0') {
      if (param_1->behavior_state != '\x06') {
        FUN_80055fbc(param_1,param_1->behavior_flags | 2);
        FUN_80056b48(param_1,0);
        FUN_80055d5c(param_1);
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
        FUN_8005444c(param_1);
        if (param_1->direction == '\0') {
          uVar4 = param_1->draw_scale >> 1;
        }
        else {
          uVar4 = 0x1000U - (param_1->draw_scale >> 1) & 0xfff;
        }
        param_1->rot_z = uVar4;
        iVar6 = FUN_800532a0(param_1);
        if (iVar6 != 0) {
          param_1->state_flag146 = 0;
        }
        FUN_80056c00(param_1,0);
      }
    }
    else {
      uVar8 = (uint)param_1->anim_counter;
      uVar7 = uVar8;
      if ((int)uVar8 < 0) {
        uVar7 = -uVar8;
      }
      sVar3 = (short)(uVar7 - 0x120);
      if ((uVar7 & 0xffff) != 0) {
        if ((int)((uVar7 - 0x120) * 0x10000) < 0) {
          sVar3 = 0;
        }
        if ((int)uVar8 < 1) {
          param_1->anim_counter = -sVar3;
        }
        else {
          param_1->anim_counter = sVar3;
        }
      }
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
    }
  }
  return;
}
