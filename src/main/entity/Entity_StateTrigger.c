/**
 * @brief Entity state trigger: entity->sub_state=1, checks flag vs DAT_800bf816
 * @note Original: func_80043D8C at 0x80043D8C
 */
// Entity_StateTrigger



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80043d8c(int param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    _DAT_1f800190 = 0;
    if (DAT_800bf816 == param_2) {
      param_1->sub_state = param_1->sub_state + '\x01';
    }
    else if (param_1->event_param == 0) {
      _DAT_1f800190 = _DAT_1f80016c;
    }
    else {
      _DAT_1f800190 = _DAT_1f80016e;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return 0;
    }
    if (*(short *)(param_1 + 0x76) == 0) {
      param_1->sub_state = 2;
    }
    else {
      _DAT_1f800190 = 0;
      _DAT_1f800192 = param_1->event_param;
      DAT_800e7e85 = 0x1f;
      DAT_800e7e86 = 0;
      param_1->sub_state = 1;
    }
  }
  else {
    if (bVar1 != 2) {
      return 0;
    }
    if (DAT_800bf816 != param_2) {
      return 0;
    }
    if (DAT_800bf80e == '\x01') {
      return 1;
    }
  }
  return 0;
}
