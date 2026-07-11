/**
 * @brief Entity behavior list: checks entity type/flags, dispatches to state machine
 * @note Original: func_80022D08 at 0x80022D08
 */
// Entity_BehaviorList



#include "tomba.h"
s32 FUN_80022d08(u8 *param_1,u8 *param_2,int param_3,int param_4)

{
  u16 uVar1;
  
  if (((((((param_1->entity_flags & 0x200) == 0) && (DAT_800bfe55 == '\0')) &&
        (param_1->state_flag144 != 2)) && ((param_1->timer_main != 0 && (DAT_800bf839 == '\0')))) &&
      ((g_CurrentOverlay == '\0' && ((*param_1 & 2) == 0)))) &&
     ((param_4 != 0 || ((*param_2 & 2) == 0)))) {
    *param_1 = *param_1 | 2;
    if (param_1->entity_flags < 0) {
      param_3 = param_3 << 1;
    }
    uVar1 = param_1->timer_main;
    param_1->timer_main = (s16)((uint)uVar1 - param_3);
    if ((int)(((uint)uVar1 - param_3) * 0x10000) < 1) {
      param_1[0x16e] = 0;
      param_1[0x16f] = 0;
      g_TimerFlag = 0xff;
    }
    g_ActionState = 0;
    return 1;
  }
  return 0;
}
