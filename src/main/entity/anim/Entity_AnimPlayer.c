/**
 * @brief Entity animation player: manages animation playback
 * @note Original: func_80071768 at 0x80071768
 */
// Entity_AnimPlayer



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80071768(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  void **ppuVar3;
  int iVar4;
  uint uVar5;
  s32 local_28;
  s32 local_24;
  s32 local_20;
  s32 local_18;
  s32 local_14;
  
  local_18 = DAT_80016b30;
  local_14 = DAT_80016b34;
  if ((param_1->behavior_state == '\0') || (((int)_DAT_800e7ffe & 0x8200U) != 0)) {
    param_1->flags = 0;
  }
  else {
    param_1->flags = 1;
  }
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    g_EventFlag = 4;
    if (((DAT_800bf831 & 0x80) != 0) || ((g_CurrentOverlay != '\0' && (g_ActionTrigger != '\0')))) {
      if ((DAT_800bf831 & 4) == 0) {
        local_28 = CONCAT22(0xbe,(s16)local_28);
        sVar2 = *(s16 *)((int)&local_18 + (DAT_800bf831 & 3) * 2);
        local_24 = CONCAT22(0x50,(s16)local_24);
        if ((DAT_800bf831 & 0x20) != 0) {
          sVar2 = sVar2 + 0x200;
        }
        local_20 = CONCAT22(sVar2,(s16)local_20);
      }
      else {
        local_28 = _DAT_800bf824;
        local_24 = _DAT_800bf828;
        local_20 = _DAT_800bf82c;
      }
      sVar2 = _g_EntityAngle;
      if ((DAT_800bf831 & 0x10) != 0) {
        sVar2 = _g_CameraAngle + _DAT_800e805a + 0x800;
      }
      if ((DAT_800bf831 & 8) == 0) {
        FUN_8007091c(param_1,(int)sVar2,&local_28);
      }
      else {
        FUN_80070bd0(param_1,(int)sVar2,&local_28,DAT_800bf831 & 0x40);
      }
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      g_EventFlag = 0;
      if (DAT_800bf830 == -1) {
        g_EventFlag = 0;
        return;
      }
      param_1->sub_action = 0;
      param_1->action_state = 0;
      param_1->behavior_state = 1;
      return;
    }
    if (bVar1 == 2) {
      g_EventFlag = 1;
      if (param_1->combat_flag < 10) {
        uVar5 = (uint)param_1->combat_flag;
        ppuVar3 = &PTR_FUN_800a4bc0;
      }
      else if (g_GameState == '\0') {
        ppuVar3 = (void **)0x80149e74;
        uVar5 = param_1->combat_flag - 10;
      }
      else {
        if (g_GameState != '\a') {
          g_EventFlag = 1;
          return;
        }
        ppuVar3 = (void **)0x80132e78;
        uVar5 = param_1->combat_flag - 10;
      }
      (*(code *)ppuVar3[uVar5])(param_1);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    g_EventFlag = 2;
    iVar4 = FUN_80071260(param_1);
    if (iVar4 == 1) {
      DAT_800bf830 = 0xff;
      DAT_800bf831 = 0xff;
      return;
    }
  }
  FUN_8004190c(param_1);
  return;
}
