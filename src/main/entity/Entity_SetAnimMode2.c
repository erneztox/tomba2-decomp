/**
 * @brief Sets entity animation mode via entity->anim_id with mode-dependent call
 * @note Original: func_80054DAC at 0x80054DAC
 */
// Entity_SetAnimMode2



#include "tomba.h"
void FUN_80054dac(int param_1,s32 param_2,s16 param_3)

{
  param_1->anim_id = (char)param_2;
  FUN_80054790();
  if (param_3 == 0) {
    FUN_80077c40(param_1,&PTR_DAT_80017fe8,param_2);
  }
  else {
    FUN_80077cfc(param_1,&PTR_DAT_80017fe8,param_2);
  }
  return;
}
