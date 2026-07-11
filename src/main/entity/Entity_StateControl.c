/**
 * @brief Entity state controller: entity->game_flags flags, transitions
 * @note Original: func_80055390 at 0x80055390
 */
// Entity_StateControl



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
uint Entity_StateControl(int param_1)

{
  u8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_1->game_flags & 3) == 0) {
    if (param_1->entity_flags < 0) {
      if ((_g_PadState & _DAT_1f800174) != 0) {
        if (((param_1->entity_flags & 0x2000) != 0) &&
           (iVar2 = Entity_CheckAction(param_1), iVar2 != 0)) goto LAB_8005556c;
        iVar2 = Entity_Behavior_End(param_1,1);
        if (iVar2 != 0) {
          return 1;
        }
      }
      goto LAB_80055598;
    }
    if ((_g_PadState & _DAT_1f800174) == 0) {
      if (g_ActionFlag == '\0') {
        if ((_g_InputState & _DAT_1f800174) == 0) {
          param_1->flag_175 = 0;
        }
        else {
          iVar2 = Entity_CheckState(param_1,1);
          if (iVar2 != 0) {
            if (*(s8*)(param_1 + 0x181) == '\0') {
              param_1->behavior_state = 5;
              param_1->sub_action = 0;
            }
            else {
              param_1->behavior_state = 0x32;
            }
            uVar3 = 2;
            param_1->flag_175 = 1;
            param_1->action_state = 0;
          }
        }
        goto LAB_80055598;
      }
    }
    else {
      param_1->flag_175 = 0;
      iVar2 = Entity_CheckAction(param_1);
      if (iVar2 != 0) {
LAB_8005556c:
        param_1->behavior_state = 0x1b;
        param_1->action_state = 0;
        param_1->sub_action = 0;
        return 1;
      }
      iVar2 = Entity_Behavior_End(param_1,1);
      if (iVar2 != 0) {
        return 1;
      }
      if (g_ActionFlag == '\0') {
        iVar2 = Entity_CheckState(param_1,0);
        if (iVar2 != 0) {
          if (*(s8*)(param_1 + 0x181) == '\0') {
            param_1->behavior_state = 5;
            param_1->sub_action = 0;
          }
          else {
            param_1->behavior_state = 0x32;
          }
          param_1->action_state = 0;
          uVar3 = 2;
        }
        goto LAB_80055598;
      }
    }
  }
  else {
    if ((*(s8*)(param_1 + 0x181) == '\0') && ((_g_PadState & _DAT_1f800174) != 0)) {
      param_1->action_state = 0;
      param_1->sub_action = 0;
      if ((param_1->game_flags & 1) == 0) {
        uVar1 = 0x39;
      }
      else {
        uVar1 = 0x38;
      }
      param_1->behavior_state = uVar1;
      return 2;
    }
LAB_80055598:
    if (g_ActionFlag == '\0') goto LAB_800555b8;
  }
  if (DAT_800bf84d != '\0') {
    return uVar3;
  }
LAB_800555b8:
  if ((*(s8*)(param_1 + 0x148) == '\0') && ((_g_PadState & _g_InputMask) != 0)) {
    if (uVar3 == 0) {
      param_1->behavior_state = 2;
      Entity_LoadAnimIfChanged(param_1,0x14,2);
    }
    else {
      param_1->behavior_state = 6;
    }
    uVar3 = uVar3 | 1;
    param_1->action_state = 0;
    param_1->sub_action = 0;
  }
  return uVar3;
}
