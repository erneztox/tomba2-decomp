/**
 * @brief Entity state main variant 6: g_ActionMode=1, state init
 * @note Original: func_8005FB54 at 0x8005FB54
 */
// Entity_StateMain6



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_StateMain6(u8 *param_1)

{
  u8 bVar1;
  s16 sVar2;
  u16 uVar3;
  u16 uVar4;
  int iVar5;
  s32 uVar6;
  s32 uVar7;
  
  g_ActionMode = 1;
  param_1->flag_17B = 1;
  switchparam_1->action_state {
  case 0:
    g_ActionTrigger = 0;
    if (DAT_800bfa47 != -0x80) {
      UI_DrawItemIcon(DAT_800bf80b,1);
    }
    Entity_StateSwitch(param_1);
    Entity_ResetState_2(param_1);
    param_1->sprite_flags = param_1->sprite_flags & 0x7f;
    if (DAT_800bf80a == '\x02') {
      *param_1 = *param_1 | 6;
      DAT_800bf809 = 1;
    }
    else if (DAT_800bf80a == '\x03') {
      *param_1 = 6;
      DAT_800bf809 = 1;
      Entity_SetupBehavior();
      return;
    }
    Entity_LoadAnimIfChanged(param_1,0x72,4);
    param_1->action_state = param_1->action_state + 1;
  case 1:
    iVar5 = Entity_AnimFrame(param_1);
    if (iVar5 == 1) {
      uVar6 = 0x73;
      bVar1 = param_1->action_state;
      uVar7 = 2;
LAB_8005fe08:
      param_1->action_state = bVar1 + 1;
      Entity_LoadAnimIfChanged(param_1,uVar6,uVar7);
    }
    break;
  case 2:
    iVar5 = Entity_AnimFrame(param_1);
    if (iVar5 == 1) {
      if (DAT_800bf80a == '\x02') {
        DAT_800bf809 = 0;
        g_CurrentOverlay = 0;
        *param_1 = 3;
        param_1[0x172] = 0x1e;
        param_1[0x173] = 0;
        param_1->behavior_state = 0;
        param_1->action_state = 0;
        param_1->sub_action = 0;
        Entity_LoadAnimIfChanged(param_1,2,5);
      }
      else {
        *param_1 = *param_1 & 3;
        param_1->action_state = param_1->action_state + 1;
      }
      DAT_800bf80a = '\0';
      g_ActionTrigger = 1;
    }
    break;
  case 4:
    param_1->flag_17A = 1;
    Entity_AnimFrame(param_1);
    if (param_1->kind == 0) {
      sVar2 = Math_ApproachAngle_2((int)((param_1->draw_angle + 0x400) * 0x10000) >> 0x10,
                           (int)param_1->rot_y,0x100);
      param_1->rot_y = sVar2;
      if ((int)sVar2 != ((int)param_1->draw_angle + 0x400U & 0xfff)) {
        return;
      }
    }
    else {
      uVar3 = Math_CalcAngle2D(param_1 + 0x2c,(int)_DAT_1f8000d2,(int)_DAT_1f8000da);
      uVar4 = Math_ApproachAngle_2((int)(s16)uVar3,(int)param_1->rot_y,0x100);
      param_1->rot_y = uVar4;
      if (uVar4 != (uVar3 & 0xfff)) {
        return;
      }
    }
    iVar5 = Game_CheckIdle();
    if (iVar5 == 0) {
      return;
    }
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    uVar6 = 0x72;
    uVar7 = 4;
    bVar1 = param_1->action_state;
    param_1[0x40] = 0x14;
    param_1[0x41] = 0;
    goto LAB_8005fe08;
  case 5:
    param_1->flag_17A = 1;
    Entity_AnimFrame(param_1);
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    param_1->state_7A = 0;
    param_1->state_7B = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    Entity_SpawnCollectible_2(param_1);
    bVar1 = param_1->action_state;
    goto LAB_8005ff58;
  case 6:
    param_1->flag_17A = 1;
    Entity_AnimFrame(param_1);
    if (*(s16 *)(param_1 + 0x7e) != 0) {
      param_1->action_state = param_1->action_state + 1;
      DAT_800bf80f = 4;
      DAT_800bf839 = 1;
      param_1[0x40] = 0x14;
      param_1[0x41] = 0;
      param_1[0x42] = 0xc;
      param_1[0x43] = 0;
    }
    break;
  case 7:
    param_1->flag_17A = 1;
    Entity_AnimFrame(param_1);
    if ((_g_FrameCounter2 & 7) == 0) {
      Audio_PlaySoundEffect(0x38,(int)(char)param_1[0x42],0);
      sVar2 = param_1->timer2;
      param_1->timer2 = sVar2 + 2;
      if (0x1a < (s16)(sVar2 + 2)) {
        param_1[0x42] = 0x1a;
        param_1[0x43] = 0;
      }
    }
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + -10;
    if (sVar2 != 1) {
      return;
    }
    DAT_800bf80f = DAT_800bf80f | 0x80;
    bVar1 = param_1->action_state;
    param_1[0x40] = 0x14;
    param_1[0x41] = 0;
LAB_8005ff58:
    param_1->action_state = bVar1 + 1;
    break;
  case 8:
    sVar2 = param_1->timer1;
    param_1->flag_17A = 1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 == 1) {
      g_GameMode = 5;
      DAT_800bf80f = DAT_800bf80f & 0x7f;
      param_1->action_state = param_1->action_state + 1;
      goto switchD_8005fba0_caseD_9;
    }
    goto LAB_8005ffb4;
  case 9:
switchD_8005fba0_caseD_9:
LAB_8005ffb4:
    if ((_g_FrameCounter2 & 7) == 0) {
      Audio_PlaySoundEffect(0x38,(int)(char)param_1[0x42],0);
      sVar2 = param_1->timer2;
      param_1->timer2 = sVar2 + 2;
      if (0x1a < (s16)(sVar2 + 2)) {
        param_1[0x42] = 0x1a;
        param_1[0x43] = 0;
      }
    }
    param_1->flag_17A = 1;
    Entity_AnimFrame(param_1);
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + -10;
    break;
  case 10:
    param_1->flag_17A = 1;
    Entity_AnimFrame(param_1);
    iVar5 = Game_CheckIdle();
    if (iVar5 != 0) {
      param_1->action_state = 5;
      param_1[0x40] = 1;
      param_1[0x41] = 0;
    }
  }
  return;
}
