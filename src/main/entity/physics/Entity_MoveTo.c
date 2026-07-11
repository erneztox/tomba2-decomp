/**
 * @brief Entity move-to: computes trajectory, updates position
 * @note Original: func_8001FF7C at 0x8001FF7C
 */
// Entity_MoveTo



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_8001ff7c(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = _DAT_1f80009c;
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
      param_2->move_mode = (byte)(iVar7 + 0x800 >> 4);
      return 2;
    }
  }
  else if (param_1->state_flag144 == 2) {
    if ((*param_2 & 10) == 0) {
      *param_2 = 3;
      param_2->state = 2;
      param_2->behavior_state = 0;
      param_2->action_state = 0;
      param_2->move_mode = (byte)(iVar7 + 0x800 >> 4);
    }
    else if ((param_1->entity_flags & 0x200) == 0) {
      if (param_4 != 1) {
        return 2;
      }
      iVar7 = FUN_80083f50(_DAT_1f80009c);
      sVar2 = param_1->bounds_min_x;
      sVar3 = param_2->bounds_min_x;
      iVar6 = FUN_80083e80(_DAT_1f80009c);
      sVar4 = param_1->bounds_min_x;
      param_2->pos_y =
           param_1->pos_y - (short)(iVar7 * ((int)sVar2 + (int)sVar3) >> 0xc);
      param_2->pos_z =
           param_1->pos_z +
           (short)(iVar6 * ((int)sVar4 + (int)param_2->bounds_min_x) >> 0xc);
    }
    return 2;
  }
  if ((param_1->entity_flags & 0x200) != 0) {
    return 0;
  }
  if (param_4 != 2) {
    if (param_4 < 3) {
      if (param_4 == 1) {
        iVar7 = FUN_80083f50(_DAT_1f80009c);
        sVar2 = param_1->bounds_min_x;
        sVar3 = param_2->bounds_min_x;
        iVar6 = FUN_80083e80(_DAT_1f80009c);
        sVar4 = param_1->bounds_min_x;
        param_2->pos_y =
             param_1->pos_y - (short)(iVar7 * ((int)sVar2 + (int)sVar3) >> 0xc);
        param_2->pos_z =
             param_1->pos_z +
             (short)(iVar6 * ((int)sVar4 + (int)param_2->bounds_min_x) >> 0xc);
      }
      goto LAB_80020260;
    }
    if (param_4 != 3) goto LAB_80020260;
    _DAT_1f80009c = (int)param_1->draw_angle;
  }
  if ((*param_1 & 4) == 0) {
    iVar7 = FUN_80083f50(_DAT_1f80009c);
    sVar2 = param_1->bounds_min_x;
    sVar3 = param_2->bounds_min_x;
    iVar6 = FUN_80083e80(_DAT_1f80009c);
    sVar4 = param_2->bounds_min_x;
    param_1->pos_y =
         param_2->pos_y + (short)(iVar7 * ((int)sVar2 + (int)sVar3) >> 0xc);
    param_1->pos_z =
         param_2->pos_z -
         (short)(iVar6 * ((int)param_1->bounds_min_x + (int)sVar4) >> 0xc);
  }
LAB_80020260:
  param_1->move_mode = (byte)(_DAT_1f80009c >> 4);
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
    if (DAT_1f800137 != '\0') {
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
    param_1->timer_main = (short)((uint)uVar5 - iVar7);
    if ((int)(((uint)uVar5 - iVar7) * 0x10000) < 1) {
      param_1[0x16e] = 0;
      param_1[0x16f] = 0;
      DAT_800bf80d = 0xff;
    }
    DAT_800bf81e = 0;
  }
  return 0;
}
