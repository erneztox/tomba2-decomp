/**
 * @brief Entity state main variant 13: complex switch (331L)
 * @note Original: func_8005D530 at 0x8005D530
 */
// Entity_StateMain13



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8005d530(u8 *param_1)

{
  u8 bVar1;
  s16 sVar2;
  s16 uVar3;
  int iVar4;
  uint uVar5;
  s32 uVar6;
  
  switchparam_1->action_state {
  case 0:
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    FUN_80054198(param_1);
    param_1->action_state = param_1->action_state + 1;
    FUN_80054d14(param_1,2,6);
  case 1:
  case 3:
    uVar5 = (uint)_DAT_1f800194;
    sVar2 = FUN_800776f8(uVar5 & 0xfff,(int)param_1->rot_y,0x100);
    param_1->rot_y = sVar2;
    if ((int)sVar2 == (uVar5 & 0xfff)) {
      param_1->action_state = param_1->action_state + 1;
    }
    goto LAB_8005d5dc;
  case 2:
    FUN_80055e28(param_1,0);
    uVar5 = FUN_800559f4(param_1);
    if ((uVar5 & 1) == 0) {
      param_1[0x61] = 0;
      param_1->action_state = param_1->action_state + 1;
      param_1->direction = param_1->behavior_flags & 1;
LAB_8005d630:
      FUN_80054198(param_1);
      if (param_1->direction == 0) {
        _DAT_1f800194 = param_1->draw_angle;
      }
      else {
        _DAT_1f800194 = param_1->draw_angle - 0x800U & 0xfff;
      }
    }
    else if ((_DAT_1f80018e & 0x4000) == 0) {
      *param_1 = *param_1 | 4;
      if (_DAT_1f800196 == _DAT_1f800194) {
        param_1->direction = 0;
      }
      else {
        param_1->direction = 1;
      }
      FUN_80054198(param_1);
      FUN_8004766c(param_1);
      FUN_8004960c(param_1,(_DAT_1f80018e & 0x100) != 0);
      if (uVar5 == 1) {
        param_1[0x61] = 0x11;
        g_SFXState = 0x80;
        uVar5 = (uint)(param_1[0x16c] >> 4);
      }
      else {
        param_1[0x61] = 0x21;
        g_SFXState = 0x81;
        uVar5 = (*(u16 *)(param_1 + 0x16c) & 0xf00) >> 8;
      }
      if ((uVar5 & 8) == 0) {
        uVar3 = 0xc800;
        if ((uVar5 & 4) == 0) {
          uVar3 = 0xe000;
        }
        param_1->timer1 = uVar3;
        param_1->action_state = 6;
      }
      else {
        param_1->action_state = 9;
        param_1[0x40] = 10;
        param_1[0x41] = 0;
      }
      param_1->draw_angle = _DAT_1f800196;
    }
    else if ((_g_PadState & _DAT_1f800174) != 0) {
      if ((_DAT_1f80018e & 0x8000) == 0) {
        if ((_DAT_1f80018e & 0x300) == 0) {
          iVar4 = FUN_80024794(param_1);
          if (iVar4 != 0) {
            DAT_800bf809 = 1;
            param_1[0x61] = 0x80;
            param_1->action_state = 5;
            *param_1 = *param_1 | 6;
          }
        }
        else {
          iVar4 = FUN_80053968(param_1,0);
          if (iVar4 != 0) {
            *param_1 = 7;
            g_ActionTrigger = 1;
            param_1->state = 4;
            param_1->behavior_state = 0x25;
            param_1->action_state = 0;
            _DAT_1f800166 = 0;
            _DAT_1f800190 = 0;
          }
        }
      }
      else {
        g_CurrentOverlay = 2;
        *param_1 = 7;
        param_1->state = 4;
        param_1->behavior_state = 0x29;
        param_1->action_state = 0;
        g_SFXState = 0x8a;
      }
    }
    goto LAB_8005d5dc;
  case 4:
    param_1[0x61] = 0;
    param_1->behavior_state = 0;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    *param_1 = *param_1 & 3;
    FUN_80076d68(param_1);
    break;
  case 5:
    if ((_DAT_1f80018e >> 8 != 0x44) && (_DAT_1f80018e >> 8 != 0x48)) {
      DAT_800bf809 = 0;
      *param_1 = 3;
      param_1[0x172] = 0x14;
      param_1[0x173] = 0;
      param_1->action_state = 3;
      bVar1 = FUN_80055e28(param_1,0);
      param_1->direction = bVar1 & 1;
      goto LAB_8005d630;
    }
LAB_8005d5dc:
    FUN_80076d68(param_1);
    break;
  case 6:
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1->velocity_y = param_1->timer1;
    if (param_1->direction == 0) {
      uVar3 = 0xe00;
    }
    else {
      uVar3 = 0xf200;
    }
    param_1->anim_counter = uVar3;
    FUN_80054d14(param_1,99,0);
    param_1->collision_state = 0;
    param_1->action_state = param_1->action_state + 1;
  case 7:
    FUN_80076d68(param_1);
    FUN_80056b48(param_1,1);
    FUN_80054650(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,0x11);
    if (param_1->state_flag145 == 2) {
      FUN_80054d14(param_1,100,3);
    }
    if (-0x1400 < param_1->velocity_y) {
      uVar6 = FUN_80024548(param_1,0);
      param_1->state_ptr = uVar6;
    }
    uVar6 = _g_GTE_Work84;
    if (param_1->state_ptr != 0) {
      param_1->state_flag145 = 0;
      param_1->state_flag144 = 0;
      param_1->parent = uVar6;
      param_1->behavior_flags = param_1->direction | 2;
      FUN_80074590(5,0,0);
      if (((g_GameState == '\x01') && ((_DAT_800bfe56 & 2) != 0)) && (param_1->action_flag == 1)) {
        param_1->action_state = 0;
        param_1->sub_action = 0;
        param_1[0x44] = 0;
        param_1[0x45] = 0;
        param_1->behavior_state = 4;
        FUN_80074590(5,0,0);
        return;
      }
      if (param_1->state_ptr == 1) {
        param_1->action_state = 0xb;
        FUN_80054d14(param_1,0x40,2);
        param_1[0x40] = 3;
        param_1[0x41] = 0;
        return;
      }
      param_1->action_state = 0xf;
      param_1->sub_action = 0;
      param_1[0x58] = 0;
      param_1[0x59] = 0;
      FUN_80054d14(param_1,0x29,4);
      return;
    }
    if (param_1->collision_state == 0) {
      return;
    }
    FUN_80054d14(param_1,0x65,2);
    bVar1 = param_1->action_state;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
LAB_8005dd48:
    param_1->action_state = bVar1 + 1;
    return;
  case 8:
    iVar4 = FUN_80076d68(param_1);
    if (iVar4 == 1) {
      param_1[0x40] = 3;
      param_1[0x41] = 0;
      bVar1 = param_1->action_state + 1;
      goto LAB_8005de0c;
    }
    break;
  case 9:
    uVar3 = 0xf000;
    if ((param_1->direction & 1) == 0) {
      uVar3 = 0x1000;
    }
    param_1->anim_counter = uVar3;
    param_1->action_state = param_1->action_state + 1;
    FUN_80054d14(param_1,4,3);
  case 10:
    FUN_80076d68(param_1);
    FUN_80056b48(param_1,0);
    FUN_80055d5c(param_1);
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
    FUN_8005444c(param_1);
    uVar5 = (uint)_g_FrameCounter2;
    if ((uVar5 + (uVar5 / 7 + (uVar5 - uVar5 / 7 >> 1) >> 2) * -7 & 0xffff) == 0) {
      FUN_80074590(0,5,0);
    }
    if (param_1->timer1 == 0) {
      if (((int)*(s16 *)(param_1 + 0x16c) & 0xc000U) == 0xc000) {
        param_1[0x61] = 0x21;
        param_1->behavior_state = 0xb;
        param_1->action_state = 1;
        param_1->sub_action = 0;
        return;
      }
    }
    else {
      param_1->timer1 = param_1->timer1 + -1;
    }
    if ((param_1->type_flags & 0x10) == 0) {
      param_1->action_state = 4;
      FUN_80054d14(param_1,2,4);
    }
    goto LAB_8005de28;
  case 0xb:
    FUN_80076d68(param_1);
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    FUN_80054198(param_1);
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    FUN_80054d14(param_1,0x41,0);
    bVar1 = param_1->action_state;
    goto LAB_8005dd48;
  case 0xc:
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * 0x1000;
    param_1->scale_y = param_1->scale_y + param_1->normal_z * 0x1000;
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x1000;
    iVar4 = FUN_80083f50((int)param_1->rot_y);
    param_1->pos_y = param_1->pos_y + (s16)((iVar4 << 1) >> 0xc);
    iVar4 = FUN_80083e80((int)param_1->rot_y);
    param_1->pos_z = param_1->pos_z - (s16)((iVar4 << 1) >> 0xc);
    FUN_80076d68(param_1);
    uVar6 = 0x25;
    if (-1 < param_1->entity_flags) {
      uVar6 = 0x4a;
    }
    iVar4 = FUN_80046a44(param_1,uVar6,(int)-param_1->target_angle,uVar6);
    if (iVar4 == 0) {
      return;
    }
    FUN_80048654(param_1);
    uVar3 = _g_CollisionNormalX;
    param_1->rot_z = _g_CollisionNormalY + 0x400;
    param_1->draw_angle = uVar3;
    if (1 < iVar4 - 2U) {
      if ((_g_FrameCounter2 & 3) != 0) {
        return;
      }
      FUN_80074590(5,3,0xffffffc4);
      return;
    }
    FUN_80074590(4,0,0);
    bVar1 = param_1->action_state;
    param_1->sub_action = 0;
    goto LAB_8005dd48;
  case 0xd:
    FUN_8006483c(param_1,1);
    if (param_1->collision_state == 0) {
      return;
    }
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1->state_flag144 = 0;
    param_1[0x158] = 0;
    param_1[0x159] = 0;
    param_1[0x15a] = 0;
    param_1[0x15b] = 0;
    param_1->action_flag = 0;
    param_1->sub_action = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1->state_flag145 = 0;
    param_1->action_state = param_1->action_state + 1;
    FUN_8005314c(param_1);
    FUN_80054d14(param_1,0x16,6);
    return;
  case 0xe:
    bVar1 = 9;
    if ((_g_InputState & 0xa0) == 0) {
      iVar4 = FUN_80076d68(param_1);
      bVar1 = 9;
      if (iVar4 == 2) break;
    }
LAB_8005de0c:
    param_1->action_state = bVar1;
    break;
  case 0xf:
    func_0x80113fa4(param_1);
  default:
    goto switchD_8005d56c_default;
  }
  *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
  FUN_8005444c(param_1);
LAB_8005de28:
  FUN_80056c00(param_1,1);
switchD_8005d56c_default:
  return;
}
