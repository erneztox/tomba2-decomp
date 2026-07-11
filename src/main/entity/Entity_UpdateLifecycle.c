/**
 * @brief Lifecycle callback: entity->state state machine, checks done flag, dealloc at state 3
 * @note Original: func_8007263C at 0x8007263C
 */
// Entity_UpdateLifecycle



#include "tomba.h"
void FUN_8007263c(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if (**(s16 **)(param_1 + 0x10) == -2) {
      param_1->state = 3;
    }
    else {
      param_1->flags = 1;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->render_flags = 8;
      param_1->state = param_1->state + '\x01';
    }
  }
  else if (bVar1 < 4) {
    FUN_8007a624();
  }
  return;
}
