/**
 * @brief Entity wait state: entity->sub_state=0, polls g_EventFlag, checks flags
 * @note Original: func_800424F0 at 0x800424F0
 */
// Entity_WaitState



#include "tomba.h"
s32 FUN_800424f0(int param_1)

{
  s32 local_18;
  
  if (param_1->sub_state == '\0') {
    if (g_EventFlag != '\0') {
      return 1;
    }
    if ((*(u16 *)(param_1 + 0x76) & 4) == 0) {
      FUN_80070724(param_1->event_id & 0xfff,(int)param_1->event_param,
                   (int)(s16)*(u16 *)(param_1 + 0x76));
    }
    else {
      local_18 = CONCAT22(*(s16 *)(param_1 + 100),(s16)local_18);
      FUN_8007074c(param_1->event_id & 0xfff,(int)param_1->event_param,
                   (int)*(s16 *)(param_1 + 0x76),local_18);
    }
    if (((int)param_1->event_id & 0x8000U) != 0) {
      return 1;
    }
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  else {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    if (g_EventFlag == '\x01') {
      return 1;
    }
  }
  return 0;
}
