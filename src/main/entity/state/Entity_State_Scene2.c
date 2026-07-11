/**
 * @brief Entity scene state variant 2: entity->sub_state dispatch
 * @note Original: func_800446A4 at 0x800446A4
 */
// Entity_State_Scene2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800446a4(int param_1)

{
  u16 uVar1;
  int iVar2;
  
  switch(param_1->sub_state) {
  case 0:
    FUN_800440e4(&g_CollisionEntity,0xcf,2);
    uVar1 = param_1->event_id;
    if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0x1000) == 0) {
        _DAT_800bf844 = FUN_8006fb0c(param_1,uVar1 & 0x3ff);
      }
      else {
        _DAT_800bf844 = FUN_8006fde8(param_1,uVar1 & 0x3ff);
      }
    }
    else {
      _DAT_800bf844 = FUN_8006fc34(param_1,uVar1 & 0x3ff);
    }
    if (_DAT_800bf844 != 0) {
      if ((**(u16 **)(param_1 + 0x6c) & 0x2000) != 0) {
        _DAT_800bf844->draw_x = *(s16 *)(param_1 + 100);
      }
      _DAT_800bf844->flag_5E = 0;
    }
    if ((param_1->event_id & 0x800) == 0) {
      FUN_8004ed0c(param_1->event_id & 0x3ff,4);
      FUN_8004d650(param_1->event_id & 0x3ff,1);
    }
    break;
  case 1:
    if (g_ActionTrigger == '\0') {
      return 0;
    }
    iVar2 = (int)param_1->event_param;
LAB_800448d4:
    FUN_80041718(param_1,iVar2,4);
    break;
  case 2:
    if (*(s8*)(param_1->anim_data + 4) == '\0') {
      return 0;
    }
    if ((param_1->event_id & 0x4000) == 0) {
      _DAT_800bf844->state = 2;
    }
    else {
      _DAT_800bf844->draw_x = *(s16 *)(param_1 + 0x66);
      _DAT_800bf844->angle_delta = param_1->type_flags;
      _DAT_800bf844->flag_5E = *(u8 *)(param_1 + 0x68);
    }
    FUN_800440e4(&g_CollisionEntity,2,4);
    break;
  case 3:
    if (param_1->sub_state2 != '\x01') {
      return 0;
    }
    if ((param_1->event_id & 0x4000) != 0) {
      _DAT_800bf844->draw_x = *(s16 *)(param_1 + 0x66);
      _DAT_800bf844->flag_5E = (char)((u16)param_1->target_angle >> 8);
    }
    iVar2 = (int)*(s16 *)(param_1 + 0x76);
    if (-1 < iVar2) goto LAB_800448d4;
    break;
  case 4:
    if ((g_EventInput & 1) == 0) {
      return 1;
    }
  default:
    goto switchD_800446dc_default;
  }
  param_1->sub_state = param_1->sub_state + '\x01';
switchD_800446dc_default:
  return 0;
}
