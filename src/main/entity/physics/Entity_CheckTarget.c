/**
 * @brief Entity target checker: validates target entity ptr
 * @note Original: func_800205CC at 0x800205CC
 */
// Entity_CheckTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_CheckTarget(u8 *param_1,char *param_2)

{
  s16 sVar1;
  s8 cVar2;
  s16 sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  s16 sVar7;
  
  if (*param_2 == '\x05') {
    if (((param_1->entity_flags & 0x200) == 0) && (param_1->sub_state == 0)) {
      Entity_CalcAngle16();
    }
  }
  else if (((int)param_1->entity_flags & 0x8000U) == 0) {
    uVar4 = Entity_CalcPos(param_1,param_2,0);
    if (-1 < (int)uVar4) {
      if (*param_2 == '\x01') {
        if ((param_1->state_flag144 == 1) && ((int)uVar4 < 2)) {
          Entity_CalcAngle21(param_2,0xffff8002,3,0x1e);
        }
        else if ((param_1->entity_flags & 0x200) == 0) {
          if ((uVar4 & 1) == 0) {
            if ((*param_1 & 4) == 0) {
              iVar5 = Math_CosGTE(_g_AngleTarget);
              sVar7 = param_1->bounds_min_x;
              sVar3 = param_2->bounds_min_x;
              iVar6 = Math_Cos(_g_AngleTarget);
              sVar1 = param_2->bounds_min_x;
              param_1->pos_y =
                   param_2->pos_y + (s16)(iVar5 * ((int)sVar7 + (int)sVar3) >> 0xc);
              param_1->pos_z =
                   param_2->pos_z -
                   (s16)(iVar6 * ((int)param_1->bounds_min_x + (int)sVar1) >> 0xc);
            }
            param_1[0x60] = 1;
            cVar2 = Math_CompareAngle((int)_g_AngleTarget,(int)param_1->draw_angle,1);
            param_1->input_flags = cVar2 + 2;
          }
          else if ((uVar4 == 1) && ((param_1->state_flag145 & 1) == 0)) {
            sVar7 = param_2->bounds_min_y;
            sVar3 = *(s16 *)(param_2 + 0x32);
            param_1->collision_state = 1;
            param_1->state_flag145 = 0;
            param_1[0x4a] = 0;
            param_1[0x4b] = 0;
            param_1[0x50] = 0;
            param_1[0x51] = 0;
            param_1[0x148] = 0;
            *(s16 *)(param_1 + 0x32) = sVar3 - (param_1->bounds_min_y + sVar7);
            if ((param_1->sub_state == 0) && (g_ActionFlag == '\0')) {
              if (param_1->entity_flags < 0) {
                sVar7 = param_1->bounds_min_y;
                if (param_1->bounds_min_y == 0x46) {
                  return;
                }
                sVar3 = *(s16 *)(param_1 + 0x32) + -0x46;
              }
              else {
                sVar7 = param_1->bounds_min_y;
                if (param_1->bounds_min_y == 0x8c) {
                  return;
                }
                sVar3 = *(s16 *)(param_1 + 0x32) + -0x8c;
              }
              *(s16 *)(param_1 + 0x32) = sVar7 + sVar3;
            }
          }
        }
      }
      else if (((param_1->entity_flags & 0x200) == 0) && ((param_1->state_flag145 & 1) == 0)) {
        param_2->collision_state = '\x01';
      }
    }
  }
  else {
    Entity_MoveMain(param_1,param_2);
  }
  return;
}
