/**
 * @brief Sets entity script processing flags from u16: bit 0x1000=flag2, 0x4000=flag4
 * @note Original: func_80040D68 at 0x80040D68
 */
// Entity_InitScriptFlags



#include "tomba.h"
void FUN_80040d68(int param_1,u16 *param_2)

{
  param_1->anim_check = 0;
  param_1->sub_state = 0;
  FUN_80040de0();
  param_1->state_71 = 0;
  if ((*param_2 & 0x1000) != 0) {
    param_1->state_71 = 2;
  }
  if ((*param_2 & 0x4000) != 0) {
    param_1->state_71 = param_1->state_71 | 4;
  }
  return;
}
