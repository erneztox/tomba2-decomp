/**
 * @brief Sets anim mode only if different from current entity->anim_id value
 * @note Original: func_80041768 at 0x80041768
 */
// Entity_SetAnimModeIfNew



#include "tomba.h"
s32 Entity_SetAnimModeIfNew(int param_1,uint param_2,s16 param_3)

{
  s32 uVar1;
  
  uVar1 = 1;
  if ((uint)param_1->anim_id != (param_2 & 0xff)) {
    uVar1 = Entity_SetAnimMode(param_1,param_2,(int)param_3);
  }
  return uVar1;
}
