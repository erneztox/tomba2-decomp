/**
 * @brief Entity lifecycle check: tests entity->behavior_state==3, entity[0x42]==-1 for completion
 * @note Original: func_80041F34 at 0x80041F34
 */
// Entity_CheckLifecycle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80041f34(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (param_1->behavior_state == '\x03') {
    if (param_1->timer2 == -1) {
      param_1->timer2 = 0;
    }
    if (((_g_PadState & _DAT_1f800174) != 0) && ((param_1->anim_id & 1) == 0)) {
      param_1->behavior_state = 10;
      return 1;
    }
  }
  return 0;
}
