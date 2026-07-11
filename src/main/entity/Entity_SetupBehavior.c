/**
 * @brief Sets up entity behavior: checks DAT_800bfa47/80b for mode, branches to state init
 * @note Original: func_8005FA84 at 0x8005FA84
 */
// Entity_SetupBehavior



#include "tomba.h"
void Entity_SetupBehavior(u8 *param_1)

{
  u8 bVar1;
  
  g_CurrentOverlay = 2;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x40] = 0x1e;
  param_1[0x41] = 0;
  *param_1 = *param_1 | 6;
  if (DAT_800bfa47 == -0x80) {
    DAT_800bf80a = 4;
    bVar1 = 10;
  }
  else {
    if (DAT_800bf80b == '`') {
      param_1->action_state = 4;
      Entity_LoadAnimIfChanged(param_1,2,6);
      return;
    }
    if (((DAT_800bf80b == -0x68) || (DAT_800bf80b == -0x5a)) || (bVar1 = 3, DAT_800bf80b == -0x59))
    {
      DAT_800bf80a = 4;
      param_1->action_state = 4;
      Entity_LoadAnimIfChanged(param_1,2,6);
      return;
    }
  }
  param_1->action_state = bVar1;
  return;
}
