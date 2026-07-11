/**
 * @brief Entity move-to: computes trajectory, updates position
 * @note Original: func_8001FF7C at 0x8001FF7C
 */
// Entity_MoveTo



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_8001ff7c(u8 *param_1,u8 *param_2,int param_3,int param_4)

{
  u8 bVar1;
  s16 sVar2;
  s16 sVar3;
  s16 sVar4;
  u16 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = _g_AngleTarget;
  if (param_1->state_flag144 == 1) {
    bVar1 = *param_2;
    if (((bVar1 & 0x18) == 0) && (param_3 < 2)) {
      if ((param_1[0x61] & 1) == 0) {
        FUN_8001fdb4(param_2,1,3,0x1e);
        return 1;
      }
      if ((bVar1 != 1) && (bVar1 != 3)) {
        return 2;
      }
      *param_2 = 3;
      param_2->state = 2;
      param_2->behavior_state = 0;
      param_2->action_state = 0;
      param_2->move_mode = (u8)(iVar7 + 0x800 >> 4);
      return 2;
    }
  }
  else if (param_1->state_flag144 == 2) {
    if ((*param_2 & 10) == 0) {
      *param_2 = 3;
      param_2->state = 2;
      param_2->behavior_state = 0;
      param_2->action_state = 0;
      param_2->move_mode = (u8)(iVar7 + 0x800 >> 4);
    }
    else if ((param_1->entity_flags & 0x200) == 0) {
      if (param_4 != 1) {
        return 2;
      }
      iVar7 = FUN_80083f50(_g_AngleTarget);
      sVar2 = param_1->bounds_min_x;
      sVar3 = param_2->bounds_min_x;
      iVar6 = FUN_80083e80(_g_AngleTarget);
      sVar4 = param_1->bounds_min_x;
      param_2->pos_y =
           param_1->pos_y - (s16)(iVar7 * ((int)sVar2 + (int)sVar3) >> 0xc);
      param_2->pos_z =
           param_1->pos_z +
           (s16)(iVar6 * ((int)sVar4 + (int)param_2->bounds_min_x) >> 0xc);
    }
    return 2;
  }
  if ((param_1->entity_flags & 0x200) != 0) {
    return 0;
  }
  if (param_4 != 2) {
    if (param_4 < 3) {
      if (param_4 == 1) {
        iVar7 = FUN_80083f50(_g_AngleTarget);
        sVar2 = param_1->bounds_min_x;
        sVar3 = param_2->bounds_min_x;
        iVar6 = FUN_80083e80(_g_AngleTarget);
        sVar4 = param_1->bounds_min_x;
        param_2->pos_y =
             param_1->pos_y - (s16)(iVar7 * ((int)sVar2 + (int)sVar3) >> 0xc);
        param_2->pos_z =
             param_1->pos_z +
             (s16)(iVar6 * ((int)sVar4 + (int)param_2->bounds_min_x) >> 0xc);
      }
      goto LAB_80020260;
    }
    if (param_4 != 3) goto LAB_80020260;
    _g_AngleTarget = (int)param_1->draw_angle;
  }
  if ((*param_1 & 4) == 0) {
    iVar7 = FUN_80083f50(_g_AngleTarget);
    sVar2 = param_1->bounds_min_x;
    sVar3 = param_2->bounds_min_x;
    iVar6 = FUN_80083e80(_g_AngleTarget);
    sVar4 = param_2->bounds_min_x;
    param_1->pos_y =
         param_2->pos_y + (s16)(iVar7 * ((int)sVar2 + (int)sVar3) >> 0xc);
    param_1->pos_z =
         param_2->pos_z -
         (s16)(iVar6 * ((int)param_1->bounds_min_x + (int)sVar4) >> 0xc);
  }
LAB_80020260:
  param_1->move_mode = (u8)(_g_AngleTarget >> 4);
  if ((param_1->entity_flags & 0x200) != 0) {
    return 0;
  }
  if (DAT_800bfe55 != '\0') {
    return 0;
  }
  if (param_1->state_flag144 == 2) {
    return 0;
  }
  if (param_1->timer_main != 0) {
    if (DAT_800bf839 != '\0') {
      return 0;
    }
    if (g_CurrentOverlay != '\0') {
      return 0;
    }
    if ((*param_1 & 2) != 0) {
      return 0;
    }
    if ((*param_2 & 2) != 0) {
      return 0;
    }
    iVar7 = 1;
    *param_1 = *param_1 | 2;
    if (param_1->entity_flags < 0) {
      iVar7 = 2;
    }
    uVar5 = param_1->timer_main;
    param_1->timer_main = (s16)((uint)uVar5 - iVar7);
    if ((int)(((uint)uVar5 - iVar7) * 0x10000) < 1) {
      param_1[0x16e] = 0;
      param_1[0x16f] = 0;
      g_TimerFlag = 0xff;
    }
    g_ActionState = 0;
  }
  return 0;
}
