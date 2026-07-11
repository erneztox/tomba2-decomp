/**
 * @brief Audio volume set variant 2: same as SetVolume (duplicate)
 * @note Original: func_8008DEF4 at 0x8008DEF4
 */
// Audio_SetVolume2



#include "tomba.h"
void FUN_8008def4(s16 param_1,s16 param_2,s16 param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_800922a0((int)param_1,(int)param_2,(int)-param_3);
  iVar1 = param_2 * 0xb0;
  iVar2 = iVar1 + *(int *)(&g_AudioChannels + param_1 * 4);
  iVar2->gte_result = iVar2->gte_result | 0x20;
  iVar1 = iVar1 + *(int *)(&g_AudioChannels + param_1 * 4);
  iVar1->gte_result = iVar1->gte_result & 0xffffffef;
  return;
}
