/**
 * @brief UI main: full user interface controller
 * @note Original: func_8004E414 at 0x8004E414
 */
// UI_Main



#include "tomba.h"
void FUN_8004e414(int param_1)

{
  u8 bVar1;
  s16 uVar2;
  s16 sVar3;
  int iVar4;
  s32 uVar5;
  
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
      FUN_80074f24(g_GameState);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    FUN_8007a624(param_1);
    return;
  }
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    if ((g_EventInput & 1) != 0) {
      return;
    }
    param_1->behavior_state = 2;
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return;
    }
    if (DAT_800bf80a != '\0') {
      return;
    }
    param_1->behavior_state = 1;
    return;
  }
  if (bVar1 != 2) {
    return;
  }
  switch(param_1->action_state) {
  case 0:
    switch((int)((param_1->draw_x - 0x6f) * 0x10000) >> 0x10) {
    case 0:
      *(s16 *)(param_1 + 100) = 1;
      uVar2 = 0x62;
      param_1->angle_delta = 0;
      break;
    case 1:
      *(s16 *)(param_1 + 100) = 0xffff;
      uVar2 = 0x62;
      param_1->angle_delta = 0;
      break;
    case 2:
      param_1->angle_delta = 2;
      *(s16 *)(param_1 + 100) = 3;
      uVar2 = 99;
      break;
    case 3:
      param_1->angle_delta = 2;
      *(s16 *)(param_1 + 100) = 0xffff;
      uVar2 = 99;
      break;
    case 4:
      param_1->angle_delta = 4;
      uVar2 = 5;
      goto LAB_8004e5d4;
    case 5:
      param_1->angle_delta = 4;
      uVar2 = 0xffff;
LAB_8004e5d4:
      *(s16 *)(param_1 + 100) = uVar2;
      uVar2 = 100;
      break;
    default:
      goto switchD_8004e558_default;
    }
    *(s16 *)(param_1 + 0x66) = uVar2;
switchD_8004e558_default:
    param_1->action_state = param_1->action_state + '\x01';
switchD_8004e51c_caseD_1:
    sVar3 = param_1->angle_delta;
LAB_8004e778:
    iVar4 = FUN_8007def8(0,(int)sVar3,0);
    param_1->parent = iVar4;
    if (iVar4 == 0) {
      return;
    }
    break;
  case 1:
    goto switchD_8004e51c_caseD_1;
  case 2:
    if (*(s8*)(param_1->parent + 4) != '\x02') {
      return;
    }
    *(u8 *)(param_1->parent + 4) = 3;
    break;
  case 3:
    iVar4 = FUN_8004e29c(param_1);
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        if (*(s16 *)(param_1 + 100) != -1) {
          param_1->action_state = 5;
          return;
        }
        param_1->state = STATE_FINISH;
        uVar5 = 99;
      }
      else {
        if (*(s16 *)(param_1 + 100) != -1) {
          param_1->action_state = 8;
          return;
        }
        param_1->state = STATE_FINISH;
        uVar5 = 0x54;
      }
      goto LAB_8004e728;
    }
    FUN_8004ed94(0x58,0x41);
    break;
  case 4:
    iVar4 = FUN_80042728();
    if (iVar4 == 0) {
      return;
    }
    if (*(s16 *)(param_1 + 100) == -1) {
      param_1->state = STATE_FINISH;
      return;
    }
    break;
  case 5:
  case 8:
    sVar3 = *(s16 *)(param_1 + 100);
    goto LAB_8004e778;
  case 6:
    if (*(s8*)(param_1->parent + 4) != '\x02') {
      return;
    }
    *(u8 *)(param_1->parent + 4) = 3;
    if (*(u8 *)(*(s16 *)(param_1 + 0x66) + -0x7ff4074c) < 3) {
      param_1->timer1 = 0x1e;
      param_1->action_state = param_1->action_state + '\x01';
      *(u8 *)(*(s16 *)(param_1 + 0x66) + -0x7ff4074c) = 3;
      return;
    }
    param_1->state = STATE_FINISH;
    uVar5 = 0x66;
LAB_8004e728:
    FUN_8004ed94(uVar5,0x41);
    return;
  case 7:
    sVar3 = param_1->timer1 + -1;
    param_1->timer1 = sVar3;
    if (sVar3 != -1) {
      return;
    }
    FUN_8004ed94(0x65,0x41);
    param_1->state = STATE_DEAD;
    return;
  case 9:
    if (*(s8*)(param_1->parent + 4) != '\x02') {
      return;
    }
    *(u8 *)(param_1->parent + 4) = 3;
    param_1->state = STATE_FINISH;
    FUN_8004ed94(0x54,0x41);
    return;
  default:
    goto switchD_8004e51c_default;
  }
  param_1->action_state = param_1->action_state + '\x01';
switchD_8004e51c_default:
  return;
}
