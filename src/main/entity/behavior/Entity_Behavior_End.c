/**
 * @brief Entity end behavior: cleanup and transition
 * @note Original: func_80053968 at 0x80053968
 */
// Entity_Behavior_End



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_Behavior_End(int param_1,int param_2)

{
  int iVar1;
  s32 uVar2;
  u8 *pbVar3;
  uint uVar4;
  int iVar5;
  s32 *puVar6;
  
  if (param_1->timer_main == 0) {
switchD_800539dc_caseD_4:
    uVar2 = 0;
  }
  else {
    if (*(s8*)(param_1 + 0x180) != '\0') {
      return 0;
    }
    puVar6 = _DAT_1f800140;
    switch(param_1->behavior_flags) {
    case 0:
    case 2:
      uVar4 = (uint)param_1->draw_angle;
      iVar5 = 0;
      g_State182 = DAT_1f800146;
      break;
    case 1:
    case 3:
      iVar5 = 0;
      uVar4 = param_1->draw_angle + 0x800;
      g_State182 = DAT_1f800146;
      break;
    default:
      goto switchD_800539dc_caseD_4;
    case 6:
    case 7:
      iVar5 = 1;
      uVar4 = param_1->draw_angle - 0x400;
      g_State182 = DAT_1f800146;
      break;
    case 10:
    case 0xb:
      iVar5 = 2;
      uVar4 = param_1->draw_angle + 0x400;
      g_State182 = DAT_1f800146;
    }
    do {
      do {
        while( true ) {
          do {
            if (g_State182 == '\0') goto switchD_800539dc_caseD_4;
            pbVar3 = (u8 *)*puVar6;
            g_State182 = g_State182 + -1;
            puVar6 = puVar6 + 1;
          } while (((pbVar3[0xc] != 9) && ((pbVar3[0xc] != 2 || (pbVar3->kind != 0xb)))) ||
                  ((*pbVar3 & 1) == 0));
          if (iVar5 != 0) break;
          if (pbVar3->move_mode == 2) {
            iVar1 = Math_Atan2(-((int)(((uint)pbVar3->pos_z -
                                         (uint)param_1->pos_z) * 0x10000) >> 0x10),
                                 (int)(((uint)pbVar3->pos_y -
                                       (uint)param_1->pos_y) * 0x10000) >> 0x10);
            iVar1 = (int)((iVar1 - uVar4) * 0x100000) >> 0x10;
            if (iVar1 < 0) {
              iVar1 = -iVar1;
            }
            if (iVar1 < 0x1000) {
              if (param_2 != 0) {
                return 1;
              }
              pbVar3->move_mode = 3;
              goto LAB_80053bb0;
            }
          }
        }
      } while (1 < pbVar3->move_mode - 1);
      iVar1 = Math_Atan2(-((int)(((uint)pbVar3->pos_z -
                                   (uint)param_1->pos_z) * 0x10000) >> 0x10),
                           (int)(((uint)pbVar3->pos_y -
                                 (uint)param_1->pos_y) * 0x10000) >> 0x10);
      iVar1 = (int)((iVar1 - uVar4) * 0x100000) >> 0x10;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
    } while (0xfff < iVar1);
    uVar2 = 1;
    if (param_2 == 0) {
      pbVar3->move_mode = 3;
      if (iVar5 == 1) {
        g_SFXState = 0x82;
      }
      else {
        g_SFXState = 0x83;
      }
LAB_80053bb0:
      uVar2 = 1;
    }
  }
  return uVar2;
}
