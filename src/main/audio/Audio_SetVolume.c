/**
 * @brief Audio volume setter: calls SetChannelParam(-vol), toggles flags 0x20/0x10
 * @note Original: func_8008DE74 at 0x8008DE74
 */
// Audio_SetVolume



#include "tomba.h"
void FUN_8008de74(short param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_800922a0((int)param_1,0,(int)-param_2,param_3);
  iVar1 = *(int *)(&DAT_80104c30 + param_1 * 4);
  iVar1->gte_result = iVar1->gte_result | 0x20;
  iVar1 = *(int *)(&DAT_80104c30 + param_1 * 4);
  iVar1->gte_result = iVar1->gte_result & 0xffffffef;
  return;
}
