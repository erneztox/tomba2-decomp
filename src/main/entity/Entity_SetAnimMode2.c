/**
 * @brief Sets entity animation mode via entity->anim_id with mode-dependent call
 * @note Original: func_80054DAC at 0x80054DAC
 */
// Entity_SetAnimMode2



#include "tomba.h"
void Entity_SetAnimMode2(int param_1,s32 param_2,s16 param_3)

{
  param_1->anim_id = (char)param_2;
  Entity_AnimLoad3();
  if (param_3 == 0) {
    Entity_LoadAnimData3(param_1,&PTR_DAT_80017fe8,param_2);
  }
  else {
    Entity_LoadAnimDataEx(param_1,&PTR_DAT_80017fe8,param_2);
  }
  return;
}
