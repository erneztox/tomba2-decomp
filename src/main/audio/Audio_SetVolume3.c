/**
 * @brief Audio volume set variant 3: same as SetVolume (duplicate)
 * @note Original: func_8008DDD0 at 0x8008DDD0
 */
// Audio_SetVolume3



#include "tomba.h"
void Audio_SetVolume3(s16 param_1,s16 param_2,s16 param_3)

{
  int iVar1;
  int iVar2;
  
  Audio_SetChannelParam((int)param_1,(int)param_2,(int)-param_3);
  iVar1 = param_2 * 0xb0;
  iVar2 = iVar1 + *(int *)(&g_AudioChannels + param_1 * 4);
  iVar2->flags = iVar2->flags | 0x20;
  iVar1 = iVar1 + *(int *)(&g_AudioChannels + param_1 * 4);
  iVar1->flags = iVar1->flags & 0xffffffef;
  return;
}
