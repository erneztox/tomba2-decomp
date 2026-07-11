/**
 * @brief Entity draw main variant 7: rendering pipeline (254L)
 * @note Original: func_800527C8 at 0x800527C8
 */
// Entity_DrawMain7



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800527c8(int param_1)

{
  u8 bVar1;
  s32 uVar2;
  u16 uVar3;
  s16 sVar4;
  int iVar5;
  u8 auStack_38->kind;
  s16 local_36;
  s16 local_32;
  s16 local_2e;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    iVar5 = FUN_800519e0(param_1,0x12,_DAT_800ecf6c,&DAT_800a43e8);
    uVar2 = _DAT_800ecf70;
    if (iVar5 != 0) {
      return;
    }
    *(void ***)(param_1 + 0x7c) = &PTR_DAT_8001b354;
    param_1->sprite_data = uVar2;
    FUN_80041718(param_1,0,0);
    param_1->state = param_1->state + '\x01';
    if (param_1->sub_type == '\0') {
      param_1->pos_y = _g_CameraTargetX;
      *(s16 *)(param_1 + 0x32) = _g_CameraTargetY + _DAT_800e7ee2 + -0xa0;
      param_1->pos_z = _g_CameraTargetZ;
      if (DAT_800e7e82 == '\0') {
        uVar3 = _g_CameraAngle + 0x400U & 0xfff;
      }
      else {
        uVar3 = FUN_800782b0(param_1 + 0x2c,(int)_DAT_1f8000d2,(int)_DAT_1f8000da);
      }
      param_1->rot_y = uVar3;
      _g_CameraTargetY = *(s16 *)(param_1 + 0x32) + -0x3c;
      _g_EntityAngle = param_1->rot_y;
      param_1->timer1 = 0x1e;
      FUN_80054d14(&g_CollisionEntity,0xe4,0);
      DAT_800e7ffa = 1;
      return;
    }
    param_1->angle_delta = _g_CameraTargetY + 1000;
    *(s16 *)(param_1 + 100) = _g_CameraTargetX;
    *(s16 *)(param_1 + 0x66) = _DAT_800e7ee2 + _g_CameraTargetY + 0x348;
    param_1->target_angle = _g_CameraTargetZ;
    uVar3 = _g_EntityAngle;
    param_1->timer1 = 0x14;
    param_1->draw_x = uVar3 & 0xfff;
    FUN_80041718(param_1,3,0);
    DAT_800e7e81 = 0;
    FUN_80054d14(&g_CollisionEntity,0xe4,0);
    param_1->flags = 0;
    return;
  }
  if (param_1->sub_type != '\0') {
    switch(param_1->behavior_state) {
    case 0:
      sVar4 = param_1->timer1;
      param_1->timer1 = sVar4 + -1;
      if (sVar4 == 1) {
        _g_GTE_WorkC0 = 0xfc18;
        _DAT_1f8000c2 = 0;
        _g_GTE_WorkC4 = 600;
        FUN_80084470(0x1f800118,&g_GTE_WorkC0,&g_GTE_Data14);
        param_1->pos_y = _DAT_1f8000d2 + _g_GTE_Data14;
        param_1->pos_z = _DAT_1f8000da + _g_GTE_Data1C;
        sVar4 = _g_CameraTargetY;
        param_1->flags = 1;
        *(s16 *)(param_1 + 0x32) = sVar4;
        DAT_800e7e81 = 1;
        param_1->velocity_y = 0;
        param_1->anim_counter = 0x1800;
        sVar4 = FUN_800782b0(param_1 + 0x2c,(int)*(s16 *)(param_1 + 100),
                             (int)param_1->target_angle);
        param_1->rot_y = sVar4 - 0x200U & 0xfff;
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
      break;
    case 1:
      FUN_80052720(param_1);
      FUN_80052694(param_1);
      param_1->flags = 1;
      if (*(s16 *)(param_1 + 0x32) == *(s16 *)(param_1 + 0x66)) {
        param_1->behavior_state = param_1->behavior_state + '\x01';
        FUN_80041768(param_1,1,4);
      }
      break;
    case 2:
      local_36 = *(s16 *)(param_1 + 100);
      local_32 = *(s16 *)(param_1 + 0x66);
      local_2e = param_1->target_angle;
      iVar5 = FUN_8006cec4(param_1 + 0x2c,auStack_38,0xe0);
      if (iVar5 != 0) {
        param_1->behavior_state = param_1->behavior_state + '\x01';
        FUN_80041768(param_1,0,4);
      }
      goto LAB_80052f48;
    case 3:
      sVar4 = FUN_800776f8((int)param_1->draw_x,(int)param_1->rot_y,0x80);
      param_1->rot_y = sVar4;
      if (sVar4 == param_1->draw_x) {
        param_1->behavior_state = param_1->behavior_state + '\x01';
        FUN_80054d14(&g_CollisionEntity,2,0x10);
      }
LAB_80052f48:
      param_1->flags = 1;
      break;
    case 4:
      uVar3 = param_1->scale_x - 0x100;
      param_1->scale_x = uVar3;
      if (uVar3 < 0x101) {
        param_1->scale_x = 0x100;
        g_CurrentOverlay = 0;
        g_GameMode = 0;
        g_CameraEntity = 0;
        param_1->state = STATE_DEAD;
      }
      _g_CameraTargetY = _g_CameraTargetY + 10;
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 10;
      if (param_1->angle_delta < _g_CameraTargetY) {
        _g_CameraTargetY = param_1->angle_delta;
      }
      param_1->flags = 1;
      param_1->scale_z = param_1->scale_x;
      param_1->scale_y = param_1->scale_x;
    }
    if (param_1->flags != '\0') {
      _g_CameraTargetX = param_1->pos_y;
      if (param_1->behavior_state < 4) {
        _g_CameraTargetY = *(s16 *)(param_1 + 0x32) + -100;
      }
      _g_CameraTargetZ = param_1->pos_z;
      _g_EntityAngle = param_1->rot_y;
    }
    goto LAB_80053040;
  }
  switch(param_1->behavior_state) {
  case 0:
    _g_CameraTargetY = *(s16 *)(param_1 + 0x32) + -0x3c;
    if (param_1->timer1 == 0) {
      iVar5 = FUN_80042728();
      if (iVar5 != 0) {
        param_1->anim_counter = 0x100;
        param_1->velocity_y = 0;
        FUN_80041768(param_1,2,4);
        param_1->timer1 = 0x14;
        param_1->timer2 = 0xc;
        param_1->behavior_state = param_1->behavior_state + '\x01';
        _g_GTE_WorkC0 = 400;
        _DAT_1f8000c2 = 0;
        _g_GTE_WorkC4 = 0;
        FUN_80084470(0x1f800118,&g_GTE_WorkC0,&g_GTE_Data14);
        *(s16 *)(param_1 + 100) = _DAT_1f8000d2 + _g_GTE_Data14;
        *(s16 *)(param_1 + 0x66) = _DAT_1f8000d6 + _g_GTE_Data18;
        param_1->target_angle = _DAT_1f8000da + _g_GTE_Data1C;
        _g_GTE_WorkC0 = 0xfc18;
        _DAT_1f8000c2 = 0;
        _g_GTE_WorkC4 = 600;
        FUN_80084470(0x1f800118,&g_GTE_WorkC0,&g_GTE_Data14);
        param_1->draw_x = _DAT_1f8000d2 + _g_GTE_Data14;
        param_1->angle_delta = _DAT_1f8000da + _g_GTE_Data1C;
      }
    }
    else {
      param_1->timer1 = param_1->timer1 + -1;
    }
    goto switchD_800529e4_default;
  case 1:
    sVar4 = param_1->timer1;
    param_1->timer1 = sVar4 + -1;
    if (sVar4 == 1) {
      DAT_800bf80f = 4;
      DAT_800bf839 = 1;
      param_1->timer1 = 0x14;
      param_1->behavior_state = param_1->behavior_state + '\x01';
      *(s16 *)(param_1 + 100) = param_1->draw_x;
      param_1->target_angle = param_1->angle_delta;
    }
    break;
  case 2:
    if ((_g_FrameCounter2 & 7) == 0) {
      FUN_80074590(0x38,(int)*(s8*)(param_1 + 0x42),0);
      sVar4 = param_1->timer2 + 2;
      param_1->timer2 = sVar4;
      if (0x1a < sVar4) {
        param_1->timer2 = 0x1a;
      }
    }
    sVar4 = param_1->timer1;
    param_1->timer1 = sVar4 + -1;
    if (sVar4 == 1) {
      DAT_800bf80f = DAT_800bf80f | 0x80;
      param_1->timer1 = 0x14;
      param_1->behavior_state = param_1->behavior_state + '\x01';
      g_CameraEntity = 0xf;
    }
    break;
  case 3:
    if ((_g_FrameCounter2 & 7) == 0) {
      FUN_80074590(0x38,(int)*(s8*)(param_1 + 0x42),0);
      sVar4 = param_1->timer2 + 2;
      param_1->timer2 = sVar4;
      if (0x1a < sVar4) {
        param_1->timer2 = 0x1a;
      }
    }
    if (param_1->timer1 == 0) {
      if (g_ActionMode == '\x02') goto switchD_800529e4_default;
      g_GameMode = 6;
      DAT_800bf80f = DAT_800bf80f & 0x7f;
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
    else {
      param_1->timer1 = param_1->timer1 + -1;
    }
    break;
  case 4:
    if ((_g_FrameCounter2 & 7) == 0) {
      FUN_80074590(0x38,(int)*(s8*)(param_1 + 0x42),0);
      sVar4 = param_1->timer2 + 2;
      param_1->timer2 = sVar4;
      if (0x1a < sVar4) {
        param_1->timer2 = 0x1a;
      }
    }
    break;
  default:
    goto switchD_800529e4_default;
  }
  FUN_80052720(param_1);
  FUN_8005262c(param_1);
switchD_800529e4_default:
  DAT_800e7ffa = 1;
  _g_CameraTargetX = param_1->pos_y;
  if (param_1->behavior_state != '\0') {
    _g_CameraTargetY = *(s16 *)(param_1 + 0x32) + -100;
  }
  _g_CameraTargetZ = param_1->pos_z;
  _g_EntityAngle = param_1->rot_y;
  param_1->flags = 1;
LAB_80053040:
  FUN_8004190c(param_1);
  FUN_800518fc(param_1);
  return;
}
