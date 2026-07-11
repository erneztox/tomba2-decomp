/**
 * @brief Entity state main variant 12: entity->action_state switch (255L)
 * @note Original: func_8005DE54 at 0x8005DE54
 */
// Entity_StateMain12



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8005de54(byte *param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  switchparam_1->action_state {
  case 0:
    if ((param_1->type_flags & 0x20) == 0) {
      param_1->direction = 1;
    }
    else {
      param_1->direction = 0;
    }
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    FUN_80054198(param_1);
    param_1[0x61] = 0x21;
    *param_1 = *param_1 | 4;
    if ((param_1->type_flags & 0x40) != 0) {
      param_1->action_state = 6;
      uVar6 = 99;
      uVar7 = 2;
      goto LAB_8005e4a4;
    }
    uVar3 = 0xf000;
    if (param_1->direction == 0) {
      uVar3 = 0x1000;
    }
    param_1->anim_counter = uVar3;
    bVar2 = param_1->action_state;
    param_1[0x40] = 2;
    param_1[0x41] = 0;
    goto LAB_8005e49c;
  case 1:
    uVar5 = (uint)_DAT_1f80017c;
    if ((uVar5 + (uVar5 / 7 + (uVar5 - uVar5 / 7 >> 1) >> 2) * -7 & 0xffff) == 0) {
      FUN_80074590(0,5,0);
    }
    FUN_80076d68(param_1);
    FUN_80056b48(param_1,0);
    FUN_80055d5c(param_1);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    FUN_8005444c(param_1);
    FUN_80056c00(param_1,1);
    if (((int)*(short *)(param_1 + 0x16c) & 0xc000U) != 0xc000) {
      return;
    }
    if (param_1->timer1 != 0) {
      param_1->timer1 = param_1->timer1 + -1;
      return;
    }
    FUN_80047b5c(param_1,0);
    if ((_DAT_1f8001a8 & 8) == 0) {
      return;
    }
    _DAT_1f80018e = 0x2000;
    _DAT_1f800194 = _DAT_1f8001a2 & 0xfff;
    _DAT_1f800196 = _DAT_1f8001a0 & 0xfff;
    bVar2 = param_1->action_state + 1;
    goto LAB_8005e564;
  case 2:
    param_1->action_state = param_1->action_state + 1;
    FUN_80054d14(param_1,2,4);
    FUN_80055c9c(param_1,(int)(short)_DAT_1f800196);
    bVar2 = FUN_80055e28(param_1,0);
    param_1->direction = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      _DAT_1f800194 = _DAT_1f800196;
    }
    else {
      _DAT_1f800194 = _DAT_1f800196 - 0x800 & 0xfff;
    }
    FUN_80054198(param_1);
    break;
  case 3:
  case 9:
    FUN_80076d68(param_1);
    uVar5 = (uint)_DAT_1f800194;
    sVar4 = FUN_800776f8(uVar5 & 0xfff,(int)param_1->rot_y,0x100);
    param_1->rot_y = sVar4;
    if ((int)sVar4 == (uVar5 & 0xfff)) {
      param_1->action_state = param_1->action_state + 1;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    break;
  case 4:
    FUN_8004766c(param_1);
    FUN_8004960c(param_1,0);
    param_1->draw_angle = _DAT_1f800196;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    FUN_8005444c(param_1);
    if ((param_1->type_flags & 0x10) == 0) goto switchD_8005de94_caseD_a;
    param_1[0x61] = 0x20;
    FUN_80076d68(param_1);
    bVar2 = 0xc;
    goto LAB_8005e564;
  case 5:
    goto switchD_8005de94_caseD_5;
  case 6:
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    if (param_1->direction == 0) {
      uVar3 = 0x1000;
    }
    else {
      uVar3 = 0xf000;
    }
    param_1->anim_counter = uVar3;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0xd0;
    param_1->collision_state = 0;
    param_1->action_state = param_1->action_state + 1;
  case 7:
    FUN_80076d68(param_1);
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,0x11);
    if (param_1->state_flag145 == 2) {
      FUN_80054d14(param_1,0x67,8);
    }
    if (param_1->collision_state == 0) {
      return;
    }
    FUN_80054d14(param_1,0x17,2);
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1->action_state = param_1->action_state + 1;
    if (((int)*(short *)(param_1 + 0x16c) & 0xc000U) != 0xc000) {
      uVar3 = 0xf000;
      if (param_1->direction == 0) {
        uVar3 = 0x1000;
      }
      param_1->anim_counter = uVar3;
      param_1->action_state = 1;
      param_1[0x40] = 2;
      param_1[0x41] = 0;
      FUN_80054d14(param_1,4,4);
      return;
    }
    FUN_80047b5c(param_1,0);
    if ((_DAT_1f8001a8 & 8) == 0) {
      return;
    }
    _DAT_1f80018e = 0x2000;
    _DAT_1f800194 = _DAT_1f8001a2 & 0xfff;
    _DAT_1f800196 = _DAT_1f8001a0 & 0xfff;
    FUN_8004960c(param_1,0);
    param_1[0x61] = 0x20;
    uVar1 = _DAT_1f800196;
    param_1[0x40] = 2;
    param_1[0x41] = 0;
    param_1->draw_angle = uVar1;
    return;
  case 8:
    FUN_80076d68(param_1);
    sVar4 = param_1->timer1;
    param_1->timer1 = sVar4 + -1;
    if (sVar4 == 1) {
      param_1->action_state = param_1->action_state + 1;
      FUN_80055c9c(param_1,(int)(short)_DAT_1f800196);
      bVar2 = FUN_80055e28(param_1,0);
      param_1->direction = bVar2 & 1;
      FUN_80054198(param_1);
      if (param_1->direction == 0) {
        _DAT_1f800194 = _DAT_1f800196;
      }
      else {
        _DAT_1f800194 = _DAT_1f800196 - 0x800 & 0xfff;
      }
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    break;
  case 10:
switchD_8005de94_caseD_a:
    param_1[0x61] = 0x20;
    FUN_80076d68(param_1);
    if (_DAT_1f800196 == _DAT_1f800194) {
      param_1->direction = 0;
    }
    else {
      param_1->direction = 1;
    }
    FUN_80054198(param_1);
    sVar4 = *(short *)(param_1 + 0x32);
    param_1->action_state = param_1->action_state + 1;
    goto LAB_8005e2b8;
  case 0xb:
    FUN_80054d14(param_1,2,4);
    goto switchD_8005de94_caseD_5;
  case 0xc:
    if ((param_1->type_flags & 0x20) == 0) {
      param_1->direction = 1;
    }
    else {
      param_1->direction = 0;
    }
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    FUN_80054198(param_1);
    uVar3 = 0xf000;
    if (param_1->direction == 0) {
      uVar3 = 0x1000;
    }
    param_1->anim_counter = uVar3;
    bVar2 = param_1->action_state;
LAB_8005e49c:
    uVar7 = 4;
    uVar6 = 4;
    param_1->action_state = bVar2 + 1;
LAB_8005e4a4:
    FUN_80054d14(param_1,uVar6,uVar7);
    FUN_800551c4(param_1);
    return;
  case 0xd:
    uVar5 = (uint)_DAT_1f80017c;
    if ((uVar5 + (uVar5 / 7 + (uVar5 - uVar5 / 7 >> 1) >> 2) * -7 & 0xffff) == 0) {
      FUN_80074590(0,5,0);
    }
    FUN_80076d68(param_1);
    FUN_80056b48(param_1,0);
    FUN_80055d5c(param_1);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    FUN_8005444c(param_1);
    FUN_80056c00(param_1,1);
    if ((param_1->type_flags & 0x10) != 0) {
      return;
    }
    FUN_80054198(param_1);
    bVar2 = 0xb;
LAB_8005e564:
    param_1->action_state = bVar2;
  default:
    goto switchD_8005de94_default;
  }
LAB_8005e2bc:
  FUN_8005444c(param_1);
  FUN_80056c00(param_1,1);
switchD_8005de94_default:
  return;
switchD_8005de94_caseD_5:
  FUN_80076d68(param_1);
  sVar4 = *(short *)(param_1 + 0x32);
  param_1[0x61] = 0;
  param_1->behavior_state = 0;
  param_1->action_state = 0;
  param_1->sub_action = 0;
  *param_1 = *param_1 & 3;
LAB_8005e2b8:
  *(short *)(param_1 + 0x32) = sVar4 + 8;
  goto LAB_8005e2bc;
}
