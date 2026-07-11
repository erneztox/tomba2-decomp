/**
 * @brief Entity fight state: complex combat state machine (200L)
 * @note Original: func_80066FA8 at 0x80066FA8
 */
// Entity_State_Fight



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80066fa8(byte *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 auStack_20->kind;
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
LAB_80067148:
    if ((_DAT_1f80017c & 1) != 0) {
      local_1e = param_1->pos_y;
      local_1a = *(short *)(param_1 + 0x32) + 0x50;
      local_16 = param_1->pos_z;
      FUN_800312d4(8,auStack_20,0xffffffb0);
    }
    param_1->rot_z = param_1->rot_z + 0x200U & 0xfff;
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    if (param_1->collision_dir == 0x1d) {
      if (0x4203 < param_1->pos_y) {
        return;
      }
    }
    else {
      if (param_1->collision_dir != 0x1f) {
        return;
      }
      if (param_1->pos_z < 0x2775) {
        return;
      }
    }
    param_1->sub_action = 0;
    iVar4 = (int)*(short *)(param_1 + 0x7a) - (int)param_1->pos_y;
    param_1->action_state = param_1->action_state + 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1f;
    }
    param_1->sprite_x = (short)(iVar4 >> 5);
    iVar4 = (int)*(short *)(param_1 + 0x7c) - (int)*(short *)(param_1 + 0x32);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1f;
    }
    param_1->angle_offset = (short)(iVar4 >> 5);
    iVar4 = (int)*(short *)(param_1 + 0x7e) - (int)param_1->pos_z;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1f;
    }
    param_1->sprite_y = (short)(iVar4 >> 5);
    param_1[0x4a] = 0;
    param_1[0x4b] = 0xd0;
    param_1[0x40] = 0x22;
    param_1[0x41] = 0;
    if (DAT_800bfad7 != '\0') {
      return;
    }
    FUN_80022c0c(param_1,1);
    return;
  }
  if (1 < bVar1) {
    if (bVar1 == 2) {
      param_1->rot_z = param_1->rot_z + 0x200U & 0xfff;
      if (param_1->timer1 != 0) {
        param_1->timer1 = param_1->timer1 + -1;
        param_1->pos_y = param_1->pos_y + param_1->sprite_x;
        param_1->pos_z = param_1->pos_z + param_1->sprite_y;
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + param_1->angle_offset;
      }
      FUN_80055d5c(param_1);
      sVar2 = param_1->velocity_y;
      param_1->velocity_y = sVar2 + 0x300;
      if (0x3e00 < (short)(sVar2 + 0x300)) {
        param_1[0x4a] = 0;
        param_1[0x4b] = 0x3e;
      }
      param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
      if (0x2000 < param_1->velocity_y) {
        FUN_8005444c(param_1);
      }
      if (param_1->collision_state == 0) {
        return;
      }
      DAT_1f800253 = 0;
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
      FUN_80074590(3,0,0);
      param_1[0x58] = 0;
      param_1[0x59] = 0;
      if (DAT_800bfad7 == '\0') {
        *param_1 = *param_1 & 3;
      }
      else {
        *param_1 = 1;
      }
      param_1[0x172] = 0x1e;
      param_1[0x173] = 0;
      FUN_80054198(param_1);
      FUN_80054d14(param_1,2,0);
      param_1->state = 1;
    }
    else {
      if (bVar1 != 3) {
        return;
      }
      param_1->rot_z = param_1->rot_z + 0x200U & 0xfff;
      if (param_1->timer1 != 0) {
        param_1->timer1 = param_1->timer1 + -1;
        param_1->pos_y = param_1->pos_y + param_1->sprite_x;
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + param_1->angle_offset;
        param_1->pos_z = param_1->pos_z + param_1->sprite_y;
      }
      FUN_80055d5c(param_1);
      sVar2 = param_1->velocity_y;
      param_1->velocity_y = sVar2 + 0x200;
      if (0x3e00 < (short)(sVar2 + 0x200)) {
        param_1[0x4a] = 0;
        param_1[0x4b] = 0x3e;
      }
      param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
      if (0x2000 < param_1->velocity_y) {
        FUN_8005444c(param_1);
      }
      if (param_1->collision_state == 0) {
        return;
      }
      DAT_1f800253 = 0;
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
      FUN_80074590(3,0,0);
      param_1[0x58] = 0;
      param_1[0x59] = 0;
      *param_1 = 3;
      param_1[0x172] = 0x1e;
      param_1[0x173] = 0;
      FUN_80054198(param_1);
      FUN_80054d14(param_1,2,0);
      param_1->state = 1;
    }
    param_1->behavior_state = 0;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    return;
  }
  if (bVar1 != 0) {
    return;
  }
  FUN_80074590(0x23,0,0);
  FUN_80053d90(param_1);
  param_1->state_flag145 = 0;
  param_1->state_flag146 = 0;
  param_1[0x61] = 0;
  param_1->sub_action = 0;
  FUN_80054198(param_1);
  FUN_80054d14(param_1,0x5a,0);
  FUN_800551c4(param_1);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  if (DAT_800bf870 != '\x06') {
    if (DAT_800bf870 != '\n') {
      uVar3 = 0xc800;
      if (param_1->direction == 0) {
        uVar3 = 0x3800;
      }
      param_1->anim_counter = uVar3;
      param_1->action_state = param_1->action_state + 1;
      goto LAB_80067148;
    }
    if (DAT_800bfad6 != '\0') goto LAB_80067098;
  }
  if ((*param_1 & 2) == 0) {
    FUN_80022c0c(param_1,1);
  }
LAB_80067098:
  param_1->collision_state = 0;
  *param_1 = 6;
  iVar4 = (int)*(short *)(param_1 + 0x7a) - (int)param_1->pos_y;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x3f;
  }
  param_1->sprite_x = (short)(iVar4 >> 6);
  iVar4 = (int)*(short *)(param_1 + 0x7c) - (int)*(short *)(param_1 + 0x32);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x3f;
  }
  param_1->angle_offset = (short)(iVar4 >> 6);
  iVar4 = (int)*(short *)(param_1 + 0x7e) - (int)param_1->pos_z;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x3f;
  }
  param_1->sprite_y = (short)(iVar4 >> 6);
  param_1[0x4a] = 0;
  param_1[0x4b] = 0xc0;
  param_1[0x40] = 0x44;
  param_1[0x41] = 0;
  param_1->action_state = 3;
  return;
}
