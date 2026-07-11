/**
 * @brief Extended anim load: sets animation pointer, calls setup + frame init
 * @note Original: func_80077CFC at 0x80077CFC
 */
// Entity_LoadAnimDataEx



#include "tomba.h"
void FUN_80077cfc(int param_1,int param_2,int param_3,short param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_3 * 4 + param_2);
  param_1->anim_data = uVar1;
  FUN_80075ff8(param_1,uVar1,(int)param_4);
  FUN_80075f0c(param_1,(int)param_4);
  param_1->anim_timer = param_4 + 0x1000;
  return;
}
