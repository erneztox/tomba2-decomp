/**
 * @brief Entity AI behavior: checks target, moves toward player
 * @note Original: func_80020364 at 0x80020364
 */
// Entity_Behavior_AI



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
u8 Entity_Behavior_AI(u8 *param_1,u8 *param_2,uint param_3)

{
  s16 sVar1;
  s16 sVar2;
  u8 bVar3;
  int iVar4;
  int iVar5;
  u8 bVar6;
  
  if (((param_1->entity_flags & 0x200) == 0) &&
     (iVar4 = Entity_CalcPos(param_1,param_2,1), -1 < iVar4)) {
    if ((param_1->state_flag144 == 1) && (iVar4 < 2)) {
      if (((int)param_1->entity_flags & 0x8000U) == 0) {
        Entity_CalcAngle21(param_2,1,0x10,0x20);
      }
      else if ((param_3 & 3) != 0) {
        Entity_Behavior_Boss(param_1,param_2);
        return 1;
      }
      bVar3 = 1;
    }
    else {
      if ((param_3 & 0x3f) != 0) {
        iVar4 = Math_CosGTE(_g_AngleTarget);
        sVar1 = param_1->bounds_min_x;
        sVar2 = param_2->bounds_min_x;
        iVar5 = Math_Cos(_g_AngleTarget);
        sVar1 = (s16)(iVar4 * ((int)sVar1 + (int)sVar2) >> 0xc);
        sVar2 = (s16)(iVar5 * ((int)param_1->bounds_min_x + (int)param_2->bounds_min_x)
                       >> 0xc);
        if ((param_3 & 0x7f) == 1) {
          param_2->pos_y = param_1->pos_y - sVar1;
          param_2->pos_z = param_1->pos_z + sVar2;
        }
        else if ((*param_1 & 4) == 0) {
          param_1->pos_y = param_2->pos_y + sVar1;
          param_1->pos_z = param_2->pos_z - sVar2;
        }
      }
      bVar6 = (u8)(_g_AngleTarget >> 4);
      if ((param_3 & 0x40) == 0) {
        if ((param_3 & 0x80) != 0) {
          if (g_ActionMode != '\0') {
            return 2;
          }
          if (param_1->state != 1) {
            return 2;
          }
          if (param_1->behavior_state != 0x13) {
            param_1->behavior_state = 0x13;
            param_1->action_state = 0;
            param_1->sub_action = 0;
            param_1->move_mode = bVar6;
            return 3;
          }
        }
        bVar3 = 2;
      }
      else {
        bVar3 = g_CurrentOverlay;
        if (((g_CurrentOverlay == 0) && (bVar3 = *param_1 & 6, (*param_1 & 6) == 0)) &&
           (bVar3 = *param_2 & 2, (*param_2 & 2) == 0)) {
          bVar3 = 4;
          param_1->state = STATE_FINISH;
          param_1->behavior_state = 2;
          *param_1 = 3;
          param_1->action_state = 0;
          param_1[0x172] = 0x78;
          param_1[0x173] = 0;
          param_1->move_mode = bVar6;
        }
      }
    }
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}
