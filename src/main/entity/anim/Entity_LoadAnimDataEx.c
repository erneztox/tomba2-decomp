/**
 * @brief Extended anim load: sets animation pointer, calls setup + frame init
 * @note Original: func_80077CFC at 0x80077CFC
 */
// Entity_LoadAnimDataEx



#include "tomba.h"
void Entity_LoadAnimDataEx(int param_1,int param_2,int param_3,s16 param_4)

{
  s32 uVar1;
  
  uVar1 = *(s32 *)(param_3 * 4 + param_2);
  param_1->anim_data = uVar1;
  Audio_SeqMain2(param_1,uVar1,(int)param_4);
  Entity_RotateMove(param_1,(int)param_4);
  param_1->anim_timer = param_4 + 0x1000;
  return;
}
