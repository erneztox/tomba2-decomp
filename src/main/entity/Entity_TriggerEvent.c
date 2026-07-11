/**
 * @brief Triggers event: entity->sub_state state, checks entity[0x72/0x74] conditions, calls Game_CheckIdle
 * @note Original: func_80042758 at 0x80042758
 */
// Entity_TriggerEvent



#include "tomba.h"
s32 Entity_TriggerEvent(int param_1)

{
  s32 uVar1;
  int iVar2;
  
  if (param_1->sub_state == '\0') {
    if (-1 < param_1->event_id) {
      iVar2 = Event_TriggerCollectible();
      if (iVar2 != 1) {
        return 1;
      }
      if (param_1->event_param != 0) {
        return 1;
      }
    }
    param_1->sub_state = param_1->sub_state + '\x01';
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (param_1->sub_state == '\x01') {
      uVar1 = Game_CheckIdle();
    }
  }
  return uVar1;
}
