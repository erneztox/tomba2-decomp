/**
 * @brief Sets entity sub-state to 0x22 or 0x26 based on bit 15 of param
 * @note Original: func_800440E4 at 0x800440E4
 */
// Entity_SetSubState22



#include "tomba.h"
void FUN_800440e4(int param_1,uint param_2,s16 param_3)

{
  u8 uVar1;
  
  if (param_1->action_flag == '\0') {
    FUN_80054dac(param_1,param_2 & 0x7fff,(int)param_3);
    uVar1 = 0x26;
    if ((param_2 & 0x8000) == 0) {
      uVar1 = 0x22;
    }
    param_1->behavior_state = uVar1;
    param_1->action_state = 0;
  }
  return;
}
