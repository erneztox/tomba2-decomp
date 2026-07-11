/**
 * @brief Pickup state machine: checks idle counter, advances state byte at entity->sub_state
 * @note Original: func_800427F4 at 0x800427F4
 */
// Entity_State_PickupCheck



#include "tomba.h"
undefined4 FUN_800427f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1->sub_state == '\0') {
    iVar2 = FUN_80040c00((int)param_1->event_id);
    uVar1 = 1;
    if ((iVar2 == 1) && (uVar1 = 1, param_1->event_param == 0)) {
      param_1->sub_state = param_1->sub_state + '\x01';
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
    if (param_1->sub_state == '\x01') {
      uVar1 = FUN_80042728();
    }
  }
  return uVar1;
}
