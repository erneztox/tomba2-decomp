/**
 * @brief Entity hit behavior: checks entity->physics_flag, applies reaction
 * @note Original: func_80024548 at 0x80024548
 */
// Entity_Behavior_Hit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_80024548(int param_1,int param_2)

{
  s8 cVar1;
  u16 uVar2;
  int iVar3;
  u8 *pbVar4;
  s16 sVar5;
  s32 *puVar6;
  
  iVar3 = 0;
  if ((param_1->physics_flag == '\0') && (iVar3 = 0, g_CurrentOverlay == '\0')) {
    if ((param_2 == 0) && (1 < param_1->state_flag144)) {
      iVar3 = 0;
    }
    else {
      _g_GTE_Result[0] = 0;
      if (param_1->direction == '\0') {
        uVar2 = param_1->draw_angle;
      }
      else {
        uVar2 = param_1->draw_angle - 0x800U & 0xfff;
      }
      param_1->rot_y = uVar2;
      if (param_1->entity_flags < 0) {
        _DAT_1f800088 = 0x14;
        sVar5 = *(s16 *)(param_1 + 0x66) + -10;
      }
      else {
        _DAT_1f800088 = 0x28;
        sVar5 = *(s16 *)(param_1 + 0x66) + -0x1e;
      }
      iVar3 = FUN_80083f50((int)param_1->rot_y);
      param_1->draw_pos_x = param_1->pos_y + (s16)(iVar3 * sVar5 >> 0xc);
      iVar3 = FUN_80083e80((int)param_1->rot_y);
      param_1->draw_pos_y = *(s16 *)(param_1 + 0x32) - param_1->target_angle;
      param_1->draw_pos_z = param_1->pos_z - (s16)(iVar3 * sVar5 >> 0xc);
      if (g_GameState == 0) {
        puVar6 = _DAT_1f800158;
        cVar1 = DAT_1f80015e;
        if ((param_1->entity_flags & 0x200) == 0) {
          while (g_State182 = cVar1, g_State182 != '\0') {
            pbVar4 = (u8 *)*puVar6;
            g_State182 = g_State182 + -1;
            puVar6 = puVar6 + 1;
            cVar1 = g_State182;
            if (((*pbVar4 & 4) != 0) && (pbVar4->kind == 2)) {
              func_0x80114320(param_1);
              cVar1 = g_State182;
            }
          }
        }
        if (_g_GTE_Result[0] != 0) {
          return _g_GTE_Result[0];
        }
      }
      iVar3 = (**(code **)(&DAT_8009d22c + (uint)g_GameState * 4))(param_1);
      if ((iVar3 == 0) && (iVar3 = FUN_80024448(param_1), iVar3 == 0)) {
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}
