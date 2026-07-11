/**
 * @brief Audio volume set variant 3: same as SetVolume (duplicate)
 * @note Original: func_8008DDD0 at 0x8008DDD0
 */
// Audio_SetVolume3



#include "tomba.h"
void FUN_8008ddd0(short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_800922a0((int)param_1,(int)param_2,(int)-param_3);
  iVar1 = param_2 * 0xb0;
  iVar2 = iVar1 + *(int *)(&DAT_80104c30 + param_1 * 4);
  iVar2->gte_result = iVar2->gte_result | 0x20;
  iVar1 = iVar1 + *(int *)(&DAT_80104c30 + param_1 * 4);
  iVar1->gte_result = iVar1->gte_result & 0xffffffef;
  return;
}
