/**
 * @brief Audio volume setter: calls SetChannelParam(-vol), toggles flags 0x20/0x10
 * @note Original: func_8008DE74 at 0x8008DE74
 */
// Audio_SetVolume



#include "tomba.h"
void Audio_SetVolume(s16 param_1,s16 param_2,s32 param_3)

{
  int iVar1;
  
  Audio_SetChannelParam((int)param_1,0,(int)-param_2,param_3);
  iVar1 = *(int *)(&g_AudioChannels + param_1 * 4);
  iVar1->flags = iVar1->flags | 0x20;
  iVar1 = *(int *)(&g_AudioChannels + param_1 * 4);
  iVar1->flags = iVar1->flags & 0xffffffef;
  return;
}
