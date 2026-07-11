/**
 * @brief Entity target checker: validates target entity ptr
 * @note Original: func_800205CC at 0x800205CC
 */
// Entity_CheckTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800205cc(byte *param_1,char *param_2)

{
  short sVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  
  if (*param_2 == '\x05') {
    if (((param_1->entity_flags & 0x200) == 0) && (param_1->sub_state == 0)) {
      FUN_8001f830();
    }
  }
  else if (((int)param_1->entity_flags & 0x8000U) == 0) {
    uVar4 = FUN_8001f40c(param_1,param_2,0);
    if (-1 < (int)uVar4) {
      if (*param_2 == '\x01') {
        if ((param_1->state_flag144 == 1) && ((int)uVar4 < 2)) {
          FUN_8001fdb4(param_2,0xffff8002,3,0x1e);
        }
        else if ((param_1->entity_flags & 0x200) == 0) {
          if ((uVar4 & 1) == 0) {
            if ((*param_1 & 4) == 0) {
              iVar5 = FUN_80083f50(_DAT_1f80009c);
              sVar7 = param_1->bounds_min_x;
              sVar3 = param_2->bounds_min_x;
              iVar6 = FUN_80083e80(_DAT_1f80009c);
              sVar1 = param_2->bounds_min_x;
              param_1->pos_y =
                   param_2->pos_y + (short)(iVar5 * ((int)sVar7 + (int)sVar3) >> 0xc);
              param_1->pos_z =
                   param_2->pos_z -
                   (short)(iVar6 * ((int)param_1->bounds_min_x + (int)sVar1) >> 0xc);
            }
            param_1[0x60] = 1;
            cVar2 = FUN_80077768((int)_DAT_1f80009c,(int)param_1->draw_angle,1);
            param_1->input_flags = cVar2 + 2;
          }
          else if ((uVar4 == 1) && ((param_1->state_flag145 & 1) == 0)) {
            sVar7 = param_2->bounds_min_y;
            sVar3 = *(short *)(param_2 + 0x32);
            param_1->collision_state = 1;
            param_1->state_flag145 = 0;
            param_1[0x4a] = 0;
            param_1[0x4b] = 0;
            param_1[0x50] = 0;
            param_1[0x51] = 0;
            param_1[0x148] = 0;
            *(short *)(param_1 + 0x32) = sVar3 - (param_1->bounds_min_y + sVar7);
            if ((param_1->sub_state == 0) && (DAT_800bf816 == '\0')) {
              if (param_1->entity_flags < 0) {
                sVar7 = param_1->bounds_min_y;
                if (param_1->bounds_min_y == 0x46) {
                  return;
                }
                sVar3 = *(short *)(param_1 + 0x32) + -0x46;
              }
              else {
                sVar7 = param_1->bounds_min_y;
                if (param_1->bounds_min_y == 0x8c) {
                  return;
                }
                sVar3 = *(short *)(param_1 + 0x32) + -0x8c;
              }
              *(short *)(param_1 + 0x32) = sVar7 + sVar3;
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
    FUN_8001ec3c(param_1,param_2);
  }
  return;
}
