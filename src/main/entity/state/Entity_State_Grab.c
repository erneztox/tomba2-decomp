/**
 * @brief Entity grab state: entity->action_state=0, plays SFX, grabs target
 * @note Original: func_8003FFCC at 0x8003FFCC
 */
// Entity_State_Grab



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8003ffcc(int param_1)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  
  if (param_1->action_state == '\0') {
    FUN_80074590(0x1a,0,0);
    param_1->move_speed = 0x100;
    param_1->action_state = param_1->action_state + '\x01';
    if (*(short *)(param_1 + 100) == 1) {
      iVar3 = FUN_80072ddc(param_1,*(undefined1 *)(param_1 + 0x68),5,0);
      pcVar4 = FUN_8004aac4;
    }
    else {
      iVar3 = FUN_80072ddc(param_1,*(undefined1 *)(param_1 + 0x68),5,4);
      pcVar4 = FUN_8004c238;
    }
    iVar3->callback = pcVar4;
    if ((param_1->alloc_flags & 0x80) == 0) {
      iVar3->type_flags = 0;
    }
    else {
      iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
      iVar3->type_flags = param_1->type_flags;
    }
    if ((DAT_800bf870 == '\x02') || (DAT_800bf870 == '\a')) {
      *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
      iVar3->scale_y = param_1->scale_y;
      iVar3->pos_y_fixed = param_1->pos_y_fixed + -0x28;
    }
    else {
      *(undefined4 *)(iVar3 + 0x2c) = _DAT_800e7eac;
      iVar3->scale_y = _DAT_800e7eb4;
      iVar3->pos_y_fixed = param_1->pos_y_fixed + -0x28;
      iVar3->collision_dir = DAT_800e7eaa;
    }
    iVar3->anim_id = param_1->anim_id;
    iVar3->sub_type = *(undefined1 *)(param_1 + 0x60);
    uVar2 = *(undefined1 *)(param_1 + 0x62);
    iVar3->draw_x = 1;
    iVar3->flag_5E = uVar2;
    iVar3->angle_delta = param_1->anim_timer;
    *(undefined2 *)(iVar3 + 100) = *(undefined2 *)(param_1 + 100);
    uVar1 = *(undefined2 *)(param_1 + 0x66);
    iVar3->velocity_y = 0;
    *(undefined2 *)(iVar3 + 0x66) = uVar1;
    return;
  }
  if (param_1->action_state != '\x01') {
    return;
  }
  *(short *)(param_1->sprite_ptr2 + 8) =
       *(short *)(param_1->sprite_ptr2 + 8) - param_1->move_speed;
  param_1->move_speed = param_1->move_speed + -0x18;
  if (-0x500 < *(short *)(param_1->sprite_ptr2 + 8)) {
    return;
  }
  if (param_1->sub_type == '\0') {
    FUN_80040c00(0x38);
  }
  switch(param_1->flag_5E) {
  case 0:
  case 5:
    uVar2 = 3;
    break;
  case 1:
  case 4:
  case 6:
    uVar2 = 4;
    break;
  case 2:
    uVar2 = 4;
    break;
  default:
    goto switchD_800401f0_caseD_3;
  case 7:
    uVar2 = 5;
  }
  param_1->behavior_state = uVar2;
switchD_800401f0_caseD_3:
  param_1->action_state = 0;
  return;
}
