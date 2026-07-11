/**
 * @brief Entity state trigger variant 2: entity->sub_state=1, checks flags
 * @note Original: func_8004491C at 0x8004491C
 */
// Entity_StateTrigger2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_8004491c(int param_1)

{
  u8 bVar1;
  u16 uVar2;
  int iVar3;
  
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    if (param_1->sub_state2 != '\x01') {
      return 0;
    }
    FUN_800440e4(&g_CollisionEntity,0xcf,2);
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return 0;
    }
    uVar2 = param_1->event_id;
    if ((uVar2 & 0x2000) == 0) {
      if ((uVar2 & 0x1000) == 0) {
        iVar3 = FUN_8006fb0c(param_1,uVar2 & 0x3ff);
      }
      else {
        iVar3 = FUN_8006fde8(param_1,uVar2 & 0x3ff);
      }
    }
    else {
      iVar3 = FUN_8006fc34(param_1,uVar2 & 0x3ff);
    }
    _DAT_800bf844 = iVar3;
    if (iVar3 != 0) {
      if ((**(u16 **)(param_1 + 0x6c) & 0x2000) == 0) {
        iVar3->flag_5E = 1;
      }
      else {
        iVar3->draw_x = *(s16 *)(param_1 + 0x66);
        iVar3->angle_delta = param_1->type_flags;
        iVar3->flag_5E = *(u8 *)(param_1 + 0x68);
      }
      if ((param_1->event_id & 0x800) == 0) {
        iVar3->input_flags = iVar3->input_flags | 1;
      }
    }
    FUN_80041718(param_1,(int)param_1->event_param,4);
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return 0;
      }
      if ((g_EventInput & 1) != 0) {
        return 0;
      }
      return 1;
    }
    if (g_ActionTrigger == '\0') {
      return 0;
    }
    FUN_800440e4(&g_CollisionEntity,2,4);
    _DAT_800bf844->state = STATE_FINISH;
    _DAT_800bf844->behavior_state = 0;
    _DAT_800bf844->action_state = 0;
    FUN_80041718(param_1,(int)*(s16 *)(param_1 + 0x76),4);
    if ((param_1->event_id & 0x800) != 0) {
      return 1;
    }
  }
  param_1->sub_state = param_1->sub_state + '\x01';
  return 0;
}
